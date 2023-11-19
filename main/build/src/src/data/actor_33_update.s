.module actor_33_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_actor_33_update = 255
.globl ___bank_actor_33_update

_actor_33_update::
        VM_RESERVE              4

1$:
        ; Call Script: Move Guard 1 (Level 5)
        VM_PUSH_CONST           1 ; Actor 0
        VM_CALL_FAR             ___bank_script_27, _script_27

        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 1

        ; Actor Set Collisions
        VM_ACTOR_SET_COLL_ENABLED .LOCAL_ACTOR, 0

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
