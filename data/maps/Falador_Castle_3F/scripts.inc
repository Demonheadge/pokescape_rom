Falador_Castle_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto FALADORCASTLE_3F_STATE
	return

Falador_Castle_3F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_B, 1, QUEST_FALADORCASTLE_EVENT_AFTER_GYM
	.2byte 0


FALADORCASTLE_3F_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 120
	goto_if_eq FALADORCASTLE_3F_STATE_2
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 9
	removeobject 10
	setflag FLAG_TEMP_1F
FALADORCASTLE_3F_STATE_1:
	return

FALADORCASTLE_3F_STATE_2:
	clearflag FLAG_TEMP_1F
	addobject 4
	addobject 5
	addobject 6
	addobject 7
	addobject 8
	addobject 9
	addobject 10
	setvar VAR_TEMP_B, 1
	setobjectxyperm 4, 20, 9
	setobjectxyperm 1, 20, 10
	removeobject 2
	removeobject 3
	setflag FLAG_TEMP_1E
	goto FALADORCASTLE_3F_STATE_1


movement_falador_postgym_1:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

movement_falador_postgym_2:
	face_up
	face_up
	face_up
	face_up
	face_up
	walk_left
	face_right
	step_end

movement_falador_postgym_3:
	set_visible
	face_up
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_up
	step_end

movement_falador_postgym_4:
	set_invisible
	step_end

movement_falador_postgym_5:
	face_down
	walk_down
	walk_down
	face_right
	walk_right
	walk_right
	step_end

movement_falador_postgym_6:
	face_left
	walk_left
	walk_left
	face_up
	walk_up
	walk_up
	step_end

movement_falador_postgym_7:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

movement_falador_postgym_8:
	walk_down
	face_left
	step_end

movement_falador_postgym_9:
	face_up
	delay_16
	delay_16
	delay_16
	face_down
	step_end

QUEST_FALADORCASTLE_EVENT_AFTER_GYM::
	applymovement 1, movement_falador_postgym_4
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, movement_falador_postgym_1
	applymovement 4, movement_falador_postgym_2
	applymovement 1, movement_falador_postgym_3
	waitmovement 0
	delay 120
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_1
	closemessage
	hidenamebox
	applymovement 10, MOVEMENT_WALK_DOWN
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_2
	closemessage
	hidenamebox
	applymovement 5, MOVEMENT_INTERACT_DOWN
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	closemessage
	hidenamebox
	applymovement 10, movement_falador_postgym_8
	applymovement 1, movement_falador_postgym_7
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_8
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_9
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_10
	closemessage
	hidenamebox
	applymovement 10, movement_falador_postgym_9
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_11
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_12
	closemessage
	hidenamebox
	setvar VAR_TEMP_B, 0
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 125
	release
	end


QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0:
	.string "Sir Owen$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_1:
	.string "Thank you all for coming.\p"
	.string "We have been hard at work interrogating\n"
	.string "the prisoners, so far we've worked out\l"
	.string "that the H.A.M members and the Black\l"
	.string "Knights have been working together to\l"
	.string "recover some sort of map.\p"
	.string "Apparently, the map leads to some sort\n"
	.string "of weapon that will wipe out many of\l"
	.string "the inhabitants of Gielinor!\p"
	.string "However, we have no idea where the map\n"
	.string "leads and without it I doubt we will\l"
	.string "ever find out.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_2:
	.string "Thank you all for coming.\p"
	.string "We have been hard at work\n"
	.string "interrograting the prisoners.\p"
	.string "It appears that H.A.M and the Black\n"
	.string "Knights have been working together,\l"
	.string "but despite our best efforts they\l"
	.string "refuse to tell us their plans.\p"
	.string "{PLAYER} do you know anything that\n"
	.string "might be of help in our investigation?$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3:
	.string "What!?\p"
	.string "You have already encountered two other\n"
	.string "H.A.M squads around Asgarnia!\p"
	.string "They were trying to obtain these map\n"
	.string "pieces?$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4:
	.string "Sir Tiffy Cashien$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5:
	.string "May I take a look at those?\p"
	.string "Hmm…{PAUSE 15}\n"
	.string "This is…\p"
	.string "You must be pulling my leg!\p"
	.string "This is a map to the lost island Crandor!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6:
	.string "Sir Amik Varze$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7:
	.string "What would H.A.M and the Black Knights\n"
	.string "want with Crandor?$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_8:
	.string "30 years ago, Crandor used to be a\n"
	.string "thriving city full of adventurers and\l"
	.string "mages but one day we lost all contact\l"
	.string "with them.\p"
	.string "There must be something on the Island\n"
	.string "they want.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_9:
	.string "We will need to investigate this\n"
	.string "immediately and neutralise the H.A.M\l"
	.string "threat!\p"
	.string "I will organise the funds for a ship to\n"
	.string "set sail from Port Sarim to Crandor.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_10:
	.string "That is easier said than done.\p"
	.string "Sailing to the island has been next to\n"
	.string "impossible due to the harsh seas!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_11:
	.string "Actually there may be someone who can\n"
	.string "help.\p"
	.string "Captain Ned.\p"
	.string "He is used to be one of the best sailors\n"
	.string "back in the day but has since retired\l"
	.string "in Draynor Village.\p"
	.string "If anyone has the knowledge and\n"
	.string "experience to get there, it'll be him.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_12:
	.string "Very well, {PLAYER} I wouldn't\n"
	.string "normally do this but since you have the\l"
	.string "map and have proven your strength\l"
	.string "against the White Knights, I wish to\l"
	.string "ask for you assistance.\p"
	.string "Please give Ned a visit over in Draynor\n"
	.string "and convice him to sail to Crandor.\p"
	.string "We will be in contact once we have\n"
	.string "organised a vessel.$"
