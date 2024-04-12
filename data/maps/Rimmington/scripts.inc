Rimmington_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Rimmington_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Rimmington_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	goto Rimmington_STATE
	return


Rimmington_STATE::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq Rimmington_STATE_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 110
	goto_if_ge Rimmington_STATE_2
Rimmington_STATE_1:
	switch VAR_POKESCAPE_RIMMINGTON_STATE
	case 0, Rimmington_STATE_7
	case 1, Rimmington_STATE_8
	case 2, Rimmington_STATE_9
	case 3, Rimmington_STATE_9
	case 4, Rimmington_STATE_9
	case 5, Rimmington_STATE_9
	case 6, Rimmington_STATE_9
	case 7, Rimmington_STATE_9
	case 8, Rimmington_STATE_9
	case 9, Rimmington_STATE_9
	return

Rimmington_STATE_2:
	setflag FLAG_POKESCAPE_RIMMINGTON_HAM_LOST_TIME
	removeobject 32
	goto Rimmington_STATE_1

Rimmington_STATE_7:
	setobjectxyperm 1, 22, 5
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 2, 22, 6
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	setobjectxyperm 3, 23, 6
	setobjectmovementtype 3, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm 5, 24, 6
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 4, 25, 6
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm 24, 21, 5
	setobjectmovementtype 24, MOVEMENT_TYPE_JOG_IN_PLACE_RIGHT
	setobjectxyperm 27, 19, 7
	setobjectmovementtype 27, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	setobjectxyperm 20, 20, 7
	setobjectmovementtype 20, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	setobjectxyperm 15, 23, 7
	setobjectmovementtype 15, MOVEMENT_TYPE_JOG_IN_PLACE_UP
	setobjectxyperm 25, 28, 6
	setobjectmovementtype 25, MOVEMENT_TYPE_JOG_IN_PLACE_LEFT
	setobjectxyperm 23, 29, 7
	setobjectmovementtype 23, MOVEMENT_TYPE_JOG_IN_PLACE_LEFT
	setobjectxyperm 7, 27, 8
	setobjectmovementtype 7, MOVEMENT_TYPE_LOOK_AROUND
	setobjectxyperm 6, 21, 20
	removeobject 10
	setobjectxyperm 21, 37, 17
	setobjectmovementtype 21, MOVEMENT_TYPE_LOOK_AROUND
	setflag FLAG_TEMP_2
	release
	end

Rimmington_STATE_8:
	removeobject 1
	removeobject 2
	removeobject 5
	removeobject 4
	removeobject 3
	removeobject 24
	removeobject 27
	removeobject 20
	removeobject 15
	removeobject 25
	removeobject 23
	setflag FLAG_TEMP_1
	setobjectxyperm 27, 21, 7
	setobjectmovementtype 27, MOVEMENT_TYPE_LOOK_AROUND
	release
	end

Rimmington_STATE_9:
	release
	end


ITEM_RIMMINGTON_4::
	finditem ITEM_LAMP_SPATT
	end


ITEM_RIMMINGTON_5::
	finditem ITEM_LAMP_SPATT
	end


NPC_RIMMINGTON_CustomsOfficer::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_CustomsOfficer_Text_0
	msgbox NPC_RIMMINGTON_CustomsOfficer_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_JagexMod::
	lock
	faceplayer
	random 31
	call NPC_RIMMINGTON_JagexMod_NAMES
	msgbox NPC_RIMMINGTON_JagexMod_Text_0
	hidenamebox
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 10
	setflag FLAG_TEMP_A
	delay 8
	fadescreen FADE_FROM_BLACK
	call NPC_RIMMINGTON_JagexMod_NAMES
	msgbox NPC_RIMMINGTON_JagexMod_Text_1
	hidenamebox
	closemessage
	release
	end


NPC_RIMMINGTON_JagexMod_NAMES::
	switch VAR_RESULT
	case 0, NPC_RIMMINGTON_JagexMod_NAMES_3
	case 1, NPC_RIMMINGTON_JagexMod_NAMES_4
	case 2, NPC_RIMMINGTON_JagexMod_NAMES_5
	case 3, NPC_RIMMINGTON_JagexMod_NAMES_6
	case 4, NPC_RIMMINGTON_JagexMod_NAMES_7
	case 5, NPC_RIMMINGTON_JagexMod_NAMES_8
	case 6, NPC_RIMMINGTON_JagexMod_NAMES_9
	case 7, NPC_RIMMINGTON_JagexMod_NAMES_10
	case 8, NPC_RIMMINGTON_JagexMod_NAMES_11
	case 9, NPC_RIMMINGTON_JagexMod_NAMES_12
	case 10, NPC_RIMMINGTON_JagexMod_NAMES_13
	case 11, NPC_RIMMINGTON_JagexMod_NAMES_14
	case 12, NPC_RIMMINGTON_JagexMod_NAMES_15
	case 13, NPC_RIMMINGTON_JagexMod_NAMES_16
	case 14, NPC_RIMMINGTON_JagexMod_NAMES_17
	case 15, NPC_RIMMINGTON_JagexMod_NAMES_18
	case 16, NPC_RIMMINGTON_JagexMod_NAMES_19
	case 17, NPC_RIMMINGTON_JagexMod_NAMES_20
	case 18, NPC_RIMMINGTON_JagexMod_NAMES_21
	case 19, NPC_RIMMINGTON_JagexMod_NAMES_22
	case 20, NPC_RIMMINGTON_JagexMod_NAMES_23
	case 21, NPC_RIMMINGTON_JagexMod_NAMES_24
	case 22, NPC_RIMMINGTON_JagexMod_NAMES_25
	case 23, NPC_RIMMINGTON_JagexMod_NAMES_26
	case 24, NPC_RIMMINGTON_JagexMod_NAMES_27
	case 25, NPC_RIMMINGTON_JagexMod_NAMES_28
	case 26, NPC_RIMMINGTON_JagexMod_NAMES_29
	case 27, NPC_RIMMINGTON_JagexMod_NAMES_30
	case 28, NPC_RIMMINGTON_JagexMod_NAMES_31
	case 29, NPC_RIMMINGTON_JagexMod_NAMES_32
	case 30, NPC_RIMMINGTON_JagexMod_NAMES_33
