#pragma bank 255

// Scene: Prisoner - Kitchen - 9
// Triggers

#include "gbs_types.h"
#include "data/trigger_28_interact.h"
#include "data/trigger_29_interact.h"
#include "data/trigger_30_interact.h"
#include "data/trigger_31_interact.h"
#include "data/trigger_32_interact.h"

BANKREF(scene_21_triggers)

const struct trigger_t scene_21_triggers[] = {
    {
        // Trigger 1,
        .x = 16,
        .y = 10,
        .width = 3,
        .height = 1,
        .script = TO_FAR_PTR_T(trigger_28_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 2,
        .x = 4,
        .y = 3,
        .width = 3,
        .height = 7,
        .script = TO_FAR_PTR_T(trigger_29_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 3,
        .x = 1,
        .y = 10,
        .width = 3,
        .height = 2,
        .script = TO_FAR_PTR_T(trigger_30_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 4,
        .x = 17,
        .y = 14,
        .width = 3,
        .height = 4,
        .script = TO_FAR_PTR_T(trigger_31_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    },
    {
        // Trigger 5,
        .x = 0,
        .y = 4,
        .width = 2,
        .height = 6,
        .script = TO_FAR_PTR_T(trigger_32_interact),
        .script_flags = TRIGGER_HAS_ENTER_SCRIPT
    }
};
