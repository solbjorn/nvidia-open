/*
 * SPDX-FileCopyrightText: Copyright (c) 2017-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

/*!
 * Provides TU102+ specific KernelGsp HAL implementations.
 */

#include "gpu/gsp/kernel_gsp.h"

#include "gpu/bus/kern_bus.h"
#include "gpu/disp/kern_disp.h"
#include "gpu/mem_mgr/mem_mgr.h"
#include "gpu/mem_sys/kern_mem_sys.h"
#include "vgpu/rpc.h"
#include "rmgspseq.h"
#include "core/thread_state.h"
#include "os/os.h"
#include "nverror.h"
#include "gsp/gsp_error.h"

#include "published/turing/tu102/dev_gsp.h"
#include "published/turing/tu102/dev_gsp_addendum.h"
#include "published/turing/tu102/dev_riscv_pri.h"
#include "published/turing/tu102/dev_fbif_v4.h"
#include "published/turing/tu102/dev_falcon_v4.h"
#include "published/turing/tu102/dev_fuse.h"
#include "published/turing/tu102/dev_ram.h"
#include "published/turing/tu102/dev_gc6_island.h"
#include "published/turing/tu102/dev_gc6_island_addendum.h"

#include "gpu/sec2/kernel_sec2.h"

#define RPC_STRUCTURES
#define RPC_GENERIC_UNION
#include "g_rpc-structures.h"
#undef RPC_STRUCTURES
#undef RPC_GENERIC_UNION

void
kgspConfigureFalcon_TU102
(
    OBJGPU *pGpu,
    KernelGsp *pKernelGsp
)
{
    KernelFalconEngineConfig falconConfig;

    portMemSet(&falconConfig, 0, sizeof(falconConfig));

    falconConfig.registerBase       = DRF_BASE(NV_PGSP);
    falconConfig.riscvRegisterBase  = NV_FALCON2_GSP_BASE;
    falconConfig.fbifBase           = NV_PGSP_FBIF_BASE;
    falconConfig.bBootFromHs        = NV_FALSE;
    falconConfig.pmcEnableMask      = 0;
    falconConfig.bIsPmcDeviceEngine = NV_FALSE;
    falconConfig.physEngDesc        = ENG_GSP;

    kflcnConfigureEngine(pGpu, staticCast(pKernelGsp, KernelFalcon), &falconConfig);
}

/*!
 * Check if the GSP is in debug mode
 *
 * @return whether the GSP is in debug mode or not
 */
NvBool
kgspIsDebugModeEnabled_TU102
(
    OBJGPU *pGpu,
    KernelGsp *pKernelGsp
)
{
    NvU32 data;

    data = GPU_REG_RD32(pGpu, NV_FUSE_OPT_SECURE_GSP_DEBUG_DIS);

    return FLD_TEST_DRF(_FUSE, _OPT_SECURE_GSP_DEBUG_DIS, _DATA, _NO, data);
}

NV_STATUS
kgspAllocBootArgs_TU102
(
    OBJGPU    *pGpu,
    KernelGsp *pKernelGsp
)
{
    NvP64 pVa = NvP64_NULL;
    NvP64 pPriv = NvP64_NULL;
    NV_STATUS nvStatus = NV_OK;
    NvU64 flags = MEMDESC_FLAGS_NONE;

    // Allocate WPR meta data
    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescCreate(&pKernelGsp->pWprMetaDescriptor,
                                       pGpu, 0x1000, 0x1000,
                                       NV_TRUE, ADDR_SYSMEM, NV_MEMORY_CACHED,
                                       flags),
                        _kgspAllocBootArgs_exit_cleanup);

    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescAlloc(pKernelGsp->pWprMetaDescriptor),
                         _kgspAllocBootArgs_exit_cleanup);

    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescMap(pKernelGsp->pWprMetaDescriptor, 0,
                                    memdescGetSize(pKernelGsp->pWprMetaDescriptor),
                                    NV_TRUE, NV_PROTECT_READ_WRITE,
                                    &pVa, &pPriv),
                         _kgspAllocBootArgs_exit_cleanup);

    pKernelGsp->pWprMeta = (GspFwWprMeta *)NvP64_VALUE(pVa);
    pKernelGsp->pWprMetaMappingPriv = pPriv;

    //
    // Setup libos arguments memory
    //
    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescCreate(&pKernelGsp->pLibosInitArgumentsDescriptor,
                                       pGpu,
                                       LIBOS_INIT_ARGUMENTS_SIZE,
                                       LIBOS_INIT_ARGUMENTS_SIZE,
                                       NV_TRUE, ADDR_SYSMEM, NV_MEMORY_UNCACHED,
                                       flags),
                         _kgspAllocBootArgs_exit_cleanup);

    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescAlloc(pKernelGsp->pLibosInitArgumentsDescriptor),
                         _kgspAllocBootArgs_exit_cleanup);

    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescMap(pKernelGsp->pLibosInitArgumentsDescriptor, 0,
                                    memdescGetSize(pKernelGsp->pLibosInitArgumentsDescriptor),
                                    NV_TRUE, NV_PROTECT_READ_WRITE,
                                     &pVa, &pPriv),
                         _kgspAllocBootArgs_exit_cleanup);

    pKernelGsp->pLibosInitArgumentsCached = (LibosMemoryRegionInitArgument *)NvP64_VALUE(pVa);
    pKernelGsp->pLibosInitArgumentsMappingPriv = pPriv;

    // Setup bootloader arguments memory.
    NV_ASSERT(sizeof(GSP_ARGUMENTS_CACHED) <= 0x1000);

    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescCreate(&pKernelGsp->pGspArgumentsDescriptor,
                                       pGpu, 0x1000, 0x1000,
                                       NV_TRUE, ADDR_SYSMEM, NV_MEMORY_CACHED,
                                       flags),
                         _kgspAllocBootArgs_exit_cleanup);

    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescAlloc(pKernelGsp->pGspArgumentsDescriptor),
                         _kgspAllocBootArgs_exit_cleanup);

    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescMap(pKernelGsp->pGspArgumentsDescriptor, 0,
                                    memdescGetSize(pKernelGsp->pGspArgumentsDescriptor),
                                    NV_TRUE, NV_PROTECT_READ_WRITE,
                                    &pVa, &pPriv),
                         _kgspAllocBootArgs_exit_cleanup);

    pKernelGsp->pGspArgumentsCached = (GSP_ARGUMENTS_CACHED *)NvP64_VALUE(pVa);
    pKernelGsp->pGspArgumentsMappingPriv = pPriv;

    return nvStatus;

