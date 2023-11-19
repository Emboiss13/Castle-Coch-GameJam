.module actor_8_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_8_update = 255
.globl ___bank_actor_8_update

_actor_8_update::
1$:
        ; Call Script: Move Guard 2 (Level 2)
        VM_PUSH_CONST           4 ; Actor 0
        VM_CALL_FAR             ___bank_script_6, _script_6

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
