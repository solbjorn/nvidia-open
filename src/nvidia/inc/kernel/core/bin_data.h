/*
 * SPDX-FileCopyrightText: Copyright (c) 1993-2018 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#ifndef _BINDATA_H
#define _BINDATA_H

#include <linux/module.h>
#include "core/core.h"

struct nv_state_t;

typedef struct {
	const char		*tag;
	const char		*path;
	u32			size;
} BINDATA_STORAGE;

typedef struct {
	u32			nents;
	const BINDATA_STORAGE	entries[];
} BINDATA_ARCHIVE;

#define BINDATA_PATH(file)	"nvidia/" NV_VERSION_STRING "/ucode/" file
#define BINDATA_FIRMWARE(file)	MODULE_FIRMWARE(BINDATA_PATH(file))

#define BINDATA_ENTRY(_tag, _file, _size) {				\
	.tag	= (_tag),						\
	.path	= BINDATA_PATH(_file),					\
	.size	= (_size),						\
}

#define BINDATA_ARCHIVE_INIT(...) {					\
		.nents		= sizeof((BINDATA_STORAGE []){		\
					 __VA_ARGS__			\
				  }) / sizeof(BINDATA_STORAGE),		\
		.entries	= {					\
			__VA_ARGS__					\
		},							\
}

NV_STATUS bindataWriteToBuffer(const struct nv_state_t *nv,
			       const BINDATA_STORAGE *pBinStorage,
			       NvU8 *pBuffer, NvU32 bufferSize);
NvU32     bindataGetBufferSize(const BINDATA_STORAGE *pBinStorage);

const BINDATA_STORAGE * bindataArchiveGetStorage(const BINDATA_ARCHIVE *pBinArchive, const char *bindataName);

#endif // _BINDATA_H
