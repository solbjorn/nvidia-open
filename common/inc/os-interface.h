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


/*
 * Os interface definitions needed by os-interface.c
 */

#ifndef OS_INTERFACE_H
#define OS_INTERFACE_H

/******************* Operating System Interface Routines *******************\
*                                                                           *
*       Operating system wrapper functions used to abstract the OS.         *
*                                                                           *
\***************************************************************************/

#include <asm/io.h>
#include <asm/page.h>
#include <linux/capability.h>
#include <linux/console.h>
#include <linux/mm.h>
#include <linux/preempt.h>
#include <linux/uaccess.h>

#include <nvtypes.h>
#include <nvstatus.h>
#include "nv_stdarg.h"
#include <nv-kernel-interface-api.h>
#include <os/nv_memory_type.h>
#include <nv-caps.h>



typedef struct
{
    NvU32  os_major_version;
    NvU32  os_minor_version;
    NvU32  os_build_number;
    const char * os_build_version_str;
    const char * os_build_date_plus_str;
}os_version_info;

/* Each OS defines its own version of this opaque type */
struct os_work_queue;

/* Each OS defines its own version of this opaque type */
typedef struct os_wait_queue os_wait_queue;

/*
 * ---------------------------------------------------------------------------
 *
 * Function prototypes for OS interface.
 *
 * ---------------------------------------------------------------------------
 */

static __always_inline NvU64 os_get_num_phys_pages(void)
{
	return get_num_physpages();
}

NV_STATUS   NV_API_CALL  os_alloc_mem                (void **, NvU64);
void        NV_API_CALL  os_free_mem                 (void *);
NV_STATUS   NV_API_CALL  os_get_current_time         (NvU32 *, NvU32 *);
NvU64       NV_API_CALL  os_get_current_tick         (void);
NvU64       NV_API_CALL  os_get_current_tick_hr      (void);
NvU64       NV_API_CALL  os_get_tick_resolution      (void);
NV_STATUS   NV_API_CALL  os_delay                    (NvU32);
NV_STATUS   NV_API_CALL  os_delay_us                 (NvU32);
NvU64       NV_API_CALL  os_get_cpu_frequency        (void);
NvU32       NV_API_CALL  os_get_current_process      (void);
void        NV_API_CALL  os_get_current_process_name (char *, NvU32);
NV_STATUS   NV_API_CALL  os_get_current_thread       (NvU64 *);

static __always_inline char *os_string_copy(char *dst, const char *src)
{
	return strcpy(dst, src);
}

static __always_inline NvU32 os_string_length(const char *str)
{
	return strlen(str);
}

static __always_inline NvU32
os_strtoul(const char *str, char **endp, NvU32 base)
{
	return simple_strtoul(str, endp, base);
}

static __always_inline NvS32
os_string_compare(const char *cs, const char *ct)
{
	return strcmp(cs, ct);
}

