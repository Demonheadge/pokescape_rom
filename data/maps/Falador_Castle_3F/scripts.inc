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
	goto FALADORCASTLE_3F_STATE_1


movement_falador_postgym_1:
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

movement_falador_postgym_2:
	face_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	face_left
	step_end

movement_falador_postgym_3:
	set_visible
	face_up
	delay_16
	walk_right
	walk_right
	walk_right
	step_end

movement_falador_postgym_4:
	set_invisible
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
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_2
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_8
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_9
	setvar VAR_TEMP_B, 0
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 125
	release
	end


QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0:
	.string "Sir Owen$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_1:
	.string "Thanks for coming everyone.\p"
	.string "We have been hard at work interrogating\n"
	.string "the prisoners, so far we've worked out\l"
	.string "that the H.A.M and the Black Knights\l"
	.string "have been working together to recover\l"
	.string "some sort of map.\p"
	.string "Appearntly the map leads to some sort\n"
	.string "of weapon that will wipe out many of\l"
	.string "the inhabitants of Gilenor.\p"
	.string "One bit of information we do not know is\n"
	.string "where the map leads and without it we\l"
	.string "will never know.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_2:
	.string "What's that {PLAYER}?!\p"
	.string "You have all the map peices they were\n"
	.string "trying to obtain?!\p"
	.string "Quick, show Tiffy Cashien the map!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3:
	.string "Sir Tiffy$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4:
	.string "Now what do we have here, old bean?\p"
	.string "Hmm…{PAUSE 15}…\p"
	.string "This is…{PAUSE 15}\n"
	.string "You must be pulling on my leg!\p"
	.string "This is a map of Crandor!\p"
	.string "Around thirty years ago, it was a\n"
	.string "thriving community full of mages and\l"
	.string "adventurers.\p"
	.string "Many of them even became part of the\n"
	.string "Champions' Guild over in Varrock!\p"
	.string "However, one day one of their\n"
	.string "adventurers went too far and awoke a\l"
	.string "dragon that laid waste to the entire\l"
	.string "island.\p"
	.string "They say it's nothing but a wasteland\n"
	.string "now.\p"
	.string "That dragon must be the weapon they're\n"
	.string "looking for!\p"
	.string "Now how to get there…{PAUSE 15}…\p"
	.string "You'd have to sail, of course, but no\n"
	.string "captain in his right mind would sail to\l"
	.string "that island…$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5:
	.string "Hmm…{PAUSE 15}…\p"
	.string "Actually, there may be one, mad enough.\p"
	.string "Captain Ned.\p"
	.string "He's a veteran sailor who has retired\n"
	.string "and settled in Draynor Village.\p"
	.string "If anyone has the knowledge and\n"
	.string "experience to get there, it'll be him.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6:
	.string "Sir Amik Varze$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7:
	.string "This is serious indeed, we will need to\n"
	.string "assemble a team to investegate\l"
	.string "immediately.\p"
	.string "{PLAYER} I wish to ask for your\n"
	.string "assistance on this matter since not\l"
	.string "only do you have the map but you have\l"
	.string "also managed to defeat myself and\l"
	.string "even the best the White Knights had to\l"
	.string "offer.\p"
	.string "If you could, please give this Ned a\n"
	.string "visit over in Draynor and convince him\l"
	.string "to sail to Crandor.\p"
	.string "In the meantime Sir Tiffy Cachien and I\n"
	.string "will assemble an elite force of White\l"
	.string "Knights to tackle this threat.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_8:
	.string "Sir Theodore and I will assist by\n"
	.string "monitoring their activity here and see\l"
	.string "if we can get any more information out\l"
	.string "of them.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_9:
	.string "Great it seems like everyone has their\n"
	.string "tasks.\p"
	.string "Good luck everyone!$"
