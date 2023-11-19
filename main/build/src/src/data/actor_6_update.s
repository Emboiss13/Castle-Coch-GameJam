.module actor_6_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255


___bank_actor_6_update = 255
.globl ___bank_actor_6_update

_actor_6_update::
1$:
        ; Call Script: Move Guard 4 (Level 2)
        VM_PUSH_CONST           2 ; Actor 0
        VM_CALL_FAR             ___bank_script_8, _script_8

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
