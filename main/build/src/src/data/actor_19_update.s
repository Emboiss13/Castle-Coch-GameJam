.module actor_19_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_19_update = 255
.globl ___bank_actor_19_update

_actor_19_update::
1$:
        ; Call Script: Move Guard 2 (Level 4)
        VM_PUSH_CONST           4 ; Actor 0
        VM_CALL_FAR             ___bank_script_14, _script_14

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
