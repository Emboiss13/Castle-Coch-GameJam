#pragma bank 255

// Scene: Prisoner - Banquet Hall - 8
// Triggers

#include "gbs_types.h"
#include "data/trigger_14_interact.h"
#include "data/trigger_10_interact.h"
#include "data/trigger_22_interact.h"

BANKREF(scene_10_triggers)

const struct trigger_t scene_10_triggers[] = {
    {
        // Trigger 1,
        .x = 4,
        .y = 1,
        .width = 2,
        .height = 3,
        .script = TO_FAR_PTR_T(trigger_14_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 0,
        .y = 6,
        .width = 3,
        .height = 3,
        .script = TO_FAR_PTR_T(trigger_10_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 13,
        .y = 1,
        .width = 3,
        .height = 3,
        .script = TO_FAR_PTR_T(trigger_22_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
