.module script_16

.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl _fade_frames_per_step, ___bank_scene_9, _scene_9

.area _CODE_255

.LOCAL_ACTOR = -4

___bank_script_16 = 255
.globl ___bank_script_16

_script_16::
        VM_RESERVE              4

        ; Music Stop
        VM_MUSIC_STOP

        ; Music Play
        VM_MUSIC_PLAY           ___bank_song_failure_Data, _song_failure_Data, .MUSIC_NO_LOOP

        ; Load Scene
        VM_SET_CONST_INT8       _fade_frames_per_step, 7
        VM_FADE_OUT             1
        VM_SET_CONST            .LOCAL_ACTOR, 0
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 1)/, 1280
        VM_SET_CONST            ^/(.LOCAL_ACTOR + 2)/, 1152
        VM_ACTOR_SET_POS        .LOCAL_ACTOR
        VM_ACTOR_SET_DIR        .LOCAL_ACTOR, .DIR_DOWN
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_9

        VM_RESERVE              -4
        VM_RET_FAR