NPC_RIMMINGTON_JagexMod_NAMES_1:
	return

NPC_RIMMINGTON_JagexMod_NAMES_3:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_0
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_4:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_1
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_5:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_2
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_6:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_3
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_7:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_4
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_8:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_5
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_9:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_6
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_10:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_7
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_11:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_8
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_12:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_9
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_13:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_10
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_14:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_11
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_15:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_12
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_16:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_13
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_17:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_14
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_18:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_15
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_19:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_16
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_20:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_17
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_21:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_18
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_22:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_19
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_23:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_20
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_24:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_21
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_25:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_22
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_26:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_23
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_27:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_24
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_28:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_25
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_29:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_26
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_30:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_27
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_31:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_28
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_32:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_29
	goto NPC_RIMMINGTON_JagexMod_NAMES_1

NPC_RIMMINGTON_JagexMod_NAMES_33:
	namebox NPC_RIMMINGTON_JagexMod_NAMES_Text_30
	goto NPC_RIMMINGTON_JagexMod_NAMES_1


NPC_RIMMINGTON_PETER::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_PETER_Text_0
	msgbox NPC_RIMMINGTON_PETER_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_HAM::
	namebox NPC_RIMMINGTON_HAM_Text_0
	msgbox NPC_RIMMINGTON_HAM_Text_1
	faceplayer
	msgbox NPC_RIMMINGTON_HAM_Text_2
	hidenamebox
	closemessage
	applymovement 32, movement_ham_runtomelzars
	applymovement OBJ_EVENT_ID_PLAYER, Movement_lighthouse_ham_3
	waitmovement 32
	setflag FLAG_POKESCAPE_RIMMINGTON_HAM_LOST_TIME
	removeobject 32
	release
	end


movement_ham_runtomelzars:
	walk_faster_down
	walk_faster_right
	walk_faster_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	step_end

NPC_RIMMINGTON_GnomeBoiKevin::
	lock
	faceplayer
	checkitem ITEM_TERRORBIRD_POUCH, 1
	compare VAR_RESULT, 0
	goto_if_eq NPC_RIMMINGTON_GnomeBoiKevin_2
	namebox NPC_RIMMINGTON_GnomeBoiKevin_Text_0
	msgbox NPC_RIMMINGTON_GnomeBoiKevin_Text_3
NPC_RIMMINGTON_GnomeBoiKevin_1:
	hidenamebox
	closemessage
	release
	end

NPC_RIMMINGTON_GnomeBoiKevin_2:
	namebox NPC_RIMMINGTON_GnomeBoiKevin_Text_0
	msgbox NPC_RIMMINGTON_GnomeBoiKevin_Text_1
	hidenamebox
	giveitem ITEM_TERRORBIRD_POUCH
	namebox NPC_RIMMINGTON_GnomeBoiKevin_Text_0
	msgbox NPC_RIMMINGTON_GnomeBoiKevin_Text_2
	goto NPC_RIMMINGTON_GnomeBoiKevin_1


NPC_TERRORBIRD::
	lock
	faceplayer
	playmoncry SPECIES_WINGULL, 0
	msgbox NPC_TERRORBIRD_Text_0
	waitmoncry
	release
	end


NPC_RIMMINGTON_NPC_8::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_8_Text_0
	msgbox NPC_RIMMINGTON_NPC_8_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_9::
	lock
	faceplayer
	msgbox NPC_RIMMINGTON_NPC_9_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_10::
	lock
	applymovement 30, RIMMINGTON_ED8_FEMALE
	waitmovement 0
	namebox NPC_RIMMINGTON_NPC_10_Text_0
	msgbox NPC_RIMMINGTON_NPC_10_Text_1
	hidenamebox
	closemessage
	applymovement 29, RIMMINGTON_ED8_MALE
	waitmovement 0
	namebox NPC_RIMMINGTON_NPC_10_Text_0
	msgbox NPC_RIMMINGTON_NPC_10_Text_2
	hidenamebox
	closemessage
	applymovement 30, RIMMINGTON_ED8
	applymovement 29, RIMMINGTON_ED8
	waitmovement 0
	release
	end


RIMMINGTON_ED8_FEMALE:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

RIMMINGTON_ED8_MALE:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

RIMMINGTON_ED8:
	face_down
	step_end

NPC_RIMMINGTON_NPC_11::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_11_Text_0
	msgbox NPC_RIMMINGTON_NPC_11_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_SKIPPY::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_SKIPPY_Text_0
	msgbox NPC_RIMMINGTON_NPC_SKIPPY_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_16::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_16_Text_0
	msgbox NPC_RIMMINGTON_NPC_16_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_17::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_17_Text_0
	msgbox NPC_RIMMINGTON_NPC_17_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_18::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_18_Text_0
	msgbox NPC_RIMMINGTON_NPC_18_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_19::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_19_Text_0
	msgbox NPC_RIMMINGTON_NPC_19_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_12::
	lock
	faceplayer
	msgbox NPC_RIMMINGTON_NPC_12_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_13::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_13_Text_0
	msgbox NPC_RIMMINGTON_NPC_13_Text_1
	hidenamebox
	release
	end