_kgspAllocBootArgs_exit_cleanup:
    kgspFreeBootArgs_HAL(pGpu, pKernelGsp);
    return nvStatus;
}

void
kgspFreeBootArgs_TU102
(
    OBJGPU    *pGpu,
    KernelGsp *pKernelGsp
)
{
    // release wpr meta data resources
    if (pKernelGsp->pWprMeta != NULL)
    {
        memdescUnmap(pKernelGsp->pWprMetaDescriptor,
                     NV_TRUE, osGetCurrentProcess(),
                     (void *)pKernelGsp->pWprMeta,
                     pKernelGsp->pWprMetaMappingPriv);
        pKernelGsp->pWprMeta = NULL;
        pKernelGsp->pWprMetaMappingPriv = NULL;
    }
    if (pKernelGsp->pWprMetaDescriptor != NULL)
    {
        memdescFree(pKernelGsp->pWprMetaDescriptor);
        memdescDestroy(pKernelGsp->pWprMetaDescriptor);
        pKernelGsp->pWprMetaDescriptor = NULL;
    }

    // release libos init argument resources
    if (pKernelGsp->pLibosInitArgumentsCached != NULL)
    {
        memdescUnmap(pKernelGsp->pLibosInitArgumentsDescriptor,
                     NV_TRUE, osGetCurrentProcess(),
                     (void *)pKernelGsp->pLibosInitArgumentsCached,
                     pKernelGsp->pLibosInitArgumentsMappingPriv);
        pKernelGsp->pLibosInitArgumentsCached = NULL;
        pKernelGsp->pLibosInitArgumentsMappingPriv = NULL;
    }
    if (pKernelGsp->pLibosInitArgumentsDescriptor != NULL)
    {
        memdescFree(pKernelGsp->pLibosInitArgumentsDescriptor);
        memdescDestroy(pKernelGsp->pLibosInitArgumentsDescriptor);
        pKernelGsp->pLibosInitArgumentsDescriptor = NULL;
    }

    // release init argument page resources
    if (pKernelGsp->pGspArgumentsCached != NULL)
    {
        memdescUnmap(pKernelGsp->pGspArgumentsDescriptor,
                     NV_TRUE, osGetCurrentProcess(),
                     (void *)pKernelGsp->pGspArgumentsCached,
                     pKernelGsp->pGspArgumentsMappingPriv);
        pKernelGsp->pGspArgumentsCached = NULL;
        pKernelGsp->pGspArgumentsMappingPriv = NULL;
    }
    if (pKernelGsp->pGspArgumentsDescriptor != NULL)
    {
        memdescFree(pKernelGsp->pGspArgumentsDescriptor);
        memdescDestroy(pKernelGsp->pGspArgumentsDescriptor);
        pKernelGsp->pGspArgumentsDescriptor = NULL;
    }

    // Release radix3 version of GSP-RM ucode
    if (pKernelGsp->pGspUCodeRadix3Descriptor != NULL)
    {
        memdescFree(pKernelGsp->pGspUCodeRadix3Descriptor);
        memdescDestroy(pKernelGsp->pGspUCodeRadix3Descriptor);
        pKernelGsp->pGspUCodeRadix3Descriptor = NULL;
    }

    // Release signature memory
    if (pKernelGsp->pSignatureMemdesc != NULL)
    {
        memdescFree(pKernelGsp->pSignatureMemdesc);
        memdescDestroy(pKernelGsp->pSignatureMemdesc);
        pKernelGsp->pSignatureMemdesc = NULL;
    }
}

/*!
 * Determine if GSP reload via SEC2 is completed.
 */
