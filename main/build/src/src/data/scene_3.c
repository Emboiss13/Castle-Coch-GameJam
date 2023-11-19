#pragma bank 255

// Scene: Mini Game - Grab Key

#include "gbs_types.h"
#include "data/bg_reach_key_backgroundv2.h"
#include "data/scene_3_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_hand.h"
#include "data/scene_3_actors.h"
#include "data/scene_3_sprites.h"
#include "data/scene_3_init.h"

BANKREF(scene_3)

const struct scene_t scene_3 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_POINTNCLICK,
    .background = TO_FAR_PTR_T(bg_reach_key_backgroundv2),
    .collisions = TO_FAR_PTR_T(scene_3_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_hand),
    .n_actors = 2,
    .n_triggers = 0,
    .n_sprites = 2,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_3_actors),
    .sprites = TO_FAR_PTR_T(scene_3_sprites),
    .script_init = TO_FAR_PTR_T(scene_3_init)
};
