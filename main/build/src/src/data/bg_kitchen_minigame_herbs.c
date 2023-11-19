#pragma bank 255

// Background: kitchen_minigame_herbs

#include "gbs_types.h"
#include "data/bg_kitchen_minigame_herbs_tileset.h"
#include "data/bg_kitchen_minigame_herbs_tilemap.h"

BANKREF(bg_kitchen_minigame_herbs)

const struct background_t bg_kitchen_minigame_herbs = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_kitchen_minigame_herbs_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_kitchen_minigame_herbs_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
