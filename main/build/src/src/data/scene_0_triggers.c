#pragma bank 255

// Scene: Mini Game - Dodge Guards - 1
// Triggers

#include "gbs_types.h"
#include "data/trigger_1_interact.h"

BANKREF(scene_0_triggers)

const struct trigger_t scene_0_triggers[] = {
    {
        // Dodge Guards 1 Trigger,
        .x = 17,
        .y = 0,
        .width = 3,
        .height = 3,
        .script = TO_FAR_PTR_T(trigger_1_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
