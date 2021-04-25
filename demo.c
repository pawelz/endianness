/* Copyrights 2021 Google LLC.
 * SPDX-License-Identifier: Apache-2.0 */

#include <stdio.h>

#include "endianness.h"

int main() {
  printf("This system is %s-endian.\n", is_bigendian() ? "big" : "little");
}
