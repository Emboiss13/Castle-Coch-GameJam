#pragma bank 255

// Tileset: sprite_paint5_tileset

#include "gbs_types.h"

BANKREF(sprite_paint5_tileset)

const struct tileset_t sprite_paint5_tileset = {
    .n_tiles = 8,
    .tiles = {
        0x07, 0xFC, 0x03, 0xFF, 0x0F, 0xFF, 0x1F, 0xFF, 0x1F, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0x1F, 0xFF, 0x1F, 0xFF, 0x0F, 0xFF, 0x03, 0xFF, 0x07, 0xFC,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7,
        0xFF, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFE, 0xFF, 0xFE, 0xFD, 0xFF, 0xFC, 0xFF, 0xF8, 0xFF, 0xE0, 0xFF, 0xC0, 0xFF, 0xC0, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0x7F, 0xFF, 0x7F, 0xBF, 0xFF, 0x3F, 0xFF, 0x1F, 0xFF, 0x07, 0xFF, 0x03, 0xFF, 0x03, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
    }
};
