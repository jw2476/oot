#ifndef Z_ARROW_LIGHT_H
#define Z_ARROW_LIGHT_H

#include "ultra64.h"
#include "global.h"

struct ArrowLight;

typedef void (*ArrowLightActionFunc)(struct ArrowLight*, GlobalContext*);

typedef struct ArrowLight {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ s16 radius;
    /* 0x014E */ u16 timer;
    /* 0x0150 */ u8 alpha;
    /* 0x0154 */ Vec3f trailEnd;
    /* 0x0160 */ f32 trailLen;
    /* 0x0164 */ f32 hitAnimIntensity;
    /* 0x0168 */ ArrowLightActionFunc actionFunc;
} ArrowLight; // size = 0x016C

#endif
