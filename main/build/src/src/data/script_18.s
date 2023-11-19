.module script_18

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_10, _scene_10

.area _CODE_255

.SCRIPT_ARG_0_ACTOR = -8
.SCRIPT_ARG_1_ACTOR = -9
.SCRIPT_ARG_2_ACTOR = -10
.SCRIPT_ARG_3_ACTOR = -11
.SCRIPT_ARG_4_ACTOR = -12
.SCRIPT_ARG_5_ACTOR = -13
.SCRIPT_ARG_6_ACTOR = -14
.SCRIPT_ARG_7_ACTOR = -15
.SCRIPT_ARG_8_ACTOR = -16
.LOCAL_ACTOR = -4
.LOCAL_TMP1_ACTOR_DIR = -5
.LOCAL_TMP2_ACTOR_DIR = -5
.LOCAL_TMP3_ACTOR_DIR = -5
.LOCAL_TMP4_ACTOR_DIR = -5
.LOCAL_TMP5_ACTOR_DIR = -5
.LOCAL_TMP6_ACTOR_DIR = -5
.LOCAL_TMP7_ACTOR_DIR = -5
.LOCAL_TMP8_ACTOR_DIR = -5
.LOCAL_TMP9_ACTOR_DIR = -5

___bank_script_18 = 255
.globl ___bank_script_18

_script_18::
        VM_RESERVE              5

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_0_ACTOR

        ; If Actor Facing Direction
        VM_ACTOR_GET_DIR        .LOCAL_ACTOR, .LOCAL_TMP1_ACTOR_DIR
        VM_IF_CONST             .NE, .LOCAL_TMP1_ACTOR_DIR, .DIR_DOWN, 1$, 0

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_1_ACTOR

        ; If Actor Facing Direction
        VM_ACTOR_GET_DIR        .LOCAL_ACTOR, .LOCAL_TMP2_ACTOR_DIR
        VM_IF_CONST             .NE, .LOCAL_TMP2_ACTOR_DIR, .DIR_RIGHT, 3$, 0

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_2_ACTOR

        ; If Actor Facing Direction
        VM_ACTOR_GET_DIR        .LOCAL_ACTOR, .LOCAL_TMP3_ACTOR_DIR
        VM_IF_CONST             .NE, .LOCAL_TMP3_ACTOR_DIR, .DIR_RIGHT, 5$, 0

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_3_ACTOR

        ; If Actor Facing Direction
        VM_ACTOR_GET_DIR        .LOCAL_ACTOR, .LOCAL_TMP4_ACTOR_DIR
        VM_IF_CONST             .NE, .LOCAL_TMP4_ACTOR_DIR, .DIR_UP, 7$, 0

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_4_ACTOR

        ; If Actor Facing Direction
        VM_ACTOR_GET_DIR        .LOCAL_ACTOR, .LOCAL_TMP5_ACTOR_DIR
        VM_IF_CONST             .NE, .LOCAL_TMP5_ACTOR_DIR, .DIR_UP, 9$, 0

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_5_ACTOR

        ; If Actor Facing Direction
        VM_ACTOR_GET_DIR        .LOCAL_ACTOR, .LOCAL_TMP6_ACTOR_DIR
        VM_IF_CONST             .NE, .LOCAL_TMP6_ACTOR_DIR, .DIR_LEFT, 11$, 0

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_6_ACTOR

        ; If Actor Facing Direction
        VM_ACTOR_GET_DIR        .LOCAL_ACTOR, .LOCAL_TMP7_ACTOR_DIR
        VM_IF_CONST             .NE, .LOCAL_TMP7_ACTOR_DIR, .DIR_DOWN, 13$, 0

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_7_ACTOR

        ; If Actor Facing Direction
        VM_ACTOR_GET_DIR        .LOCAL_ACTOR, .LOCAL_TMP8_ACTOR_DIR
        VM_IF_CONST             .NE, .LOCAL_TMP8_ACTOR_DIR, .DIR_LEFT, 15$, 0

        ; Actor Set Active
        VM_SET                  .LOCAL_ACTOR, .SCRIPT_ARG_8_ACTOR

        ; If Actor Facing Direction
        VM_ACTOR_GET_DIR        .LOCAL_ACTOR, .LOCAL_TMP9_ACTOR_DIR
        VM_IF_CONST             .NE, .LOCAL_TMP9_ACTOR_DIR, .DIR_DOWN, 17$, 0

        ; Text Dialogue
        VM_LOAD_TEXT            0
        .asciz "Success"
        VM_OVERLAY_CLEAR        0, 0, 20, 4, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 14, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; Variable Set To True
        VM_SET_CONST            VAR_PAINTING2, 1

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 3
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 0
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_10

        VM_JUMP                 18$
17$:
18$:

        VM_JUMP                 16$
15$:
16$:

        VM_JUMP                 14$
13$:
14$:

        VM_JUMP                 12$
11$:
12$:

        VM_JUMP                 10$
9$:
10$:

        VM_JUMP                 8$
7$:
8$:

        VM_JUMP                 6$
5$:
6$:

        VM_JUMP                 4$
3$:
4$:

        VM_JUMP                 2$
1$:
2$:

        VM_RESERVE              -5
        VM_RET_FAR_N            9
