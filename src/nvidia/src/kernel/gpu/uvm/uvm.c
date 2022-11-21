/*
 * SPDX-FileCopyrightText: Copyright (c) 2012-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#include "core/core.h"
#include "gpu/gpu.h"
#include "gpu/uvm/uvm.h"
#include "nvRmReg.h"
#include "rmapi/control.h"
#include "rmapi/rmapi_utils.h"
#include "kernel/gpu/intr/engine_idx.h"
#include "kernel/gpu/mem_mgr/virt_mem_allocator_common.h"

#include <ctrl/ctrl2080/ctrl2080internal.h>

/**
 * @brief Send the request to set up the buffer to physical RM.
 *
 * @param pGpu
 * @param pUvm
 */
static NV_STATUS
_uvmSetupAccessCntrBuffer(OBJGPU *pGpu, OBJUVM *pUvm)
{
    NvU32 bufferSize;
    NvU32 numBufferPages;
    NV2080_CTRL_INTERNAL_UVM_REGISTER_ACCESS_CNTR_BUFFER_PARAMS params = {0};
    NV_STATUS status = NV_OK;

    // Buffer was not allocated, nothing to do
    if (pUvm->accessCntrBuffer.pUvmAccessCntrAllocMemDesc == NULL)
    {
        return NV_OK;
    }

    bufferSize = pUvm->accessCntrBuffer.pUvmAccessCntrAllocMemDesc->Size;
    numBufferPages = NV_ROUNDUP(bufferSize, RM_PAGE_SIZE) / RM_PAGE_SIZE;

    if (numBufferPages > NV_ARRAY_ELEMENTS(params.bufferPteArray))
    {
        return NV_ERR_BUFFER_TOO_SMALL;
    }

    memdescGetPhysAddrs(pUvm->accessCntrBuffer.pUvmAccessCntrAllocMemDesc,
                        AT_GPU, 0, RM_PAGE_SIZE,
                        numBufferPages, params.bufferPteArray);

    params.bufferSize = bufferSize;

    status = pUvm->pRmApi->Control(pUvm->pRmApi,
                                   pUvm->hClient,
                                   pUvm->hSubdevice,
                                   NV2080_CTRL_CMD_INTERNAL_UVM_REGISTER_ACCESS_CNTR_BUFFER,
                                   &params, sizeof(params));

    return status;
}

/**
 * @brief Send the request to unload access counter buffer to physical RM
 *
 * @param pGpu
 * @param pUvm
 */
static NV_STATUS
_uvmUnloadAccessCntrBuffer(OBJGPU *pGpu, OBJUVM *pUvm)
{
    NV_STATUS status;

    // Buffer was not allocated, nothing to do
    if (pUvm->accessCntrBuffer.pUvmAccessCntrAllocMemDesc == NULL)
    {
        return NV_OK;
    }

    status = pUvm->pRmApi->Control(pUvm->pRmApi,
                                   pUvm->hClient,
                                   pUvm->hSubdevice,
                                   NV2080_CTRL_CMD_INTERNAL_UVM_UNREGISTER_ACCESS_CNTR_BUFFER,
                                   NULL, 0);

    return status;
}

/**
 * @brief Initialize state for UVM
 *
 * @param pGpu
 * @param pUvm
 */
NV_STATUS
uvmStateInitUnlocked_IMPL(OBJGPU *pGpu, OBJUVM *pUvm)
{
    NV_STATUS status = NV_OK;

    pUvm->pRmApi = rmapiGetInterface(RMAPI_GPU_LOCK_INTERNAL);
    status = rmapiutilAllocClientAndDeviceHandles(pUvm->pRmApi, pGpu, &pUvm->hClient,
                                                  NULL, &pUvm->hSubdevice);

    return status;
}

/**
 * @brief Destroy GPU gpu state for UVM
 *
 * @param pGpu
 * @param pUvm
 */
void
uvmStateDestroy_IMPL(OBJGPU *pGpu, OBJUVM *pUvm)
{
    rmapiutilFreeClientAndDeviceHandles(pUvm->pRmApi, &pUvm->hClient, NULL, &pUvm->hSubdevice);
}

/**
 * @brief Setup UVM access counters. Setup includes memory allocation, mapping
 *        and writing mapped address to HW registers.
 *
 * @param pGpu
 * @param pUvm
 */
NV_STATUS
uvmInitializeAccessCntrBuffer_IMPL(OBJGPU *pGpu, OBJUVM *pUvm)
{
    NV_STATUS status;

    status = uvmInitAccessCntrBuffer_HAL(pGpu, pUvm);
    if (status != NV_OK)
    {
        return status;
    }

    status = _uvmSetupAccessCntrBuffer(pGpu, pUvm);
    if (status != NV_OK)
    {
        (void) uvmDestroyAccessCntrBuffer_HAL(pGpu, pUvm);
    }

    return status;
}

/**
 * @brief Destroy UVM access counters i.e. reciprocate above setup function.
 *
 * @param pGpu
 * @param pUvm
 */
NV_STATUS
uvmTerminateAccessCntrBuffer_IMPL(OBJGPU *pGpu, OBJUVM *pUvm)
{
    NV_STATUS status;

    status = _uvmUnloadAccessCntrBuffer(pGpu, pUvm);
    if (status != NV_OK)
    {
        NV_PRINTF(LEVEL_ERROR,
                  "Unloading UVM Access counters failed (status=0x%08x), proceeding...\n",
                  status);
    }

    status = uvmDestroyAccessCntrBuffer_HAL(pGpu, pUvm);
    if (status != NV_OK)
    {
        NV_PRINTF(LEVEL_ERROR,
                  "Freeing UVM Access counters failed (status=0x%08x), proceeding...\n",
                  status);
    }

    return NV_OK;
}

/**
 * @brief Provides an opportunity to register some IntrService during intrStateInit.
 */
void
uvmRegisterIntrService_IMPL
(
    OBJGPU *pGpu,
    OBJUVM *pUvm,
    IntrServiceRecord pRecords[MC_ENGINE_IDX_MAX]
)
{
    NvU32 engineIdx = MC_ENGINE_IDX_ACCESS_CNTR;
    NV_ASSERT(pRecords[engineIdx].pInterruptService == NULL);
    pRecords[engineIdx].pInterruptService = staticCast(pUvm, IntrService);
}

/**
 * @brief Service stall interrupts.
 *
 * @returns Zero, or any implementation-chosen nonzero value. If the same nonzero value is returned enough
 *          times the interrupt is considered stuck.
 */
NvU32
uvmServiceInterrupt_IMPL
(
    OBJGPU *pGpu,
    OBJUVM *pUvm,
    IntrServiceServiceInterruptArguments *pParams
)
{
    NV_ASSERT_OR_RETURN(pParams != NULL, 0);
    NV_ASSERT_OR_RETURN(pParams->engineIdx == MC_ENGINE_IDX_ACCESS_CNTR, 0);

    NV_ASSERT_OK(pUvm->pRmApi->Control(pUvm->pRmApi,
                                       pUvm->hClient,
                                       pUvm->hSubdevice,
                                       NV2080_CTRL_CMD_INTERNAL_UVM_SERVICE_ACCESS_CNTR_BUFFER,
                                       NULL, 0));

    return 0;
}
