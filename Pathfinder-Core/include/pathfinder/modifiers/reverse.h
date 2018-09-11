#ifndef PATHFINDER_MOD_REVERSE_H_DEF
#define PATHFINDER_MOD_REVERSE_H_DEF

#include "pathfinder/lib.h"

CAPI void pathfinder_modify_reverse(Segment *original, int length, Segment *dest);
CAPI void pathfinder_modify_reverse_inplace(Segment *original, int length);

#endif
