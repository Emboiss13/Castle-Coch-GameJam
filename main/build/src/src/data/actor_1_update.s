.module actor_1_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_1_update = 255
.globl ___bank_actor_1_update

_actor_1_update::
1$:
        ; Call Script: Move Guard 1 (Level 1)
        VM_PUSH_CONST           1 ; Actor 0
        VM_CALL_FAR             ___bank_script_1, _script_1

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
