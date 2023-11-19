#pragma bank 255

// Scene: Mini Game - Dodge Guards - 3
// Triggers

#include "gbs_types.h"
#include "data/trigger_8_interact.h"

BANKREF(scene_5_triggers)

const struct trigger_t scene_5_triggers[] = {
    {
        // Dodge Guards 3 Trigger,
        .x = 17,
        .y = 15,
        .width = 3,
        .height = 3,
        .script = TO_FAR_PTR_T(trigger_8_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
