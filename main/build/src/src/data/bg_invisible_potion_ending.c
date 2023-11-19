#pragma bank 255

// Background: invisible_potion_ending

#include "gbs_types.h"
#include "data/bg_invisible_potion_ending_tileset.h"
#include "data/bg_invisible_potion_ending_tilemap.h"

BANKREF(bg_invisible_potion_ending)

const struct background_t bg_invisible_potion_ending = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_invisible_potion_ending_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_invisible_potion_ending_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
