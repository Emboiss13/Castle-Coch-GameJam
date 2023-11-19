#pragma bank 255

// Scene: Visitor - Cut Scene - 3
// Triggers

#include "gbs_types.h"
#include "data/trigger_11_interact.h"

BANKREF(scene_12_triggers)

const struct trigger_t scene_12_triggers[] = {
    {
        // FIrst Cutscene Trigger,
        .x = 13,
        .y = 16,
        .width = 5,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_11_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
