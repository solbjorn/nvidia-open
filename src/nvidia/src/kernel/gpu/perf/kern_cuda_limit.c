/*
 * SPDX-FileCopyrightText: Copyright (c) 2021-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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
 * @brief  All functions related to the Cuda Safe feature.
 */
#include "gpu/perf/kern_cuda_limit.h"
#include "rmapi/rmapi.h"
#include "gpu/gpu.h"

/* ------------------------ Public Functions  ------------------------------ */

/*!
 * Disable Cuda limit activation at teardown of client.
 *
 * @param[in]  pDevice  Device info pointer
 * @param[in]  pGpu     OBJGPU pointer
 *
 * @return NV_OK
 *      Operation completed successfully.
 */
NV_STATUS
deviceKPerfCudaLimitCliDisable
(
    Device  *pDevice,
    OBJGPU  *pGpu
)
{
    RM_API    *pRmApi = GPU_GET_PHYSICAL_RMAPI(pGpu);
    NV_STATUS  status = NV_OK;

    if (pDevice->nCudaLimitRefCnt > 0)
    {
        status = pRmApi->Control(pRmApi,
                                 pGpu->hInternalClient,
                                 pGpu->hInternalDevice,
                                 NV0080_CTRL_CMD_INTERNAL_PERF_CUDA_LIMIT_DISABLE,
                                 NULL,
                                 0);

        NV_CHECK_OR_RETURN(LEVEL_INFO, status == NV_OK, status);

        pDevice->nCudaLimitRefCnt = 0;
    }

    return status;
}
