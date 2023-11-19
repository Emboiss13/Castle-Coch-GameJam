.module actor_15_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_15_update = 255
.globl ___bank_actor_15_update

_actor_15_update::
1$:
        ; Call Script: Move Guard 4 (Level 3)
        VM_PUSH_CONST           5 ; Actor 0
        VM_CALL_FAR             ___bank_script_12, _script_12

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
