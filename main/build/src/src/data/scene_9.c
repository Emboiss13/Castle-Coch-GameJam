#pragma bank 255

// Scene: Prisoner - Dungeon - 6

#include "gbs_types.h"
#include "data/bg_fp_dungeonv5_no_eyes.h"
#include "data/scene_9_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_cursor.h"
#include "data/scene_9_actors.h"
#include "data/scene_9_triggers.h"
#include "data/scene_9_sprites.h"
#include "data/scene_9_init.h"

BANKREF(scene_9)

const struct scene_t scene_9 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_POINTNCLICK,
    .background = TO_FAR_PTR_T(bg_fp_dungeonv5_no_eyes),
    .collisions = TO_FAR_PTR_T(scene_9_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_cursor),
    .n_actors = 1,
    .n_triggers = 2,
    .n_sprites = 1,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_9_actors),
    .triggers = TO_FAR_PTR_T(scene_9_triggers),
    .sprites = TO_FAR_PTR_T(scene_9_sprites),
    .script_init = TO_FAR_PTR_T(scene_9_init)
};
