.module script_4

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -3

___bank_script_4 = 255
.globl ___bank_script_4

_script_4::
        ; Seed RNG
        VM_RANDOMIZE

        ; Variable Set To Random
        VM_RAND                 VAR_RANDOM_CHANCE_VARIABLE, 1, 5

        ; If $V0$<=4
        VM_RPN
            .R_REF_IND  .SCRIPT_ARG_INDIRECT_0_VARIABLE
            .R_INT16    4
            .R_OPERATOR .LTE
            .R_STOP
        VM_IF_CONST             .GT, .ARG0, 0, 1$, 1
        ; Variable Set To False
        VM_SET_CONST            VAR_RANDOM_CHANCE_VARIABLE, 0

        VM_JUMP                 2$
1$:
        ; Variable Set To True
        VM_SET_CONST            VAR_RANDOM_CHANCE_VARIABLE, 1

2$:

        VM_RET_FAR_N            1