RIMMINGTON_WELL::
	msgbox RIMMINGTON_WELL_Text_0
	checkitem ITEM_LANTERN, 1
	compare VAR_RESULT, 0
	goto_if_ne RIMMINGTON_WELL_2
	closemessage
	release
	end

	closemessage
	release
	end

RIMMINGTON_WELL_2:
	msgbox RIMMINGTON_WELL_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne RIMMINGTON_WELL_6
	release
	end

RIMMINGTON_WELL_6:
	msgbox RIMMINGTON_WELL_Text_2
	warp MAP_RIMMINGTON_MINES_B2F, 0, 0, 0
	closemessage
	release
	end


RIMMINGTON_HOUSE_PORTAL::
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_0
	multichoicedefault 1, 0, MULTI_POH, 0, 0
	switch VAR_RESULT
	case 0, RIMMINGTON_HOUSE_PORTAL_3
	case 1, RIMMINGTON_HOUSE_PORTAL_4
	case 2, RIMMINGTON_HOUSE_PORTAL_5
	case 3, RIMMINGTON_HOUSE_PORTAL_6
	case 4, RIMMINGTON_HOUSE_PORTAL_7
RIMMINGTON_HOUSE_PORTAL_1:
	release
	end

RIMMINGTON_HOUSE_PORTAL_3:
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_1
	goto RIMMINGTON_HOUSE_PORTAL_1

RIMMINGTON_HOUSE_PORTAL_4:
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_2
	warp MAP_POH_1, 0, 0, 0
	end

RIMMINGTON_HOUSE_PORTAL_5:
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_3
	goto RIMMINGTON_HOUSE_PORTAL_1

RIMMINGTON_HOUSE_PORTAL_6:
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_4
	goto RIMMINGTON_HOUSE_PORTAL_1

RIMMINGTON_HOUSE_PORTAL_7:
	msgbox RIMMINGTON_HOUSE_PORTAL_Text_5
	goto RIMMINGTON_HOUSE_PORTAL_1


RIMMINGTON_SIGNPOST_HOUSEPORTAL::
	msgbox RIMMINGTON_SIGNPOST_HOUSEPORTAL_Text_0
	closemessage
	end


RIMMINGTON_SIGNPOST_RIMMINGTON::
	msgbox RIMMINGTON_SIGNPOST_RIMMINGTON_Text_0
	closemessage
	end


NPC_SETVAR_RIMMINGTON::
	lock
	faceplayer
	namebox NPC_SETVAR_RIMMINGTON_Text_0
	compare VAR_POKESCAPE_RIMMINGTON_STATE, 0
	goto_if_eq NPC_SETVAR_RIMMINGTON_1
	msgbox NPC_SETVAR_RIMMINGTON_Text_2
	setvar VAR_POKESCAPE_RIMMINGTON_STATE, 0
	hidenamebox
	release
	end

NPC_SETVAR_RIMMINGTON_1:
	msgbox NPC_SETVAR_RIMMINGTON_Text_1
	setvar VAR_POKESCAPE_RIMMINGTON_STATE, 1
	hidenamebox
	release
	end


NPC_RIMMINGTON_FANBOYNOOB_1::
	namebox NPC_RIMMINGTON_FANBOYNOOB_1_Text_0
	msgbox NPC_RIMMINGTON_FANBOYNOOB_1_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_FANBOYNOOB_2::
	namebox NPC_RIMMINGTON_FANBOYNOOB_1_Text_0
	msgbox NPC_RIMMINGTON_FANBOYNOOB_2_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_FANBOYNOOB_3::
	faceplayer
	namebox NPC_RIMMINGTON_FANBOYNOOB_1_Text_0
	msgbox NPC_RIMMINGTON_FANBOYNOOB_3_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_FANBOYNOOB_4::
	faceplayer
	namebox NPC_RIMMINGTON_FANBOYNOOB_1_Text_0
	msgbox NPC_RIMMINGTON_FANBOYNOOB_4_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_RSMVer_1::
	switch VAR_POKESCAPE_RIMMINGTON_STATE
	case 0, NPC_RIMMINGTON_RSMVer_1_2
	case 1, NPC_RIMMINGTON_RSMVer_1_3
	return

NPC_RIMMINGTON_RSMVer_1_2:
	namebox NPC_RIMMINGTON_RSMVer_1_Text_0
	msgbox NPC_RIMMINGTON_RSMVer_1_Text_1
	hidenamebox
	release
	end

NPC_RIMMINGTON_RSMVer_1_3:
	lock
	faceplayer
	namebox NPC_RIMMINGTON_RSMVer_1_Text_0
	msgbox NPC_RIMMINGTON_RSMVer_1_Text_2
	hidenamebox
	release
	end


