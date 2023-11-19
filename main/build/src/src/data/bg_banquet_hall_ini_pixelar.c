#pragma bank 255

// Background: banquet_hall_ini_pixelart

#include "gbs_types.h"
#include "data/bg_banquet_hall_ini_pixelar_tileset.h"
#include "data/bg_banquet_hall_ini_pixelar_tilemap.h"

BANKREF(bg_banquet_hall_ini_pixelar)

const struct background_t bg_banquet_hall_ini_pixelar = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_banquet_hall_ini_pixelar_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_banquet_hall_ini_pixelar_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