static NvBool
_kgspIsReloadCompleted
(
    OBJGPU  *pGpu,
    void    *pVoid
)
{
    NvU32 reg;

    reg = GPU_REG_RD32(pGpu, NV_PGC6_BSI_SECURE_SCRATCH_14);

    return FLD_TEST_DRF(_PGC6, _BSI_SECURE_SCRATCH_14, _BOOT_STAGE_3_HANDOFF, _VALUE_DONE, reg);
}

/*!
 * Set command queue head for CPU to GSP message queue
 *
 * @param[in]   pGpu            GPU object pointer
 * @param[in]   pKernelGsp      KernelGsp object pointer (not used)
 * @param[in]   queueIdx        index
 * @param[in]   value           value to set command queue head to.
 *
 * @return NV_OK if the operation was successful.
 */
NV_STATUS
kgspSetCmdQueueHead_TU102
(
    OBJGPU *pGpu,
    KernelGsp *pKernelGsp,
    NvU32   queueIdx,
    NvU32   value
)
{
    NV_ASSERT_OR_RETURN(queueIdx < NV_PGSP_QUEUE_HEAD__SIZE_1, NV_ERR_INVALID_ARGUMENT);

    // Write the value to the correct queue head.
    GPU_REG_WR32(pGpu, NV_PGSP_QUEUE_HEAD(queueIdx), value);

    return NV_OK;
}

/*!
 * Load entrypoint address of boot binary into mailbox regs.
 */
void
kgspProgramLibosBootArgsAddr_TU102
(
    OBJGPU *pGpu,
    KernelGsp *pKernelGsp
)
{
    NvU64 addr =
        memdescGetPhysAddr(pKernelGsp->pLibosInitArgumentsDescriptor, AT_GPU, 0);

    GPU_REG_WR32(pGpu, NV_PGSP_FALCON_MAILBOX0, NvU64_LO32(addr));
    GPU_REG_WR32(pGpu, NV_PGSP_FALCON_MAILBOX1, NvU64_HI32(addr));
}

NV_STATUS
kgspBootstrapRiscvOSEarly_TU102
(
    OBJGPU         *pGpu,
    KernelGsp      *pKernelGsp,
    GSP_FIRMWARE   *pGspFw
)
{
    NV_STATUS               status          = NV_OK;
    KernelFalcon           *pKernelFalcon   = staticCast(pKernelGsp, KernelFalcon);

    // Only for GSP client builds
    if (!IS_GSP_CLIENT(pGpu))
    {
        NV_PRINTF(LEVEL_ERROR, "IS_GSP_CLIENT is not set.\n");
        return NV_ERR_NOT_SUPPORTED;
    }

    if (!kflcnIsRiscvCpuEnabled_HAL(pGpu, pKernelFalcon))
    {
        NV_PRINTF(LEVEL_ERROR, "RISC-V core is not enabled.\n");
        return NV_ERR_NOT_SUPPORTED;
    }

    //
    // Setup for libos bootloader execution including reserving space in the
    // fb for placement and bootloader args initialization.
    //
    kgspPopulateGspRmInitArgs(pGpu, pKernelGsp, NULL);

    {
        // Execute FWSEC to setup FRTS if we have a FRTS region
        if (kgspGetFrtsSize_HAL(pGpu, pKernelGsp) > 0)
        {
            kflcnReset_HAL(pGpu, pKernelFalcon);

            NV_ASSERT_OK_OR_GOTO(status,
                                 kgspExecuteFwsecFrts_HAL(pGpu,
                                                          pKernelGsp,
                                                          pKernelGsp->pFwsecUcode,
                                                          pKernelGsp->pWprMeta->frtsOffset),
                                 exit);
        }
    }

    kflcnReset_HAL(pGpu, pKernelFalcon);

    //
    // Stuff the message queue with async init messages that will be run
    // before OBJGPU is created.
    //
    NV_RM_RPC_GSP_SET_SYSTEM_INFO(pGpu, status);
    if (status != NV_OK)
    {
        NV_ASSERT_OK_FAILED("NV_RM_RPC_GSP_SET_SYSTEM_INFO", status);
        goto exit;
    }

    NV_RM_RPC_SET_REGISTRY(pGpu, status);
    if (status != NV_OK)
    {
        NV_ASSERT_OK_FAILED("NV_RM_RPC_SET_REGISTRY", status);
        goto exit;
    }

    // Initialize libos init args list
    kgspSetupLibosInitArgs(pGpu, pKernelGsp);

    // Load init args into mailbox regs
    kgspProgramLibosBootArgsAddr_HAL(pGpu, pKernelGsp);

    // Execute Scrubber if needed
    if (pKernelGsp->pScrubberUcode != NULL)
    {
        NV_ASSERT_OK_OR_GOTO(status,
                             kgspExecuteScrubberIfNeeded_HAL(pGpu, pKernelGsp),
                             exit);
    }

    {
        status = kgspExecuteBooterLoad_HAL(pGpu, pKernelGsp,
            memdescGetPhysAddr(pKernelGsp->pWprMetaDescriptor, AT_GPU, 0));
        if (status != NV_OK)
        {
            NV_PRINTF(LEVEL_ERROR, "failed to execute Booter Load (ucode for initial boot): 0x%x\n", status);
            goto exit;
        }
    }

    // Ensure the CPU is started
    if (kflcnIsRiscvActive_HAL(pGpu, pKernelFalcon))
    {
        NV_PRINTF(LEVEL_INFO, "GSP ucode loaded and RISCV started.\n");
    }
    else
    {
        NV_PRINTF(LEVEL_ERROR, "Failed to boot GSP.\n");

        status = NV_ERR_NOT_READY;
        goto exit;
    }

    NV_PRINTF(LEVEL_INFO, "Waiting for GSP fw RM to be ready...\n");

    // Link the status queue.
    NV_ASSERT_OK_OR_GOTO(status,
                         GspStatusQueueInit(pGpu, &pKernelGsp->pRpc->pMessageQueueInfo),
                         exit);

    NV_ASSERT_OK_OR_GOTO(status,
                         kgspWaitForRmInitDone(pGpu, pKernelGsp),
                         exit);

    NV_PRINTF(LEVEL_INFO, "GSP FW RM ready.\n");

exit:
    return status;
}

