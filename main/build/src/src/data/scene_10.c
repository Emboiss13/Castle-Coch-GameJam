#pragma bank 255

// Scene: Prisoner - Banquet Hall - 8

#include "gbs_types.h"
#include "data/bg_banquet_hall_ini_pixelar.h"
#include "data/scene_10_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_cursor.h"
#include "data/scene_10_triggers.h"
#include "data/scene_10_init.h"

BANKREF(scene_10)

const struct scene_t scene_10 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_POINTNCLICK,
    .background = TO_FAR_PTR_T(bg_banquet_hall_ini_pixelar),
    .collisions = TO_FAR_PTR_T(scene_10_collisions),
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
    .triggers = TO_FAR_PTR_T(scene_10_triggers),
    .script_init = TO_FAR_PTR_T(scene_10_init)
};
