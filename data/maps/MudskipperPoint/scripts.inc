MudskipperPoint_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MudskipperPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MudskipperPoint_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call PENGUIN_EVENT
	return


ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT::
	lock
	faceplayer
	namebox ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_Text_0
	playmoncry SPECIES_PENGUIN_DISGUISE_BOX_FORM, 0
	msgbox ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_PENGUIN_DISGUISE_BOX_FORM, 30, ITEM_NONE
	dowildbattle
	compare VAR_RESULT, B_OUTCOME_WON
	goto_if_eq ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_2
	compare VAR_RESULT, B_OUTCOME_CAUGHT
	goto_if_eq ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_2
ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_1:
	end

ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_2:
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_8
	setflag FLAG_TEMP_9
	removeobject 7
	removeobject 8
	savebgm MUS_DUMMY
	fadedefaultbgm
	fadescreen FADE_FROM_BLACK
	closemessage
	goto ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_1


SIGN_MudskipperPoint::
	msgbox SIGN_MudskipperPoint_Text_0
	closemessage
	end


ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_Text_0:
	.string "Penguin$"

ENCOUNTER_PENGUIN_BARREL_MUDSKIPPER_POINT_Text_1:
	.string "Noot! Noot!$"

SIGN_MudskipperPoint_Text_0:
	.string "Mudskipper Point.\n"
	.string "Beware of Mudskippers.$"
