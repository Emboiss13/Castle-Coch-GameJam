#pragma bank 255

// Scene: Prisoner - Kitchen - 9
// Actors

#include "gbs_types.h"
#include "data/bg_items.h"

BANKREF(scene_21_actors)

const struct actor_t scene_21_actors[] = {
    {
        // Actor 1,
        .pos = {
            .x = 80 * 16,
            .y = 72 * 16
        },
        .bounds = {
            .left = 0,
            .bottom = 7,
            .right = 15,
            .top = -8
        },
        .dir = DIR_DOWN,
        .sprite = TO_FAR_PTR_T(bg_items),
        .move_speed = 16,
        .anim_tick = 15,
        .pinned = FALSE,
        .persistent = FALSE,
        .collision_group = COLLISION_GROUP_NONE,
        .collision_enabled = TRUE,
        .reserve_tiles = 0
    }
};
