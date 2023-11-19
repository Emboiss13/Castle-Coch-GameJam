.module scene_14_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step

.area _CODE_255

.LOCAL_TMP0_WAIT_ARGS = -1

___bank_scene_14_init = 255
.globl ___bank_scene_14_init

_scene_14_init::
        VM_LOCK

        VM_RESERVE              1

        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_detective_intro_Data, _song_detective_intro_Data, .MUSIC_NO_LOOP

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP0_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP0_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Call Script: combo
        VM_PUSH_CONST           VAR_DRAGON_ENDING ; Variable V0
        VM_CALL_FAR             ___bank_script_20, _script_20

        ; Stop Script
        VM_STOP
