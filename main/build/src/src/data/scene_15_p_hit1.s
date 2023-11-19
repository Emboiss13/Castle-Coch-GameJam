.module scene_15_p_hit1

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.LOCAL_TMP0_PARAM0_VALUE = -4
.LOCAL_TMP1_PARAM0_VALUE = -4
.LOCAL_ACTOR = -4

___bank_scene_15_p_hit1 = 255
.globl ___bank_scene_15_p_hit1

_scene_15_p_hit1::
        VM_RESERVE              4

        ; If Parameter 0 Equals 2
        VM_GET_TLOCAL           .LOCAL_TMP0_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP0_PARAM0_VALUE, 2, 1$, 0
        VM_JUMP                 2$
1$:
        ; Call Script: Death Script
        VM_CALL_FAR             ___bank_script_16, _script_16

        ; Stop Script
        VM_STOP
2$:

        ; If Parameter 0 Equals 4
        VM_GET_TLOCAL           .LOCAL_TMP1_PARAM0_VALUE, 0
        VM_IF_CONST             .EQ, .LOCAL_TMP1_PARAM0_VALUE, 4, 3$, 0
        VM_JUMP                 4$
3$:
        ; Actor Deactivate
        VM_SET_CONST            .LOCAL_ACTOR, 6
        VM_ACTOR_DEACTIVATE     .LOCAL_ACTOR

        ; Actor Hide
        VM_SET_CONST            .LOCAL_ACTOR, 6
        VM_ACTOR_SET_HIDDEN     .LOCAL_ACTOR, 1

        ; Variable Set To True
        VM_SET_CONST            VAR_KEY_CHECK_DODGE_GUARDS__2, 1

        ; Call Script: Key - Sound Effect
        VM_CALL_FAR             ___bank_script_19, _script_19

        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_boss_fight1_Data, _song_boss_fight1_Data, .MUSIC_NO_LOOP

        ; Stop Script
        VM_STOP
4$:

        ; Stop Script
        VM_STOP
