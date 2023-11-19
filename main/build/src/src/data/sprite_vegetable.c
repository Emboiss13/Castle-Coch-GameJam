#pragma bank 255
// SpriteSheet: vegetable

#include "gbs_types.h"
#include "data/sprite_vegetable_tileset.h"

BANKREF(sprite_vegetable)

#define SPRITE_10_STATE_DEFAULT 0

const metasprite_t sprite_vegetable_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_vegetable_metasprite_1[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_vegetable_metasprite_2[]  = {
    { 0, 8, 8, 0 }, { 0, -8, 10, 0 },
    {metasprite_end}
};

const metasprite_t sprite_vegetable_metasprite_3[]  = {
    { 0, 8, 12, 0 }, { 0, -8, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_vegetable_metasprite_4[]  = {
    { 0, 8, 16, 0 }, { 0, -8, 18, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_vegetable_metasprites[] = {
    sprite_vegetable_metasprite_0,
    sprite_vegetable_metasprite_1,
    sprite_vegetable_metasprite_2,
    sprite_vegetable_metasprite_3,
    sprite_vegetable_metasprite_4
};

const struct animation_t sprite_vegetable_animations[] = {
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    },
    {
        .start = 0,
        .end = 4
    }
};

const UWORD sprite_vegetable_animations_lookup[] = {
    SPRITE_10_STATE_DEFAULT
};

const struct spritesheet_t sprite_vegetable = {
    .n_metasprites = 5,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_vegetable_metasprites,
    .animations = sprite_vegetable_animations,
    .animations_lookup = sprite_vegetable_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_vegetable_tileset),
    .cgb_tileset = { NULL, NULL }
};
