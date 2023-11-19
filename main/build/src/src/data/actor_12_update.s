.module actor_12_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_12_update = 255
.globl ___bank_actor_12_update

_actor_12_update::
1$:
        ; Call Script: Move Guard 2 (Level 3)
        VM_PUSH_CONST           2 ; Actor 0
        VM_CALL_FAR             ___bank_script_10, _script_10

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
