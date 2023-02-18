/*
 * SPDX-FileCopyrightText: Copyright (c) 2014-2016 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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
#include "nvport/nvport.h"

typedef struct _PORT_STATE {
// RISC-V implementation of atomics requires initialization
// Disable initCount atomic operations for RISC-V builds
#if PORT_IS_MODULE_SUPPORTED(atomic) && !NVCPU_IS_RISCV64
	atomic_t	initCount;
#define PORT_READ(x)	atomic_read(&(x))
#define PORT_DEC(x)	atomic_dec_return(&(x))
#define PORT_INC(x)	atomic_inc_return(&(x))
#else
	u32		initCount;
#define PORT_READ(x)	(x)
#define PORT_DEC(x)	(--(x))
#define PORT_INC(x)	(++(x))
#endif
} PORT_STATE;
static PORT_STATE portState;

/// @todo Add better way to initialize all modules
NV_STATUS portInitialize(void)
{
    if (PORT_INC(portState.initCount) == 1)
    {
#if PORT_IS_MODULE_SUPPORTED(debug)
        portDbgInitialize();
#endif
#if PORT_IS_MODULE_SUPPORTED(atomic)
        portAtomicInit();
#endif
#if PORT_IS_MODULE_SUPPORTED(sync)
        portSyncInitialize();
#endif
#if PORT_IS_MODULE_SUPPORTED(memory)
        portMemInitialize();
#endif
#if PORT_IS_MODULE_SUPPORTED(crypto)
        portCryptoInitialize();
#endif
#if PORT_IS_MODULE_SUPPORTED(cpu)
        portCpuInitialize();
#endif
    }
    return NV_OK;
}

void portShutdown(void)
{
    if (PORT_DEC(portState.initCount) == 0)
    {
#if PORT_IS_MODULE_SUPPORTED(cpu)
        portCpuShutdown();
#endif
#if PORT_IS_MODULE_SUPPORTED(crypto)
        portCryptoShutdown();
#endif
#if PORT_IS_MODULE_SUPPORTED(memory)
#if (!defined(DEBUG) || defined(NV_MODS)) && !NVCPU_IS_RISCV64
        portMemShutdown(NV_TRUE);
#else
        portMemShutdown(NV_FALSE);
#endif
#endif
#if PORT_IS_MODULE_SUPPORTED(sync)
        portSyncShutdown();
#endif
#if PORT_IS_MODULE_SUPPORTED(debug)
        portDbgShutdown();
#endif
    }
}

NvBool portIsInitialized(void)
{
	return PORT_READ(portState.initCount) > 0;
}
