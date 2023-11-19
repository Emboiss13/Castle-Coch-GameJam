#pragma bank 255

// Scene: Visitor - Dungeon - 2
// Triggers

#include "gbs_types.h"
#include "data/trigger_0_interact.h"

BANKREF(scene_2_triggers)

const struct trigger_t scene_2_triggers[] = {
    {
        // Leave Visitor Trigger,
        .x = 77,
        .y = 9,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_0_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
