#pragma bank 255

// Scene: Mini Game - Dodge Guards - 4 
// Triggers

#include "gbs_types.h"
#include "data/trigger_21_interact.h"

BANKREF(scene_15_triggers)

const struct trigger_t scene_15_triggers[] = {
    {
        // Trigger 1,
        .x = 18,
        .y = 5,
        .width = 2,
        .height = 3,
        .script = TO_FAR_PTR_T(trigger_21_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