NPC_RIMMINGTON_RSMVer_2::
	namebox NPC_RIMMINGTON_RSMVer_1_Text_0
	msgbox NPC_RIMMINGTON_RSMVer_2_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_Zezima::
	namebox NPC_RIMMINGTON_Zezima_Text_0
	msgbox NPC_RIMMINGTON_Zezima_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_Boaty::
	namebox NPC_RIMMINGTON_Boaty_Text_0
	msgbox NPC_RIMMINGTON_Boaty_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_1::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_1_Text_0
	msgbox NPC_RIMMINGTON_NPC_1_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_2::
	faceplayer
	namebox NPC_RIMMINGTON_NPC_1_Text_0
	msgbox NPC_RIMMINGTON_NPC_2_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_Tehnoobshow::
	namebox NPC_RIMMINGTON_Tehnoobshow_Text_0
	msgbox NPC_RIMMINGTON_Zezima_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_DemonAndStan::
	random 17
	switch VAR_RESULT
	case 0, NPC_RIMMINGTON_DemonAndStan_3
	case 1, NPC_RIMMINGTON_DemonAndStan_4
	case 2, NPC_RIMMINGTON_DemonAndStan_5
	case 3, NPC_RIMMINGTON_DemonAndStan_6
	case 4, NPC_RIMMINGTON_DemonAndStan_7
	case 5, NPC_RIMMINGTON_DemonAndStan_8
	case 6, NPC_RIMMINGTON_DemonAndStan_9
	case 7, NPC_RIMMINGTON_DemonAndStan_10
	case 8, NPC_RIMMINGTON_DemonAndStan_11
	case 9, NPC_RIMMINGTON_DemonAndStan_12
	case 10, NPC_RIMMINGTON_DemonAndStan_13
	case 11, NPC_RIMMINGTON_DemonAndStan_14
	case 12, NPC_RIMMINGTON_DemonAndStan_15
	case 13, NPC_RIMMINGTON_DemonAndStan_16
	case 14, NPC_RIMMINGTON_DemonAndStan_17
	case 15, NPC_RIMMINGTON_DemonAndStan_18
	case 16, NPC_RIMMINGTON_DemonAndStan_19
	release
	end

NPC_RIMMINGTON_DemonAndStan_3:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_1
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_3
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_4:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_4
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_5
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_5:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_6
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_7
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_6:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_8
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_9
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_7:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_10
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_11
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_8:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_12
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_13
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_9:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_14
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_15
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_10:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_16
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_17
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_11:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_18
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_19
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_12:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_20
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_21
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_13:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_22
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_23
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_14:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_24
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_25
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_15:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_26
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_27
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_16:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_28
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_29
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_17:
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_30
	waitmovement 0
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_31
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_18:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_32
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_33
	waitmovement 0
	hidenamebox
	release
	end

NPC_RIMMINGTON_DemonAndStan_19:
	applymovement 4, MOVE_HYPERSTAN_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_0
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_34
	waitmovement 0
	applymovement 5, MOVE_DEMONHEADGE_1
	namebox NPC_RIMMINGTON_DemonAndStan_Text_2
	msgbox NPC_RIMMINGTON_DemonAndStan_Text_34
	waitmovement 0
	hidenamebox
	release
	end


MOVE_DEMONHEADGE_1:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

MOVE_HYPERSTAN_1:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

POH_HOUSE_PORTAL::
	msgbox POH_HOUSE_PORTAL_Text_0
	warp MAP_RIMMINGTON, 8, 0, 0
	release
	end


NPC_POH_ARIZRAIN::
	lock
	faceplayer
	namebox NPC_POH_ARIZRAIN_Text_0
	msgbox NPC_POH_ARIZRAIN_Text_1
	hidenamebox
	release
	end


NPC_POH_SKYTHEKID::
	lock
	faceplayer
	namebox NPC_POH_SKYTHEKID_Text_0
	msgbox NPC_POH_SKYTHEKID_Text_1
	hidenamebox
	msgbox NPC_POH_SKYTHEKID_Text_2
	release
	end


NPC_POH_CHISZLE::
	lock
	faceplayer
	namebox NPC_POH_CHISZLE_Text_0
	msgbox NPC_POH_CHISZLE_Text_1
	hidenamebox
	release
	end


NPC_POH_BUMBUM007::
	lock
	faceplayer
	namebox NPC_POH_BUMBUM007_Text_0
	msgbox NPC_POH_BUMBUM007_Text_1
	hidenamebox
	release
	end


NPC_POH_TEHNOOBSHOW::
	lock
	faceplayer
	namebox NPC_POH_TEHNOOBSHOW_Text_0
	msgbox NPC_POH_TEHNOOBSHOW_Text_1
	hidenamebox
	release
	end


NPC_POH_GONTHORIAN::
	lock
	faceplayer
	namebox NPC_POH_GONTHORIAN_Text_0
	msgbox NPC_POH_GONTHORIAN_Text_1
	hidenamebox
	release
	end


NPC_POH_ZEZIMA::
	lock
	faceplayer
	namebox NPC_POH_ZEZIMA_Text_0
	msgbox NPC_RIMMINGTON_Zezima_Text_1
	hidenamebox
	release
	end


NPC_POH_EXCL::
	lock
	faceplayer
	namebox NPC_POH_EXCL_Text_0
	msgbox NPC_POH_EXCL_Text_1
	hidenamebox
	release
	end


NPC_POH_CURSEDYOU::
	lock
	faceplayer
	namebox NPC_POH_CURSEDYOU_Text_0
	msgbox NPC_POH_CURSEDYOU_Text_1
	hidenamebox
	release
	end


NPC_POH_MONK::
	lock
	faceplayer
	namebox NPC_POH_MONK_Text_0
	msgbox NPC_POH_MONK_Text_1
	hidenamebox
	release
	end


NPC_POH_FIREMAKER::
	lock
	faceplayer
	namebox NPC_POH_FIREMAKER_Text_0
	msgbox NPC_POH_FIREMAKER_Text_1
	hidenamebox
	release
	end


NPC_POH_BUTLER::
	lock
	faceplayer
	namebox NPC_POH_BUTLER_Text_0
	msgbox NPC_POH_BUTLER_Text_1
	hidenamebox
	release
	end


