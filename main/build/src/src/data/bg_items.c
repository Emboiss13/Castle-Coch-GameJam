#pragma bank 255
// SpriteSheet: items

#include "gbs_types.h"
#include "data/bg_items_tileset.h"

BANKREF(bg_items)

#define SPRITE_3_STATE_DEFAULT 0

const metasprite_t bg_items_metasprite_0[]  = {
    { 1, 8, 44, 0 }, { -16, 0, 46, 0 }, { 16, -8, 48, 0 }, { -16, 0, 50, 0 },
    {metasprite_end}
};

const metasprite_t bg_items_metasprite_1[]  = {
    { 0, 16, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 }, { 16, -8, 8, 0 }, { -16, 0, 10, 0 }, { 16, -8, 12, 0 },
    {metasprite_end}
};

const metasprite_t bg_items_metasprite_2[]  = {
    { 0, 16, 28, 0 }, { -16, 0, 30, 0 }, { 16, -8, 32, 0 }, { -16, 0, 34, 0 }, { 16, -8, 36, 0 }, { -16, 0, 38, 0 }, { 16, -8, 40, 0 }, { -16, 0, 42, 0 },
    {metasprite_end}
};

const metasprite_t bg_items_metasprite_3[]  = {
    { 0, 16, 14, 0 }, { -16, 0, 16, 0 }, { 16, -8, 18, 0 }, { -16, 0, 20, 0 }, { 16, -8, 22, 0 }, { -16, 0, 24, 0 }, { 16, -8, 26, 0 },
    {metasprite_end}
};

const metasprite_t * const bg_items_metasprites[] = {
    bg_items_metasprite_0,
    bg_items_metasprite_1,
    bg_items_metasprite_2,
    bg_items_metasprite_3
};

const struct animation_t bg_items_animations[] = {
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

const UWORD bg_items_animations_lookup[] = {
    SPRITE_3_STATE_DEFAULT
};

const struct spritesheet_t bg_items = {
    .n_metasprites = 4,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = bg_items_metasprites,
    .animations = bg_items_animations,
    .animations_lookup = bg_items_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(bg_items_tileset),
    .cgb_tileset = { NULL, NULL }
};
