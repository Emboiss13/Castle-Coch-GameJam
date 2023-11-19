#pragma bank 255

// Scene: Visitor - Cut Scene - 4

#include "gbs_types.h"
#include "data/bg_cutscene_1_part_2.h"
#include "data/scene_13_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_cursor.h"
#include "data/scene_13_triggers.h"
#include "data/scene_13_init.h"

BANKREF(scene_13)

const struct scene_t scene_13 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_POINTNCLICK,
    .background = TO_FAR_PTR_T(bg_cutscene_1_part_2),
    .collisions = TO_FAR_PTR_T(scene_13_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_cursor),
    .n_actors = 0,
    .n_triggers = 1,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_13_triggers),
    .script_init = TO_FAR_PTR_T(scene_13_init)
};
