#pragma bank 255

// Scene: Prisoner - Dungeon - 5
// Sprites

#include "gbs_types.h"
#include "data/sprite_friend_blinking.h"
#include "data/bg_items.h"

BANKREF(scene_4_sprites)

const far_ptr_t scene_4_sprites[] = {
    TO_FAR_PTR_T(sprite_friend_blinking),
    TO_FAR_PTR_T(bg_items)
};
