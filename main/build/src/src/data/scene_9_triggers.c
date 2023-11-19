#pragma bank 255

// Scene: Prisoner - Dungeon - 6
// Triggers

#include "gbs_types.h"
#include "data/trigger_9_interact.h"
#include "data/trigger_16_interact.h"

BANKREF(scene_9_triggers)

const struct trigger_t scene_9_triggers[] = {
    {
        // Use Key Trigger,
        .x = 16,
        .y = 5,
        .width = 1,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_9_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 1,
        .y = 8,
        .width = 3,
        .height = 5,
        .script = TO_FAR_PTR_T(trigger_16_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
