#pragma bank 255

// Scene: Puzzle - Rearrange - Lord Bute
// Actors

#include "gbs_types.h"
#include "data/sprite_lord1.h"
#include "data/actor_58_interact.h"
#include "data/sprite_lord2.h"
#include "data/actor_59_interact.h"
#include "data/sprite_lord3.h"
#include "data/actor_60_interact.h"
#include "data/sprite_lord4.h"
#include "data/actor_61_interact.h"
#include "data/sprite_lord5.h"
#include "data/actor_62_interact.h"
#include "data/sprite_lord6.h"
#include "data/actor_63_interact.h"
#include "data/sprite_lord7.h"
#include "data/actor_64_interact.h"
#include "data/sprite_lord8.h"
#include "data/actor_65_interact.h"
#include "data/sprite_lord9.h"
#include "data/actor_66_interact.h"

BANKREF(scene_17_actors)

const struct actor_t scene_17_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 56 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_lord1),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_58_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 2,
        .pos = {
            .x = 72 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_lord2),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = TRUE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_59_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 3,
        .pos = {
            .x = 88 * 16,
            .y = 64 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_lord3),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_60_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 4,
        .pos = {
            .x = 56 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_lord4),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_61_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 5,
        .pos = {
            .x = 72 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_lord5),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_62_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 6,
        .pos = {
            .x = 88 * 16,
            .y = 80 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_lord6),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_63_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 7,
        .pos = {
            .x = 56 * 16,
            .y = 96 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_lord7),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_64_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 8,
        .pos = {
            .x = 72 * 16,
            .y = 96 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_lord8),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_65_interact),
        .reserve_tiles = 0
    },
    {
        // Actor 9,
        .pos = {
            .x = 88 * 16,
            .y = 96 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(sprite_lord9),
        .move_speed = 16,
        .anim_tick = 255,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .script = TO_FAR_PTR_T(actor_66_interact),
        .reserve_tiles = 0
    }
};
