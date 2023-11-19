#pragma bank 255

// Scene: Prisoner - Dungeon - 5
// Triggers

#include "gbs_types.h"
#include "data/trigger_5_interact.h"
#include "data/trigger_6_interact.h"
#include "data/trigger_13_interact.h"
#include "data/trigger_15_interact.h"

BANKREF(scene_4_triggers)

const struct trigger_t scene_4_triggers[] = {
    {
        // Find Key Trigger,
        .x = 13,
        .y = 8,
        .width = 2,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_5_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // No Key Trigger,
        .x = 16,
        .y = 5,
        .width = 1,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_6_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 5,
        .y = 10,
        .width = 1,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_13_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 4,
        .x = 1,
        .y = 8,
        .width = 3,
        .height = 5,
        .script = TO_FAR_PTR_T(trigger_15_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
