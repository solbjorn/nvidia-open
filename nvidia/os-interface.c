/*
 * SPDX-FileCopyrightText: Copyright (c) 1999-2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
 * SPDX-License-Identifier: MIT
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#define  __NO_VERSION__

#include <generated/utsrelease.h>

#include "os-interface.h"
#include "nv-linux.h"

#include "nv-time.h"

extern char *NVreg_TemporaryFilePath;

extern nv_linux_state_t nv_ctl_device;

extern nv_kthread_q_t nv_kthread_q;

NvU32 os_sev_status = 0;
NvBool os_sev_enabled = 0;

typedef struct semaphore os_mutex_t;

//
// os_alloc_mutex - Allocate the RM mutex
//
//  ppMutex - filled in with pointer to opaque structure to mutex data type
//
NV_STATUS NV_API_CALL os_alloc_mutex
(
    void **ppMutex
)
{
    NV_STATUS rmStatus;
    os_mutex_t *os_mutex;

    rmStatus = os_alloc_mem(ppMutex, sizeof(os_mutex_t));
    if (rmStatus != NV_OK)
    {
        nv_printf(NV_DBG_ERRORS, "NVRM: failed to allocate mutex!\n");
        return rmStatus;
    }
    os_mutex = (os_mutex_t *)*ppMutex;
    NV_INIT_MUTEX(os_mutex);

    return NV_OK;
}

//
//  pMutex - Pointer to opaque structure to mutex data type
//

NV_STATUS NV_API_CALL os_acquire_mutex
(
    void  *pMutex
)
{
    os_mutex_t *os_mutex = (os_mutex_t *)pMutex;

    if (!NV_MAY_SLEEP())
    {
        return NV_ERR_INVALID_REQUEST;
    }
    down(os_mutex);

    return NV_OK;
}

NV_STATUS NV_API_CALL os_cond_acquire_mutex
(
    void * pMutex
)
{
    os_mutex_t *os_mutex = (os_mutex_t *)pMutex;
    if (!NV_MAY_SLEEP())
    {
        return NV_ERR_INVALID_REQUEST;
    }

    if (down_trylock(os_mutex))
    {
        return NV_ERR_TIMEOUT_RETRY;
    }

    return NV_OK;
}


void NV_API_CALL os_release_mutex
(
    void *pMutex
)
{
    os_mutex_t *os_mutex = (os_mutex_t *)pMutex;
    up(os_mutex);
}

typedef struct semaphore os_semaphore_t;


void* NV_API_CALL os_alloc_semaphore
(
    NvU32 initialValue
)
{
    NV_STATUS rmStatus;
    os_semaphore_t *os_sema;

    rmStatus = os_alloc_mem((void *)&os_sema, sizeof(os_semaphore_t));
    if (rmStatus != NV_OK)
    {
        nv_printf(NV_DBG_ERRORS, "NVRM: failed to allocate semaphore!\n");
        return NULL;
    }

    NV_INIT_SEMA(os_sema, initialValue);

    return (void *)os_sema;
}

NV_STATUS NV_API_CALL os_acquire_semaphore
(
    void *pSema
)
{
    os_semaphore_t *os_sema = (os_semaphore_t *)pSema;

    if (!NV_MAY_SLEEP())
    {
        return NV_ERR_INVALID_REQUEST;
    }
    down(os_sema);
    return NV_OK;
}

NV_STATUS NV_API_CALL os_cond_acquire_semaphore
(
    void * pSema
)
{
    os_semaphore_t *os_sema = (os_semaphore_t *)pSema;
    //
    // NOTE: down_trylock() is safe to call from IRQ, se we don't need an
    // NV_MAY_SLEEP() check here. We do check it in os_cond_acquire_mutex(),
    // even though it is also calling down_trylock(), since that keeps it
    // in line with the kernel's 'struct mutex' API.
    //
    if (down_trylock(os_sema))
    {
        return NV_ERR_TIMEOUT_RETRY;
    }

    return NV_OK;
}

NV_STATUS NV_API_CALL os_release_semaphore
(
    void *pSema
)
{
    os_semaphore_t *os_sema = (os_semaphore_t *)pSema;
    up(os_sema);
    return NV_OK;
}

NvBool NV_API_CALL os_semaphore_may_sleep(void)
{
    return NV_MAY_SLEEP();
}

/*
 * Operating System Memory Functions
 *
 * There are 2 interesting aspects of resource manager memory allocations
 * that need special consideration on Linux:
 *
 * 1. They are typically very large, (e.g. single allocations of 164KB)
 *
 * 2. The resource manager assumes that it can safely allocate memory in
 *    interrupt handlers.
 *
 * The first requires that we call vmalloc, the second kmalloc. We decide
 * which one to use at run time, based on the size of the request and the
 * context. Allocations larger than 128KB require vmalloc, in the context
 * of an ISR they fail.
 */

#if defined(NV_VGX_HYPER)
/*
 * Citrix Hypervisor-8.0 Dom0 sysmem ends up getting fragmented because
 * of which high-order kmalloc allocations fail. We try to avoid it by
 * requesting allocations not larger than 8K.
 *
 * KVM will be affected low memory pressure situation a lot,
 * particularly if hugetlbfs hugepages are being used. Hence, 8K applies
 * here too.
 */
