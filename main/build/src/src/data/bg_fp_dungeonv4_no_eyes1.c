#pragma bank 255

// Background: fp_dungeonv4_no_eyes1

#include "gbs_types.h"
#include "data/bg_fp_dungeonv4_no_eyes1_tileset.h"
#include "data/bg_fp_dungeonv4_no_eyes1_tilemap.h"

BANKREF(bg_fp_dungeonv4_no_eyes1)

const struct background_t bg_fp_dungeonv4_no_eyes1 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_fp_dungeonv4_no_eyes1_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_fp_dungeonv4_no_eyes1_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
