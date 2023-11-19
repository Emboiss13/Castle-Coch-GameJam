#pragma bank 255

// Scene: Prisoner - Bedroom - 10

#include "gbs_types.h"
#include "data/bg_bedroom_pixels_2.h"
#include "data/scene_14_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_cursor.h"
#include "data/scene_14_triggers.h"
#include "data/scene_14_init.h"

BANKREF(scene_14)

const struct scene_t scene_14 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_POINTNCLICK,
    .background = TO_FAR_PTR_T(bg_bedroom_pixels_2),
    .collisions = TO_FAR_PTR_T(scene_14_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_cursor),
    .n_actors = 0,
    .n_triggers = 3,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_14_triggers),
    .script_init = TO_FAR_PTR_T(scene_14_init)
};