#define KMALLOC_LIMIT 8192
#else
#define KMALLOC_LIMIT 131072
#endif

#define VMALLOC_ALLOCATION_SIZE_FLAG (1 << 0)

NV_STATUS NV_API_CALL os_alloc_mem(
    void **address,
    NvU64 size
)
{
    unsigned long alloc_size;

    if (address == NULL)
        return NV_ERR_INVALID_ARGUMENT;

    *address = NULL;
    NV_MEM_TRACKING_PAD_SIZE(size);

    //
    // NV_KMALLOC, nv_vmalloc take an input of 4 bytes in x86. To avoid
    // truncation and wrong allocation, below check is required.
    //
    alloc_size = size;

    if (alloc_size != size)
        return NV_ERR_INVALID_PARAMETER;

    if (!NV_MAY_SLEEP())
    {
        if (alloc_size <= KMALLOC_LIMIT)
            NV_KMALLOC_ATOMIC(*address, alloc_size);
    }
    else
    {
        if (alloc_size <= KMALLOC_LIMIT)
        {
            NV_KMALLOC_NO_OOM(*address, alloc_size);
        }
        if (*address == NULL)
        {
            *address = nv_vmalloc(alloc_size);
            alloc_size |= VMALLOC_ALLOCATION_SIZE_FLAG;
        }
    }

    NV_MEM_TRACKING_HIDE_SIZE(address, alloc_size);

    return ((*address != NULL) ? NV_OK : NV_ERR_NO_MEMORY);
}

void NV_API_CALL os_free_mem(void *address)
{
    NvU32 size;

	if (!address)
		return;

    NV_MEM_TRACKING_RETRIEVE_SIZE(address, size);

    if (size & VMALLOC_ALLOCATION_SIZE_FLAG)
    {
        size &= ~VMALLOC_ALLOCATION_SIZE_FLAG;
        nv_vfree(address, size);
    }
    else
        NV_KFREE(address, size);
}


/*****************************************************************************
*
*   Name: osGetCurrentTime
*
*****************************************************************************/

NV_STATUS NV_API_CALL os_get_current_time(
    NvU32 *seconds,
    NvU32 *useconds
)
{
    struct timespec64 tm;

    ktime_get_real_ts64(&tm);

    *seconds = tm.tv_sec;
    *useconds = tm.tv_nsec / NSEC_PER_USEC;

    return NV_OK;
}

//
// Get the High resolution tick count of the system uptime
//
NvU64 NV_API_CALL os_get_current_tick_hr(void)
{
    struct timespec64 tm;
    ktime_get_raw_ts64(&tm);
    return (NvU64) timespec64_to_ns(&tm);
}

#if BITS_PER_LONG >= 64

NvU64 NV_API_CALL os_get_current_tick(void)
{
#if defined(NV_JIFFIES_TO_TIMESPEC_PRESENT)
    struct timespec ts;
    jiffies_to_timespec(jiffies, &ts);
    return (NvU64) timespec_to_ns(&ts);
#else
    struct timespec64 ts;
    jiffies_to_timespec64(jiffies, &ts);
    return (NvU64) timespec64_to_ns(&ts);
#endif
}

NvU64 NV_API_CALL os_get_tick_resolution(void)
{
    return (NvU64)jiffies_to_usecs(1) * NSEC_PER_USEC;
}

#else

NvU64 NV_API_CALL os_get_current_tick(void)
{
    /*
     * 'jiffies' overflows regularly on 32-bit builds (unsigned long is 4 bytes
     * instead of 8 bytes), so it's unwise to build a tick counter on it, since
     * the rest of the Resman assumes the 'tick' returned from this function is
     * monotonically increasing and never overflows.
     *
     * Instead, use the previous implementation that we've lived with since the
     * beginning, which uses system clock time to calculate the tick. This is
     * subject to problems if the system clock time changes dramatically
     * (more than a second or so) while the Resman is actively tracking a
     * timeout.
     */
    NvU32 seconds, useconds;

    (void) os_get_current_time(&seconds, &useconds);

    return ((NvU64)seconds * NSEC_PER_SEC +
                 (NvU64)useconds * NSEC_PER_USEC);
}

NvU64 NV_API_CALL os_get_tick_resolution(void)
{
    /*
     * os_get_current_tick() uses os_get_current_time(), which has
     * microsecond resolution.
     */
    return 1000ULL;
}

#endif

//---------------------------------------------------------------------------
//
//  Misc services.
//
//---------------------------------------------------------------------------

NV_STATUS NV_API_CALL os_delay_us(NvU32 MicroSeconds)
{
    return nv_sleep_us(MicroSeconds);
}

NV_STATUS NV_API_CALL os_delay(NvU32 MilliSeconds)
{
    return nv_sleep_ms(MilliSeconds);
}

NvU64 NV_API_CALL os_get_cpu_frequency(void)
{
    NvU64 cpu_hz = 0;
#if defined(CONFIG_CPU_FREQ)
    cpu_hz = (cpufreq_get(0) * 1000);
#elif defined(NVCPU_X86_64)
    NvU64 tsc[2];

    tsc[0] = nv_rdtsc();
    mdelay(250);
    tsc[1] = nv_rdtsc();

    cpu_hz = ((tsc[1] - tsc[0]) * 4);
#endif
    return cpu_hz;
}

