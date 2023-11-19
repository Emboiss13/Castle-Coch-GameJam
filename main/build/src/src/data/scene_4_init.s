.module scene_4_init

.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames, _fade_frames_per_step, b_camera_shake_frames, _camera_shake_frames

.area _CODE_255

.LOCAL_ACTOR = -4
.LOCAL_TMP1_WAIT_ARGS = -4
.LOCAL_TMP2_CAMERA_SHAKE_ARGS = -4

___bank_scene_4_init = 255
.globl ___bank_scene_4_init

_scene_4_init::
        VM_LOCK

        VM_RESERVE              4

        ; Music Stop
        VM_MUSIC_STOP

        ; Actor Hide
        VM_SET_CONST            .LOCAL_ACTOR, 2
        VM_ACTOR_SET_HIDDEN     .LOCAL_ACTOR, 1

        ; Wait N Frames
        VM_SET_CONST            .LOCAL_TMP1_WAIT_ARGS, 1
        VM_INVOKE               b_wait_frames, _wait_frames, 0, .LOCAL_TMP1_WAIT_ARGS

        ; Fade In
        VM_SET_CONST_INT8       _fade_frames_per_step, 1
        VM_FADE_IN              1

        ; Camera Shake
        VM_SET_CONST            .LOCAL_TMP2_CAMERA_SHAKE_ARGS, 30
        VM_SET_CONST            ^/(.LOCAL_TMP2_CAMERA_SHAKE_ARGS + 1)/, .CAMERA_SHAKE_X
        VM_INVOKE               b_camera_shake_frames, _camera_shake_frames, 0, .LOCAL_TMP2_CAMERA_SHAKE_ARGS

        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_detective_intro_Data, _song_detective_intro_Data, .MUSIC_NO_LOOP

        ; Stop Script
        VM_STOP
