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

#if !defined(NVKMS_IOCTL_H)
#define NVKMS_IOCTL_H

#include "nvtypes.h"

/*!
 * Some of the NVKMS ioctl parameter data structures are quite large
 * and would exceed the parameter size constraints on at least SunOS.
 *
 * Redirect ioctls through a level of indirection: user-space assigns
 * NvKmsIoctlParams with the real command, size, and pointer, and
 * passes the NvKmsIoctlParams through the ioctl.
 */

struct NvKmsIoctlParams {
    NvU32 cmd;
    NvU32 size;
    NvU64 address NV_ALIGN_BYTES(8);
};

#define NVKMS_IOCTL_MAGIC 'm'
#define NVKMS_IOCTL_CMD 0

#define NVKMS_IOCTL_IOWR \
    _IOWR(NVKMS_IOCTL_MAGIC, NVKMS_IOCTL_CMD, struct NvKmsIoctlParams)

#endif /* NVKMS_IOCTL_H */
