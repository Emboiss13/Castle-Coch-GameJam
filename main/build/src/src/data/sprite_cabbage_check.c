#pragma bank 255
// SpriteSheet: cabbage_check

#include "gbs_types.h"
#include "data/sprite_cabbage_check_tileset.h"

BANKREF(sprite_cabbage_check)

#define SPRITE_12_STATE_DEFAULT 0

const metasprite_t sprite_cabbage_check_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_cabbage_check_metasprite_1[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_cabbage_check_metasprites[] = {
    sprite_cabbage_check_metasprite_0,
    sprite_cabbage_check_metasprite_1
};

const struct animation_t sprite_cabbage_check_animations[] = {
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    },
    {
        .start = 0,
        .end = 1
    }
};

const UWORD sprite_cabbage_check_animations_lookup[] = {
    SPRITE_12_STATE_DEFAULT
};

const struct spritesheet_t sprite_cabbage_check = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_cabbage_check_metasprites,
    .animations = sprite_cabbage_check_animations,
    .animations_lookup = sprite_cabbage_check_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_cabbage_check_tileset),
    .cgb_tileset = { NULL, NULL }
};
