/*
 * SPDX-FileCopyrightText: Copyright (c) 2018 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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
 * NVIDIA GPZ vulnerability mitigation definitions.
 */

/*
 * There are two copies of this file for legacy reasons:
 *
 * P4: <$NV_SOURCE/>drivers/common/inc/nv_speculation_barrier.h
 * Git: <tegra/core/>include/nv_speculation_barrier.h
 *
 * Both files need to be kept in sync if any changes are required.
 */

#ifndef _NV_SPECULATION_BARRIER_H_
#define _NV_SPECULATION_BARRIER_H_

#include <linux/build_bug.h>
#include <linux/nospec.h>

/*
 * GNU-C/MSC/clang - x86/x86_64 :  x86_64, __i386, __i386__
 * GNU-C - THUMB mode           : __GNUC__, __thumb__
 * GNU-C - ARM modes            : __GNUC__, __arm__, __aarch64__
 * armclang - THUMB mode        : __ARMCC_VERSION, __thumb__
 * armclang - ARM modes         : __ARMCC_VERSION, __arm__, __aarch64__
 * GHS - THUMB mode             : __ghs__, __THUMB__
 * GHS - ARM modes              : __ghs__, __ARM__, __ARM64__
 */

#if (defined(__GNUC__) && defined(__thumb__)) \
    || (defined(__ARMCC_VERSION) && defined(__thumb__)) \
    || (defined(__ghs__) && defined(__THUMB__))
 /* ARM-thumb mode(<=ARMv7)/T32 (ARMv8) */
 #define NV_SPECULATION_BARRIER_ARM_COMMON

#elif (defined(__GNUC__) && defined(__arm__)) \
    || (defined(__ARMCC_VERSION) && defined(__arm__)) \
    || (defined(__ghs__) && defined(__ARM__))
 /* aarch32(ARMv8) / arm(<=ARMv7) mode */
 #define NV_SPECULATION_BARRIER_ARM_COMMON

#elif (defined(__GNUC__) && defined(__aarch64__)) \
    || (defined(__ARMCC_VERSION) && defined(__aarch64__)) \
    || (defined(__ghs__) && defined(__ARM64__))
 /* aarch64(ARMv8) mode */
 #define NV_SPECULATION_BARRIER_ARM_COMMON
#endif

/*
 * nv_speculation_barrier -- General-purpose speculation barrier
 *
 * This approach provides full protection against variant-1 vulnerability.
 * However, the recommended approach is detailed below (See:
 * nv_array_index_no_speculate)
 *
 * Semantics:
 * Any memory read that is sequenced after a nv_speculation_barrier(),
 * and contained directly within the scope of nv_speculation_barrier() or
 * directly within a nested scope, will not speculatively execute until all
 * conditions for entering that scope have been architecturally resolved.
 *
 * Example:
 * if (untrusted_index_from_user < bound)  {
 *  ...
 *  nv_speculation_barrier();
 *  ...
 *  x = array1[untrusted_index_from_user];
 *  bit = x & 1;
 *  y = array2[0x100 * bit];
 * }
 */

#ifdef NV_SPECULATION_BARRIER_ARM_COMMON
/* Note: Cortex-A9 GNU-assembler seems to complain about DSB SY */
 #define nv_speculation_barrier()   \
    asm volatile                    \
    (                               \
        "DSB sy\n"                  \
        "ISB\n"                     \
        : : : "memory"              \
    )
#else
#define nv_speculation_barrier		barrier_nospec
#endif

// Delete after all references are changed to nv_speculation_barrier
#define speculation_barrier		nv_speculation_barrier

/*
 * nv_array_index_no_speculate -- Recommended variant-1 mitigation approach
 *
 * The array-index-no-speculate approach "de-speculates" an array index that
 * has already been bounds-checked.
 *
 * This approach is preferred over nv_speculation_barrier due to the following
 * reasons:
 * - It is just as effective as the general-purpose speculation barrier.
 * - It clearly identifies what array index is being de-speculated and is thus
 *   self-commenting, whereas the general-purpose speculation barrier requires
 *   an explanation of what array index is being de-speculated.
 * - It performs substantially better than the general-purpose speculation
 *   barrier on ARM Cortex-A cores (the difference is expected to be tens of
 *   cycles per invocation). Within tight loops, this difference may become
 *   noticeable.
 *
 * Semantics:
 * Provided count is non-zero and the caller has already validated or otherwise
 * established that index < count, any speculative use of the return value will
 * use a speculative value that is less than count.
 *
 * Example:
 * if (untrusted_index_from_user < bound)  {
 *  untrusted_index_from_user = nv_array_index_no_speculate(
 *                  untrusted_index_from_user, bound);
 *  ...
 *  x = array1[untrusted_index_from_user];
 *  ...
 * }
 *
 * The use of nv_array_index_no_speculate() in the above example ensures that
 * subsequent uses of untrusted_index_from_user will not execute speculatively
 * (they will wait for the bounds check to complete).
 */

#define nv_array_index_no_speculate	array_index_nospec

#endif //_NV_SPECULATION_BARRIER_H_
