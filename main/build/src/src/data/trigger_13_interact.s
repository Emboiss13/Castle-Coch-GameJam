.module trigger_13_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_trigger_13_interact = 255
.globl ___bank_trigger_13_interact

_trigger_13_interact::
        VM_LOCK

        VM_RESERVE              4

        ; If Variable True
        VM_IF_CONST             .GT, VAR_POTION_PART_COAL_DUNGEO, 0, 1$, 0
        ; Actor Show
        VM_SET_CONST            .LOCAL_ACTOR, 2
        VM_ACTOR_SET_HIDDEN     .LOCAL_ACTOR, 0

        ; Text Dialogue
        VM_LOAD_TEXT            0
        .asciz "You found a piece\n     of coal!"
        VM_OVERLAY_CLEAR        0, 0, 20, 4, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_OVERLAY_MOVE_TO      0, 14, .OVERLAY_IN_SPEED
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_LOAD_TEXT            0
        .asciz " This can be used \nfor potion brewing"
        VM_OVERLAY_CLEAR        0, 0, 20, 4, .UI_COLOR_WHITE, ^/(.UI_AUTO_SCROLL | .UI_DRAW_FRAME)/
        VM_DISPLAY_TEXT
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT | .UI_WAIT_BTN_A)/
        VM_OVERLAY_MOVE_TO      0, 18, .OVERLAY_OUT_SPEED
        VM_OVERLAY_WAIT         .UI_MODAL, ^/(.UI_WAIT_WINDOW | .UI_WAIT_TEXT)/

        ; Actor Hide
        VM_SET_CONST            .LOCAL_ACTOR, 2
        VM_ACTOR_SET_HIDDEN     .LOCAL_ACTOR, 1

        ; Variable Set To True
        VM_SET_CONST            VAR_POTION_PART_COAL_DUNGEO, 1

        VM_JUMP                 2$
1$:
2$:

        ; Stop Script
        VM_STOP
