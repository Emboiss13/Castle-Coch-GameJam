#pragma bank 255

// Scene: Mini Game - Dodge Guards - 2
// Sprites

#include "gbs_types.h"
#include "data/sprite_knight_animated.h"
#include "data/sprite_06a.h"
#include "data/sprite_key.h"

BANKREF(scene_8_sprites)

const far_ptr_t scene_8_sprites[] = {
    TO_FAR_PTR_T(sprite_knight_animated),
    TO_FAR_PTR_T(sprite_06a),
    TO_FAR_PTR_T(sprite_key)
};
