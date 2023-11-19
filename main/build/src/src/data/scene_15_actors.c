#pragma bank 255

// Scene: Mini Game - Dodge Guards - 4 
// Actors

#include "gbs_types.h"
#include "data/sprite_06a.h"
#include "data/actor_16_update.h"
#include "data/sprite_06a.h"
#include "data/actor_17_update.h"
#include "data/sprite_06a.h"
#include "data/actor_18_update.h"
#include "data/sprite_06a.h"
#include "data/actor_19_update.h"
#include "data/sprite_06a.h"
#include "data/actor_20_update.h"
#include "data/sprite_key.h"

BANKREF(scene_15_actors)

const struct actor_t scene_15_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 16 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_16_update),
        .reserve_tiles = 0
    },
    {
        // Actor 2,
        .pos = {
            .x = 48 * 16,
            .y = 24 * 16
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
        .script_update = TO_FAR_PTR_T(actor_17_update),
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
        .sprite = TO_FAR_PTR_T(sprite_06a),
        .move_speed = 18,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_1,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_18_update),
        .reserve_tiles = 0
    },
    {
        // Actor 4,
        .pos = {
            .x = 96 * 16,
            .y = 24 * 16
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
        .script_update = TO_FAR_PTR_T(actor_19_update),
        .reserve_tiles = 0
    },
    {
        // Actor 5,
        .pos = {
            .x = 128 * 16,
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
        .script_update = TO_FAR_PTR_T(actor_20_update),
        .reserve_tiles = 0
    },
    {
        // Actor 6,
        .pos = {
            .x = 16 * 16,
            .y = 16 * 16
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
