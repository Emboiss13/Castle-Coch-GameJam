.module actor_26_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_OTHER_ACTOR = -7

___bank_actor_26_update = 255
.globl ___bank_actor_26_update

_actor_26_update::
        VM_RESERVE              7

1$:
3$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 5

        ; If Actor down Relative To Actor
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_SET_CONST            .LOCAL_TMP1_OTHER_ACTOR, 0
        VM_ACTOR_GET_POS        .LOCAL_TMP1_OTHER_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_REF      ^/(.LOCAL_TMP1_OTHER_ACTOR + 2)/
            .R_OPERATOR .GT
            .R_STOP
        VM_IF_CONST             .EQ, .ARG0, 0, 4$, 1

        ; Variable Set To Random
        VM_RAND                 VAR_S14A4_LOCAL_5, 0, 17

        ; Variable Set To Value
        VM_SET_CONST            VAR_TEMP_1, 2

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 5

        ; Actor Set Position To Variables
        VM_RPN
            .R_REF      VAR_S14A4_LOCAL_5
            .R_INT16    128
            .R_OPERATOR .MUL
            .R_REF      VAR_TEMP_1
            .R_INT16    128
            .R_OPERATOR .MUL
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_ACTOR_SET_POS        .LOCAL_ACTOR

        VM_SET_CONST            .LOCAL_ACTOR, 5
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
        VM_SET_CONST            .LOCAL_ACTOR, 5

        ; Actor Set Animation Frame To Variable
        VM_SET                  ^/(.LOCAL_ACTOR + 1)/, VAR_TEMP_0
        VM_ACTOR_SET_ANIM_FRAME .LOCAL_ACTOR

        VM_JUMP                 5$
4$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 5

        ; Actor Move Relative
        VM_ACTOR_GET_POS        .LOCAL_ACTOR
        VM_RPN
            .R_REF      ^/(.LOCAL_ACTOR + 1)/
            .R_INT16    0
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_REF      ^/(.LOCAL_ACTOR + 2)/
            .R_INT16    128
            .R_OPERATOR .ADD
            .R_INT16    0
            .R_OPERATOR .MAX
            .R_STOP
        VM_SET                  ^/(.LOCAL_ACTOR + 1 - 2)/, .ARG1
        VM_SET                  ^/(.LOCAL_ACTOR + 2 - 2)/, .ARG0
        VM_POP                  2
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 3)/, 0
        VM_ACTOR_MOVE_TO        .LOCAL_ACTOR

5$:

        ; Input Script Attach
        VM_CONTEXT_PREPARE      3, ___bank_script_input_1, _script_input_1
        VM_INPUT_ATTACH         32, ^/(3 | .OVERRIDE_DEFAULT)/

        VM_JUMP                 3$
        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
