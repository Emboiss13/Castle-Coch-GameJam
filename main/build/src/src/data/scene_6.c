#pragma bank 255

// Scene: Prisoner - Easter Egg Ending - Dragon

#include "gbs_types.h"
#include "data/bg_castle_window_dragon_end.h"
#include "data/scene_6_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_player_platform.h"
#include "data/scene_6_init.h"

BANKREF(scene_6)

const struct scene_t scene_6 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_castle_window_dragon_end),
    .collisions = TO_FAR_PTR_T(scene_6_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_player_platform),
    .n_actors = 0,
    .n_triggers = 0,
    .n_sprites = 0,
    .n_projectiles = 0,
    .script_init = TO_FAR_PTR_T(scene_6_init)
};
