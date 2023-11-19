.module actor_38_update

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_actor_38_update = 255
.globl ___bank_actor_38_update

_actor_38_update::
        VM_RESERVE              4

1$:
        ; Actor Set Active
        VM_SET_CONST            .LOCAL_ACTOR, 4

        ; Actor Set Collisions
        VM_ACTOR_SET_COLL_ENABLED .LOCAL_ACTOR, 0

        ; Idle
        VM_IDLE

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
