#ifndef Z_ARROW_FIRE_H
#define Z_ARROW_FIRE_H

#include "ultra64.h"
#include "global.h"

struct ArrowFire;

typedef void (*ArrowFireActionFunc)(struct ArrowFire*, GlobalContext*);

typedef struct ArrowFire {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ Vec3f trailEnd;
    /* 0x0158 */ f32 trailLen;
    /* 0x015C */ f32 hitAnimIntensity;
    /* 0x0160 */ ArrowFireActionFunc actionFunc;
    /* 0x0164 */ s16 radius;
    /* 0x0166 */ u16 timer;
    /* 0x0168 */ u8 alpha;
} ArrowFire; // size = 0x016C

#endif
