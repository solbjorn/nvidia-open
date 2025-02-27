/*
 * SPDX-FileCopyrightText: Copyright (c) 2015 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#ifndef __NV_COMMON_UTILS_H__
#define __NV_COMMON_UTILS_H__

#ifndef __cplusplus
#include <linux/kernel.h>
#else
#include <linux/minmax.h>	/* __is_array() fails */
#define ARRAY_SIZE(arr)		(sizeof(arr) / sizeof((arr)[0]))
#endif

#include "nvtypes.h"

#if !defined(TRUE)
#define TRUE			true
#endif

#if !defined(FALSE)
#define FALSE			false
#endif

#define NV_IS_UNSIGNED(x) ((__typeof__(x))-1 > 0)

/* Get the length of a statically-sized array. */
#define ARRAY_LEN(_arr)		ARRAY_SIZE(_arr)

#define NV_INVALID_HEAD         0xFFFFFFFF

#define NV_INVALID_CONNECTOR_PHYSICAL_INFORMATION (~0)

#if !defined(NV_MIN)
# define NV_MIN(a,b)		min(a, b)
#endif

#define NV_MIN3(a,b,c)		min3(a, b)
#define NV_MIN4(a,b,c,d) NV_MIN3(NV_MIN(a,b),c,d)

#if !defined(NV_MAX)
# define NV_MAX(a,b)		max(a, b)
#endif

#define NV_MAX3(a,b,c)		max3(a, b)
#define NV_MAX4(a,b,c,d) NV_MAX3(NV_MAX(a,b),c,d)

#define NV_LIMIT_VAL_TO_MIN_MAX(val, min, max)	\
	clamp(val, min, max)

#define NV_ROUNDUP_DIV(x,y)	DIV_ROUND_UP(x, y)

/*
 * Macros used for computing palette entries:
 *
 * NV_UNDER_REPLICATE(val, source_size, result_size) expands a value
 * of source_size bits into a value of target_size bits by shifting
 * the source value into the high bits and replicating the high bits
 * of the value into the low bits of the result.
 *
 * PALETTE_DEPTH_SHIFT(val, w) maps a colormap entry for a component
 * that has w bits to an appropriate entry in a LUT of 256 entries.
 */
static inline unsigned int NV_UNDER_REPLICATE(unsigned short val,
                                              int source_size,
                                              int result_size)
{
    return (val << (result_size - source_size)) |
        (val >> ((source_size << 1) - result_size));
}


static inline unsigned short PALETTE_DEPTH_SHIFT(unsigned short val, int depth)
{
    return NV_UNDER_REPLICATE(val, depth, 8);
}

#endif /* __NV_COMMON_UTILS_H__ */