void
kgspGetGspRmBootUcodeStorage_TU102
(
    OBJGPU *pGpu,
    KernelGsp *pKernelGsp,
    BINDATA_STORAGE **ppBinStorageImage,
    BINDATA_STORAGE **ppBinStorageDesc
)
{
    const BINDATA_ARCHIVE *pBinArchive = kgspGetBinArchiveGspRmBoot_HAL(pKernelGsp);

    *ppBinStorageImage = (BINDATA_STORAGE *) bindataArchiveGetStorage(pBinArchive, "ucode_image");
    *ppBinStorageDesc  = (BINDATA_STORAGE *) bindataArchiveGetStorage(pBinArchive, "ucode_desc");
}

/*!
 * Calculate the FB layout. Also, copy GSP FW booter image to FB.
 *
 * Firmware scrubs the last 256mb of FB, no memory outside of this region
 * may be used until the FW RM has scrubbed the remainder of memory.
 *
 *   ---------------------------- <- fbSize (end of FB, 1M aligned)
 *   | VGA WORKSPACE            |
 *   ---------------------------- <- vbiosReservedOffset  (64K? aligned)
 *   | (potential align. gap)   |
 *   ---------------------------- <- gspFwWprEnd (128K aligned)
 *   | FRTS data                |    (frtsSize is 0 on GA100)
 *   | ------------------------ | <- frtsOffset
 *   | BOOT BIN (e.g. SK + BL)  |
 *   ---------------------------- <- bootBinOffset
 *   | GSP FW ELF               |
 *   ---------------------------- <- gspFwOffset
 *   | GSP FW (WPR) HEAP        |
 *   ---------------------------- <- gspFwHeapOffset**
 *   | Booter-placed metadata   |
 *   | (struct GspFwWprMeta)    |
 *   ---------------------------- <- gspFwWprStart (128K aligned)
 *   | GSP FW (non-WPR) HEAP    |
 *   ---------------------------- <- nonWprHeapOffset, gspFwRsvdStart
 *
 *  gspFwHeapOffset** contains the RM/Libos Heap. First 16 Mb are for Libos heap
 *  rest is for GSP-RM
 * @param       pGpu          GPU object pointer
 * @param       pKernelGsp    KernelGsp object pointer
 * @param       pGspFw        Pointer to GSP-RM fw image.
 */
