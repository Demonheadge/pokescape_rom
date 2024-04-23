Ungael_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Ungael_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Ungael_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Ungael_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call PORTSARIM_STATE
	return

Ungael_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_B, 0, UNGAEL_arrive
	.2byte 0


UNGAEL_STATE::
	goto_if_set FLAG_CAPTURED_VORKATH, UNGAEL_STATE_1
	return

UNGAEL_STATE_1:
	removeobject 1
	setflag FLAG_TEMP_F
	return


ENCOUNTER_VORKATH::
	lock
	delay 32
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	delay 60
	setvar VAR_0x8004, 1 @ vertical pan
	setvar VAR_0x8005, 1 @ horizontal pan
	setvar VAR_0x8006, 8 @ num shakes
	setvar VAR_0x8007, 3 @ shake delay
	special ShakeCamera
	delay 60
	applymovement 1, MOVEMENT_FACE_UP
	waitmovement 0
	delay 60
	namebox ENCOUNTER_VORKATH_Text_0
	playmoncry SPECIES_TZTOK_JAD_RS3_MEGA_FORM, 0
	msgbox ENCOUNTER_VORKATH_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 32
	setwildbattle SPECIES_VORKATH, 60, ITEM_NONE
	special BattleSetup_StartLegendaryBattle
	waitstate
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_VORKATH_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_VORKATH_3
ENCOUNTER_VORKATH_1:
	release
	end

ENCOUNTER_VORKATH_2:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_F
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	msgbox ENCOUNTER_VORKATH_Text_2
	closemessage
	goto ENCOUNTER_VORKATH_1

ENCOUNTER_VORKATH_3:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_F
	setflag FLAG_CAPTURED_VORKATH
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	msgbox ENCOUNTER_VORKATH_Text_3
	closemessage
	goto ENCOUNTER_VORKATH_1


UNGAEL_arrive::
	lock
	applymovement 1, movement_vorkath_2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_RIGHT
	applymovement 3, Common_Movement_FacePlayer
	waitmovement 0
	namebox UNGAEL_arrive_Text_0
	msgbox UNGAEL_arrive_Text_1
	closemessage
	hidenamebox
	release
	setvar VAR_TEMP_B, 1
	return


UNGAEL_Fremennik_Sailor::
	lock
	faceplayer
	namebox UNGAEL_arrive_Text_0
	msgbox UNGAEL_Fremennik_Sailor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne UNGAEL_Fremennik_Sailor_2
	msgbox UNGAEL_Fremennik_Sailor_Text_2
UNGAEL_Fremennik_Sailor_1:
	closemessage
	hidenamebox
	release
	end

UNGAEL_Fremennik_Sailor_2:
	msgbox UNGAEL_Fremennik_Sailor_Text_1
	warp MAP_RELLEKKA, 6, 0, 0
	goto UNGAEL_Fremennik_Sailor_1


MOVEMENT_BOARD_BOAT_DOWN:
	face_down
	jump_2_down
	set_invisible
	step_end

MOVEMENT_BOARD_BOAT_UP:
	face_up
	jump_2_up
	set_invisible
	step_end

movement_vorkath_2:
	lock_facing_direction
	step_end

movement_vorkath_1:
	unlock_facing_direction
	step_end

RELEKKA_Ungael_Sailor::
	lock
	faceplayer
	namebox UNGAEL_arrive_Text_0
	compare VAR_TEMP_7, 1
	goto_if_eq RELEKKA_Ungael_Sailor_2
	msgbox RELEKKA_Ungael_Sailor_Text_1
	msgbox RELEKKA_Ungael_Sailor_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RELEKKA_Ungael_Sailor_5
	msgbox RELEKKA_Ungael_Sailor_Text_4
RELEKKA_Ungael_Sailor_4:
	closemessage
	hidenamebox
	release
	end

RELEKKA_Ungael_Sailor_2:
	msgbox RELEKKA_Ungael_Sailor_Text_0
	closemessage
	hidenamebox
	release
	end

RELEKKA_Ungael_Sailor_5:
	msgbox RELEKKA_Ungael_Sailor_Text_3
	warp MAP_UNGAEL, 0, 0, 0
	goto RELEKKA_Ungael_Sailor_4


ENCOUNTER_VORKATH_Text_0:
	.string "VORKATH$"

ENCOUNTER_VORKATH_Text_1:
	.string "ROOOAAAR!$"

ENCOUNTER_VORKATH_Text_2:
	.string "Vorkath seems to have flown off.$"

ENCOUNTER_VORKATH_Text_3:
	.string "After capturing Vorkath the island\n"
	.string "goes quiet…$"

UNGAEL_arrive_Text_0:
	.string "Sailor$"

UNGAEL_arrive_Text_1:
	.string "This is Ungael.\p"
	.string "Be wary, danger lurks on this island.\p"
	.string "It's not too late to turn back.$"

UNGAEL_Fremennik_Sailor_Text_0:
	.string "Do you wish to leave this cursed place?$"

UNGAEL_Fremennik_Sailor_Text_1:
	.string "Wise choice, let us return to the\n"
	.string "mainland.$"

UNGAEL_Fremennik_Sailor_Text_2:
	.string "Be wary, danger lurks on this island.\p"
	.string "It's not too late to turn back.$"

RELEKKA_Ungael_Sailor_Text_0:
	.string "No outsiders, may not sail this vessel!$"

RELEKKA_Ungael_Sailor_Text_1:
	.string "Where would you like to set sail to?$"

RELEKKA_Ungael_Sailor_Text_2:
	.string "Do you wish to set sail to the cursed\n"
	.string "island Ungael?$"

RELEKKA_Ungael_Sailor_Text_3:
	.string "Very well, pray to your gods now as\n"
	.string "there may be no return…$"

RELEKKA_Ungael_Sailor_Text_4:
	.string "Wise choice.\p"
	.string "Ungael is a dangerous place.$"
