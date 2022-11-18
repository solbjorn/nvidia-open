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
 * @brief String module public interface
 */

#ifndef _NVPORT_H_
#error "This file cannot be included directly. Include nvport.h instead."
#endif

#ifndef _NVPORT_STRING_H_
#define _NVPORT_STRING_H_

#include <linux/string.h>

/**
 * @defgroup NVPORT_STRING String module
 *
 * @brief This module contains string functionality used by other modules.
 *
 * @{
 */

/**
 * @name Core Functions
 * @{
 */

static __always_inline int
portStringCompare(const char *str1, const char *str2, size_t length)
{
	return strncmp(str1, str2, length);
}

static __always_inline ssize_t
portStringCopy(char *dest, size_t destSize, const char *src, size_t srcSize)
{
	return strscpy(dest, src, destSize);
}

static __always_inline char *
portStringCat(char *str, size_t strSize, const char *cat, size_t catSize)
{
	return strncat(str, cat, catSize);
}

static __always_inline size_t portStringLength(const char *str)
{
	return strlen(str);
}

static __always_inline size_t
portStringLengthSafe(const char *str, size_t maxLength)
{
	return strnlen(str, maxLength);
}

/**
 * @brief Converts a string from ASCII (8-bit) to UTF16 (16 bit)
 *
 * Can perform the conversion in place if dest == src.
 *
 * @returns The number of characters in destination buffer, without the null
 * terminator (i.e. strlen(dest))
 */
NvLength portStringConvertAsciiToUtf16(NvU16 *dest, NvLength destSize, const char *src, NvLength srcSize);

/**
 * @brief Writes the hexadecimal string representation of the buffer
 *
 * @returns The number of characters in destination buffer, without the null
 * terminator (i.e. strlen(str))
 */
NvLength portStringBufferToHex(char *str, NvLength strSize, const NvU8 *buf, NvLength bufSize);

/**
 * @brief Convert a binary buffer into readable group of hex digits
 *
 * @param groupCount - Number of groups
 * @param groups     - How to structure the groups (in number of hex chars)
 * @param separator  - Character to separate the groups
 *
 * For the traditional display of UUIDs, there would be five groups, {8,4,4,4,12}
 * with the separator being '-'.
 *
 * @note odd numbers for group sizes are not supported, they will be rounded down
 *
 * @returns The number of characters in destination buffer, without the null
 * terminator (i.e. strlen(str))
 */
NvLength portStringBufferToHexGroups(char *str, NvLength strSize, const NvU8 *buf, NvLength bufSize, NvLength groupCount, const NvU32 *groups, const char *separator);

/// @} End core functions

/**
 * @name Extended Functions
 * @{
 */

// Place extended functions here

/// @} End extended functions

#endif // _NVPORT_STRING_H_
/// @}
