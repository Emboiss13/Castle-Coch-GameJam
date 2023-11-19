#pragma bank 255

// Scene: Mini-Game - Collecting Herbs
// Sprites

#include "gbs_types.h"
#include "data/sprite_vegetable.h"
#include "data/sprite_broccoli_check.h"
#include "data/sprite_cabbage_check.h"
#include "data/sprite_tomato_check_1.h"
#include "data/sprite_heart.h"

BANKREF(scene_16_sprites)

const far_ptr_t scene_16_sprites[] = {
    TO_FAR_PTR_T(sprite_vegetable),
    TO_FAR_PTR_T(sprite_broccoli_check),
    TO_FAR_PTR_T(sprite_cabbage_check),
    TO_FAR_PTR_T(sprite_tomato_check_1),
    TO_FAR_PTR_T(sprite_heart)
};
