#pragma bank 255

// Scene: Prisoner - Courtyard - 7
// Triggers

#include "gbs_types.h"
#include "data/trigger_2_interact.h"
#include "data/trigger_3_interact.h"
#include "data/trigger_4_interact.h"
#include "data/trigger_23_interact.h"

BANKREF(scene_7_triggers)

const struct trigger_t scene_7_triggers[] = {
    {
        // Banquet Hall Door Trigger,
        .x = 2,
        .y = 5,
        .width = 4,
        .height = 6,
        .script = TO_FAR_PTR_T(trigger_2_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Armoury Door Trigger,
        .x = 8,
        .y = 5,
        .width = 4,
        .height = 6,
        .script = TO_FAR_PTR_T(trigger_3_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Pantry Door Trigger,
        .x = 14,
        .y = 5,
        .width = 4,
        .height = 6,
        .script = TO_FAR_PTR_T(trigger_4_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Riddle ,
        .x = 1,
        .y = 0,
        .width = 18,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_23_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
