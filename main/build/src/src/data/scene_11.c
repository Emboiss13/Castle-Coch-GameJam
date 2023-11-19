#pragma bank 255

// Scene: Prisoner - Easter Egg Ending - Invisible Potion

#include "gbs_types.h"
#include "data/bg_invisible_potion_ending.h"
#include "data/scene_11_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_hooded_figure_animat_0.h"
#include "data/scene_11_actors.h"
#include "data/scene_11_triggers.h"
#include "data/scene_11_sprites.h"
#include "data/scene_11_init.h"

BANKREF(scene_11)

const struct scene_t scene_11 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_invisible_potion_ending),
    .collisions = TO_FAR_PTR_T(scene_11_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_hooded_figure_animat_0),
    .n_actors = 4,
    .n_triggers = 1,
    .n_sprites = 2,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_11_actors),
    .triggers = TO_FAR_PTR_T(scene_11_triggers),
    .sprites = TO_FAR_PTR_T(scene_11_sprites),
    .script_init = TO_FAR_PTR_T(scene_11_init)
};