NV_STATUS
kgspCalculateFbLayout_TU102
(
    OBJGPU         *pGpu,
    KernelGsp      *pKernelGsp,
    GSP_FIRMWARE   *pGspFw
)
{
    KernelMemorySystem  *pKernelMemorySystem  = GPU_GET_KERNEL_MEMORY_SYSTEM(pGpu);
    KernelDisplay       *pKernelDisplay = GPU_GET_KERNEL_DISPLAY(pGpu);
    MemoryManager       *pMemoryManager = GPU_GET_MEMORY_MANAGER(pGpu);
    GspFwWprMeta        *pWprMeta = pKernelGsp->pWprMeta;
    RM_RISCV_UCODE_DESC *pRiscvDesc = pKernelGsp->pGspRmBootUcodeDesc;
    NvU64                vbiosReservedOffset;
    NvU64                mmuLockLo, mmuLockHi;
    NvBool               bIsMmuLockValid;
    NvU64 wprHeapSize;

    ct_assert(sizeof(*pWprMeta) == 256);

    NV_ASSERT_OR_RETURN(IS_GSP_CLIENT(pGpu), NV_ERR_NOT_SUPPORTED);

    NV_ASSERT_OR_RETURN(pKernelGsp->pGspRmBootUcodeImage != NULL, NV_ERR_INVALID_STATE);
    NV_ASSERT_OR_RETURN(pKernelGsp->gspRmBootUcodeSize != 0, NV_ERR_INVALID_STATE);
    NV_ASSERT_OR_RETURN(pRiscvDesc != NULL, NV_ERR_INVALID_STATE);

    portMemSet(pWprMeta, 0, sizeof *pWprMeta);

    NV_ASSERT_OK_OR_RETURN(kmemsysGetUsableFbSize_HAL(pGpu, pKernelMemorySystem, &pWprMeta->fbSize));

    //
    // Start layout calculations at the top and work down.
    // Figure out where VGA workspace is located.  We do not have to adjust
    // it ourselves (see vgaRelocateWorkspaceBase_HAL()).
    //
    if (gpuFuseSupportsDisplay_HAL(pGpu) &&
        kdispGetVgaWorkspaceBase(pGpu, pKernelDisplay, &pWprMeta->vgaWorkspaceOffset))
    {
        if (pWprMeta->vgaWorkspaceOffset < (pWprMeta->fbSize - DRF_SIZE(NV_PRAMIN)))
        {
            const NvU32 VBIOS_WORKSPACE_SIZE = 0x20000;

            // Point NV_PDISP_VGA_WORKSPACE_BASE to end-of-FB
            pWprMeta->vgaWorkspaceOffset = (pWprMeta->fbSize - VBIOS_WORKSPACE_SIZE);
        }
    }
    else
    {
        pWprMeta->vgaWorkspaceOffset = (pWprMeta->fbSize - DRF_SIZE(NV_PRAMIN));
    }
    pWprMeta->vgaWorkspaceSize = pWprMeta->fbSize - pWprMeta->vgaWorkspaceOffset;

    // Check for MMU locked region (locked by VBIOS)
    NV_ASSERT_OK_OR_RETURN(
        memmgrReadMmuLock_HAL(pGpu, pMemoryManager, &bIsMmuLockValid, &mmuLockLo, &mmuLockHi));

    if (bIsMmuLockValid)
        vbiosReservedOffset = NV_MIN(mmuLockLo, pWprMeta->vgaWorkspaceOffset);
    else
        vbiosReservedOffset = pWprMeta->vgaWorkspaceOffset;

    // End of WPR region (128KB aligned)
    pWprMeta->gspFwWprEnd = NV_ALIGN_DOWN64(vbiosReservedOffset, 0x20000);

    pWprMeta->frtsSize = kgspGetFrtsSize(pGpu, pKernelGsp);
    pWprMeta->frtsOffset = pWprMeta->gspFwWprEnd - pWprMeta->frtsSize;

    // Offset of boot binary image (4K aligned)
    pWprMeta->sizeOfBootloader = pKernelGsp->gspRmBootUcodeSize;
    pWprMeta->bootBinOffset = NV_ALIGN_DOWN64(pWprMeta->frtsOffset - pWprMeta->sizeOfBootloader, 0x1000);

    // Compute GSP firmware image size
    pWprMeta->sizeOfRadix3Elf = pGspFw->imageSize;

    //
    // Compute the start of the ELF.  Align to 64K to avoid issues with
    // inherent alignment constraints.
    //
    pWprMeta->gspFwOffset = NV_ALIGN_DOWN64(pWprMeta->bootBinOffset - pWprMeta->sizeOfRadix3Elf, 0x10000);

    wprHeapSize = kgspGetWprHeapSize(pGpu, pKernelGsp);

    // GSP-RM heap in WPR, align to 1MB
    pWprMeta->gspFwHeapOffset = NV_ALIGN_DOWN64(pWprMeta->gspFwOffset - wprHeapSize, 0x100000);
    pWprMeta->gspFwHeapSize = NV_ALIGN_DOWN64(pWprMeta->gspFwOffset - pWprMeta->gspFwHeapOffset, 0x100000);

    // Number of VF partitions allocating sub-heaps from the WPR heap
    pWprMeta->gspFwHeapVfPartitionCount = pGpu->bVgpuGspPluginOffloadEnabled ? MAX_PARTITIONS_WITH_GFID : 0;

    //
    // Start of WPR region (128K alignment requirement, but 1MB aligned so that
    // the extra padding sits in WPR instead of in between the end of the
    // non-WPR heap and the start of WPR).
    //
    pWprMeta->gspFwWprStart = NV_ALIGN_DOWN64(pWprMeta->gspFwHeapOffset - sizeof *pWprMeta, 0x100000);

    // Non WPR heap (1MB aligned)
    pWprMeta->nonWprHeapSize = kgspGetNonWprHeapSize(pGpu, pKernelGsp);
    pWprMeta->nonWprHeapOffset = NV_ALIGN_DOWN64(pWprMeta->gspFwWprStart - pWprMeta->nonWprHeapSize, 0x100000);

    pWprMeta->gspFwRsvdStart = pWprMeta->nonWprHeapOffset;

    // Physical address of GSP-RM firmware in system memory.
    pWprMeta->sysmemAddrOfRadix3Elf =
        memdescGetPhysAddr(pKernelGsp->pGspUCodeRadix3Descriptor, AT_GPU, 0);

    // Physical address of boot loader firmware in system memory.
    pWprMeta->sysmemAddrOfBootloader =
        memdescGetPhysAddr(pKernelGsp->pGspRmBootUcodeMemdesc, AT_GPU, 0);

    // Set necessary info from bootloader desc
    pWprMeta->bootloaderCodeOffset = pRiscvDesc->monitorCodeOffset;
    pWprMeta->bootloaderDataOffset = pRiscvDesc->monitorDataOffset;
    pWprMeta->bootloaderManifestOffset = pRiscvDesc->manifestOffset;

    if (pKernelGsp->pSignatureMemdesc != NULL)
    {
        pWprMeta->sysmemAddrOfSignature = memdescGetPhysAddr(pKernelGsp->pSignatureMemdesc, AT_GPU, 0);
        pWprMeta->sizeOfSignature = memdescGetSize(pKernelGsp->pSignatureMemdesc);
    }

    pWprMeta->bootCount = 0;
    pWprMeta->verified = 0;
    pWprMeta->revision = GSP_FW_WPR_META_REVISION;
    pWprMeta->magic = GSP_FW_WPR_META_MAGIC;

    return NV_OK;
}

