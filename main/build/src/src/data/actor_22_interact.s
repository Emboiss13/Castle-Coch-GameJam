.module actor_22_interact

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_9, _scene_9

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -4
.LOCAL_ACTOR = -4

___bank_actor_22_interact = 255
.globl ___bank_actor_22_interact

_actor_22_interact::
        VM_RESERVE              4

        ; If Parameter 0 Equals 0
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 0, 1$, 0
        VM_JUMP                 2$
1$:
        VM_SET_CONST            .LOCAL_ACTOR, 1
        ; Store Frame In Variable
        VM_ACTOR_GET_ANIM_FRAME .LOCAL_ACTOR
        VM_SET                  VAR_S14A0_LOCAL_4, ^/(.LOCAL_ACTOR + 1)/

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S14A0_LOCAL_4, 0, 3$, 0
        VM_JUMP                 4$
3$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 2

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

        ; Variable Set To True
        VM_SET_CONST            VAR_BROCCOLI_CAUGHT_CHECK, 1

4$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S14A0_LOCAL_4, 1, 5$, 0
        VM_JUMP                 6$
5$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 3

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

        ; Variable Set To True
        VM_SET_CONST            VAR_CABBAGE_CAUGHT_CHECK, 1

6$:

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_S14A0_LOCAL_4, 2, 7$, 0
        VM_JUMP                 8$
7$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 4

        ; Actor Set Animation Frame
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

        ; Variable Set To True
        VM_SET_CONST            VAR_TOMATO_CAUGHT_CHECK, 1

8$:

        ; If Variable .GT Value
        VM_IF_CONST             .GT, VAR_S14A0_LOCAL_4, 2, 9$, 0
        VM_JUMP                 10$
9$:
        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_LIVES, 3, 11$, 0
        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_LIVES, 2, 13$, 0
        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_LIVES, 1, 15$, 0
        VM_JUMP                 16$
15$:
        ; Variable Decrement By 1
        VM_RPN
            .R_REF      VAR_LIVES
            .R_INT8     1
            .R_OPERATOR .SUB
            .R_STOP
        VM_SET                  VAR_LIVES, .ARG0
        VM_POP                  1

        ; Actor Hide
        VM_SET_CONST            .LOCAL_ACTOR, 8
        VM_ACTOR_SET_HIDDEN     .LOCAL_ACTOR, 1

        ; Text Dialogue
        VM_LOAD_TEXT            0
        .asciz "GAME OVER"
        VM_OVERLAY_CLEAR        0, 0, 20, 4, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 14, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1280
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 1280
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_9

16$:

        VM_JUMP                 14$
13$:
        ; Variable Decrement By 1
        VM_RPN
            .R_REF      VAR_LIVES
            .R_INT8     1
            .R_OPERATOR .SUB
            .R_STOP
        VM_SET                  VAR_LIVES, .ARG0
        VM_POP                  1

        ; Actor Hide
        VM_SET_CONST            .LOCAL_ACTOR, 7
        VM_ACTOR_SET_HIDDEN     .LOCAL_ACTOR, 1

14$:

        VM_JUMP                 12$
11$:
        ; Variable Decrement By 1
        VM_RPN
            .R_REF      VAR_LIVES
            .R_INT8     1
            .R_OPERATOR .SUB
            .R_STOP
        VM_SET                  VAR_LIVES, .ARG0
        VM_POP                  1

        ; Actor Hide
        VM_SET_CONST            .LOCAL_ACTOR, 6
        VM_ACTOR_SET_HIDDEN     .LOCAL_ACTOR, 1

12$:

10$:

        ; Call Script: 
        VM_PUSH_CONST           1 ; Actor 0
        VM_PUSH_CONST           VAR_S14A0_LOCAL_0 ; Variable V0
        VM_CALL_FAR             ___bank_script_15, _script_15

        ; Stop Script
        VM_STOP
2$:

        ; Stop Script
        VM_STOP
