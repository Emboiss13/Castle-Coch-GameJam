.module script_20

.include "vm.i"
.include "data/game_globals.i"

.area _CODE_255

.SCRIPT_ARG_INDIRECT_0_VARIABLE = -4
.LOCAL_TMP0_VALUE_TMP = -1

___bank_script_20 = 255
.globl ___bank_script_20

_script_20::
        VM_RESERVE              1

        ; Call Script: !Up
        VM_CALL_FAR             ___bank_script_21, _script_21

        ; Call Script: !Up
        VM_CALL_FAR             ___bank_script_21, _script_21

        ; Call Script: !down 
        VM_CALL_FAR             ___bank_script_22, _script_22

        ; Call Script: !down 
        VM_CALL_FAR             ___bank_script_22, _script_22

        ; Call Script: !left
        VM_CALL_FAR             ___bank_script_23, _script_23

        ; Call Script: !right
        VM_CALL_FAR             ___bank_script_24, _script_24

        ; Call Script: !left
        VM_CALL_FAR             ___bank_script_23, _script_23

        ; Call Script: !right
        VM_CALL_FAR             ___bank_script_24, _script_24

        ; Call Script: !b
        VM_CALL_FAR             ___bank_script_25, _script_25

        ; Call Script: !a
        VM_CALL_FAR             ___bank_script_26, _script_26

        ; Variable Set To True
        VM_SET_CONST            .LOCAL_TMP0_VALUE_TMP, 1
        VM_SET_INDIRECT         .SCRIPT_ARG_INDIRECT_0_VARIABLE, .LOCAL_TMP0_VALUE_TMP

        VM_RESERVE              -1
        VM_RET_FAR_N            1
