.module scene_9_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -1

___bank_scene_9_init = 255
.globl ___bank_scene_9_init

_scene_9_init::
        VM_LOCK

        VM_RESERVE              1

        ; Music Stop
        VM_MUSIC_STOP

        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_detective_intro_Data, _song_detective_intro_Data, .MUSIC_NO_LOOP

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Stop Script
        VM_STOP
