#pragma bank 255
// SpriteSheet: lord9

#include "gbs_types.h"
#include "data/sprite_lord9_tileset.h"

BANKREF(sprite_lord9)

#define SPRITE_32_STATE_DEFAULT 0

const metasprite_t sprite_lord9_metasprite_0[]  = {
    { 0, 8, 2, 32 }, { 0, -8, 0, 0 },
    {metasprite_end}
};

const metasprite_t sprite_lord9_metasprite_1[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_lord9_metasprite_2[]  = {
    { 0, 8, 2, 96 }, { 0, -8, 0, 0 },
    {metasprite_end}
};

const metasprite_t sprite_lord9_metasprite_3[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 64 },
    {metasprite_end}
};

const metasprite_t * const sprite_lord9_metasprites[] = {
    sprite_lord9_metasprite_0,
    sprite_lord9_metasprite_1,
    sprite_lord9_metasprite_2,
    sprite_lord9_metasprite_3
};

const struct animation_t sprite_lord9_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 2,
        .end = 2
    },
    {
        .start = 3,
        .end = 3
    },
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 1
    },
    {
        .start = 2,
        .end = 2
    },
    {
        .start = 3,
        .end = 3
    }
};

const UWORD sprite_lord9_animations_lookup[] = {
    SPRITE_32_STATE_DEFAULT
};

const struct spritesheet_t sprite_lord9 = {
    .n_metasprites = 4,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_lord9_metasprites,
    .animations = sprite_lord9_animations,
    .animations_lookup = sprite_lord9_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_lord9_tileset),
    .cgb_tileset = { NULL, NULL }
};
