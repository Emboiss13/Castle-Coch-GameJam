.module trigger_9_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_7, _scene_7, ___bank_scene_0, _scene_0

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_trigger_9_interact = 255
.globl ___bank_trigger_9_interact

_trigger_9_interact::
        VM_LOCK

        VM_RESERVE              4

        ; Call Script: Random Chance
        VM_PUSH_CONST           VAR_RANDOM_CHANCE_VARIABLE ; Variable V0
        VM_CALL_FAR             ___bank_script_4, _script_4

        ; If Variable True
        VM_IF_CONST             .GT, VAR_RANDOM_CHANCE_VARIABLE, 0, 1$, 0
        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1280
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 1152
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_7

        VM_JUMP                 2$
1$:
        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 2176
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_0

2$:

        ; Stop Script
        VM_STOP
