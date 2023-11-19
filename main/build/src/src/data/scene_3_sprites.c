#pragma bank 255

// Scene: Mini Game - Grab Key
// Sprites

#include "gbs_types.h"
#include "data/sprite_hand.h"
#include "data/sprite_key.h"

BANKREF(scene_3_sprites)

const far_ptr_t scene_3_sprites[] = {
    TO_FAR_PTR_T(sprite_hand),
    TO_FAR_PTR_T(sprite_key)
};
