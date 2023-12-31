#pragma bank 255

// Scene: Prisoner - Dungeon - 5

#include "gbs_types.h"
#include "data/bg_fp_dungeonv4_no_eyes1.h"
#include "data/scene_4_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_cursor.h"
#include "data/scene_4_actors.h"
#include "data/scene_4_triggers.h"
#include "data/scene_4_sprites.h"
#include "data/scene_4_init.h"

BANKREF(scene_4)

const struct scene_t scene_4 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_POINTNCLICK,
    .background = TO_FAR_PTR_T(bg_fp_dungeonv4_no_eyes1),
    .collisions = TO_FAR_PTR_T(scene_4_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_cursor),
    .n_actors = 2,
    .n_triggers = 4,
    .n_sprites = 2,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_4_actors),
    .triggers = TO_FAR_PTR_T(scene_4_triggers),
    .sprites = TO_FAR_PTR_T(scene_4_sprites),
    .script_init = TO_FAR_PTR_T(scene_4_init)
};
