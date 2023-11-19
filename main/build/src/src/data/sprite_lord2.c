#pragma bank 255
// SpriteSheet: lord2

#include "gbs_types.h"
#include "data/sprite_lord2_tileset.h"

BANKREF(sprite_lord2)

#define SPRITE_25_STATE_DEFAULT 0

const metasprite_t sprite_lord2_metasprite_0[]  = {
    { 0, 8, 6, 96 }, { 0, -8, 4, 96 },
    {metasprite_end}
};

const metasprite_t sprite_lord2_metasprite_1[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_lord2_metasprite_2[]  = {
    { 0, 8, 2, 96 }, { 0, -8, 0, 96 },
    {metasprite_end}
};

const metasprite_t sprite_lord2_metasprite_3[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_lord2_metasprites[] = {
    sprite_lord2_metasprite_0,
    sprite_lord2_metasprite_1,
    sprite_lord2_metasprite_2,
    sprite_lord2_metasprite_3
};

const struct animation_t sprite_lord2_animations[] = {
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

const UWORD sprite_lord2_animations_lookup[] = {
    SPRITE_25_STATE_DEFAULT
};

const struct spritesheet_t sprite_lord2 = {
    .n_metasprites = 4,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_lord2_metasprites,
    .animations = sprite_lord2_animations,
    .animations_lookup = sprite_lord2_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_lord2_tileset),
    .cgb_tileset = { NULL, NULL }
};
