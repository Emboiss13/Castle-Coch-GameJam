#pragma bank 255

// Background: CutScene_1_part_2

#include "gbs_types.h"
#include "data/bg_cutscene_1_part_2_tileset.h"
#include "data/bg_cutscene_1_part_2_tilemap.h"

BANKREF(bg_cutscene_1_part_2)

const struct background_t bg_cutscene_1_part_2 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_cutscene_1_part_2_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_cutscene_1_part_2_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
