#pragma bank 255

// Scene: Prisoner - Easter Egg Ending - Invisible Potion
// Sprites

#include "gbs_types.h"
#include "data/sprite_knight_animated.h"
#include "data/sprite_06a.h"

BANKREF(scene_11_sprites)

const far_ptr_t scene_11_sprites[] = {
    TO_FAR_PTR_T(sprite_knight_animated),
    TO_FAR_PTR_T(sprite_06a)
};
