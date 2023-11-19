#pragma bank 255

// Scene: Prisoner - Easter Egg Ending - Invisible Potion
// Triggers

#include "gbs_types.h"
#include "data/trigger_17_interact.h"

BANKREF(scene_11_triggers)

const struct trigger_t scene_11_triggers[] = {
    {
        // Trigger 1,
        .x = 12,
        .y = 0,
        .width = 3,
        .height = 3,
        .script = TO_FAR_PTR_T(trigger_17_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
