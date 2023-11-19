.module actor_13_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_13_update = 255
.globl ___bank_actor_13_update

_actor_13_update::
1$:
        ; Call Script: Move Guard 1 (Level 3)
        VM_PUSH_CONST           3 ; Actor 0
        VM_CALL_FAR             ___bank_script_9, _script_9

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