#define os_snprintf(buf, size, fmt, ...)		\
	snprintf(buf, size, fmt, ##__VA_ARGS__)

static __always_inline NvS32
os_vsnprintf(char *buf, NvU32 size, const char *fmt, va_list arglist)
{
	return vsnprintf(buf, size, fmt, arglist);
}

static __always_inline void *os_mem_copy(void *dst, const void *src, NvU32 len)
{
	return memcpy(dst, src, len);
}

static __always_inline NV_STATUS __must_check
os_memcpy_from_user(void *to, const void __user *from, NvU32 n)
{
	return copy_from_user(to, from, n) ? NV_ERR_INVALID_ADDRESS : NV_OK;
}

static __always_inline NV_STATUS __must_check
os_memcpy_to_user(void __user *to, const void *from, NvU32 n)
{
	return copy_to_user(to, from, n) ? NV_ERR_INVALID_ADDRESS : NV_OK;
}

static __always_inline void *os_mem_set(void *s, NvU8 c, NvU32 count)
{
	return memset(s, c, count);
}

static __always_inline NvS32
os_mem_cmp(const NvU8 *cs, const NvU8 *ct, NvU32 count)
{
	return memcmp(cs, ct, count);
}

void*       NV_API_CALL  os_pci_init_handle          (NvU32, NvU8, NvU8, NvU8, NvU16 *, NvU16 *);
NV_STATUS   NV_API_CALL  os_pci_read_byte            (void *, NvU32, NvU8 *);
NV_STATUS   NV_API_CALL  os_pci_read_word            (void *, NvU32, NvU16 *);
NV_STATUS   NV_API_CALL  os_pci_read_dword           (void *, NvU32, NvU32 *);
NV_STATUS   NV_API_CALL  os_pci_write_byte           (void *, NvU32, NvU8);
NV_STATUS   NV_API_CALL  os_pci_write_word           (void *, NvU32, NvU16);
NV_STATUS   NV_API_CALL  os_pci_write_dword          (void *, NvU32, NvU32);
NvBool      NV_API_CALL  os_pci_remove_supported     (void);
void        NV_API_CALL  os_pci_remove               (void *);
void*       NV_API_CALL  os_map_kernel_space         (NvU64, NvU64, NvU32);
void        NV_API_CALL  os_unmap_kernel_space       (void *, NvU64);

static __always_inline void *os_map_user_space(NvU64 start, NvU64 size_bytes,
					       NvU32 mode, NvU32 protect,
					       void  **priv_data)
{
	return (void *)(NvUPtr)start;
}

static __always_inline void os_unmap_user_space(void *address, NvU64  size,
						void *priv_data)
{
}

NV_STATUS   NV_API_CALL  os_flush_cpu_cache          (void);
NV_STATUS   NV_API_CALL  os_flush_cpu_cache_all      (void);
NV_STATUS   NV_API_CALL  os_flush_user_cache         (void);
void        NV_API_CALL  os_flush_cpu_write_combine_buffer(void);

#define os_io_read_byte(a)		inb(a)
#define os_io_read_word(a)		inw(a)
#define os_io_read_dword(a)		inl(a)
#define os_io_write_byte(a, v)		outb(a, v)
#define os_io_write_word(a, v)		outw(a, v)
#define os_io_write_dword(a, v)		outl(a, v)

static __always_inline NvBool os_is_administrator(void)
{
	return capable(CAP_SYS_ADMIN);
}

static __always_inline NvBool os_allow_priority_override(void)
{
	return capable(CAP_SYS_NICE);
}

void        NV_API_CALL  os_dbg_init                 (void);
void        NV_API_CALL  os_dbg_breakpoint           (void);
void        NV_API_CALL  os_dbg_set_level            (NvU32);

static __always_inline NvU32 os_get_cpu_number(void)
{
	NvU32 ret = get_cpu();

	put_cpu();
	return ret;
}

static __always_inline NvU32 os_get_cpu_count(void)
{
	return num_possible_cpus();
}

static __always_inline void os_disable_console_access(void)
{
	console_lock();
}

static __always_inline void os_enable_console_access(void)
{
	console_unlock();
}

NV_STATUS   NV_API_CALL  os_registry_init            (void);

static __always_inline NvU64 os_get_max_user_va(void)
{
	return TASK_SIZE;
}

NV_STATUS   NV_API_CALL  os_schedule                 (void);
NV_STATUS   NV_API_CALL  os_alloc_spinlock           (void **);

static __always_inline void os_free_spinlock(void *lock)
{
	os_free_mem(lock);
}

NvU64       NV_API_CALL  os_acquire_spinlock         (void *);
void        NV_API_CALL  os_release_spinlock         (void *, NvU64);
NV_STATUS   NV_API_CALL  os_queue_work_item          (struct os_work_queue *, void *);
NV_STATUS   NV_API_CALL  os_flush_work_queue         (struct os_work_queue *);
NV_STATUS   NV_API_CALL  os_alloc_mutex              (void **);

static __always_inline void os_free_mutex(void *address)
{
	os_free_mem(address);
}

NV_STATUS   NV_API_CALL  os_acquire_mutex            (void *);
NV_STATUS   NV_API_CALL  os_cond_acquire_mutex       (void *);
void        NV_API_CALL  os_release_mutex            (void *);
void*       NV_API_CALL  os_alloc_semaphore          (NvU32);

static __always_inline void os_free_semaphore(void *sema)
{
	os_free_mem(sema);
}

NV_STATUS   NV_API_CALL  os_acquire_semaphore        (void *);
NV_STATUS   NV_API_CALL  os_cond_acquire_semaphore   (void *);
NV_STATUS   NV_API_CALL  os_release_semaphore        (void *);
NvBool      NV_API_CALL  os_semaphore_may_sleep      (void);
NV_STATUS   NV_API_CALL  os_get_version_info         (os_version_info*);

static __always_inline NvBool os_is_isr(void)
{
	return in_irq();
}

NvBool      NV_API_CALL  os_pat_supported            (void);

static __always_inline void os_dump_stack(void)
{
	dump_stack();
}

NvBool      NV_API_CALL  os_is_efi_enabled           (void);
NvBool      NV_API_CALL  os_is_xen_dom0              (void);
NvBool      NV_API_CALL  os_is_vgx_hyper             (void);
NV_STATUS   NV_API_CALL  os_inject_vgx_msi           (NvU16, NvU64, NvU32);
NvBool      NV_API_CALL  os_is_grid_supported        (void);
NvU32       NV_API_CALL  os_get_grid_csp_support     (void);
void        NV_API_CALL  os_get_screen_info          (NvU64 *, NvU16 *, NvU16 *, NvU16 *, NvU16 *, NvU64, NvU64);

#define os_bug_check(__ign, fmt, ...)	panic(fmt, ##__VA_ARGS__)

NV_STATUS   NV_API_CALL  os_lock_user_pages          (void *, NvU64, void **, NvU32);
NV_STATUS   NV_API_CALL  os_lookup_user_io_memory    (void *, NvU64, NvU64 **, void**);
NV_STATUS   NV_API_CALL  os_unlock_user_pages        (NvU64, void *);
NV_STATUS   NV_API_CALL  os_match_mmap_offset        (void *, NvU64, NvU64 *);
NV_STATUS   NV_API_CALL  os_get_euid                 (NvU32 *);
NV_STATUS   NV_API_CALL  os_get_smbios_header        (NvU64 *pSmbsAddr);
NV_STATUS   NV_API_CALL  os_get_acpi_rsdp_from_uefi  (NvU32 *);

static __always_inline void os_add_record_for_crashLog(void *buf, NvU32 size)
{
}

static __always_inline void os_delete_record_for_crashLog(void *buf)
{
}

NV_STATUS   NV_API_CALL  os_call_vgpu_vfio           (void *, NvU32);
NV_STATUS   NV_API_CALL  os_numa_memblock_size       (NvU64 *);

#define NV_ALLOC_PAGES_NODE_SKIP_RECLAIM	0x1
#define os_get_page_struct(addr)		virt_to_page(__va(addr))

static inline NV_STATUS os_alloc_pages_node(NvS32 nid, NvU32 size, NvU32 flag,
					    NvU64 *pAddress)
{
	gfp_t gfp_mask = __GFP_THISNODE | GFP_HIGHUSER_MOVABLE | __GFP_COMP |
	__GFP_NORETRY | __GFP_NOWARN;
	unsigned int order = get_order(size);
	struct page *page;

	if (flag & NV_ALLOC_PAGES_NODE_SKIP_RECLAIM)
		gfp_mask &= ~__GFP_RECLAIM;

	page = alloc_pages_node(nid, gfp_mask, order);
	if (!page)
		return NV_ERR_NO_MEMORY;

	*pAddress = (NvU64)page_to_phys(page);

	return NV_OK;
}

static __always_inline NV_STATUS os_get_page(NvU64 address)
{
	get_page(os_get_page_struct(address));

	return NV_OK;
}

static __always_inline NV_STATUS os_put_page(NvU64 address)
{
	put_page(os_get_page_struct(address));

	return NV_OK;
}

static __always_inline NvU32 os_get_page_refcount(NvU64 address)
{
	return page_count(os_get_page_struct(address));
}

static __always_inline NvU32 os_count_tail_pages(NvU64 address)
{
	NvU32 order;

	order = compound_order(compound_head(os_get_page_struct(address)));

	return BIT(order);
}

static __always_inline void os_free_pages_phys(NvU64 address, NvU32 size)
{
	__free_pages(os_get_page_struct(address), get_order(size));
}

NV_STATUS   NV_API_CALL  os_call_nv_vmbus            (NvU32, void *);
NV_STATUS   NV_API_CALL  os_open_temporary_file      (void **);

static __always_inline void os_close_file(void *filp)
{
	filp_close(filp, NULL);
}

NV_STATUS   NV_API_CALL  os_write_file               (void *, NvU8 *, NvU64, NvU64);
NV_STATUS   NV_API_CALL  os_read_file                (void *, NvU8 *, NvU64, NvU64);
NV_STATUS   NV_API_CALL  os_open_readonly_file       (const char *, void **);
NV_STATUS   NV_API_CALL  os_open_and_read_file       (const char *, NvU8 *, NvU64);
NvBool      NV_API_CALL  os_is_nvswitch_present      (void);

static __always_inline void os_get_random_bytes(NvU8 *buf, NvU16 len)
{
	get_random_bytes(buf, len);
}

NV_STATUS   NV_API_CALL  os_alloc_wait_queue         (os_wait_queue **);
void        NV_API_CALL  os_free_wait_queue          (os_wait_queue *);
void        NV_API_CALL  os_wait_uninterruptible     (os_wait_queue *);
void        NV_API_CALL  os_wait_interruptible       (os_wait_queue *);
void        NV_API_CALL  os_wake_up                  (os_wait_queue *);
nv_cap_t*   NV_API_CALL  os_nv_cap_init               (const char *);
nv_cap_t*   NV_API_CALL  os_nv_cap_create_dir_entry   (nv_cap_t *, const char *, int);
nv_cap_t*   NV_API_CALL  os_nv_cap_create_file_entry  (nv_cap_t *, const char *, int);
void        NV_API_CALL  os_nv_cap_destroy_entry      (nv_cap_t *);
int         NV_API_CALL  os_nv_cap_validate_and_dup_fd(const nv_cap_t *, int);
void        NV_API_CALL  os_nv_cap_close_fd           (int);

enum os_pci_req_atomics_type {
    OS_INTF_PCIE_REQ_ATOMICS_32BIT,
    OS_INTF_PCIE_REQ_ATOMICS_64BIT,
    OS_INTF_PCIE_REQ_ATOMICS_128BIT
};
NV_STATUS   NV_API_CALL  os_enable_pci_req_atomics   (void *, enum os_pci_req_atomics_type);

#define os_page_size			PAGE_SIZE
#define os_page_mask			((NvU64)(long)PAGE_MASK)
#define os_page_shift			PAGE_SHIFT
extern NvU32 os_sev_status;
extern NvBool os_sev_enabled;
#define os_dma_buf_enabled		IS_ENABLED(CONFIG_DMA_SHARED_BUFFER)

/*
 * ---------------------------------------------------------------------------
 *
 * Debug macros.
 *
 * ---------------------------------------------------------------------------
 */

#define NV_DBG_INFO       0x0
#define NV_DBG_SETUP      0x1
#define NV_DBG_USERERRORS 0x2
#define NV_DBG_WARNINGS   0x3
#define NV_DBG_ERRORS     0x4

extern NvU32 cur_debuglevel;

#define out_string(fmt, ...)		pr_info(fmt, ##__VA_ARGS__)

#define nv_printf(lvl, fmt, ...) ({				\
	int ___ret = 0;						\
								\
	if (lvl >= ((cur_debuglevel >> 4) & 0x3)) {		\
		switch (lvl) {					\
		case NV_DBG_INFO:				\
			___ret = pr_info(fmt, ##__VA_ARGS__);	\
			break;					\
		case NV_DBG_SETUP:				\
		case NV_DBG_USERERRORS:				\
			___ret = pr_notice(fmt, ##__VA_ARGS__);	\
			break;					\
		case NV_DBG_WARNINGS:				\
			___ret = pr_warn(fmt, ##__VA_ARGS__);	\
			break;					\
		case NV_DBG_ERRORS:				\
		default:					\
			___ret = pr_err(fmt, ##__VA_ARGS__);	\
			break;					\
		}						\
	}							\
								\
	___ret;							\
})

#define NV_DEV_PRINTF(debuglevel, nv, format, ... ) \
        nv_printf(debuglevel, "NVRM: GPU " NV_PCI_DEV_FMT ": " format, NV_PCI_DEV_FMT_ARGS(nv), ## __VA_ARGS__)

#define NV_DEV_PRINTF_STATUS(debuglevel, nv, status, format, ... ) \
        nv_printf(debuglevel, "NVRM: GPU " NV_PCI_DEV_FMT ": " format " (0x%x)\n", NV_PCI_DEV_FMT_ARGS(nv), ## __VA_ARGS__, status)

/*
 * Fields for os_lock_user_pages flags parameter
 */
#define NV_LOCK_USER_PAGES_FLAGS_WRITE                     0:0
#define NV_LOCK_USER_PAGES_FLAGS_WRITE_NO                  0x00000000
#define NV_LOCK_USER_PAGES_FLAGS_WRITE_YES                 0x00000001

#endif /* OS_INTERFACE_H */
