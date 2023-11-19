.module script_26

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

.LOCAL_TMP0_INPUT = -1
.LOCAL_TMP1_WAIT_ARGS = -1

___bank_script_26 = 255
.globl ___bank_script_26

_script_26::
        VM_RESERVE              1

        ; Wait For Input
        VM_INPUT_WAIT           255

        ; If Input
        VM_GET_INT8             .LOCAL_TMP0_INPUT, ^/(_joypads + 1)/
        VM_RPN
            .R_REF      .LOCAL_TMP0_INPUT
            .R_INT8     16
            .R_OPERATOR .B_AND
            .R_STOP
        VM_IF_CONST             .NE, .ARG0, 0, 1$, 1

        ; Stop Script
        VM_STOP
        VM_JUMP                 2$
1$:
        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 6
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

2$:

        VM_RESERVE              -1
        VM_RET_FAR