NvU32 NV_API_CALL os_get_current_process(void)
{
    return NV_GET_CURRENT_PROCESS();
}

void NV_API_CALL os_get_current_process_name(char *buf, NvU32 len)
{
    task_lock(current);
    strncpy(buf, current->comm, len - 1);
    buf[len - 1] = '\0';
    task_unlock(current);
}

NV_STATUS NV_API_CALL os_get_current_thread(NvU64 *threadId)
{
    if (in_interrupt())
        *threadId = 0;
    else
        *threadId = (NvU64) current->pid;

    return NV_OK;
}

/*******************************************************************************/
/*                                                                             */
/* Debug and logging utilities follow                                          */
/*                                                                             */
/*******************************************************************************/

// The current debug display level (default to maximum debug level)
NvU32 cur_debuglevel = 0xffffffff;

static NvBool NV_API_CALL xen_support_fully_virtualized_kernel(void)
{
#if defined(NV_XEN_SUPPORT_FULLY_VIRTUALIZED_KERNEL)
    return (os_is_vgx_hyper());
#endif
    return NV_FALSE;
}

void* NV_API_CALL os_map_kernel_space(
    NvU64 start,
    NvU64 size_bytes,
    NvU32 mode
)
{
    void *vaddr;

    if (!xen_support_fully_virtualized_kernel() && start == 0)
    {
        if (mode != NV_MEMORY_CACHED)
        {
            nv_printf(NV_DBG_ERRORS,
                "NVRM: os_map_kernel_space: won't map address 0x%0llx UC!\n", start);
            return NULL;
        }
        else
            return (void *)PAGE_OFFSET;
    }

    if (!NV_MAY_SLEEP())
    {
        nv_printf(NV_DBG_ERRORS,
            "NVRM: os_map_kernel_space: can't map 0x%0llx, invalid context!\n", start);
        os_dbg_breakpoint();
        return NULL;
    }

    switch (mode)
    {
        case NV_MEMORY_CACHED:
            vaddr = nv_ioremap_cache(start, size_bytes);
            break;
        case NV_MEMORY_WRITECOMBINED:
            vaddr = rm_disable_iomap_wc() ?
                    nv_ioremap_nocache(start, size_bytes) :
                    nv_ioremap_wc(start, size_bytes);
            break;
        case NV_MEMORY_UNCACHED:
        case NV_MEMORY_DEFAULT:
            vaddr = nv_ioremap_nocache(start, size_bytes);
            break;
        default:
            nv_printf(NV_DBG_ERRORS,
                "NVRM: os_map_kernel_space: unsupported mode!\n");
            return NULL;
    }

    return vaddr;
}

void NV_API_CALL os_unmap_kernel_space(
    void *addr,
    NvU64 size_bytes
)
{
    if (addr == (void *)PAGE_OFFSET)
        return;

    nv_iounmap(addr, size_bytes);
}

// flush the cpu's cache, uni-processor version
NV_STATUS NV_API_CALL os_flush_cpu_cache(void)
{
    CACHE_FLUSH();
    return NV_OK;
}

