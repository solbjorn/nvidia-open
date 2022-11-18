/*
 * SPDX-FileCopyrightText: Copyright (c) 2014-2020 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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

#include <linux/module.h>
#include "nvstatus.h"

static const char * const g_StatusCodeList[] = {
#define NV_STATUS_CODE(name, code, string)	string " [" #name "]",
#include "nvstatuscodes.h"
	"Unknown error code!",
#undef NV_STATUS_CODE
};

/*!
 * @brief Given an NV_STATUS code, returns the corresponding status string.
 *
 * @param[in]   nvStatusIn                  NV_STATUS code for which the string is required
 *
 * @returns     Corresponding status string from the nvstatuscodes.h
*/
const char *nvstatusToString(NV_STATUS nvStatusIn)
{
	const char *ret;

	switch (nvStatusIn) {
	case NV_OK:
		ret = g_StatusCodeList[0];
		break;
	case NV_ERR_GENERIC:
		ret = g_StatusCodeList[1];
		break;
	case NV_ERR_BROKEN_FB ... NV_ERR_FABRIC_MANAGER_NOT_PRESENT:
		ret = g_StatusCodeList[nvStatusIn + 1];
		break;
	case NV_WARN_HOT_SWITCH ... NV_WARN_OUT_OF_RANGE:
		ret = g_StatusCodeList[NV_ERR_FABRIC_MANAGER_NOT_PRESENT + 1 +
				       (nvStatusIn & U16_MAX)];
		break;
	default:
		ret = g_StatusCodeList[ARRAY_SIZE(g_StatusCodeList) - 1];
		break;
	}

	return ret;
}
EXPORT_SYMBOL(nvstatusToString);

MODULE_DESCRIPTION("NVIDIA Common Module");
MODULE_LICENSE("Dual MIT/GPL");
