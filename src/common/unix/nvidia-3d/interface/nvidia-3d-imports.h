/*
 * SPDX-FileCopyrightText: Copyright (c) 2017 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

/*
 * nvidia-3d-imports.h declares functions with nvidia-3d host drivers must
 * provide.
 */

#ifndef __NVIDIA_3D_IMPORTS_H__
#define __NVIDIA_3D_IMPORTS_H__

#include <linux/slab.h>

static __always_inline void __alloc_size(1) *nv3dImportAlloc(size_t size)
{
	return kvmalloc(size, in_task() ? GFP_KERNEL : GFP_ATOMIC);
}

static __always_inline void nv3dImportFree(const void *ptr)
{
	kvfree(ptr);
}

static __always_inline int
nv3dImportMemCmp(const void *a, const void *b, size_t size)
{
	return memcmp(a, b, size);
}

static __always_inline void *nv3dImportMemSet(void *s, int c, size_t size)
{
	return memset(s, c, size);
}

static __always_inline void *
nv3dImportMemCpy(void *dest, const void *src, size_t size)
{
	return memcpy(dest, src, size);
}

static __always_inline void *
nv3dImportMemMove(void *dest, const void *src, size_t size)
{
	return memmove(dest, src, size);
}

#endif /* __NVIDIA_3D_IMPORTS_H__ */
