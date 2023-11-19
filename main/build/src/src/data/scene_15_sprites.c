#pragma bank 255

// Scene: Mini Game - Dodge Guards - 4 
// Sprites

#include "gbs_types.h"
#include "data/sprite_06a.h"
#include "data/sprite_key.h"

BANKREF(scene_15_sprites)

const far_ptr_t scene_15_sprites[] = {
    TO_FAR_PTR_T(sprite_06a),
    TO_FAR_PTR_T(sprite_key)
};
