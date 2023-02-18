/*
 * SPDX-FileCopyrightText: Copyright (c) 2014-2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

/**
 * @file
 * @brief Atomic module public interface
 */

#ifndef _NVPORT_H_
#error "This file cannot be included directly. Include nvport.h instead."
#endif

#ifndef _NVPORT_ATOMIC_H_
#define _NVPORT_ATOMIC_H_
/**
 * @defgroup NVPORT_ATOMIC Atomic operations
 *
 * @brief This module contains atomic operations
 *
 * @note that mixing atomic and non-atomic modifications to the same memory
 * location can have undefined behavior that varies from platform to platform.
 * You are better off not trying it.
 *
 * @note All atomic operations actually impose at least a compiler memory
 * barrier - either just on the variable manipulated, or on all globally
 * accessible variables. This is just a consequence of the current
 * implementations, and should not be relied on. If you need a memory barrier,
 * use @ref portAtomicMemFenceFull.
 *
 * @{
 */

#include <linux/atomic.h>

#define portAtomicMemoryFenceLoad()	rmb()
#define portAtomicMemoryFenceStore()	wmb()
#define portAtomicMemoryFenceFull()	mb()
#define portAtomicTimerBarrier()	rmb()

#define portAtomicInit()

/* atomic_t */

#define portAtomicAddS32(pVal, val)	atomic_add_return(val, pVal)
#define portAtomicSubS32(pVal, val)	atomic_sub_return(val, pVal)
#define portAtomicSetS32(pVal, val)	atomic_set(pVal, val)

static __always_inline bool
portAtomicCompareAndSwapS32(atomic_t *pVal, int newVal, int oldVal)
{
	int o = oldVal;

	return atomic_try_cmpxchg(pVal, &o, newVal);
}

#define portAtomicIncrementS32(pVal)	atomic_inc_return(pVal)
#define portAtomicDecrementS32(pVal)	atomic_dec_return(pVal)

#define portAtomicXorS32(pVal, val)	(atomic_fetch_xor(val, pVal) ^ (val))
#define portAtomicOrS32(pVal, val)	(atomic_fetch_or(val, pVal) | (val))
#define portAtomicAndS32(pVal, val)	(atomic_fetch_and(val, pVal) & (val))

/* u32 => atomic_t */

#define portAtomicAddU32(pVal, val)	atomic_add_return(val, pVal)
#define portAtomicSubU32(pVal, val)	atomic_sub_return(val, pVal)
#define portAtomicSetU32(pVal, val)	atomic_set(pVal, val)

static __always_inline bool
portAtomicCompareAndSwapU32(atomic_t *pVal, int newVal, int oldVal)
{
	int o = oldVal;

	return atomic_try_cmpxchg(pVal, &o, newVal);
}

#define portAtomicIncrementU32(pVal)	atomic_inc_return(pVal)
#define portAtomicDecrementU32(pVal)	atomic_dec_return(pVal)

#define portAtomicXorU32(pVal, val)	(atomic_fetch_xor(val, pVal) ^ (val))
#define portAtomicOrU32(pVal, val)	(atomic_fetch_or(val, pVal) | (val))
#define portAtomicAndU32(pVal, val)	(atomic_fetch_and(val, pVal) & (val))

/* atomic64_t */

#define portAtomicExAddS64(pVal, val)	atomic64_add_return(val, pVal)
#define portAtomicExSubS64(pVal, val)	atomic64_sub_return(val, pVal)
#define portAtomicExSetS64(pVal, val)	atomic64_set(pVal, val)

static __always_inline bool
portAtomicExCompareAndSwapS64(atomic64_t *pVal, s64 newVal, s64 oldVal)
{
	s64 o = oldVal;

	return atomic64_try_cmpxchg(pVal, &o, newVal);
}

#define portAtomicExIncrementS64(pVal)	atomic64_inc_return(pVal)
#define portAtomicExDecrementS64(pVal)	atomic64_dec_return(pVal)

#define portAtomicExXorS64(pVal, val)	(atomic64_fetch_xor(val, pVal) ^ (val))
#define portAtomicExOrS64(pVal, val)	(atomic64_fetch_or(val, pVal) | (val))
#define portAtomicExAndS64(pVal, val)	(atomic64_fetch_and(val, pVal) & (val))

/* u64 => atomic64_t */

#define portAtomicExAddU64(pVal, val)	atomic64_add_return(val, pVal)
#define portAtomicExSubU64(pVal, val)	atomic64_sub_return(val, pVal)
#define portAtomicExSetU64(pVal, val)	atomic64_set(pVal, val)

static __always_inline bool
portAtomicExCompareAndSwapU64(atomic64_t *pVal, s64 newVal, s64 oldVal)
{
	s64 o = oldVal;

	return atomic64_try_cmpxchg(pVal, &o, newVal);
}

#define portAtomicExIncrementU64(pVal)	atomic64_inc_return(pVal)
#define portAtomicExDecrementU64(pVal)	atomic64_dec_return(pVal)

#define portAtomicExXorU64(pVal, val)	(atomic64_fetch_xor(val, pVal) ^ (val))
#define portAtomicExOrU64(pVal, val)	(atomic64_fetch_or(val, pVal) | (val))
#define portAtomicExAndU64(pVal, val)	(atomic64_fetch_and(val, pVal) & (val))

/* atomic_long_t */

#define portAtomicAddSize(pVal, val)	atomic_long_add_return(val, pVal)
#define portAtomicSubSize(pVal, val)	atomic_long_sub_return(val, pVal)
#define portAtomicSetSize(pVal, val)	atomic_long_set(pVal, val)

static __always_inline bool
portAtomicCompareAndSwapSize(atomic_long_t *pVal, long newVal, long oldVal)
{
	long o = oldVal;

	return atomic_long_try_cmpxchg(pVal, &o, newVal);
}

#define portAtomicIncrementSize(pVal)	atomic_long_inc_return(pVal)
#define portAtomicDecrementSize(pVal)	atomic_long_dec_return(pVal)

#define portAtomicXorSize(pVal, val)				\
	(atomic_long_fetch_xor(val, pVal) ^ (val))
#define portAtomicOrSize(pVal, val)				\
	(atomic_long_fetch_or(val, pVal) | (val))
#define portAtomicAndSize(pVal, val)				\
	(atomic_long_fetch_and(val, pVal) & (val))

#endif // _NVPORT_ATOMIC_H_
/// @}