/*!
 * Execute GSP sequencer operation
 *
 * @param[in]   pGpu            GPU object pointer
 * @param[in]   pKernelGsp      KernelGsp object pointer
 * @param[in]   opCode          Sequencer opcode
 * @param[in]   pPayload        Pointer to payload
 * @param[in]   payloadSize     Size of payload in bytes
 *
 * @return NV_OK if the sequencer operation was successful.
 *         Appropriate NV_ERR_xxx value otherwise.
 */
NV_STATUS
kgspExecuteSequencerCommand_TU102
(
    OBJGPU         *pGpu,
    KernelGsp      *pKernelGsp,
    NvU32           opCode,
    NvU32          *pPayload,
    NvU32           payloadSize
)
{
    NV_STATUS       status        = NV_OK;
    KernelFalcon   *pKernelFalcon = staticCast(pKernelGsp, KernelFalcon);
    NvU32           secMailbox0   = 0;

    switch (opCode)
    {
        case GSP_SEQ_BUF_OPCODE_CORE_RESUME:
        {
            {
                KernelFalcon *pKernelSec2Falcon = staticCast(GPU_GET_KERNEL_SEC2(pGpu), KernelFalcon);

                kflcnSecureReset_HAL(pGpu, pKernelFalcon);
                kgspProgramLibosBootArgsAddr_HAL(pGpu, pKernelGsp);

                NV_PRINTF(LEVEL_INFO, "---------------Starting SEC2 to resume GSP-RM------------\n");
                // Start SEC2 in order to resume GSP-RM
                kflcnStartCpu_HAL(pGpu, pKernelSec2Falcon);

                // Wait for reload to be completed.
                status = gpuTimeoutCondWait(pGpu, _kgspIsReloadCompleted, NULL, NULL);

                // Check SEC mailbox.
                secMailbox0 = kflcnRegRead_HAL(pGpu, pKernelSec2Falcon, NV_PFALCON_FALCON_MAILBOX0);

                if ((status != NV_OK) || (secMailbox0 != NV_OK))
                {
                    NV_PRINTF(LEVEL_ERROR, "Timeout waiting for SEC2-RTOS to resume GSP-RM. SEC2 Mailbox0 is : 0x%x\n", secMailbox0);
                    DBG_BREAKPOINT();
                    return NV_ERR_TIMEOUT;
                }
            }

            // Ensure the CPU is started
            if (kflcnIsRiscvActive_HAL(pGpu, pKernelFalcon))
            {
                NV_PRINTF(LEVEL_INFO, "GSP ucode loaded and RISCV started.\n");
            }
            else
            {
                NV_ASSERT_FAILED("Failed to boot GSP");
                status = NV_ERR_NOT_READY;
            }
            break;
        }

        default:
        {
            status = NV_ERR_INVALID_ARGUMENT;
            break;
        }
    }

    return status;
}

/*!
 * Reset the GSP HW
 *
 * @return NV_OK if the GSP HW was properly reset
 */
NV_STATUS
kgspResetHw_TU102
(
    OBJGPU *pGpu,
    KernelGsp *pKernelGsp
)
{
    GPU_FLD_WR_DRF_DEF(pGpu, _PGSP, _FALCON_ENGINE, _RESET, _TRUE);
    GPU_FLD_WR_DRF_DEF(pGpu, _PGSP, _FALCON_ENGINE, _RESET, _FALSE);

    return NV_OK;
}

void
kgspHealthCheck_TU102
(
    OBJGPU *pGpu,
    KernelGsp *pKernelGsp
)
{
    NvU32 mb0 = GPU_REG_RD32(pGpu, NV_PGSP_MAILBOX(0));

    //
    // Check for an error message in the GSP mailbox.  Any error here is severe
    // enough that it should be reported as an Xid.  Clear the error so more can
    // potentially be reported by GSP, if it was able to recover.  In that case,
    // it's possible that GSP will skip reporting some more errors that happened
    // before the clear, and it will just update the "skipped" count.
    //
    if (FLD_TEST_DRF(_GSP, _ERROR, _TAG, _VAL, mb0))
    {
        NvU32 mb1 = GPU_REG_RD32(pGpu, NV_PGSP_MAILBOX(1));

        GPU_REG_WR32(pGpu, NV_PGSP_MAILBOX(0), 0);

        NV_PRINTF(LEVEL_NOTICE,
                  "********************************* GSP Failure **********************************\n");

        nvErrorLog_va((void*)pGpu, GSP_ERROR,
                      "GSP Error: Task %d raised error code 0x%x for reason 0x%x at 0x%x (%d more errors skipped)",
                      DRF_VAL(_GSP, _ERROR, _TASK, mb0),
                      DRF_VAL(_GSP, _ERROR, _CODE, mb0),
                      DRF_VAL(_GSP, _ERROR, _REASON, mb0),
                      mb1,
                      DRF_VAL(_GSP, _ERROR, _SKIPPED, mb0));

        NV_PRINTF(LEVEL_NOTICE,
                  "********************************************************************************\n");
    }
}

