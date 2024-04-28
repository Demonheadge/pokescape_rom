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

movement_falador_postgym_5:
	face_down
	walk_down
	walk_down
	face_right
	walk_right
	walk_right
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
	applymovement 10, movement_falador_postgym_5
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	applymovement 1, MOVEMENT_FACE_UP
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_4
	closemessage
	hidenamebox
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6
	applymovement 10, MOVEMENT_FACE_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_8
	applymovement 10, MOVEMENT_FACE_RIGHT
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_9
	applymovement 10, MOVEMENT_FACE_RIGHT
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_RIGHT
	applymovement 1, MOVEMENT_FACE_RIGHT
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_0
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_10
	applymovement 10, MOVEMENT_FACE_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	applymovement 1, MOVEMENT_FACE_UP
	waitmovement 0
	namebox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7
	msgbox QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_11
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
	.string "What's that {PLAYER}?!\p"
	.string "You have all the map pieces they were\n"
	.string "trying to obtain?!\p"
	.string "How did you...\p"
	.string "That doesn't matter right now, quickly,\n"
	.string "show Sir Tiffy the map!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_3:
	.string "Sir Tiffy Cashien$"

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
	.string "All that death and destruction...\p"
	.string "That dragon must be the weapon they're\n"
	.string "looking for!\p"
	.string "Now how to get there…{PAUSE 15}…\p"
	.string "You'd have to sail, of course, but no\n"
	.string "captain in his right mind would sail to\l"
	.string "that island…$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_5:
	.string "Sir Tiffy$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_6:
	.string "Hmm…{PAUSE 15}…\p"
	.string "Actually, there may be one mad enough.\p"
	.string "Captain Ned.\p"
	.string "He's a veteran sailor who has retired\n"
	.string "and settled in Draynor Village.\p"
	.string "If anyone has the knowledge and\n"
	.string "experience to get there, it'll be him.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_7:
	.string "Sir Amik Varze$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_8:
	.string "This is serious indeed, we will need to\n"
	.string "investigate immediately and neutralise\l"
	.string "the H.A.M threat!\p"
	.string "Unfortunately, I can't spare any of my\n"
	.string "White Knights...\p"
	.string "They need to keep the peace here in\n"
	.string "Falador, the last time I sent them\l"
	.string "outside the city to help someone else a\l"
	.string "deranged lunatic in a green partyhat\l"
	.string "went around massacring everyone!\p"
	.string "{PLAYER}, I wouldn't normally do this\n"
	.string "but in the circumstances...\p"
	.string "Since not only do you have the map, but\n"
	.string "you have also managed to defeat both\l"
	.string "myself and the best the White Knights\l"
	.string "had to offer in battle, I wish to ask\l"
	.string "for your assistance.\p"
	.string "If you could, please give this Ned a\n"
	.string "visit over in Draynor and convince him\l"
	.string "to sail to Crandor.\p"
	.string "Sir Theodore will accompany you, to\n"
	.string "show that you have the White Knight's\l"
	.string "full support for this mission.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_9:
	.string "Sir Amik may not have any Knights to\n"
	.string "spare, but I will see what I can do...\p"
	.string "I will try and assemble a small, but elite\n"
	.string "troop of Knights to sail with you and\l"
	.string "tackle this threat.\p"
	.string "I'll arrange for them to meet you in\n"
	.string "Port Sarim before you set sail.$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_10:
	.string "And I will assist by seeing if we can get\n"
	.string "any more information out of the\l"
	.string "prisoners.\p"
	.string "After that, I will attempt to head north\n"
	.string "to investigate the Black Knight's\l"
	.string "Fortress and try and gather some\l"
	.string "intel!$"

QUEST_FALADORCASTLE_EVENT_AFTER_GYM_Text_11:
	.string "Great, it seems like everyone has their\n"
	.string "tasks.\p"
	.string "Good luck everyone!$"
