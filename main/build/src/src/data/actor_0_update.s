.module actor_0_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_0_update = 255
.globl ___bank_actor_0_update

_actor_0_update::
1$:
        ; Call Script: Move Guard 2 (Level 1)
        VM_PUSH_CONST           4 ; Actor 0
        VM_CALL_FAR             ___bank_script_2, _script_2

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
