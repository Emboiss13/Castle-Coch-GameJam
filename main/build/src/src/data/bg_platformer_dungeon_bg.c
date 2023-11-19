#pragma bank 255

// Background: platformer_dungeon_bg

#include "gbs_types.h"
#include "data/bg_platformer_dungeon_bg_tileset.h"
#include "data/bg_platformer_dungeon_bg_tilemap.h"

BANKREF(bg_platformer_dungeon_bg)

const struct background_t bg_platformer_dungeon_bg = {
    .width = 80,
    .height = 18,
    .tileset = TO_FAR_PTR_T(bg_platformer_dungeon_bg_tileset),
    .cgb_tileset = { NULL, NULL },
    .tilemap = TO_FAR_PTR_T(bg_platformer_dungeon_bg_tilemap),
    .cgb_tilemap_attr = { NULL, NULL }
};
