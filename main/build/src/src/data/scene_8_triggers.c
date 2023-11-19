#pragma bank 255

// Scene: Mini Game - Dodge Guards - 2
// Triggers

#include "gbs_types.h"
#include "data/trigger_7_interact.h"

BANKREF(scene_8_triggers)

const struct trigger_t scene_8_triggers[] = {
    {
        // Dodge Guards 2 Trigger,
        .x = 17,
        .y = 0,
        .width = 3,
        .height = 3,
        .script = TO_FAR_PTR_T(trigger_7_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
