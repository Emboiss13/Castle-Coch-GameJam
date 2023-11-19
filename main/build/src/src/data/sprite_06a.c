#pragma bank 255
// SpriteSheet: 06a

#include "gbs_types.h"
#include "data/sprite_06a_tileset.h"

BANKREF(sprite_06a)

#define SPRITE_8_STATE_DEFAULT 0

const metasprite_t sprite_06a_metasprite_0[]  = {
    { 0, 8, 12, 0 }, { 0, -8, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_06a_metasprite_1[]  = {
    { 0, 8, 14, 32 }, { 0, -8, 12, 32 },
    {metasprite_end}
};

const metasprite_t sprite_06a_metasprite_2[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_06a_metasprite_3[]  = {
    { 1, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_06a_metasprite_4[]  = {
    { 0, 8, 8, 0 }, { 0, -8, 10, 0 },
    {metasprite_end}
};

const metasprite_t sprite_06a_metasprite_5[]  = {
    { 0, 8, 10, 32 }, { 0, -8, 8, 32 },
    {metasprite_end}
};

const metasprite_t sprite_06a_metasprite_6[]  = {
    { 0, 0, 0, 32 }, { 0, 8, 2, 32 },
    {metasprite_end}
};

const metasprite_t sprite_06a_metasprite_7[]  = {
    { 1, 0, 4, 32 }, { 0, 8, 6, 32 },
    {metasprite_end}
};

const metasprite_t sprite_06a_metasprite_8[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_06a_metasprite_9[]  = {
    { 0, 0, 4, 32 }, { 0, 8, 6, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_06a_metasprites[] = {
    sprite_06a_metasprite_0,
    sprite_06a_metasprite_1,
    sprite_06a_metasprite_2,
    sprite_06a_metasprite_3,
    sprite_06a_metasprite_4,
    sprite_06a_metasprite_5,
    sprite_06a_metasprite_6,
    sprite_06a_metasprite_7,
    sprite_06a_metasprite_1,
    sprite_06a_metasprite_0,
    sprite_06a_metasprite_8,
    sprite_06a_metasprite_2,
    sprite_06a_metasprite_5,
    sprite_06a_metasprite_4,
    sprite_06a_metasprite_9,
    sprite_06a_metasprite_6
};

const struct animation_t sprite_06a_animations[] = {
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 2,
        .end = 3
    },
    {
        .start = 4,
        .end = 5
    },
    {
        .start = 6,
        .end = 7
    },
    {
        .start = 8,
        .end = 9
    },
    {
        .start = 10,
        .end = 11
    },
    {
        .start = 12,
        .end = 13
    },
    {
        .start = 14,
        .end = 15
    }
};

const UWORD sprite_06a_animations_lookup[] = {
    SPRITE_8_STATE_DEFAULT
};

const struct spritesheet_t sprite_06a = {
    .n_metasprites = 16,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_06a_metasprites,
    .animations = sprite_06a_animations,
    .animations_lookup = sprite_06a_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_06a_tileset),
    .cgb_tileset = { NULL, NULL }
};
