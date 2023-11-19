#pragma bank 255

// Scene: Prisoner - Bedroom - 10
// Triggers

#include "gbs_types.h"
#include "data/trigger_25_interact.h"
#include "data/trigger_27_interact.h"
#include "data/trigger_12_interact.h"

BANKREF(scene_14_triggers)

const struct trigger_t scene_14_triggers[] = {
    {
        // Trigger 1,
        .x = 4,
        .y = 14,
        .width = 2,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_25_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 6,
        .y = 2,
        .width = 2,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_27_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 15,
        .y = 9,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_12_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
