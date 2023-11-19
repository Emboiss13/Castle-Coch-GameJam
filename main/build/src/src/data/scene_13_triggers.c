#pragma bank 255

// Scene: Visitor - Cut Scene - 4
// Triggers

#include "gbs_types.h"
#include "data/trigger_20_interact.h"

BANKREF(scene_13_triggers)

const struct trigger_t scene_13_triggers[] = {
    {
        // FIrst Cutscene Trigger,
        .x = 14,
        .y = 16,
        .width = 5,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_20_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
