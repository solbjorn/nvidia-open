/*
 * SPDX-FileCopyrightText: Copyright (c) 2016-2020 NVIDIA CORPORATION & AFFILIATES. All rights reserved.
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
 * @brief STRING module implementation for platforms without stdlib support
 */

#include "nvport/nvport.h"
#include "nvmisc.h"

#ifndef NVPORT_STRING_DONT_DEFINE_portStringConvertAsciiToUtf16
NvLength
portStringConvertAsciiToUtf16
(
    NvU16 *dest,
    NvLength destSize,
    const char *src,
    NvLength srcSize
)
{
    NvLength i, len;

    PORT_ASSERT_CHECKED(dest != NULL);
    PORT_ASSERT_CHECKED(src != NULL);

    if (destSize == 0)
        return 0;

    len = portStringLengthSafe(src, srcSize);
    if (len >= destSize)
        len = destSize - 1;

    i = len;
    while (i-- > 0)
        dest[i] = src[i];

    dest[len] = 0;
    return len;
}
#endif

#ifndef NVPORT_STRING_DONT_DEFINE_portStringBufferToHex
NvLength
portStringBufferToHex
(
    char *str,
    NvLength strSize,
    const NvU8 *buf,
    NvLength bufSize
)
{
    NvLength i, len;

    if (strSize == 0)
        return 0;

    PORT_ASSERT_CHECKED(str != NULL);
    PORT_ASSERT_CHECKED(buf != NULL);

    len = bufSize * 2;
    if (len >= strSize)
        len = strSize - 1;

    for (i = 0; i < len; i++)
    {
        NvU8 n = (i % 2) ? (buf[i/2] & 0xF) : (buf[i/2] >> 4);
        str[i] = (n < 0xA) ? ('0' + n) : ('a' + n - 0xA);
    }
    str[len] = 0;
    return len;
}
#endif

#ifndef NVPORT_STRING_DONT_DEFINE_portStringBufferToHexGroups
NvLength
portStringBufferToHexGroups
(
    char *str,
    NvLength strSize,
    const NvU8 *buf,
    NvLength bufSize,
    NvLength groupCount,
    const NvU32 *groups,
    const char *separator
)
{
    NvLength group, sepLength, written;

    if (strSize == 0)
        return 0;

    PORT_ASSERT_CHECKED(str != NULL);
    PORT_ASSERT_CHECKED(buf != NULL);
    PORT_ASSERT_CHECKED(groups != NULL);
    PORT_ASSERT_CHECKED(separator != NULL);

    sepLength = portStringLength(separator);

    for (written = 0, group = 0; (group < groupCount) && (written < (strSize - 1)); group++)
    {
        NvLength groupSize = min_t(size_t, groups[group] / 2, bufSize);
        written += portStringBufferToHex(str + written, strSize - written, buf, groupSize);
        buf += groupSize;
        bufSize -= groupSize;

        if (group != groupCount - 1)
        {
            portMemCopy(str + written, strSize - written, separator, sepLength);
            written += sepLength;
        }
    }

    str[written] = 0;
    return written;
}
#endif
