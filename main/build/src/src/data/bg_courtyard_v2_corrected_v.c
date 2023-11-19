#pragma bank 255

// Background: courtyard_v2_corrected_version

#include "gbs_types.h"
#include "data/bg_courtyard_v2_corrected_v_tileset.h"
#include "data/bg_courtyard_v2_corrected_v_tilemap.h"

BANKREF(bg_courtyard_v2_corrected_v)

const struct background_t bg_courtyard_v2_corrected_v = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_courtyard_v2_corrected_v_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_courtyard_v2_corrected_v_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
