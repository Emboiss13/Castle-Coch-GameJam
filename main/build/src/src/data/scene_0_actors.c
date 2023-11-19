#pragma bank 255

// Scene: Mini Game - Dodge Guards - 1
// Actors

#include "gbs_types.h"
#include "data/sprite_knight_animated.h"
#include "data/actor_1_update.h"
#include "data/sprite_knight_animated.h"
#include "data/actor_4_update.h"
#include "data/sprite_key.h"
#include "data/sprite_knight_animated.h"
#include "data/actor_0_update.h"

BANKREF(scene_0_actors)

const struct actor_t scene_0_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 24 * 16,
            .y = 96 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_knight_animated),
        .move_speed = 11,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_1_update),
        .reserve_tiles = 0
    },
    {
        // Actor 2,
        .pos = {
            .x = 8 * 16,
            .y = 56 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_knight_animated),
        .move_speed = 11,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_4_update),
        .reserve_tiles = 0
    },
    {
        // Actor 3,
        .pos = {
            .x = 72 * 16,
            .y = 120 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_key),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_2,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    },
    {
        // Actor 4,
        .pos = {
            .x = 112 * 16,
            .y = 40 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_knight_animated),
        .move_speed = 11,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_0_update),
        .reserve_tiles = 0
    }
};
