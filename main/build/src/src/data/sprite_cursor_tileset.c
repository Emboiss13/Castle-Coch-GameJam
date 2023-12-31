#pragma bank 255

// Tileset: sprite_cursor_tileset

#include "gbs_types.h"

BANKREF(sprite_cursor_tileset)

const struct tileset_t sprite_cursor_tileset = {
    .n_tiles = 8,
    .tiles = {
        0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0x40, 0xE0, 0x60, 0xE0, 0x20, 0xF0, 0x30,
        0x70, 0x90, 0x38, 0xD8, 0x98, 0xE8, 0xE8, 0xF8, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x01, 0x03, 0x03, 0x03, 0x02, 0x07, 0x06, 0x07, 0x04, 0x0F, 0x0C, 0x0F, 0x08, 0x1F, 0x18,
        0x1C, 0x13, 0x38, 0x37, 0x33, 0x2F, 0x2E, 0x3E, 0x38, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0xC0, 0xC0, 0xE0, 0x60, 0xF0, 0x30, 0xF8, 0x18, 0xFC, 0x0C, 0xE4, 0x1C, 0x8C, 0x7C,
        0x18, 0xF8, 0x70, 0xF0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x06, 0x06, 0x0E, 0x0C, 0x1E, 0x18, 0x3E, 0x30, 0x7E, 0x60, 0x4E, 0x70, 0x62, 0x7C,
        0x30, 0x3E, 0x1C, 0x1E, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    }
};
