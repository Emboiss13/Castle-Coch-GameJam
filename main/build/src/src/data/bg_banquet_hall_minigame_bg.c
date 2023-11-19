#pragma bank 255

// Background: banquet_hall_minigame_bg

#include "gbs_types.h"
#include "data/bg_banquet_hall_minigame_bg_tileset.h"
#include "data/bg_banquet_hall_minigame_bg_tilemap.h"

BANKREF(bg_banquet_hall_minigame_bg)

const struct background_t bg_banquet_hall_minigame_bg = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_banquet_hall_minigame_bg_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_banquet_hall_minigame_bg_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
