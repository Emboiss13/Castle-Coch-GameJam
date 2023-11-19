#pragma bank 255

// Scene: Puzzle - Rearrange - Lady Bute
// Sprites

#include "gbs_types.h"
#include "data/sprite_paint1.h"
#include "data/sprite_paint2.h"
#include "data/sprite_paint3.h"
#include "data/sprite_paint4.h"
#include "data/sprite_paint5.h"
#include "data/sprite_paint6.h"
#include "data/sprite_paint7.h"
#include "data/sprite_paint8.h"
#include "data/sprite_paint9.h"

BANKREF(scene_19_sprites)

const far_ptr_t scene_19_sprites[] = {
    TO_FAR_PTR_T(sprite_paint1),
    TO_FAR_PTR_T(sprite_paint2),
    TO_FAR_PTR_T(sprite_paint3),
    TO_FAR_PTR_T(sprite_paint4),
    TO_FAR_PTR_T(sprite_paint5),
    TO_FAR_PTR_T(sprite_paint6),
    TO_FAR_PTR_T(sprite_paint7),
    TO_FAR_PTR_T(sprite_paint8),
    TO_FAR_PTR_T(sprite_paint9)
};
