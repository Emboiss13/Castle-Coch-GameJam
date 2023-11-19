#pragma bank 255

// Background: fp_dungeonv5_no_eyes

#include "gbs_types.h"
#include "data/bg_fp_dungeonv5_no_eyes_tileset.h"
#include "data/bg_fp_dungeonv5_no_eyes_tilemap.h"

BANKREF(bg_fp_dungeonv5_no_eyes)

const struct background_t bg_fp_dungeonv5_no_eyes = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_fp_dungeonv5_no_eyes_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_fp_dungeonv5_no_eyes_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
