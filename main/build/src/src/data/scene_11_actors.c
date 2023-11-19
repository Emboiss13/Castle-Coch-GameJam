#pragma bank 255

// Scene: Prisoner - Easter Egg Ending - Invisible Potion
// Actors

#include "gbs_types.h"
#include "data/sprite_knight_animated.h"
#include "data/actor_33_update.h"
#include "data/sprite_06a.h"
#include "data/actor_36_update.h"
#include "data/sprite_06a.h"
#include "data/actor_37_update.h"
#include "data/sprite_06a.h"
#include "data/actor_38_update.h"

BANKREF(scene_11_actors)

const struct actor_t scene_11_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 32 * 16,
            .y = 24 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_knight_animated),
        .move_speed = 13,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_33_update),
        .reserve_tiles = 0
    },
    {
        // Actor 2,
        .pos = {
            .x = 88 * 16,
            .y = 32 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_06a),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_36_update),
        .reserve_tiles = 0
    },
    {
        // Actor 3,
        .pos = {
            .x = 112 * 16,
            .y = 32 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_06a),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_37_update),
        .reserve_tiles = 0
    },
    {
        // Actor 4,
        .pos = {
            .x = 32 * 16,
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
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script_update = TO_FAR_PTR_T(actor_38_update),
        .reserve_tiles = 0
    }
};
