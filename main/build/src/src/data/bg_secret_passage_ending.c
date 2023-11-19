#pragma bank 255

// Background: secret_passage_ending

#include "gbs_types.h"
#include "data/bg_secret_passage_ending_tileset.h"
#include "data/bg_secret_passage_ending_tilemap.h"

BANKREF(bg_secret_passage_ending)

const struct background_t bg_secret_passage_ending = {
    .width = 80,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_secret_passage_ending_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_secret_passage_ending_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