NPC_POH_JMOD::
	lock
	faceplayer
	namebox NPC_POH_JMOD_Text_0
	msgbox NPC_POH_JMOD_Text_1
	hidenamebox
	release
	end


NPC_POH_RAPTOR::
	lock
	faceplayer
	namebox NPC_POH_RAPTOR_Text_0
	msgbox NPC_POH_RAPTOR_Text_1
	giveitem ITEM_PICKAXE, 1
	msgbox NPC_POH_RAPTOR_Text_2
	hidenamebox
	release
	end


ITEM_RIMMINGTON_1::
	finditem ITEM_CAKE
	end


ITEM_RIMMINGTON_2::
	finditem ITEM_POTION_SPEED
	end


ITEM_RIMMINGTON_3::
	finditem ITEM_LAMP_SPATT
	end


NPC_RIMMINGTON_NPC_14::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_14_Text_0
	msgbox NPC_RIMMINGTON_NPC_14_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_15::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_15_Text_0
	msgbox NPC_RIMMINGTON_NPC_15_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_3::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_3_Text_0
	msgbox NPC_RIMMINGTON_NPC_3_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_BONES::
	lock
	msgbox NPC_RIMMINGTON_BONES_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_4::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_4_Text_0
	msgbox NPC_RIMMINGTON_NPC_4_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_5::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_11_Text_0
	msgbox NPC_RIMMINGTON_NPC_5_Text_0
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_6::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_6_Text_0
	msgbox NPC_RIMMINGTON_NPC_6_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_NPC_7::
	lock
	faceplayer
	namebox NPC_RIMMINGTON_NPC_7_Text_0
	msgbox NPC_RIMMINGTON_NPC_7_Text_1
	hidenamebox
	release
	end


NPC_Hanannie::
	lock
	faceplayer
	namebox NPC_Hanannie_Text_0
	msgbox NPC_Hanannie_Text_1
	hidenamebox
	release
	end


NPC_RIMMINGTON_CustomsOfficer_Text_0:
	.string "Officer$"

NPC_RIMMINGTON_CustomsOfficer_Text_1:
	.string "Behave yourself otherwise I will take\n"
	.string "you to Rock Island Prison.\p"
	.string "You don't want to go to Rock Island\n"
	.string "Prison.$"

NPC_RIMMINGTON_JagexMod_Text_0:
	.string "I am a ninja!\p"
	.string "Now you see me.$"

NPC_RIMMINGTON_JagexMod_Text_1:
	.string "Now you don't…$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_0:
	.string "Mod Dorn$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_1:
	.string "Mod Abe$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_2:
	.string "Mod AoB$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_3:
	.string "Mod Breezy$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_4:
	.string "Mod Canine$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_5:
	.string "Mod Chaose$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_6:
	.string "Mod Chaplain$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_7:
	.string "Mod Doctor$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_8:
	.string "Mod Edge$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_9:
	.string "Mod Erator$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_10:
	.string "Mod Frosch$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_11:
	.string "Mod Halo$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_12:
	.string "Mod Harrison$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_13:
	.string "Mod Hing$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_14:
	.string "Mod Hunter$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_15:
	.string "Mod Iago$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_16:
	.string "Mod Kalaya$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_17:
	.string "Mod Kari$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_18:
	.string "Mod Kelpie$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_19:
	.string "Mod Kylar$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_20:
	.string "Mod Lab$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_21:
	.string "Mod Labcoat$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_22:
	.string "Mod Liam$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_23:
	.string "Mod Maylea$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_24:
	.string "Mod Pi$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_25:
	.string "Mod Ramen$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_26:
	.string "Mod Ryan$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_27:
	.string "Mod Shogun$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_28:
	.string "Mod Stu$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_29:
	.string "Mod Tomb$"

NPC_RIMMINGTON_JagexMod_NAMES_Text_30:
	.string "Mod Veda$"

NPC_RIMMINGTON_PETER_Text_0:
	.string "Peter$"

NPC_RIMMINGTON_PETER_Text_1:
	.string "There are a lot of slushing noises\n"
	.string "coming from the bottom of that well.\p"
	.string "Someone should take a look.$"

NPC_RIMMINGTON_HAM_Text_0:
	.string "H.A.M Fan$"

NPC_RIMMINGTON_HAM_Text_1:
	.string "Hey can you sign my robes??\p"
	.string "I'm a huge fan!$"

NPC_RIMMINGTON_HAM_Text_2:
	.string "Huh who are you?\p"
	.string "OMG!\n"
	.string "Is that the time?!\p"
	.string "I was meant to meet up with the group\n"
	.string "at that spooky old building ages ago!$"

NPC_RIMMINGTON_GnomeBoiKevin_Text_0:
	.string "Kevin$"

NPC_RIMMINGTON_GnomeBoiKevin_Text_1:
	.string "Hiya!\p"
	.string "I am Little GnomeBoi Kevin!\p"
	.string "You look exhausted, where did you come\n"
	.string "from?\p"
	.string "…{PAUSE 15}… LUMBRIDGE!?\p"
	.string "This will not do!\p"
	.string "Here take this!$"

NPC_RIMMINGTON_GnomeBoiKevin_Text_2:
	.string "You can use that pouch to summon a\n"
	.string "lightning blue fast Terrorbird!\p"
	.string "…{PAUSE 15}…{PAUSE 15} NO!\p"
	.string "Don't use it in battle.\n"
	.string "You ride it!\p"
	.string "It will help you travel the land of\n"
	.string "Gielinor.\p"
	.string "It is my gift to you.\p"
	.string "All I ask in return is for you to treat it\n"
	.string "well.$"

NPC_RIMMINGTON_GnomeBoiKevin_Text_3:
	.string "Terrorbirds are great to get around\n"
	.string "with!$"

