#pragma bank 255

// Background: bedroom_pixels_2

#include "gbs_types.h"
#include "data/bg_bedroom_pixels_2_tileset.h"
#include "data/bg_bedroom_pixels_2_tilemap.h"

BANKREF(bg_bedroom_pixels_2)

const struct background_t bg_bedroom_pixels_2 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_bedroom_pixels_2_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_bedroom_pixels_2_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
