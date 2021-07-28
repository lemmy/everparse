

#ifndef __Triangle2_H
#define __Triangle2_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "EverParse.h"




uint64_t
Triangle2ValidateTriangle(
  uint8_t *Ctxt,
  void
  (*Err)(
    EverParseString x0,
    EverParseString x1,
    EverParseString x2,
    uint8_t *x3,
    EverParseInputBuffer x4,
    uint32_t x5
  ),
  EverParseInputBuffer Input
);

#if defined(__cplusplus)
}
#endif

#define __Triangle2_H_DEFINED
#endif
