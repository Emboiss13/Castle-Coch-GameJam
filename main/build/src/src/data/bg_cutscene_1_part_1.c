#pragma bank 255

// Background: CutScene_1_part_1

#include "gbs_types.h"
#include "data/bg_cutscene_1_part_1_tileset.h"
#include "data/bg_cutscene_1_part_1_tilemap.h"

BANKREF(bg_cutscene_1_part_1)

const struct background_t bg_cutscene_1_part_1 = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_cutscene_1_part_1_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_cutscene_1_part_1_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
