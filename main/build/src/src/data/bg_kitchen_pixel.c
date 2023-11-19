#pragma bank 255

// Background: kitchen_pixel

#include "gbs_types.h"
#include "data/bg_kitchen_pixel_tileset.h"
#include "data/bg_kitchen_pixel_tilemap.h"

BANKREF(bg_kitchen_pixel)

const struct background_t bg_kitchen_pixel = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_kitchen_pixel_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_kitchen_pixel_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
