#pragma bank 255

// Background: castle_window_dragon_ending

#include "gbs_types.h"
#include "data/bg_castle_window_dragon_end_tileset.h"
#include "data/bg_castle_window_dragon_end_tilemap.h"

BANKREF(bg_castle_window_dragon_end)

const struct background_t bg_castle_window_dragon_end = {
    .width = 20,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_castle_window_dragon_end_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_castle_window_dragon_end_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
