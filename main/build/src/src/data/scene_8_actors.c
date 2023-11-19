#pragma bank 255

// Scene: Mini Game - Dodge Guards - 2
// Actors

#include "gbs_types.h"
#include "data/sprite_knight_animated.h"
#include "data/actor_5_update.h"
#include "data/sprite_06a.h"
#include "data/actor_6_update.h"
#include "data/sprite_06a.h"
#include "data/actor_7_update.h"
#include "data/sprite_knight_animated.h"
#include "data/actor_8_update.h"
#include "data/sprite_key.h"

BANKREF(scene_8_actors)

const struct actor_t scene_8_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 16 * 16,
            .y = 104 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_knight_animated),
        .move_speed = 14,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_5_update),
        .reserve_tiles = 0
    },
    {
        // Actor 2,
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
        .sprite = TO_FAR_PTR_T(sprite_06a),
        .move_speed = 18,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_6_update),
        .reserve_tiles = 0
    },
    {
        // Actor 3,
        .pos = {
            .x = 72 * 16,
            .y = 88 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_06a),
        .move_speed = 18,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_7_update),
        .reserve_tiles = 0
    },
    {
        // Actor 4,
        .pos = {
            .x = 104 * 16,
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
        .move_speed = 14,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_8_update),
        .reserve_tiles = 0
    },
    {
        // Actor 5,
        .pos = {
            .x = 40 * 16,
            .y = 56 * 16
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
    }
};