NPC_TERRORBIRD_Text_0:
	.string "SKREEEE!$"

NPC_RIMMINGTON_NPC_8_Text_0:
	.string "Taria$"

NPC_RIMMINGTON_NPC_8_Text_1:
	.string "Have you heard the rumours of a really\n"
	.string "strong monster in the Rimmington\l"
	.string "Mines?$"

NPC_RIMMINGTON_NPC_9_Text_0:
	.string "You can not always run from your\n"
	.string "problems.\p"
	.string "Running near others will make them spot\n"
	.string "you easier.\p"
	.string "Be careful if you do not want a fight.$"

NPC_RIMMINGTON_NPC_10_Text_0:
	.string "EDater$"

NPC_RIMMINGTON_NPC_10_Text_1:
	.string "Honey whats your favorite Elite\n"
	.string "Dungeon?$"

NPC_RIMMINGTON_NPC_10_Text_2:
	.string "ED8.$"

NPC_RIMMINGTON_NPC_11_Text_0:
	.string "CUPHOLDER$"

NPC_RIMMINGTON_NPC_SKIPPY_Text_0:
	.string "Skippy$"

NPC_RIMMINGTON_NPC_SKIPPY_Text_1:
	.string "The Mudskippers!$"

NPC_RIMMINGTON_NPC_16_Text_0:
	.string "Hetty$"

NPC_RIMMINGTON_NPC_16_Text_1:
	.string "Newts?\p"
	.string "No I don't have any why do you ask?$"

NPC_RIMMINGTON_NPC_17_Text_0:
	.string "Chancey$"

NPC_RIMMINGTON_NPC_17_Text_1:
	.string "Leave me alone, I am trying to gamble\n"
	.string "with my buddies.\p"
	.string "Talk to me in a members world.$"

NPC_RIMMINGTON_NPC_18_Text_0:
	.string "Hops$"

NPC_RIMMINGTON_NPC_18_Text_1:
	.string "It is a dreadful world we live in.$"

NPC_RIMMINGTON_NPC_19_Text_0:
	.string "Da Vinci$"

NPC_RIMMINGTON_NPC_19_Text_1:
	.string "The chemist is close by here.\p"
	.string "Be careful or you might get blown up.$"

NPC_RIMMINGTON_NPC_12_Text_0:
	.string "If you ever need anything unnoted I am\n"
	.string "your guy!$"

NPC_RIMMINGTON_NPC_13_Text_0:
	.string "Assistant$"

NPC_RIMMINGTON_NPC_13_Text_1:
	.string "Oh no!\p"
	.string "We have almost run out of our supply of\n"
	.string "bread for this month!$"

RIMMINGTON_WELL_Text_0:
	.string "It is a well.\p"
	.string "It looks really dark down there.$"

RIMMINGTON_WELL_Text_1:
	.string "Would you like to climb into the well?$"

RIMMINGTON_WELL_Text_2:
	.string "You climb down the well.$"

RIMMINGTON_HOUSE_PORTAL_Text_0:
	.string "It is a House Portal.\p"
	.string "Which house would you like to go to?$"

RIMMINGTON_HOUSE_PORTAL_Text_1:
	.string "Going to your house.$"

RIMMINGTON_HOUSE_PORTAL_Text_2:
	.string "Going to Cursed You's House.$"

RIMMINGTON_HOUSE_PORTAL_Text_3:
	.string "Going to FaladorEvent House.$"

RIMMINGTON_HOUSE_PORTAL_Text_4:
	.string "Thoks house is located in Relleka.$"

RIMMINGTON_HOUSE_PORTAL_Text_5:
	.string "You have no friends.$"

RIMMINGTON_SIGNPOST_HOUSEPORTAL_Text_0:
	.string "Rimmington House Portal.$"

RIMMINGTON_SIGNPOST_RIMMINGTON_Text_0:
	.string "Rimmington, known for it's famous house\n"
	.string "parties.$"

NPC_SETVAR_RIMMINGTON_Text_0:
	.string "RIMMINGTON VAR$"

NPC_SETVAR_RIMMINGTON_Text_1:
	.string "This is a test script for the Rimmington\n"
	.string "Event.\p"
	.string "THE VAR IS NOW SET TO 1$"

NPC_SETVAR_RIMMINGTON_Text_2:
	.string "This is a test script for the Rimmington\n"
	.string "Event.\p"
	.string "THE VAR IS NOW SET TO 0$"

NPC_RIMMINGTON_FANBOYNOOB_1_Text_0:
	.string "FAN NOOB$"

NPC_RIMMINGTON_FANBOYNOOB_1_Text_1:
	.string "OMG!\p"
	.string "OMG!\p"
	.string "OMG!\p"
	.string "OMG!\p"
	.string "OMG!\p"
	.string "OMG! OMG! OMG!\n"
	.string "OMG! OMG! OMG!\p"
	.string "OH EMM GEEE!!\p"
	.string "OH MY GOD!!\p"
	.string "It's Tehnoobshow!!!!\p"
	.string "Sign my everything!$"

NPC_RIMMINGTON_FANBOYNOOB_2_Text_0:
	.string "Hi Zezima!\p"
	.string "Hey Zezima!\p"
	.string "ZEEEZZZIIIIMAAA!\p"
	.string "ADD ME PLS!!!$"

NPC_RIMMINGTON_FANBOYNOOB_3_Text_0:
	.string "They say the house of Zezima has a\n"
	.string "golden statue spewing chocolate we\l"
	.string "cant eat because we are not maxed.$"

