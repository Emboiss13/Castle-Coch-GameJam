#pragma bank 255
// SpriteSheet: friend_blinking

#include "gbs_types.h"
#include "data/sprite_friend_blinking_tileset.h"

BANKREF(sprite_friend_blinking)

#define SPRITE_2_STATE_DEFAULT 0

const metasprite_t sprite_friend_blinking_metasprite_0[]  = {
    { 0, 8, 0, 0 }, { 0, -8, 0, 32 },
    {metasprite_end}
};

const metasprite_t sprite_friend_blinking_metasprite_1[]  = {
    { 0, 8, 2, 0 }, { 0, -8, 2, 32 },
    {metasprite_end}
};

const metasprite_t * const sprite_friend_blinking_metasprites[] = {
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_0,
    sprite_friend_blinking_metasprite_1
};

const struct animation_t sprite_friend_blinking_animations[] = {
    {
        .start = 0,
        .end = 11
    },
    {
        .start = 0,
        .end = 11
    },
    {
        .start = 0,
        .end = 11
    },
    {
        .start = 0,
        .end = 11
    },
    {
        .start = 0,
        .end = 11
    },
    {
        .start = 0,
        .end = 11
    },
    {
        .start = 0,
        .end = 11
    },
    {
        .start = 0,
        .end = 11
    }
};

const UWORD sprite_friend_blinking_animations_lookup[] = {
    SPRITE_2_STATE_DEFAULT
};

const struct spritesheet_t sprite_friend_blinking = {
    .n_metasprites = 12,
    .emote_origin = {
        .x = 0,
        .y = -16
    },
    .metasprites = sprite_friend_blinking_metasprites,
    .animations = sprite_friend_blinking_animations,
    .animations_lookup = sprite_friend_blinking_animations_lookup,
    .bounds = {
        .left = 0,
        .bottom = 7,
        .right = 15,
        .top = -8
    },
    .tileset = TO_FAR_PTR_T(sprite_friend_blinking_tileset),
    .cgb_tileset = { NULL, NULL }
};
