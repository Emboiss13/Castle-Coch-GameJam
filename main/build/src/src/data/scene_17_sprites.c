#pragma bank 255

// Scene: Puzzle - Rearrange - Lord Bute
// Sprites

#include "gbs_types.h"
#include "data/sprite_lord1.h"
#include "data/sprite_lord2.h"
#include "data/sprite_lord3.h"
#include "data/sprite_lord4.h"
#include "data/sprite_lord5.h"
#include "data/sprite_lord6.h"
#include "data/sprite_lord7.h"
#include "data/sprite_lord8.h"
#include "data/sprite_lord9.h"

BANKREF(scene_17_sprites)

const far_ptr_t scene_17_sprites[] = {
    TO_FAR_PTR_T(sprite_lord1),
    TO_FAR_PTR_T(sprite_lord2),
    TO_FAR_PTR_T(sprite_lord3),
    TO_FAR_PTR_T(sprite_lord4),
    TO_FAR_PTR_T(sprite_lord5),
    TO_FAR_PTR_T(sprite_lord6),
    TO_FAR_PTR_T(sprite_lord7),
    TO_FAR_PTR_T(sprite_lord8),
    TO_FAR_PTR_T(sprite_lord9)
};
