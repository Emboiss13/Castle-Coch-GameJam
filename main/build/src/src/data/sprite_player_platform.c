#pragma bank 255
// SpriteSheet: visitor_animated

#include "gbs_types.h"
#include "data/sprite_player_platform_tileset.h"

BANKREF(sprite_player_platform)

#define SPRITE_0_STATE_DEFAULT 0

const metasprite_t sprite_player_platform_metasprite_0[]  = {
    { -1, 1, 18, 32 }, { -16, 0, 2, 32 }, { 16, 8, 20, 32 }, { -16, 0, 6, 32 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_1[]  = {
    { 0, 7, 0, 0 }, { -16, 0, 2, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_2[]  = {
    { 0, 7, 8, 0 }, { -16, 0, 10, 0 }, { 16, -8, 12, 0 }, { -16, 0, 14, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_3[]  = {
    { 0, 7, 0, 0 }, { -16, 0, 16, 0 }, { 16, -8, 4, 0 }, { -16, 0, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_4[]  = {
    { -1, 7, 18, 0 }, { -16, 0, 2, 0 }, { 16, -8, 20, 0 }, { -16, 0, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_5[]  = {
    { 0, 1, 0, 32 }, { -16, 0, 2, 32 }, { 16, 8, 4, 32 }, { -16, 0, 6, 32 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_6[]  = {
    { 0, 1, 8, 32 }, { -16, 0, 10, 32 }, { 16, 8, 12, 32 }, { -16, 0, 14, 32 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_7[]  = {
    { 0, 1, 0, 32 }, { -16, 0, 16, 32 }, { 16, 8, 4, 32 }, { -16, 0, 6, 32 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_8[]  = {
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_9[]  = {
    { 0, 7, 22, 0 }, { -16, 0, 2, 0 }, { 16, -8, 24, 0 }, { -16, 0, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_10[]  = {
    { 0, 7, 26, 0 }, { -16, 0, 2, 0 }, { 16, -8, 28, 0 }, { -16, 0, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_11[]  = {
    { 0, 7, 30, 0 }, { -16, 0, 2, 0 }, { 16, -8, 32, 0 }, { -16, 0, 6, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_12[]  = {
    { 1, 8, 34, 0 }, { -16, 0, 36, 0 }, { 16, -8, 38, 0 }, { -16, 0, 40, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_13[]  = {
    { 1, 8, 42, 0 }, { -16, 0, 36, 0 }, { 16, -8, 44, 0 }, { -16, 0, 40, 0 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_14[]  = {
    { 0, 1, 22, 32 }, { -16, 0, 2, 32 }, { 16, 8, 24, 32 }, { -16, 0, 6, 32 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_15[]  = {
    { 0, 1, 26, 32 }, { -16, 0, 2, 32 }, { 16, 8, 28, 32 }, { -16, 0, 6, 32 },
    {metasprite_end}
};

const metasprite_t sprite_player_platform_metasprite_16[]  = {
    { 0, 1, 30, 32 }, { -16, 0, 2, 32 }, { 16, 8, 32, 32 }, { -16, 0, 6, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_player_platform_metasprites[] = {
    sprite_player_platform_metasprite_0,
    sprite_player_platform_metasprite_1,
    sprite_player_platform_metasprite_2,
    sprite_player_platform_metasprite_3,
    sprite_player_platform_metasprite_4,
    sprite_player_platform_metasprite_5,
    sprite_player_platform_metasprite_6,
    sprite_player_platform_metasprite_7,
    sprite_player_platform_metasprite_8,
    sprite_player_platform_metasprite_9,
    sprite_player_platform_metasprite_10,
    sprite_player_platform_metasprite_11,
    sprite_player_platform_metasprite_12,
    sprite_player_platform_metasprite_13,
    sprite_player_platform_metasprite_14,
    sprite_player_platform_metasprite_15,
    sprite_player_platform_metasprite_16
};

const struct animation_t sprite_player_platform_animations[] = {
    {
        .start = 0,
        .end = 0
    },
    {
        .start = 1,
        .end = 3
    },
    {
        .start = 4,
        .end = 4
    },
    {
        .start = 5,
        .end = 7
    },
    {
        .start = 8,
        .end = 8
    },
    {
        .start = 9,
        .end = 11
    },
    {
        .start = 12,
        .end = 13
    },
    {
        .start = 14,
        .end = 16
    }
};

const UWORD sprite_player_platform_animations_lookup[] = {
    SPRITE_0_STATE_DEFAULT
};

const struct spritesheet_t sprite_player_platform = {
    .n_metasprites = 17,
    .emote_origin = {
        .x = 0,
        .y = -32
    },
    .metasprites = sprite_player_platform_metasprites,
    .animations = sprite_player_platform_animations,
    .animations_lookup = sprite_player_platform_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_player_platform_tileset),
    .cgb_tileset = { NULL, NULL }
};
