#pragma bank 255
// SpriteSheet: broccoli_check

#include "gbs_types.h"
#include "data/sprite_broccoli_check_tileset.h"

BANKREF(sprite_broccoli_check)

#define SPRITE_11_STATE_DEFAULT 0

const metasprite_t sprite_broccoli_check_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 2, 0 },
    {metasprite_end}
};

const metasprite_t sprite_broccoli_check_metasprite_1[]  = {
    { 0, 8, 4, 0 }, { 0, -8, 6, 0 },
    {metasprite_end}
};

const metasprite_t * const sprite_broccoli_check_metasprites[] = {
    sprite_broccoli_check_metasprite_0,
    sprite_broccoli_check_metasprite_1
};

const struct animation_t sprite_broccoli_check_animations[] = {
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

const UWORD sprite_broccoli_check_animations_lookup[] = {
    SPRITE_11_STATE_DEFAULT
};

const struct spritesheet_t sprite_broccoli_check = {
    .n_metasprites = 2,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_broccoli_check_metasprites,
    .animations = sprite_broccoli_check_animations,
    .animations_lookup = sprite_broccoli_check_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_broccoli_check_tileset),
    .cgb_tileset = { NULL, NULL }
};
