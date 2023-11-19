#pragma bank 255

// Scene: Prisoner - Main Ending - Secret Passage

#include "gbs_types.h"
#include "data/bg_secret_passage_ending.h"
#include "data/scene_20_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_player_platform.h"
#include "data/scene_20_triggers.h"
#include "data/scene_20_init.h"

BANKREF(scene_20)

const struct scene_t scene_20 = {
    .width = 80,
    .height = 18,
    .type = SCENE_TYPE_PLATFORM,
    .background = TO_FAR_PTR_T(bg_secret_passage_ending),
    .collisions = TO_FAR_PTR_T(scene_20_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0, 11, 0), PARALLAX_STEP(11, 0, 0), PARALLAX_STEP(18, 0, 0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_player_platform),
    .n_actors = 0,
    .n_triggers = 1,
    .n_sprites = 0,
    .n_projectiles = 0,
    .triggers = TO_FAR_PTR_T(scene_20_triggers),
    .script_init = TO_FAR_PTR_T(scene_20_init)
};
