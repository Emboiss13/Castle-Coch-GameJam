.module script_15

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_21, _scene_21

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -8
.SCRIPT_ARG_1_ACTOR = -9
.LOCAL_ACTOR = -4
.LOCAL_TMP1_VALUE_TMP = -5

___bank_script_15 = 255
.globl ___bank_script_15

_script_15::
        VM_RESERVE              5

        ; Actor Deactivate
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_1_ACTOR
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; If Variable True
        VM_IF_CONST             .GT, VAR_BROCCOLI_CAUGHT_CHECK, 0, 1$, 0
        VM_JUMP                 2$
1$:
        ; If Variable True
        VM_IF_CONST             .GT, VAR_CABBAGE_CAUGHT_CHECK, 0, 3$, 0
        VM_JUMP                 4$
3$:
        ; If Variable True
        VM_IF_CONST             .GT, VAR_TOMATO_CAUGHT_CHECK, 0, 5$, 0
        VM_JUMP                 6$
5$:
        ; Text Dialogue
        VM_LOAD_TEXT            0
        .asciz "SUCCESS"
        VM_OVERLAY_CLEAR        0, 0, 20, 4, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 14, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; Variable Set To True
        VM_SET_CONST            VAR_KITCHEN_COMPLETE, 1

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1280
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 1152
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_21

6$:

4$:

2$:

        ; Variable Set To Random
        VM_RAND                 .LOCAL_TMP1_VALUE_TMP, 0, 20
        VM_SET_INDIRECT         .SCRIPT_ARG_INDIRECT_0_VARIABLE, .LOCAL_TMP1_VALUE_TMP

        ; Variable Set To Value
        VM_SET_CONST            VAR_TEMP_1, 2

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_1_ACTOR

        ; Actor Move To Variables
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    128
            .R_OPERATOR .MUL
            .R_REF      VAR_TEMP_1
            .R_INT16    128
            .R_OPERATOR .MUL
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 3)/, .ACTOR_ATTR_H_FIRST
        VM_ACTOR_MOVE_TO        .LOCAL_ACTOR

        VM_SET_CONST            .LOCAL_ACTOR, 0
        ; Store X Position In Variable
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    128
            .R_OPERATOR .DIV
            .R_STOP
        VM_SET                  VAR_TEMP_0, .ARG0
        VM_POP                  1

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_1_ACTOR

        ; Actor Set Animation Frame To Variable
        VM_SET                  ^/(.LOCAL_ACTOR + 1)/, VAR_TEMP_0
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

        ; Actor Activate
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_1_ACTOR
        VM_ACTOR_ACTIVATE       .LOCAL_ACTOR

        VM_RESERVE              -5
        VM_RET_FAR_N            2