NPC_RIMMINGTON_FANBOYNOOB_4_Text_0:
	.string "I wonder what the house of someone\n"
	.string "with 99 construction looks like!$"

NPC_RIMMINGTON_RSMVer_1_Text_0:
	.string "RSMVer$"

NPC_RIMMINGTON_RSMVer_1_Text_1:
	.string "What should our next RSMV be about?$"

NPC_RIMMINGTON_RSMVer_1_Text_2:
	.string "Does anyone have an open altar?$"

NPC_RIMMINGTON_RSMVer_2_Text_0:
	.string "House parties are hype!!$"

NPC_RIMMINGTON_Zezima_Text_0:
	.string "Zezima$"

NPC_RIMMINGTON_Zezima_Text_1:
	.string "…$"

NPC_RIMMINGTON_Boaty_Text_0:
	.string "Boaty$"

NPC_RIMMINGTON_Boaty_Text_1:
	.string "This is such an xp waste.$"

NPC_RIMMINGTON_NPC_1_Text_0:
	.string "Man$"

NPC_RIMMINGTON_NPC_1_Text_1:
	.string "Occasionally Gielinorian celebrities\n"
	.string "host house parties here.\p"
	.string "Rimmington goes from a quiet little\n"
	.string "town to being louder than the Falador\l"
	.string "party room.$"

NPC_RIMMINGTON_NPC_2_Text_0:
	.string "I just want to train construction, why\n"
	.string "is there a line?$"

NPC_RIMMINGTON_Tehnoobshow_Text_0:
	.string "Tehnoobshow$"

NPC_RIMMINGTON_DemonAndStan_Text_0:
	.string "Hyper Stan$"

NPC_RIMMINGTON_DemonAndStan_Text_1:
	.string "Do you think there will be cupholders?$"

NPC_RIMMINGTON_DemonAndStan_Text_2:
	.string "Demonheadge$"

NPC_RIMMINGTON_DemonAndStan_Text_3:
	.string "For the last time Stan, YES!$"

NPC_RIMMINGTON_DemonAndStan_Text_4:
	.string "Was frogeel invited?$"

NPC_RIMMINGTON_DemonAndStan_Text_5:
	.string "Its not Friday today.$"

NPC_RIMMINGTON_DemonAndStan_Text_6:
	.string "Where is Orchy and Lukien?$"

NPC_RIMMINGTON_DemonAndStan_Text_7:
	.string "Fishing.$"

NPC_RIMMINGTON_DemonAndStan_Text_8:
	.string "Do you use a special dry cleaning for\n"
	.string "your hat or-?$"

NPC_RIMMINGTON_DemonAndStan_Text_9:
	.string "Lets not have this conversation here\n"
	.string "man.$"

NPC_RIMMINGTON_DemonAndStan_Text_10:
	.string "Ok so tell me again the steps for the\n"
	.string "plan to kidnap zezimas cat…$"

NPC_RIMMINGTON_DemonAndStan_Text_11:
	.string "SHHHHH people are listening!$"

NPC_RIMMINGTON_DemonAndStan_Text_12:
	.string "Why are we standing in line? I am a\n"
	.string "celebrity!$"

NPC_RIMMINGTON_DemonAndStan_Text_13:
	.string "Mickey we dont even qualify as celery…$"

NPC_RIMMINGTON_DemonAndStan_Text_14:
	.string "Follow me on Twitter!$"

NPC_RIMMINGTON_DemonAndStan_Text_15:
	.string "The app or the bird?$"

NPC_RIMMINGTON_DemonAndStan_Text_16:
	.string "How long must we wait?$"

NPC_RIMMINGTON_DemonAndStan_Text_17:
	.string "With our dev time?\p"
	.string "SOON TM by my estimate.$"

NPC_RIMMINGTON_DemonAndStan_Text_18:
	.string "How are you handling the wait in the\n"
	.string "line so far?$"

NPC_RIMMINGTON_DemonAndStan_Text_19:
	.string "Made 15 sprites and a very bad dialogue\n"
	.string "joke.$"

NPC_RIMMINGTON_DemonAndStan_Text_20:
	.string "I hate lines!$"

NPC_RIMMINGTON_DemonAndStan_Text_21:
	.string "You prefer curves?$"

NPC_RIMMINGTON_DemonAndStan_Text_22:
	.string "What is with all the noobs?$"

NPC_RIMMINGTON_DemonAndStan_Text_23:
	.string "They can smell success.$"

NPC_RIMMINGTON_DemonAndStan_Text_24:
	.string "Oh no, was this a hatless party?$"

NPC_RIMMINGTON_DemonAndStan_Text_25:
	.string "No!!\p"
	.string "Without our hats we have no identity.$"

NPC_RIMMINGTON_DemonAndStan_Text_26:
	.string "Why is this taking so long?$"

NPC_RIMMINGTON_DemonAndStan_Text_27:
	.string "Zezima forgot his house key.$"

NPC_RIMMINGTON_DemonAndStan_Text_28:
	.string "Did that guy sneak in line?$"

NPC_RIMMINGTON_DemonAndStan_Text_29:
	.string "You are antagonising the world again\n"
	.string "Stan…$"

NPC_RIMMINGTON_DemonAndStan_Text_30:
	.string "Hey Stan, when do you think we should\n"
	.string "make a cameo for ourselves?\p"
	.string "Is it fair to even cameo in your own\n"
	.string "game?$"

NPC_RIMMINGTON_DemonAndStan_Text_31:
	.string "No Demon, it is not.\p"
	.string "But now seems like the right time.$"

NPC_RIMMINGTON_DemonAndStan_Text_32:
	.string "Shouldn't you be coding?$"