/*!
 * GSP Interrupt Service Routine
 *
 * @return 32-bit interrupt status AFTER all known interrupt-sources were
 *         serviced.
 */
NvU32
kgspService_TU102
(
    OBJGPU     *pGpu,
    KernelGsp  *pKernelGsp
)
{
    NvU32         clearBits     = 0;
    NvU32         intrStatus;
    KernelFalcon *pKernelFalcon = staticCast(pKernelGsp, KernelFalcon);

    // Get the IRQ status and mask the sources not directed to host.
    intrStatus = kflcnReadIntrStatus_HAL(pGpu, pKernelFalcon);

    // Exit immediately if there is nothing to do
    if (intrStatus == 0)
    {
        return 0;
    }

    if (!API_GPU_ATTACHED_SANITY_CHECK(pGpu))
    {
        NV_PRINTF(LEVEL_ERROR, "GPU is detached, bailing!\n");
        return 0;
    }

    if (intrStatus & DRF_DEF(_PFALCON, _FALCON_IRQSTAT, _HALT, _TRUE))
    {
        clearBits |= DRF_DEF(_PFALCON, _FALCON_IRQSCLR, _HALT, _SET);

        //
        // Currently, GSP-RISCV triggers _HALT interrupt to RM when it finds
        // itself running into a bad state. Triggering _HALT interrupt to RM
        // provides RM a chance to handle it so we have better debugability
        // into GSP-RISCV issues.
        //
        kgspDumpGspLogs(pGpu, pKernelGsp, NV_FALSE);
        kgspHealthCheck_HAL(pGpu, pKernelGsp);
    }
    if (intrStatus & DRF_DEF(_PFALCON, _FALCON_IRQSTAT, _SWGEN0, _TRUE))
    {
        //
        // Clear edge triggered interupt BEFORE (and never after)
        // servicing it to avoid race conditions.
        //
        kflcnRegWrite_HAL(pGpu, pKernelFalcon, NV_PFALCON_FALCON_IRQSCLR,
            DRF_DEF(_PFALCON, _FALCON_IRQSCLR, _SWGEN0, _SET));

        kgspRpcRecvEvents(pGpu, pKernelGsp);

        //
        // If lockdown has been engaged (as notified by an RPC event),
        // we shouldn't access any more GSP registers.
        //
        NV_CHECK_OR_RETURN(LEVEL_SILENT, !pKernelGsp->bInLockdown, 0);
    }

    // Clear any sources that were serviced and get the new status
    kflcnRegWrite_HAL(pGpu, pKernelFalcon, NV_PFALCON_FALCON_IRQSCLR, clearBits);

    kflcnIntrRetrigger_HAL(pGpu, pKernelFalcon);

    intrStatus = kflcnReadIntrStatus_HAL(pGpu, pKernelFalcon);

    return intrStatus;
}

static NvBool
_kgspIsProcessorSuspended
(
    OBJGPU  *pGpu,
    void    *pVoid
)
{
    KernelGsp *pKernelGsp = reinterpretCast(pVoid, KernelGsp *);
    NvU32 mailbox;

    // Check for LIBOS_INTERRUPT_PROCESSOR_SUSPENDED in mailbox
    mailbox = kflcnRegRead_HAL(pGpu, staticCast(pKernelGsp, KernelFalcon),
                               NV_PFALCON_FALCON_MAILBOX0);
    return (mailbox & 0x80000000) == 0x80000000;
}

NV_STATUS
kgspWaitForProcessorSuspend_TU102
(
    OBJGPU    *pGpu,
    KernelGsp *pKernelGsp
)
{
    return gpuTimeoutCondWait(pGpu, _kgspIsProcessorSuspended, pKernelGsp, NULL);
}

#define FWSECLIC_PROG_START_TIMEOUT     50000    // 50ms
#define FWSECLIC_PROG_COMPLETE_TIMEOUT  2000000  // 2s

NV_STATUS
kgspWaitForGfwBootOk_TU102
(
    OBJGPU    *pGpu,
    KernelGsp *pKernelGsp
)
{
    NvU32 timeoutUs = FWSECLIC_PROG_START_TIMEOUT + FWSECLIC_PROG_COMPLETE_TIMEOUT;
    RMTIMEOUT timeout;
    NV_STATUS status = NV_OK;

    // Use the OS timer since the GPU timer is not ready yet
    gpuSetTimeout(pGpu, gpuScaleTimeout(pGpu, timeoutUs), &timeout,
                  GPU_TIMEOUT_FLAGS_OSTIMER);

    while (status == NV_OK)
    {
        //
        // Before reading the actual GFW_BOOT status register,
        // we want to check that FWSEC has lowered its PLM first.
        // If not then obviously it has not completed.
        //
        if (GPU_FLD_TEST_DRF_DEF(pGpu,
                _PGC6,
                _AON_SECURE_SCRATCH_GROUP_05_PRIV_LEVEL_MASK,
                _READ_PROTECTION_LEVEL0,
                _ENABLE)
            )
        {
            if (GPU_FLD_TEST_DRF_DEF(pGpu,
                    _PGC6,
                    _AON_SECURE_SCRATCH_GROUP_05_0_GFW_BOOT,
                    _PROGRESS,
                    _COMPLETED)
                )
            {
                return NV_OK;
            }
        }

        status = gpuCheckTimeout(pGpu, &timeout);
        if (status == NV_ERR_TIMEOUT)
        {
            NV_PRINTF(LEVEL_ERROR,
                      "Timeout waiting for GFW_BOOT to complete\n");
        }
    }

    return status;
}

