.module actor_18_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_18_update = 255
.globl ___bank_actor_18_update

_actor_18_update::
1$:
        ; Call Script: Move Guard 1 (Level 4)
        VM_PUSH_CONST           3 ; Actor 0
        VM_CALL_FAR             ___bank_script_13, _script_13

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
