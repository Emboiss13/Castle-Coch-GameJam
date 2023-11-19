#pragma bank 255

// Background: mini_game_bg_3

#include "gbs_types.h"
#include "data/bg_mini_game_bg_3_tileset.h"
#include "data/bg_mini_game_bg_3_tilemap.h"

BANKREF(bg_mini_game_bg_3)

const struct background_t bg_mini_game_bg_3 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_mini_game_bg_3_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_mini_game_bg_3_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
