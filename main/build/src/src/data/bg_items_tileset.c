#pragma bank 255

// Tileset: bg_items_tileset

#include "gbs_types.h"

BANKREF(bg_items_tileset)

const struct tileset_t bg_items_tileset = {
    .n_tiles = 52,
    .tiles = {
        0xF0, 0xF0, 0xF8, 0xF8, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC, 0xFC,
        0xFC, 0xFC, 0xF8, 0xF8, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0x60, 0xE0, 0xF0, 0xF0,
        0xFC, 0xFF, 0xF1, 0xFF, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0xFC, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x1C, 0x1C, 0x36, 0x3E, 0xE3, 0xFF, 0x81, 0xFF, 0x00, 0xFF, 0x78, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xE1, 0xFF, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x00, 0xFF, 0xC3, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x06, 0x07, 0x04, 0x07, 0x07, 0x07, 0x7F, 0x7F,
        0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x0F, 0x0F, 0x0C, 0x0F, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F,
        0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x0F, 0x0F, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x40, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0x80, 0x80, 0x80, 0x80,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80,
        0xFC, 0x03, 0xFC, 0x03, 0xFE, 0x03, 0xFE, 0x03, 0xFE, 0x03, 0xFE, 0x07, 0xFC, 0x07, 0xFC, 0x0F,
        0x79, 0xBF, 0xE2, 0xFE, 0xFC, 0xFC, 0xF0, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF0, 0xF0, 0xA0, 0x60, 0xA0, 0x60,
        0xA0, 0x60, 0xA0, 0x60, 0xB0, 0x70, 0x8C, 0x7C, 0x02, 0xFE, 0x01, 0xFF, 0xF0, 0xCF, 0xF8, 0x07,
        0xEF, 0x30, 0xEF, 0x70, 0xCF, 0x70, 0xCF, 0x70, 0xCF, 0xF0, 0xE7, 0xF8, 0xF1, 0xFE, 0xFC, 0xFF,
        0x7E, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x0F, 0x0F, 0x0F, 0x0F, 0x07, 0x07, 0x03, 0x03, 0x03, 0x03,
        0x03, 0x03, 0x03, 0x03, 0x07, 0x07, 0x1F, 0x18, 0x3C, 0x23, 0x60, 0x5F, 0xCF, 0xBF, 0xFF, 0xB8,
        0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0,
        0xC0, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0x40, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x80,
        0x3E, 0xFE, 0xF0, 0x70, 0xE0, 0xE0, 0x80, 0x80, 0x80, 0x80, 0x8F, 0x8F, 0xD9, 0xDF, 0xF3, 0xFF,
        0xFF, 0xFF, 0xFE, 0xFE, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0xF0, 0xF8, 0x18, 0xBF, 0xFF, 0x3C, 0xDF,
        0xFE, 0x59, 0xFB, 0xFF, 0xFB, 0xE7, 0xF7, 0xEF, 0xEF, 0xFF, 0xF8, 0xE7, 0xC1, 0xFE, 0x9F, 0x7F,
        0xEF, 0xFF, 0xF8, 0xFF, 0x3F, 0x3F, 0x01, 0x01, 0x71, 0x71, 0x67, 0x7F, 0x73, 0x7F, 0x79, 0x7F,
        0x3E, 0x3F, 0x1F, 0x1F, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x0F, 0x1F, 0x18, 0x3B, 0x37, 0xFB, 0x7D,
        0xFF, 0xF3, 0x8F, 0xFF, 0xDF, 0xEF, 0xDF, 0xE7, 0xCF, 0xF3, 0x1F, 0xFB, 0xFF, 0xFD, 0xDF, 0xEE,
        0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03,
        0x07, 0x06, 0x0F, 0x0D, 0x0E, 0x0B, 0x0F, 0x0B, 0x0F, 0x0D, 0x06, 0x07, 0x03, 0x03, 0x03, 0x03,
        0x7E, 0xFE, 0x7E, 0xFE, 0x7E, 0xFE, 0x7E, 0xFE, 0x7E, 0xFE, 0x7E, 0xFE, 0x7E, 0xFE, 0x7E, 0xFE,
        0x7E, 0xFE, 0x7E, 0xFE, 0x7E, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x60, 0x60, 0xF0, 0xF0, 0xB0, 0xF0, 0xF0, 0xF0, 0xF0, 0xB0, 0xF0, 0xB0,
        0xF0, 0xF0, 0xF8, 0xB8, 0xB8, 0x78, 0x3C, 0xFC, 0x7E, 0xFE, 0x7E, 0xFE, 0x7E, 0xFE, 0x7E, 0xFE,
        0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07,
        0x04, 0x07, 0x04, 0x07, 0x04, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x03, 0x02, 0x06, 0x05, 0x04, 0x07, 0x04, 0x07, 0x04, 0x07
    }
};