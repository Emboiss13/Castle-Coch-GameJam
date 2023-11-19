#pragma bank 255

// Scene: Prisoner - Main Ending - Secret Passage
// Triggers

#include "gbs_types.h"
#include "data/trigger_26_interact.h"

BANKREF(scene_20_triggers)

const struct trigger_t scene_20_triggers[] = {
    {
        // Leave Visitor Trigger,
        .x = 76,
        .y = 7,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_26_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
