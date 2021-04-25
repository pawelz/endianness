/* Copyrights 2021 Google LLC.
 * SPDX-License-Identifier: Apache-2.0 */

#ifndef FATBD_ENDIANNESS_H
#define FATBD_ENDIANNESS_H

#include <sys/types.h>

/* Utilities to deal with endianness.
 *
 * This is just an example. In any real-life code you'll be better off
 * using tools provided by whatever environment you are coding in.
 *
 * For glibc (UNIX userspace), see endian(3) manual page.
 * For Linux kernel, see include/asm/byteorder.h
 */

/* Determine the endianness.
 *
 * 0x1 in a 16b variable will be encoded as:
 *   [0x01, 0x00] on little-endian systems
 *   [0x00, 0x01] on big-endian systems
 *
 * So we cast the address of 16b one to an 8b pointer, which essentially
 * extracts the first byte. If it's one, we are little-endian. If it's zero, we
 * are big-endian. */
const u_int16_t one = 1;
#define is_bigendian() (*(u_int8_t *)&one == 0)

#endif
