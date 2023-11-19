.module actor_30_interact

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_actor_30_interact = 255
.globl ___bank_actor_30_interact

_actor_30_interact::
        VM_LOCK

        VM_RESERVE              4

        ; If Variable .EQ Value
        VM_IF_CONST             .EQ, VAR_LADY2_0, 4, 1$, 0
        ; Variable Increment By 1
        VM_RPN
            .R_REF      VAR_LADY2_0
            .R_INT8     1
            .R_OPERATOR .ADD
            .R_STOP
        VM_SET                  VAR_LADY2_0, .ARG0
        VM_POP                  1

        VM_JUMP                 2$
1$:
        ; Variable Set To False
        VM_SET_CONST            VAR_LADY2_0, 0

2$:

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 2

        ; Actor Set Direction To Variable
        VM_IF_CONST             .EQ, VAR_LADY2_0, .DIR_LEFT, 3$, 0
        VM_IF_CONST             .EQ, VAR_LADY2_0, .DIR_RIGHT, 4$, 0
        VM_IF_CONST             .EQ, VAR_LADY2_0, .DIR_UP, 5$, 0
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_JUMP                 6$
3$:
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_LEFT
        VM_JUMP                 6$
4$:
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_RIGHT
        VM_JUMP                 6$
5$:
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_UP
6$:

        ; Call Script: 
        VM_PUSH_CONST           9 ; Actor 8
        VM_PUSH_CONST           8 ; Actor 7
        VM_PUSH_CONST           7 ; Actor 6
        VM_PUSH_CONST           6 ; Actor 5
        VM_PUSH_CONST           5 ; Actor 4
        VM_PUSH_CONST           4 ; Actor 3
        VM_PUSH_CONST           3 ; Actor 2
        VM_PUSH_CONST           2 ; Actor 1
        VM_PUSH_CONST           1 ; Actor 0
        VM_CALL_FAR             ___bank_script_0, _script_0

        ; Stop Script
        VM_STOP
