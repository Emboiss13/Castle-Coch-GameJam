#pragma bank 255

// Background: mini_game_bg_2

#include "gbs_types.h"
#include "data/bg_mini_game_bg_2_tileset.h"
#include "data/bg_mini_game_bg_2_tilemap.h"

BANKREF(bg_mini_game_bg_2)

const struct background_t bg_mini_game_bg_2 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_mini_game_bg_2_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_mini_game_bg_2_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
