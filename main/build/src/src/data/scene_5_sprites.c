#pragma bank 255

// Scene: Mini Game - Dodge Guards - 3
// Sprites

#include "gbs_types.h"
#include "data/sprite_key.h"
#include "data/sprite_knight_animated.h"
#include "data/sprite_06a.h"

BANKREF(scene_5_sprites)

const far_ptr_t scene_5_sprites[] = {
    TO_FAR_PTR_T(sprite_key),
    TO_FAR_PTR_T(sprite_knight_animated),
    TO_FAR_PTR_T(sprite_06a)
};