void
kgspFreeSuspendResumeData_TU102
(
    OBJGPU    *pGpu,
    KernelGsp *pKernelGsp
)
{
    // release sr meta data resources
    if (pKernelGsp->pSRMetaDescriptor != NULL)
    {
        memdescFree(pKernelGsp->pSRMetaDescriptor);
        memdescDestroy(pKernelGsp->pSRMetaDescriptor);
        pKernelGsp->pSRMetaDescriptor = NULL;
    }

    // release sr meta data resources
    if (pKernelGsp->pSRRadix3Descriptor != NULL)
    {
        memdescFree(pKernelGsp->pSRRadix3Descriptor);
        memdescDestroy(pKernelGsp->pSRRadix3Descriptor);
        pKernelGsp->pSRRadix3Descriptor = NULL;
    }
}

NV_STATUS
kgspSavePowerMgmtState_TU102
(
    OBJGPU    *pGpu,
    KernelGsp *pKernelGsp
)
{
    GspFwSRMeta gspfwSRMeta;
    NvP64 pVa = NvP64_NULL;
    NvP64 pPriv = NvP64_NULL;
    NV_STATUS nvStatus = NV_OK;

    // Fill in GspFwSRMeta structure
    portMemSet(&gspfwSRMeta, 0, sizeof(gspfwSRMeta));
    gspfwSRMeta.magic                   = GSP_FW_SR_META_MAGIC;
    gspfwSRMeta.revision                = GSP_FW_SR_META_REVISION;
    gspfwSRMeta.sizeOfSuspendResumeData = pKernelGsp->pWprMeta->gspFwWprEnd - pKernelGsp->pWprMeta->gspFwWprStart;


    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         kgspCreateRadix3(pGpu,
                                          pKernelGsp,
                                          &pKernelGsp->pSRRadix3Descriptor,
                                          NULL,
                                          NULL,
                                          gspfwSRMeta.sizeOfSuspendResumeData),
                         exit_fail_cleanup);

    gspfwSRMeta.sysmemAddrOfSuspendResumeData = memdescGetPhysAddr(pKernelGsp->pSRRadix3Descriptor, AT_GPU, 0);

    // Create SR Metadata Area
    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescCreate(&pKernelGsp->pSRMetaDescriptor,
                                       pGpu,
                                       sizeof(GspFwSRMeta),
                                       256,
                                       NV_TRUE,
                                       ADDR_SYSMEM,
                                       NV_MEMORY_UNCACHED,
                                       MEMDESC_FLAGS_NONE),
                         exit_fail_cleanup);

    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescAlloc(pKernelGsp->pSRMetaDescriptor),
                         exit_fail_cleanup);

    // Copy SR Metadata Structure
    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         memdescMap(pKernelGsp->pSRMetaDescriptor,
                                    0,
                                    memdescGetSize(pKernelGsp->pSRMetaDescriptor),
                                    NV_TRUE,
                                    NV_PROTECT_WRITEABLE,
                                    &pVa,
                                    &pPriv),
                         exit_fail_cleanup);

    portMemCopy(pVa, sizeof(gspfwSRMeta), &gspfwSRMeta, sizeof(gspfwSRMeta));

    memdescUnmap(pKernelGsp->pSRMetaDescriptor,
                 NV_TRUE, osGetCurrentProcess(),
                 pVa, pPriv);

    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         kgspExecuteBooterUnloadIfNeeded_HAL(pGpu,
                                                             pKernelGsp,
                                                             memdescGetPhysAddr(pKernelGsp->pSRMetaDescriptor,AT_GPU, 0)),
                         exit_fail_cleanup);

    return nvStatus;

exit_fail_cleanup:
    kgspFreeSuspendResumeData_HAL(pGpu, pKernelGsp);
    return nvStatus;
}

NV_STATUS
kgspRestorePowerMgmtState_TU102
(
    OBJGPU    *pGpu,
    KernelGsp *pKernelGsp
)
{
    NV_STATUS nvStatus = NV_OK;

    NV_ASSERT_OK_OR_GOTO(nvStatus,
                         kgspExecuteBooterLoad_HAL(pGpu,
                                                   pKernelGsp,
                                                   memdescGetPhysAddr(pKernelGsp->pSRMetaDescriptor, AT_GPU,0)),
                         exit_cleanup);

exit_cleanup:
    kgspFreeSuspendResumeData_HAL(pGpu, pKernelGsp);
    return nvStatus;
}
