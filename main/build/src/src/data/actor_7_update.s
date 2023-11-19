.module actor_7_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_7_update = 255
.globl ___bank_actor_7_update

_actor_7_update::
1$:
        ; Call Script: Move Guard 3 (Level 2)
        VM_PUSH_CONST           3 ; Actor 0
        VM_CALL_FAR             ___bank_script_7, _script_7

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
