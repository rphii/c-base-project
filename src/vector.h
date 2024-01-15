#ifndef VECTOR_H

#include "vec.h"

#include <stdint.h>

VEC_INCLUDE(Vu8,  vu8,  uint8_t,  BY_VAL);
VEC_INCLUDE(Vu16, vu16, uint16_t, BY_VAL);
VEC_INCLUDE(Vu32, vu32, uint32_t, BY_VAL);
VEC_INCLUDE(Vu64, vu64, uint64_t, BY_VAL);

#define VECTOR_H
#endif

