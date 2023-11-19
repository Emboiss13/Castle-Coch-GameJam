#pragma bank 255

// Scene: Mini Game - Dodge Guards - 1

#include "gbs_types.h"
#include "data/bg_mini_game_bg.h"
#include "data/scene_0_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_hooded_figure_animat.h"
#include "data/scene_0_actors.h"
#include "data/scene_0_triggers.h"
#include "data/scene_0_sprites.h"
#include "data/scene_0_init.h"
#include "data/scene_0_p_hit1.h"

BANKREF(scene_0)

const struct scene_t scene_0 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_mini_game_bg),
    .collisions = TO_FAR_PTR_T(scene_0_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_hooded_figure_animat),
    .n_actors = 4,
    .n_triggers = 1,
    .n_sprites = 2,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_0_actors),
    .triggers = TO_FAR_PTR_T(scene_0_triggers),
    .sprites = TO_FAR_PTR_T(scene_0_sprites),
    .script_init = TO_FAR_PTR_T(scene_0_init),
    .script_p_hit1 = TO_FAR_PTR_T(scene_0_p_hit1)
};
