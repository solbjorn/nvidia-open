/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2021 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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
 * @brief Bindata APIs implememtation
 */

#include <linux/zlib.h>

#include "core/bin_data.h"
#include "bin_data_pvt.h"
#include "os/os.h"
#include "nvRmReg.h"

/*
 * Private helper functions
 */
static void bindataMarkReferenced(const BINDATA_STORAGE *pBinStorage);

/*!
 * Retrieve data from Bindata storage and write it to the given memory buffer.  When
 * file overriding feature is enabled and the file exists in the target directory,
 * copy the file to buffer instead.
 *
 * @param[in]   pBinStorage     Bindata storage
 * @param[in]   pBuffer         Pointer of given buffer
 *
 * @return      'NV_OK'         If the ucode was written to memory buffer successfully
 */
NV_STATUS
bindataWriteToBuffer
(
    const BINDATA_STORAGE *pBinStorage,
    NvU8                  *pBuffer,
    NvU32                  bufferSize
)
{
	const BINDATA_STORAGE_PVT *pvt = (typeof(pvt))pBinStorage;
	int ret;

	// paged memory access check
	osPagedSegmentAccessCheck();

	NV_ASSERT_OR_RETURN(pBinStorage != NULL, NV_ERR_INVALID_ARGUMENT);
	NV_ASSERT_OR_RETURN(pBuffer != NULL, NV_ERR_INVALID_ARGUMENT);
	NV_ASSERT_OR_RETURN(bufferSize >= bindataGetBufferSize(pBinStorage),
			    NV_ERR_BUFFER_TOO_SMALL);

	if (!pvt->bCompressed) {
		memcpy(pBuffer, pvt->pData, pvt->actualSize);
		return NV_OK;
	}

	ret = zlib_inflate_blob(pBuffer, bufferSize, pvt->pData,
				pvt->compressedSize);
	if (ret != pvt->actualSize) {
		NV_PRINTF(LEVEL_ERROR,
			  "failed to get inflated data, got %u bytes, expecting %u\n",
			  max(ret, 0), pvt->actualSize);
		DBG_BREAKPOINT();

		return NV_ERR_INFLATE_COMPRESSED_DATA_FAILED;
	}

	return NV_OK;
}

NvU32
bindataGetBufferSize
(
    const BINDATA_STORAGE *pBinStorage
)
{
    // paged memory access check
    osPagedSegmentAccessCheck();

    if (pBinStorage == NULL)
    {
        return 0;
    }

    return ((const BINDATA_STORAGE_PVT *) pBinStorage)->actualSize;
}


/*!
 * Get Bindata storage from the given Bindata Archive
 *
 * @param[in]   pBinArchive        Pointer to Bindata Archive
 * @param[in]   binName            Name of the bindata
 *
 * @return      Pointer of the target Bindata Storage or
 *              NULL if cannot find the target of the given name
 */
const BINDATA_STORAGE *
bindataArchiveGetStorage(
    const BINDATA_ARCHIVE *pBinArchive,
    const char *binName
)
{
    NvLength len;
    NvU32 i;

    // paged memory access check
    osPagedSegmentAccessCheck();

    if ((pBinArchive == NULL) || (binName == NULL))
    {
        return NULL;
    }

    len = portStringLength(binName) + 1;
    for (i = 0 ; i < pBinArchive->entryNum; i++)
    {
        if (portStringCompare(binName, pBinArchive->entries[i].name, len) == 0)
        {
            bindataMarkReferenced(pBinArchive->entries[i].pBinStorage);
            return pBinArchive->entries[i].pBinStorage;
        }
    }
    return NULL;
}


// File Overriding Feature is only enabled under MODS

static void bindataMarkReferenced(const BINDATA_STORAGE *pBinStorage)
{
    if (BINDATA_IS_MUTABLE)
    {
        // Cast away the constness
        BINDATA_STORAGE_PVT *pMutablePvt = (BINDATA_STORAGE_PVT *)pBinStorage;
        NV_ASSERT(pMutablePvt->pData != NULL || pMutablePvt->actualSize != 0);
        pMutablePvt->bReferenced = NV_TRUE;
    }
}
