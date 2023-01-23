/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2022 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#include "core/bin_data.h"
#include "g_kernel_gsp_nvoc.h"

/* THIS FILE IS AUTOMATICALLY GENERATED, DO NOT EDIT! */

static const BINDATA_ARCHIVE
__kgspGetBinArchiveBooterUnloadUcode_TU116 = BINDATA_ARCHIVE_INIT(
	BINDATA_ENTRY("image_dbg",
		      "g_booteruc_unload_tu11x_dbg_image.bin", 8192),
	BINDATA_ENTRY("header_dbg", "g_booteruc_unload_tu11x_dbg_hdr.bin", 36),
	BINDATA_ENTRY("image_prod",
		      "g_booteruc_unload_tu11x_prod_image.bin", 8192),
	BINDATA_ENTRY("header_prod",
		      "g_booteruc_unload_tu11x_prod_hdr.bin", 36),
	BINDATA_ENTRY("sig_dbg",
		      "g_booteruc_unload_tu11x_tu116_aes_dbg_sig.bin", 16),
	BINDATA_ENTRY("sig_prod",
		      "g_booteruc_unload_tu11x_tu116_aes_prod_sig.bin", 16),
	BINDATA_ENTRY("patch_loc",
		      "g_booteruc_unload_tu11x_tu116_aes_patch.bin", 4),
	BINDATA_ENTRY("patch_sig",
		      "g_booteruc_unload_tu11x_tu116_aes_patch_sig.bin", 4),
	BINDATA_ENTRY("patch_meta",
		      "g_booteruc_unload_tu11x_tu116_aes_meta.bin", 12),
	BINDATA_ENTRY("num_sigs",
		      "g_booteruc_unload_tu11x_tu116_aes_num.bin", 4),
);
const BINDATA_ARCHIVE *kgspGetBinArchiveBooterUnloadUcode_TU116(struct KernelGsp *pKernelGsp)
{
    return &__kgspGetBinArchiveBooterUnloadUcode_TU116;
}