NPC_RIMMINGTON_DemonAndStan_Text_33:
	.string "Shouldn't you be pixelling?!$"

NPC_RIMMINGTON_DemonAndStan_Text_34:
	.string "Nice hat!$"

POH_HOUSE_PORTAL_Text_0:
	.string "Now leaving the house.$"

NPC_POH_ARIZRAIN_Text_0:
	.string "ARIZRAIN$"

NPC_POH_ARIZRAIN_Text_1:
	.string "I enjoy making RSMVs.$"

NPC_POH_SKYTHEKID_Text_0:
	.string "SKYTHEKID$"

NPC_POH_SKYTHEKID_Text_1:
	.string "Awhwahegl.$"

NPC_POH_SKYTHEKID_Text_2:
	.string "He seems to be making weird noises and\n"
	.string "pulling faces.$"

NPC_POH_CHISZLE_Text_0:
	.string "CHISZLE$"

NPC_POH_CHISZLE_Text_1:
	.string "Yo mamma so fwat that she bigger than\n"
	.string "an elder god.$"

NPC_POH_BUMBUM007_Text_0:
	.string "BUMBUM007$"

NPC_POH_BUMBUM007_Text_1:
	.string "Have you seen Runway2020?\p"
	.string "I need him for the next runefactor.$"

NPC_POH_TEHNOOBSHOW_Text_0:
	.string "TEHNOOBSHOW$"

NPC_POH_TEHNOOBSHOW_Text_1:
	.string "So for the next episode I need you to……$"

NPC_POH_GONTHORIAN_Text_0:
	.string "GONTHORIAN$"

NPC_POH_GONTHORIAN_Text_1:
	.string "I like goldfish crackers.$"

NPC_POH_ZEZIMA_Text_0:
	.string "ZEZIMA$"

NPC_POH_EXCL_Text_0:
	.string "EXCL$"

NPC_POH_EXCL_Text_1:
	.string "Quest capes are too hard to maintain…\p"
	.string "I need a new outfit.$"

NPC_POH_CURSEDYOU_Text_0:
	.string "CURSED YOU$"

NPC_POH_CURSEDYOU_Text_1:
	.string "Wow there are way too many of you!\p"
	.string "I might have to start kicking people\n"
	.string "from my house soon.$"

NPC_POH_MONK_Text_0:
	.string "MONK$"

NPC_POH_MONK_Text_1:
	.string "5036\p"
	.string "5037\p"
	.string "5038\p"
	.string "How many more Dragon Bones til level\n"
	.string "99…$"

NPC_POH_FIREMAKER_Text_0:
	.string "FIREMAKER$"

NPC_POH_FIREMAKER_Text_1:
	.string "I am getting payed 25k an hour!\p"
	.string "This is great money!$"

NPC_POH_BUTLER_Text_0:
	.string "BUTLER$"

NPC_POH_BUTLER_Text_1:
	.string "I don't think I am getting paid nearly\n"
	.string "enough to serve all of these people.$"

NPC_POH_JMOD_Text_0:
	.string "Mod Meadows$"

NPC_POH_JMOD_Text_1:
	.string "I heard that there was something\n"
	.string "sketchy that might be going down soon,\l"
	.string "so I am on the look out.$"

NPC_POH_RAPTOR_Text_0:
	.string "RAPTOR$"

NPC_POH_RAPTOR_Text_1:
	.string "Hey you came!\p"
	.string "Here I have something for you!$"

NPC_POH_RAPTOR_Text_2:
	.string "With this you can mine rocks.$"

NPC_RIMMINGTON_NPC_14_Text_0:
	.string "Hengels$"

NPC_RIMMINGTON_NPC_14_Text_1:
	.string "Why did we even move here, the\n"
	.string "neighbours are so noisy.$"

NPC_RIMMINGTON_NPC_15_Text_0:
	.string "Anja$"

NPC_RIMMINGTON_NPC_15_Text_1:
	.string "My husband loves fishing, that is why we\n"
	.string "moved here from Falador.$"

NPC_RIMMINGTON_NPC_3_Text_0:
	.string "CHEMIST$"

NPC_RIMMINGTON_NPC_3_Text_1:
	.string "Welcome to my lab.\p"
	.string "Do you need any medicine?$"

NPC_RIMMINGTON_BONES_Text_0:
	.string "Yuck!\p"
	.string "It is a pile of Bones.$"

NPC_RIMMINGTON_NPC_4_Text_0:
	.string "ROMMIK$"

NPC_RIMMINGTON_NPC_4_Text_1:
	.string "Welcome to my clothing store.\p"
	.string "Would you like to change your outfit?$"

NPC_RIMMINGTON_NPC_5_Text_0:
	.string "I want to buy a skillcape, but I\n"
	.string "apparently don't have the level to wear\l"
	.string "it.$"

NPC_RIMMINGTON_NPC_6_Text_0:
	.string "BRIAN$"

NPC_RIMMINGTON_NPC_6_Text_1:
	.string "I'm all out of wood to fletch.$"

NPC_RIMMINGTON_NPC_7_Text_0:
	.string "OFFICER$"

NPC_RIMMINGTON_NPC_7_Text_1:
	.string "Don't steal another adventurers\n"
	.string "monsters.\p"
	.string "Otherwise you will be shipped off to\n"
	.string "Rock Prison Island.$"

NPC_Hanannie_Text_0:
	.string "Hanannie$"

NPC_Hanannie_Text_1:
	.string "Hahahahahahahaa!!\p"
	.string "Hello Chat!\p"
	.string "Did you know Woodcutting is the best\n"
	.string "skill ever?$"
