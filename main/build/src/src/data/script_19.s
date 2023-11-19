.module script_19

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -1

___bank_script_19 = 255
.globl ___bank_script_19

_script_19::
        VM_RESERVE              1

        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_treasure_Data, _song_treasure_Data, .MUSIC_NO_LOOP

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 54
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Music Stop
        VM_MUSIC_STOP

        VM_RESERVE              -1
        VM_RET_FAR
