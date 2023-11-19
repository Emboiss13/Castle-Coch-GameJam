#pragma bank 255

// Scene: Mini Game - Dodge Guards - 3

#include "gbs_types.h"
#include "data/bg_mini_game_bg_3.h"
#include "data/scene_5_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_hooded_figure_animat.h"
#include "data/scene_5_actors.h"
#include "data/scene_5_triggers.h"
#include "data/scene_5_sprites.h"
#include "data/scene_5_init.h"
#include "data/scene_5_p_hit1.h"

BANKREF(scene_5)

const struct scene_t scene_5 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_mini_game_bg_3),
    .collisions = TO_FAR_PTR_T(scene_5_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_hooded_figure_animat),
    .n_actors = 5,
    .n_triggers = 1,
    .n_sprites = 3,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_5_actors),
    .triggers = TO_FAR_PTR_T(scene_5_triggers),
    .sprites = TO_FAR_PTR_T(scene_5_sprites),
    .script_init = TO_FAR_PTR_T(scene_5_init),
    .script_p_hit1 = TO_FAR_PTR_T(scene_5_p_hit1)
};
