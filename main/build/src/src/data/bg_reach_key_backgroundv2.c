#pragma bank 255

// Background: reach_key_backgroundv2

#include "gbs_types.h"
#include "data/bg_reach_key_backgroundv2_tileset.h"
#include "data/bg_reach_key_backgroundv2_tilemap.h"

BANKREF(bg_reach_key_backgroundv2)

const struct background_t bg_reach_key_backgroundv2 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_reach_key_backgroundv2_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_reach_key_backgroundv2_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