// flush the cache of all cpus
NV_STATUS NV_API_CALL os_flush_cpu_cache_all(void)
{
#if defined(NVCPU_AARCH64)
    CACHE_FLUSH_ALL();
    return NV_OK;
#endif
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS NV_API_CALL os_flush_user_cache(void)
{
#if defined(NVCPU_AARCH64)
    if (!NV_MAY_SLEEP())
    {
        return NV_ERR_NOT_SUPPORTED;
    }

    //
    // The Linux kernel does not export an interface for flushing a range,
    // although it is possible. For now, just flush the entire cache to be
    // safe.
    //
    CACHE_FLUSH_ALL();
    return NV_OK;
#else
    return NV_ERR_NOT_SUPPORTED;
#endif
}

void NV_API_CALL os_flush_cpu_write_combine_buffer(void)
{
    WRITE_COMBINE_FLUSH();
}

// override initial debug level from registry
void NV_API_CALL os_dbg_init(void)
{
    NvU32 new_debuglevel;
    nvidia_stack_t *sp = NULL;

    if (nv_kmem_cache_alloc_stack(&sp) != 0)
    {
        return;
    }

    if (NV_OK == rm_read_registry_dword(sp, NULL,
                                        "ResmanDebugLevel",
                                        &new_debuglevel))
    {
        if (new_debuglevel != (NvU32)~0)
            cur_debuglevel = new_debuglevel;
    }

    nv_kmem_cache_free_stack(sp);
}

void NV_API_CALL os_dbg_set_level(NvU32 new_debuglevel)
{
    nv_printf(NV_DBG_SETUP, "NVRM: Changing debuglevel from 0x%x to 0x%x\n",
        cur_debuglevel, new_debuglevel);
    cur_debuglevel = new_debuglevel;
}

NV_STATUS NV_API_CALL os_schedule(void)
{
    if (NV_MAY_SLEEP())
    {
        set_current_state(TASK_INTERRUPTIBLE);
        schedule_timeout(1);
        return NV_OK;
    }
    else
    {
        nv_printf(NV_DBG_ERRORS, "NVRM: os_schedule: Attempted to yield"
                                 " the CPU while in atomic or interrupt"
                                 " context\n");
        return NV_ERR_ILLEGAL_ACTION;
    }
}

typedef struct {
    nv_kthread_q_item_t item;
    void *data;
} os_queue_data_t;

static void os_execute_work_item(void *_oqd)
{
    os_queue_data_t *oqd = _oqd;
    nvidia_stack_t *sp = NULL;
    void *data = oqd->data;

    NV_KFREE(oqd, sizeof(os_queue_data_t));

    if (nv_kmem_cache_alloc_stack(&sp) != 0)
    {
        return;
    }

    rm_execute_work_item(sp, data);

    nv_kmem_cache_free_stack(sp);
}

NV_STATUS NV_API_CALL os_queue_work_item(struct os_work_queue *queue, void *data)
{
    os_queue_data_t *oqd;
    nv_kthread_q_t *kthread;

    /* Use the global queue unless a valid queue was provided */
    kthread = queue ? &queue->nvk : &nv_kthread_q;

    /* Make sure the kthread is active */
    if (unlikely(!kthread->q_kthread)) {
        nv_printf(NV_DBG_ERRORS, "NVRM: queue is not enabled\n");
        return NV_ERR_NOT_READY;
    }

    /* Allocate atomically just in case we're called in atomic context. */
    NV_KMALLOC_ATOMIC(oqd, sizeof(os_queue_data_t));
    if (!oqd)
        return NV_ERR_NO_MEMORY;

    nv_kthread_q_item_init(&oqd->item, os_execute_work_item, oqd);
    oqd->data = data;

    nv_kthread_q_schedule_q_item(kthread, &oqd->item);

    return NV_OK;
}

NV_STATUS NV_API_CALL os_flush_work_queue(struct os_work_queue *queue)
{
    nv_kthread_q_t *kthread;

    /* Use the global queue unless a valid queue was provided */
    kthread = queue ? &queue->nvk : &nv_kthread_q;

    if (NV_MAY_SLEEP())
    {
        if (kthread->q_kthread)
            nv_kthread_q_flush(kthread);

        return NV_OK;
    }
    else
    {
        nv_printf(NV_DBG_ERRORS,
                  "NVRM: os_flush_work_queue: attempted to execute passive"
                  "work from an atomic or interrupt context.\n");
        return NV_ERR_ILLEGAL_ACTION;
    }
}

extern NvU32 NVreg_EnableDbgBreakpoint;

void NV_API_CALL os_dbg_breakpoint(void)
{
    if (NVreg_EnableDbgBreakpoint == 0)
    {
        return;
    }

#if defined(CONFIG_X86_REMOTE_DEBUG) || defined(CONFIG_KGDB) || defined(CONFIG_XMON)
  #if defined(NVCPU_X86_64)
    __asm__ __volatile__ ("int $3");
  #elif defined(NVCPU_ARM)
    __asm__ __volatile__ (".word %c0" :: "i" (KGDB_COMPILED_BREAK));
  #elif defined(NVCPU_AARCH64)
    # warning "Need to implement os_dbg_breakpoint() for aarch64"
  #elif defined(NVCPU_PPC64LE)
    __asm__ __volatile__ ("trap");
  #endif // NVCPU_*
#elif defined(CONFIG_KDB)
    KDB_ENTER();
#endif // CONFIG_X86_REMOTE_DEBUG || CONFIG_KGDB || CONFIG_XMON
}

NvBool NV_API_CALL os_pat_supported(void)
{
    return (nv_pat_mode != NV_PAT_MODE_DISABLED);
}

NvBool NV_API_CALL os_is_efi_enabled(void)
{
    return NV_EFI_ENABLED();
}

void NV_API_CALL os_get_screen_info(
    NvU64 *pPhysicalAddress,
    NvU16 *pFbWidth,
    NvU16 *pFbHeight,
    NvU16 *pFbDepth,
    NvU16 *pFbPitch,
    NvU64 consoleBar1Address,
    NvU64 consoleBar2Address
)
{
    *pPhysicalAddress = 0;
    *pFbWidth = *pFbHeight = *pFbDepth = *pFbPitch = 0;

#if defined(CONFIG_FB) && defined(NV_NUM_REGISTERED_FB_PRESENT)
    if (num_registered_fb > 0)
    {
        int i;

        for (i = 0; i < num_registered_fb; i++)
        {
            if (!registered_fb[i])
                continue;

            /* Make sure base address is mapped to GPU BAR */
            if ((registered_fb[i]->fix.smem_start == consoleBar1Address) ||
                (registered_fb[i]->fix.smem_start == consoleBar2Address))
            {
                *pPhysicalAddress = registered_fb[i]->fix.smem_start;
                *pFbWidth = registered_fb[i]->var.xres;
                *pFbHeight = registered_fb[i]->var.yres;
                *pFbDepth = registered_fb[i]->var.bits_per_pixel;
                *pFbPitch = registered_fb[i]->fix.line_length;
                break;
            }
        }
    }
#elif NV_IS_EXPORT_SYMBOL_PRESENT_screen_info
    /*
     * If there is not a framebuffer console, return 0 size.
     *
     * orig_video_isVGA is set to 1 during early Linux kernel
     * initialization, and then will be set to a value, such as
     * VIDEO_TYPE_VLFB or VIDEO_TYPE_EFI if an fbdev console is used.
     */
    if (screen_info.orig_video_isVGA > 1)
    {
        NvU64 physAddr = screen_info.lfb_base;
#if defined(VIDEO_CAPABILITY_64BIT_BASE)
        physAddr |= (NvU64)screen_info.ext_lfb_base << 32;
#endif

        /* Make sure base address is mapped to GPU BAR */
        if ((physAddr == consoleBar1Address) ||
            (physAddr == consoleBar2Address))
        {
            *pPhysicalAddress = physAddr;
            *pFbWidth = screen_info.lfb_width;
            *pFbHeight = screen_info.lfb_height;
            *pFbDepth = screen_info.lfb_depth;
            *pFbPitch = screen_info.lfb_linelength;
        }
    }
#endif
}

typedef struct os_spinlock_s
{
    nv_spinlock_t      lock;
    unsigned long      eflags;
} os_spinlock_t;

NV_STATUS NV_API_CALL os_alloc_spinlock(void **ppSpinlock)
{
    NV_STATUS rmStatus;
    os_spinlock_t *os_spinlock;

    rmStatus = os_alloc_mem(ppSpinlock, sizeof(os_spinlock_t));
    if (rmStatus != NV_OK)
    {
        nv_printf(NV_DBG_ERRORS, "NVRM: failed to allocate spinlock!\n");
        return rmStatus;
    }

    os_spinlock = (os_spinlock_t *)*ppSpinlock;
    NV_SPIN_LOCK_INIT(&os_spinlock->lock);
    os_spinlock->eflags = 0;
    return NV_OK;
}

NvU64 NV_API_CALL os_acquire_spinlock(void *pSpinlock)
{
    os_spinlock_t *os_spinlock = (os_spinlock_t *)pSpinlock;
    unsigned long eflags;

    NV_SPIN_LOCK_IRQSAVE(&os_spinlock->lock, eflags);
    os_spinlock->eflags = eflags;

#if defined(NVCPU_X86_64)
    eflags &= X86_EFLAGS_IF;
#elif defined(NVCPU_AARCH64)
    eflags &= PSR_I_BIT;
#endif
    return eflags;
}

void NV_API_CALL os_release_spinlock(void *pSpinlock, NvU64 oldIrql)
{
    os_spinlock_t *os_spinlock = (os_spinlock_t *)pSpinlock;
    unsigned long eflags;

    eflags = os_spinlock->eflags;
    os_spinlock->eflags = 0;
    NV_SPIN_UNLOCK_IRQRESTORE(&os_spinlock->lock, eflags);
}

#define NV_KERNEL_RELEASE    LINUX_VERSION_MAJOR
#define NV_KERNEL_VERSION    LINUX_VERSION_PATCHLEVEL
#define NV_KERNEL_SUBVERSION LINUX_VERSION_SUBLEVEL

NV_STATUS NV_API_CALL os_get_version_info(os_version_info * pOsVersionInfo)
{
    NV_STATUS status      = NV_OK;

    pOsVersionInfo->os_major_version = NV_KERNEL_RELEASE;
    pOsVersionInfo->os_minor_version = NV_KERNEL_VERSION;
    pOsVersionInfo->os_build_number  = NV_KERNEL_SUBVERSION;

#if defined(UTS_RELEASE)
    pOsVersionInfo->os_build_version_str = UTS_RELEASE;
#endif

#if defined(UTS_VERSION)
    pOsVersionInfo->os_build_date_plus_str = UTS_VERSION;
#endif

    return status;
}

NvBool NV_API_CALL os_is_xen_dom0(void)
{
#if defined(NV_DOM0_KERNEL_PRESENT)
    return NV_TRUE;
#else
    return NV_FALSE;
#endif
}

NvBool NV_API_CALL os_is_vgx_hyper(void)
{
#if defined(NV_VGX_HYPER)
    return NV_TRUE;
#else
    return NV_FALSE;
#endif
}

NV_STATUS NV_API_CALL os_inject_vgx_msi(NvU16 guestID, NvU64 msiAddr, NvU32 msiData)
{
#if defined(NV_VGX_HYPER) && defined(NV_DOM0_KERNEL_PRESENT) && \
    defined(NV_XEN_IOEMU_INJECT_MSI)
    int rc = 0;
    rc = xen_ioemu_inject_msi(guestID, msiAddr, msiData);
    if (rc)
    {
        nv_printf(NV_DBG_ERRORS,
            "NVRM: %s: can't inject MSI to guest:%d, addr:0x%x, data:0x%x, err:%d\n",
            __FUNCTION__, guestID, msiAddr, msiData, rc);
        return NV_ERR_OPERATING_SYSTEM;
    }
    return NV_OK;
#else
    return NV_ERR_NOT_SUPPORTED;
#endif
}

NvBool NV_API_CALL os_is_grid_supported(void)
{
#if defined(NV_GRID_BUILD)
    return NV_TRUE;
#else
    return NV_FALSE;
#endif
}

NvU32 NV_API_CALL os_get_grid_csp_support(void)
{
#if defined(NV_GRID_BUILD_CSP)
    return NV_GRID_BUILD_CSP;
#else
    return 0;
#endif
}

NV_STATUS NV_API_CALL os_get_euid(NvU32 *pSecToken)
{
    *pSecToken = NV_CURRENT_EUID();
    return NV_OK;
}

// These functions are needed only on x86_64 platforms.
#if defined(NVCPU_X86_64)

static NvBool os_verify_checksum(const NvU8 *pMappedAddr, NvU32 length)
{
    NvU8 sum = 0;
    NvU32 iter = 0;

    for (iter = 0; iter < length; iter++)
        sum += pMappedAddr[iter];

    return sum == 0;
}

#define _VERIFY_SMBIOS3(_pMappedAddr)                        \
        _pMappedAddr &&                                      \
        (os_mem_cmp(_pMappedAddr, "_SM3_", 5) == 0  &&       \
        _pMappedAddr[6] < 32 &&                              \
        _pMappedAddr[6] > 0 &&                               \
        os_verify_checksum(_pMappedAddr, _pMappedAddr[6]))

#define OS_VERIFY_SMBIOS3(pMappedAddr) _VERIFY_SMBIOS3((pMappedAddr))

#define _VERIFY_SMBIOS(_pMappedAddr)                           \
        _pMappedAddr &&                                        \
        (os_mem_cmp(_pMappedAddr, "_SM_", 4) == 0  &&          \
        _pMappedAddr[5] < 32 &&                                \
        _pMappedAddr[5] > 0 &&                                 \
        os_verify_checksum(_pMappedAddr, _pMappedAddr[5]) &&   \
        os_mem_cmp((_pMappedAddr + 16), "_DMI_", 5) == 0  &&   \
        os_verify_checksum((_pMappedAddr + 16), 15))

#define OS_VERIFY_SMBIOS(pMappedAddr) _VERIFY_SMBIOS((pMappedAddr))

#define SMBIOS_LEGACY_BASE 0xF0000
#define SMBIOS_LEGACY_SIZE 0x10000

static NV_STATUS os_get_smbios_header_legacy(NvU64 *pSmbsAddr)
{
    NV_STATUS status = NV_ERR_OPERATING_SYSTEM;
    NvU8 *pMappedAddr = NULL;
    NvU8 *pIterAddr = NULL;

    pMappedAddr = (NvU8*)os_map_kernel_space(SMBIOS_LEGACY_BASE,
                                             SMBIOS_LEGACY_SIZE,
                                             NV_MEMORY_CACHED);
    if (pMappedAddr == NULL)
    {
        return NV_ERR_INSUFFICIENT_RESOURCES;
    }

    pIterAddr = pMappedAddr;

    for (; pIterAddr < (pMappedAddr + SMBIOS_LEGACY_SIZE); pIterAddr += 16)
    {
        if (OS_VERIFY_SMBIOS3(pIterAddr))
        {
            *pSmbsAddr = SMBIOS_LEGACY_BASE + (pIterAddr - pMappedAddr);
            status = NV_OK;
            break;
        }

        if (OS_VERIFY_SMBIOS(pIterAddr))
        {
            *pSmbsAddr = SMBIOS_LEGACY_BASE + (pIterAddr - pMappedAddr);
            status = NV_OK;
            break;
        }
    }

    os_unmap_kernel_space(pMappedAddr, SMBIOS_LEGACY_SIZE);

    return status;
}

// This function is needed only if "efi" is enabled.
#if (defined(NV_LINUX_EFI_H_PRESENT) && defined(CONFIG_EFI))
static NV_STATUS os_verify_smbios_header_uefi(NvU64 smbsAddr)
{
    NV_STATUS status = NV_ERR_OBJECT_NOT_FOUND;
    NvU64 start= 0, offset =0 , size = 32;
    NvU8 *pMappedAddr = NULL, *pBufAddr = NULL;

    start = smbsAddr;
    offset = (start & ~os_page_mask);
    start &= os_page_mask;
    size = ((size + offset + ~os_page_mask) & os_page_mask);

    pBufAddr = (NvU8*)os_map_kernel_space(start,
                                          size,
                                          NV_MEMORY_CACHED);
    if (pBufAddr == NULL)
    {
        return NV_ERR_INSUFFICIENT_RESOURCES;
    }

    pMappedAddr = pBufAddr + offset;

    if (OS_VERIFY_SMBIOS3(pMappedAddr))
    {
        status = NV_OK;
        goto done;
    }

    if (OS_VERIFY_SMBIOS(pMappedAddr))
    {
        status = NV_OK;
    }

done:
    os_unmap_kernel_space(pBufAddr, size);
    return status;
}
#endif

static NV_STATUS os_get_smbios_header_uefi(NvU64 *pSmbsAddr)
{
    NV_STATUS status = NV_ERR_OPERATING_SYSTEM;

// Make sure that efi.h is present before using "struct efi".
#if (defined(NV_LINUX_EFI_H_PRESENT) && defined(CONFIG_EFI))

// Make sure that efi.h has SMBIOS3_TABLE_GUID present.
#if defined(SMBIOS3_TABLE_GUID)
    if (efi.smbios3 != EFI_INVALID_TABLE_ADDR)
    {
        status = os_verify_smbios_header_uefi(efi.smbios3);
        if (status == NV_OK)
        {
            *pSmbsAddr = efi.smbios3;
            return NV_OK;
        }
    }
#endif

    if (efi.smbios != EFI_INVALID_TABLE_ADDR)
    {
        status = os_verify_smbios_header_uefi(efi.smbios);
        if (status == NV_OK)
        {
            *pSmbsAddr = efi.smbios;
            return NV_OK;
        }
    }
#endif

    return status;
}

#endif // defined(NVCPU_X86_64)

// The function locates the SMBIOS entry point.
NV_STATUS NV_API_CALL os_get_smbios_header(NvU64 *pSmbsAddr)
{

#if !defined(NVCPU_X86_64)
    return NV_ERR_NOT_SUPPORTED;
#else
    NV_STATUS status = NV_OK;

    if (os_is_efi_enabled())
    {
        status = os_get_smbios_header_uefi(pSmbsAddr);
    }
    else
    {
        status = os_get_smbios_header_legacy(pSmbsAddr);
    }

    return status;
#endif
}

NV_STATUS NV_API_CALL os_get_acpi_rsdp_from_uefi
(
    NvU32  *pRsdpAddr
)
{
    NV_STATUS status = NV_ERR_NOT_SUPPORTED;

    if (pRsdpAddr == NULL)
    {
        return NV_ERR_INVALID_STATE;
    }

    *pRsdpAddr = 0;

// Make sure that efi.h is present before using "struct efi".
#if (defined(NV_LINUX_EFI_H_PRESENT) && defined(CONFIG_EFI))

    if (efi.acpi20 != EFI_INVALID_TABLE_ADDR)
    {
        *pRsdpAddr = efi.acpi20;
        status = NV_OK;
    }
    else if (efi.acpi != EFI_INVALID_TABLE_ADDR)
    {
        *pRsdpAddr = efi.acpi;
        status = NV_OK;
    }
    else
    {
        nv_printf(NV_DBG_ERRORS, "NVRM: RSDP Not found!\n");
        status = NV_ERR_OPERATING_SYSTEM;
    }
#endif

    return status;
}

#if !defined(NV_VGPU_KVM_BUILD)
NV_STATUS NV_API_CALL os_call_vgpu_vfio(void *pvgpu_vfio_info, NvU32 cmd_type)
{
    return NV_ERR_NOT_SUPPORTED;
}
#endif

NV_STATUS NV_API_CALL os_numa_memblock_size
(
    NvU64 *memblock_size
)
{
    if (nv_ctl_device.numa_memblock_size == 0)
        return NV_ERR_INVALID_STATE;
    *memblock_size = nv_ctl_device.numa_memblock_size;
    return NV_OK;
}

NV_STATUS NV_API_CALL os_call_nv_vmbus(NvU32 vmbus_cmd, void *input)
{
    return NV_ERR_NOT_SUPPORTED;
}

NV_STATUS NV_API_CALL os_open_temporary_file
(
    void **ppFile
)
{
#if defined(O_TMPFILE)
    struct file *file;
    const char *default_path = "/tmp";
    const int flags = O_TMPFILE | O_LARGEFILE | O_RDWR;
    const char *path = NVreg_TemporaryFilePath;

    /*
     * The filp_open() call below depends on the current task's fs_struct
     * (current->fs), which may already be NULL if this is called during
     * process teardown.
     */
    if (current->fs == NULL)
    {
        return NV_ERR_OPERATING_SYSTEM;
    }

    if (!path)
    {
        path = default_path;
    }

    file = filp_open(path, flags, 0);
    if (IS_ERR(file))
    {
        if ((path != default_path) && (PTR_ERR(file) == -ENOENT))
        {
            nv_printf(NV_DBG_ERRORS,
                      "NVRM: The temporary file path specified via the NVreg_TemporaryFilePath\n"
                      "NVRM: module parameter does not exist. Defaulting to /tmp.\n");

            file = filp_open(default_path, flags, 0);
        }
    }

    if (IS_ERR(file))
    {
        return NV_ERR_OPERATING_SYSTEM;
    }

    *ppFile = (void *)file;

    return NV_OK;
#else
    return NV_ERR_NOT_SUPPORTED;
#endif
}

#define NV_MAX_NUM_FILE_IO_RETRIES 10

NV_STATUS NV_API_CALL os_write_file
(
    void *pFile,
    NvU8 *pBuffer,
    NvU64 size,
    NvU64 offset
)
{
#if defined(NV_KERNEL_WRITE_PRESENT)
    loff_t f_pos = offset;
    ssize_t num_written;
    int num_retries = NV_MAX_NUM_FILE_IO_RETRIES;

retry:
#if defined(NV_KERNEL_WRITE_HAS_POINTER_POS_ARG)
    num_written = kernel_write(pFile, pBuffer, size, &f_pos);
#else
    num_written = kernel_write(pFile, pBuffer, size, f_pos);
#endif
    if (num_written < 0)
    {
        return NV_ERR_OPERATING_SYSTEM;
    }
    else if (num_written < size)
    {
        if (num_written > 0)
        {
            pBuffer += num_written;
            size -= num_written;
        }
        if (--num_retries > 0)
        {
            cond_resched();
            goto retry;
        }
        return NV_ERR_OPERATING_SYSTEM;
    }

    return NV_OK;
#else
    return NV_ERR_NOT_SUPPORTED;
#endif
}

NV_STATUS NV_API_CALL os_read_file
(
    void *pFile,
    NvU8 *pBuffer,
    NvU64 size,
    NvU64 offset
)
{
    loff_t f_pos = offset;
    ssize_t num_read;
    int num_retries = NV_MAX_NUM_FILE_IO_RETRIES;

retry:
#if defined(NV_KERNEL_READ_HAS_POINTER_POS_ARG)
    num_read = kernel_read(pFile, pBuffer, size, &f_pos);
#else
    num_read = kernel_read(pFile, f_pos, pBuffer, size);
#endif
    if (num_read < 0)
    {
        return NV_ERR_OPERATING_SYSTEM;
    }
    else if (num_read < size)
    {
        if (num_read > 0)
        {
            pBuffer += num_read;
            size -= num_read;
        }
        if (--num_retries > 0)
        {
            cond_resched();
            goto retry;
        }
        return NV_ERR_OPERATING_SYSTEM;
    }

    return NV_OK;
}

NV_STATUS NV_API_CALL os_open_readonly_file
(
    const char  *filename,
    void       **ppFile
)
{
    struct file *file;

    /*
     * The filp_open() call below depends on the current task's fs_struct
     * (current->fs), which may already be NULL if this is called during
     * process teardown.
     */
    if (current->fs == NULL)
    {
        return NV_ERR_OPERATING_SYSTEM;
    }

    file = filp_open(filename, O_RDONLY, 0);
    if (IS_ERR(file))
    {
        return NV_ERR_OPERATING_SYSTEM;
    }

    *ppFile = (void *)file;

    return NV_OK;
}

NV_STATUS NV_API_CALL os_open_and_read_file
(
    const char *filename,
    NvU8       *buf,
    NvU64       count
)
{
    void *fileHandle;
    NV_STATUS status;

    status = os_open_readonly_file(filename, &fileHandle);
    if (status != NV_OK)
    {
        return status;
    }

    status = os_read_file(fileHandle, buf, count, 0);

    os_close_file(fileHandle);

    return status;
}

NvBool NV_API_CALL os_is_nvswitch_present(void)
{
    static const struct pci_device_id nvswitch_pci_table[] = {
        {
            PCI_DEVICE(PCI_VENDOR_ID_NVIDIA, PCI_ANY_ID),
            .class      = PCI_CLASS_BRIDGE_OTHER << 8,
            .class_mask = PCI_ANY_ID
        },
        {0}
    };

    return !!pci_dev_present(nvswitch_pci_table);
}

NV_STATUS NV_API_CALL os_alloc_wait_queue
(
    os_wait_queue **wq
)
{
    NV_KMALLOC(*wq, sizeof(os_wait_queue));
    if (*wq == NULL)
        return NV_ERR_NO_MEMORY;

    init_completion(&(*wq)->q);

    return NV_OK;
}

void NV_API_CALL os_free_wait_queue
(
    os_wait_queue *wq
)
{
    NV_KFREE(wq, sizeof(os_wait_queue));
}

void NV_API_CALL os_wait_uninterruptible
(
    os_wait_queue *wq
)
{
    wait_for_completion(&wq->q);
}

void NV_API_CALL os_wait_interruptible
(
    os_wait_queue *wq
)
{
    wait_for_completion_interruptible(&wq->q);
}

void NV_API_CALL os_wake_up
(
    os_wait_queue *wq
)
{
    complete_all(&wq->q);
}

nv_cap_t* NV_API_CALL os_nv_cap_init
(
    const char *path
)
{
    return nv_cap_init(path);
}

nv_cap_t* NV_API_CALL os_nv_cap_create_dir_entry
(
    nv_cap_t *parent_cap,
    const char *name,
    int mode
)
{
    return nv_cap_create_dir_entry(parent_cap, name, mode);
}

nv_cap_t* NV_API_CALL os_nv_cap_create_file_entry
(
    nv_cap_t *parent_cap,
    const char *name,
    int mode
)
{
    return nv_cap_create_file_entry(parent_cap, name, mode);
}

void NV_API_CALL os_nv_cap_destroy_entry
(
    nv_cap_t *cap
)
{
    nv_cap_destroy_entry(cap);
}

int NV_API_CALL os_nv_cap_validate_and_dup_fd
(
    const nv_cap_t *cap,
    int fd
)
{
    return nv_cap_validate_and_dup_fd(cap, fd);
}

void NV_API_CALL os_nv_cap_close_fd
(
    int fd
)
{
    nv_cap_close_fd(fd);
}
