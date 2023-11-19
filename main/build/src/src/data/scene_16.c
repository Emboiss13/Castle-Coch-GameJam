#pragma bank 255

// Scene: Mini-Game - Collecting Herbs

#include "gbs_types.h"
#include "data/bg_kitchen_minigame_herbs.h"
#include "data/scene_16_collisions.h"
#include "data/palette_0.h"
#include "data/palette_1.h"
#include "data/sprite_bowl.h"
#include "data/scene_16_actors.h"
#include "data/scene_16_sprites.h"
#include "data/scene_16_init.h"

BANKREF(scene_16)

const struct scene_t scene_16 = {
    .width = 20,
    .height = 18,
    .type = SCENE_TYPE_TOPDOWN,
    .background = TO_FAR_PTR_T(bg_kitchen_minigame_herbs),
    .collisions = TO_FAR_PTR_T(scene_16_collisions),
    .parallax_rows = {
        PARALLAX_STEP(0,0,0)
    },
    .palette = TO_FAR_PTR_T(palette_0),
    .sprite_palette = TO_FAR_PTR_T(palette_1),
    .reserve_tiles = 0,
    .player_sprite = TO_FAR_PTR_T(sprite_bowl),
    .n_actors = 8,
    .n_triggers = 0,
    .n_sprites = 5,
    .n_projectiles = 0,
    .actors = TO_FAR_PTR_T(scene_16_actors),
    .sprites = TO_FAR_PTR_T(scene_16_sprites),
    .script_init = TO_FAR_PTR_T(scene_16_init)
};
