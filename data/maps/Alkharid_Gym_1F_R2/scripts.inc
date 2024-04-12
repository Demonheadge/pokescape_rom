Alkharid_Gym_1F_R2_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Alkharid_Gym_1F_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Alkharid_Gym_1F_R2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 11
	call ALKHARID_GYM_STATE
	call ALKHARID_GYM_NPCS_POST_GYM_2F_2R
	return


ALKHARID_GYM_NPCS_POST_GYM_2F_2R::
	switch VAR_POKESCAPE_ALKHARID_GYM_QUEST
	case 30, ALKHARID_GYM_NPCS_POST_GYM_2F_2R_3
ALKHARID_GYM_NPCS_POST_GYM_2F_2R_1:
	return

ALKHARID_GYM_NPCS_POST_GYM_2F_2R_3:
	setobjectxyperm 9, 3, 9
	setobjectmovementtype 2, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 10, 14, 6
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 11, 11, 11
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_LEFT
	goto ALKHARID_GYM_NPCS_POST_GYM_2F_2R_1


ALKHARID_GYM_STATE::
	switch VAR_POKESCAPE_ALKHARID_GYM_QUEST
	case 0, ALKHARID_GYM_STATE_3
	case 5, ALKHARID_GYM_STATE_4
	case 10, ALKHARID_GYM_STATE_5
	case 15, ALKHARID_GYM_STATE_6
	case 20, ALKHARID_GYM_STATE_7
	case 30, ALKHARID_GYM_STATE_8
ALKHARID_GYM_STATE_1:
	return

ALKHARID_GYM_STATE_3:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_B
	removeobject 11
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_STATE_1

ALKHARID_GYM_STATE_4:
	clearflag FLAG_TEMP_1
	addobject 3
	addobject 4
	addobject 5
	setobjectxy 1, 10, 7
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_DOWN
	applymovement OBJ_EVENT_ID_PLAYER, Movement_LOCK_WALK_DOWN_4
	waitmovement 0
	setobjectxy 2, 11, 9
	addobject 7
	addobject 8
	removeobject 9
	removeobject 10
	setflag FLAG_TEMP_5
	removeobject 11
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_STATE_1

ALKHARID_GYM_STATE_5:
	removeobject 1
	setflag FLAG_TEMP_A
	addobject 6
	clearflag FLAG_TEMP_B
	removeobject 9
	removeobject 10
	setflag FLAG_TEMP_5
	removeobject 11
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_STATE_1

ALKHARID_GYM_STATE_6:
	setobjectxy 2, 11, 5
	addobject 9
	addobject 10
	clearflag FLAG_TEMP_5
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_A
	setflag FLAG_TEMP_B
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 11
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_STATE_1

ALKHARID_GYM_STATE_7:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_B
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 11
	setflag FLAG_TEMP_6
	goto ALKHARID_GYM_STATE_1

ALKHARID_GYM_STATE_8:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_B
	removeobject 3
	removeobject 4
	removeobject 5
	removeobject 6
	removeobject 7
	removeobject 8
	goto ALKHARID_GYM_STATE_1


TRIGGER_QUEST_ALKHARID_GYM::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	applymovement 2, Movement_InteractFACELEFT
	waitmovement 0
	call QUEST_ALKHARID_GYM_1
	release
	end


QUEST_ALKHARID_GYM_1::
	namebox QUEST_ALKHARID_GYM_1_Text_0
	msgbox QUEST_ALKHARID_GYM_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq QUEST_ALKHARID_GYM_1_2
	msgbox QUEST_ALKHARID_GYM_1_Text_3
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 5
	fadescreen FADE_TO_BLACK
	call ALKHARID_GYM_STATE
	fadescreen FADE_FROM_BLACK
	namebox QUEST_ALKHARID_GYM_1_Text_0
	msgbox QUEST_ALKHARID_GYM_1_Text_4
	closemessage
	hidenamebox
	applymovement 1, MOVEMENT_WALK_DOWN
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	namebox QUEST_ALKHARID_GYM_1_Text_5
	msgbox QUEST_ALKHARID_GYM_1_Text_6
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 10
	fadescreen FADE_TO_BLACK
	call ALKHARID_GYM_STATE
	fadescreen FADE_FROM_BLACK
	namebox QUEST_ALKHARID_GYM_1_Text_5
	msgbox QUEST_ALKHARID_GYM_1_Text_7
	closemessage
	hidenamebox
	applymovement 6, Movement_LOCK_WALK_UP
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	namebox QUEST_ALKHARID_GYM_1_Text_0
	msgbox QUEST_ALKHARID_GYM_1_Text_8
	closemessage
	hidenamebox
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	fadescreen FADE_TO_BLACK
	call ALKHARID_GYM_STATE
	delay 60
	fadescreen FADE_FROM_BLACK
	addvar VAR_POKESCAPE_ALKHARID_GYM_ALI_STATE, 4
	return

QUEST_ALKHARID_GYM_1_2:
	msgbox QUEST_ALKHARID_GYM_1_Text_2
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_DOWN
	waitmovement 0
	return


Movement_LOCK_WALK_UP:
	lock_facing_direction
	walk_up
	unlock_facing_direction
	step_end

Movement_LOCK_WALK_DOWN_4:
	lock_facing_direction
	walk_down
	walk_down
	walk_down
	walk_down
	unlock_facing_direction
	step_end

NPC_ALKHARID_OSMAN::
	lock
	faceplayer
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq NPC_ALKHARID_OSMAN_2
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq NPC_ALKHARID_OSMAN_5
NPC_ALKHARID_OSMAN_4:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq NPC_ALKHARID_OSMAN_8
NPC_ALKHARID_OSMAN_7:
	release
	end

NPC_ALKHARID_OSMAN_2:
	call QUEST_ALKHARID_GYM_1
	release
	end

NPC_ALKHARID_OSMAN_5:
	msgbox NPC_ALKHARID_OSMAN_Text_0
	goto NPC_ALKHARID_OSMAN_4

NPC_ALKHARID_OSMAN_8:
	msgbox NPC_ALKHARID_OSMAN_Text_1
	goto NPC_ALKHARID_OSMAN_7


ALKHARID_GYM_ALI::
	lock
	faceplayer
	namebox QUEST_ALKHARID_GYM_1_Text_5
	goto_if_unset FLAG_BADGE04_GET, ALKHARID_GYM_ALI_2
	goto_if_set FLAG_BADGE04_GET, ALKHARID_GYM_ALI_5
	msgbox ALKHARID_GYM_ALI_Text_7
ALKHARID_GYM_ALI_4:
	hidenamebox
	release
	end

ALKHARID_GYM_ALI_2:
	msgbox ALKHARID_GYM_ALI_Text_0
	hidenamebox
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_PRINCE_ALI, ALKHARID_GYM_ALI_Text_1
	namebox QUEST_ALKHARID_GYM_1_Text_5
	msgbox ALKHARID_GYM_ALI_Text_2
	hidenamebox
	playfanfare MUS_PS_QUEST_COMPLETE
	msgbox ALKHARID_GYM_ALI_Text_3
	waitfanfare
	waitmessage
	namebox QUEST_ALKHARID_GYM_1_Text_5
	msgbox ALKHARID_GYM_ALI_Text_4
	hidenamebox
	giveitem ITEM_TM48, 1
	compare VAR_RESULT, FALSE
	goto_if_eq Common_EventScript_ShowBagIsFull
	playbgm MUS_PS_ALKHARID, 0
	savebgm MUS_PS_ALKHARID
	namebox QUEST_ALKHARID_GYM_1_Text_5
	msgbox ALKHARID_GYM_ALI_Text_5
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 30
	setflag FLAG_BADGE04_GET
	addvar VAR_GAMEMODE_LEVEL_SCALING, 1
	call SetGymTrainers_VARROCK
	hidenamebox
	release
	end

ALKHARID_GYM_ALI_5:
	msgbox ALKHARID_GYM_ALI_Text_6
	goto ALKHARID_GYM_ALI_4


ALKHARID_MUSIC_TEST::
	lock
	faceplayer
	playmoncry SPECIES_FROGEEL, 0
	msgbox ALKHARID_MUSIC_TEST_Text_0
	waitmoncry
	playmoncry SPECIES_BANDLING, 0
	msgbox ALKHARID_MUSIC_TEST_Text_1
	waitmoncry
	release
	end


MOVERELEARNER_NPC::
	faceplayer
	msgbox MOVERELEARNER_NPC_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne MOVERELEARNER_NPC_2
	closemessage
	end

	release
	end

MOVERELEARNER_NPC_2:
	msgbox MOVERELEARNER_NPC_Text_1
	special ChooseMonForMoveRelearner
	waitstate
	special IsSelectedMonEgg
	compare VAR_RESULT, TRUE
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_CantTeachEgg
	compare VAR_0x8005, 0
	goto_if_eq FallarborTown_MoveRelearnersHouse_EventScript_NoMoveToTeachMon
	goto FallarborTown_MoveRelearnersHouse_EventScript_ChooseMove
	closemessage
	end


GYM_NPC_0::
	lock
	faceplayer
	msgbox GYM_NPC_0_Text_0
	release
	end


GYM_ALKHARID_TRAINER_1::
	faceplayer
	namebox GYM_ALKHARID_TRAINER_1_Text_0
	msgbox GYM_ALKHARID_TRAINER_1_Text_1
	closemessage
	hidenamebox
	trainerbattle_single TRAINER_VARROCK_GYM_1, GYM_ALKHARID_TRAINER_1_Text_1, GYM_ALKHARID_TRAINER_1_Text_2
	subvar VAR_POKESCAPE_ALKHARID_GYM_ALI_STATE, 1
	release
	end


GYM_ALKHARID_TRAINER_2::
	faceplayer
	namebox GYM_ALKHARID_TRAINER_1_Text_0
	msgbox GYM_ALKHARID_TRAINER_1_Text_1
	closemessage
	hidenamebox
	subvar VAR_POKESCAPE_ALKHARID_GYM_ALI_STATE, 1
	release
	end


CHECK_IF_ALI::
	random VAR_POKESCAPE_ALKHARID_GYM_ALI_STATE
	switch VAR_RESULT
	case 0, CHECK_IF_ALI_3
	case 1, CHECK_IF_ALI_4
	case 2, CHECK_IF_ALI_5
	case 3, CHECK_IF_ALI_6
CHECK_IF_ALI_1:
	return

CHECK_IF_ALI_3:
	namebox CHECK_IF_ALI_Text_0
	msgbox CHECK_IF_ALI_Text_1
	namebox QUEST_ALKHARID_GYM_1_Text_5
	msgbox CHECK_IF_ALI_Text_2
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto CHECK_IF_ALI_1

CHECK_IF_ALI_4:
	namebox CHECK_IF_ALI_Text_0
	msgbox CHECK_IF_ALI_Text_3
	subvar VAR_POKESCAPE_ALKHARID_GYM_ALI_STATE, 1
	hidenamebox
	closemessage
	goto CHECK_IF_ALI_1

CHECK_IF_ALI_5:
	namebox CHECK_IF_ALI_Text_0
	msgbox CHECK_IF_ALI_Text_4
	subvar VAR_POKESCAPE_ALKHARID_GYM_ALI_STATE, 1
	hidenamebox
	closemessage
	goto CHECK_IF_ALI_1

CHECK_IF_ALI_6:
	namebox CHECK_IF_ALI_Text_0
	msgbox CHECK_IF_ALI_Text_5
	subvar VAR_POKESCAPE_ALKHARID_GYM_ALI_STATE, 1
	hidenamebox
	closemessage
	goto CHECK_IF_ALI_1


SetGymTrainers_ALKHARID::
	settrainerflag TRAINER_ALKHARID_GYM_TRAINER_1
	settrainerflag TRAINER_ALKHARID_GYM_TRAINER_2
	settrainerflag TRAINER_ALKHARID_GYM_TRAINER_3
	settrainerflag TRAINER_ALKHARID_GYM_TRAINER_4
	return


ClearGymTrainers_ALKHARID::
	cleartrainerflag TRAINER_ALKHARID_GYM_TRAINER_1
	cleartrainerflag TRAINER_ALKHARID_GYM_TRAINER_2
	cleartrainerflag TRAINER_ALKHARID_GYM_TRAINER_3
	cleartrainerflag TRAINER_ALKHARID_GYM_TRAINER_4
	return


GYM_NPC_7::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_4, GYM_NPC_7_2
GYM_NPC_7_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_7_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_7_10
	msgbox GYM_NPC_7_Text_5
GYM_NPC_7_9:
	release
	end

GYM_NPC_7_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_7_7
	goto GYM_NPC_7_1

GYM_NPC_7_5:
	msgbox GYM_NPC_7_Text_3
	release
	end

GYM_NPC_7_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_7_14
	applymovement 10, Movement_AlkharidGym_NPC_7
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_RIGHT
	waitmovement 0
	namebox CHECK_IF_ALI_Text_0
	msgbox GYM_ALKHARID_TRAINER_1_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_4, GYM_ALKHARID_TRAINER_1_Text_2
	namebox CHECK_IF_ALI_Text_0
	msgbox GYM_NPC_7_Text_2
	closemessage
	hidenamebox
	setflag FLAG_ALKHARIDGYM_4
	release
	end

GYM_NPC_7_10:
	msgbox GYM_NPC_7_Text_4
	goto GYM_NPC_7_9

GYM_NPC_7_14:
	msgbox GYM_NPC_7_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 11
	clearflag FLAG_TEMP_6
	applymovement 10, Movement_AlkharidGym_NPC_7
	applymovement 11, Movement_AlkharidGym_NPC_7_Ali
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_RIGHT
	waitmovement 0
	namebox CHECK_IF_ALI_Text_0
	msgbox GYM_ALKHARID_TRAINER_1_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_4, GYM_ALKHARID_TRAINER_1_Text_2
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_7_17
	msgbox GYM_NPC_7_Text_1
	closemessage
	hidenamebox
	applymovement 11, MOVEMENT_WALK_DOWN
	waitmovement 0
	applymovement 11, MOVEMENT_FACE_UP
	waitmovement 0
	release
	end

GYM_NPC_7_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


GYM_NPC_8::
	lock
	faceplayer
	goto_if_unset FLAG_ALKHARIDGYM_4, GYM_NPC_8_2
GYM_NPC_8_1:
	goto_if_set FLAG_BADGE04_GET, GYM_NPC_8_5
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	goto_if_eq GYM_NPC_8_10
	msgbox GYM_NPC_7_Text_5
GYM_NPC_8_9:
	release
	end

GYM_NPC_8_2:
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 15
	goto_if_eq GYM_NPC_8_7
	goto GYM_NPC_8_1

GYM_NPC_8_5:
	msgbox GYM_NPC_7_Text_3
	release
	end

GYM_NPC_8_7:
	call CHECK_IF_ALI
	compare VAR_POKESCAPE_ALKHARID_GYM_QUEST, 20
	goto_if_eq GYM_NPC_8_14
	applymovement 9, Movement_AlkharidGym_NPC_8
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	namebox CHECK_IF_ALI_Text_0
	msgbox GYM_ALKHARID_TRAINER_1_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_4, GYM_ALKHARID_TRAINER_1_Text_2
	namebox CHECK_IF_ALI_Text_0
	msgbox GYM_NPC_7_Text_2
	closemessage
	hidenamebox
	setflag FLAG_ALKHARIDGYM_4
	release
	end

GYM_NPC_8_10:
	msgbox GYM_NPC_7_Text_4
	goto GYM_NPC_8_9

GYM_NPC_8_14:
	msgbox GYM_NPC_7_Text_0
	hidenamebox
	closemessage
	applymovement VAR_LAST_TALKED, Movement_AlkharidGym_TELEPORT
	delay 30
	removeobject VAR_LAST_TALKED
	addobject 11
	clearflag FLAG_TEMP_6
	applymovement 9, Movement_AlkharidGym_NPC_8
	applymovement 11, Movement_AlkharidGym_NPC_8_Ali
	delay 60
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	namebox CHECK_IF_ALI_Text_0
	msgbox GYM_ALKHARID_TRAINER_1_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_ALKHARID_GYM_TRAINER_4, GYM_ALKHARID_TRAINER_1_Text_2
	compare VAR_RESULT, B_OUTCOME_LOST
	goto_if_eq GYM_NPC_8_17
	msgbox GYM_NPC_7_Text_1
	closemessage
	hidenamebox
	applymovement 11, MOVEMENT_WALK_RIGHT
	waitmovement 0
	applymovement 11, MOVEMENT_FACE_LEFT
	waitmovement 0
	release
	end

GYM_NPC_8_17:
	setvar VAR_POKESCAPE_ALKHARID_GYM_QUEST, 0
	end


Movement_AlkharidGym_NPC_7:
	walk_faster_down
	walk_faster_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	face_player
	step_end

Movement_AlkharidGym_NPC_7_Ali:
	walk_faster_up
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	walk_faster_up
	face_player
	step_end

Movement_AlkharidGym_NPC_8:
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	face_player
	step_end

Movement_AlkharidGym_NPC_8_Ali:
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_left
	walk_faster_left
	face_player
	step_end

BARROWS_GUTHAN::
	lock
	faceplayer
	namebox BARROWS_GUTHAN_Text_0
	msgbox BARROWS_GUTHAN_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_BARROWS_GUTHAN, ALKHARID_GYM_ALI_Text_1
	release
	end


TEST_BATTLE::
	lock
	faceplayer
	namebox TEST_BATTLE_Text_0
	msgbox TEST_BATTLE_Text_1
	hidenamebox
	closemessage
	trainerbattle_no_intro TRAINER_BARROWS_GUTHAN, ALKHARID_GYM_ALI_Text_1
	release
	end


QUEST_ALKHARID_GYM_1_Text_0:
	.string "Osman$"

QUEST_ALKHARID_GYM_1_Text_1:
	.string "Welcome to the Al-Kharid Gym.\p"
	.string "Would you like to start your Gym\n"
	.string "Challenge?$"

QUEST_ALKHARID_GYM_1_Text_2:
	.string "Come back when you are ready to\n"
	.string "challenge the Al-Kharid Gym.$"

QUEST_ALKHARID_GYM_1_Text_3:
	.string "Very well, let us prepare your challenge.$"

QUEST_ALKHARID_GYM_1_Text_4:
	.string "This challenge is simple.\p"
	.string "All you must do is find our Prince and\n"
	.string "challenge him to a battle.$"

QUEST_ALKHARID_GYM_1_Text_5:
	.string "Prince Ali$"

QUEST_ALKHARID_GYM_1_Text_6:
	.string "Sounds too easy right?\p"
	.string "But once I put this disguise on…$"

QUEST_ALKHARID_GYM_1_Text_7:
	.string "This suddenly got a lot harder didn't\n"
	.string "it?\p"
	.string "I will be somewhere around the Palace.$"

QUEST_ALKHARID_GYM_1_Text_8:
	.string "Good luck with your challenge, if you\n"
	.string "need any assistance feel free to ask\l"
	.string "me.$"

NPC_ALKHARID_OSMAN_Text_0:
	.string "I am quite the Master Spy at times.\p"
	.string "Although when spoken to while in\n"
	.string "disguise I sometimes give away my\l"
	.string "disguse by sneezing.$"

NPC_ALKHARID_OSMAN_Text_1:
	.string "Do you need a hint?\p"
	.string "Try checking all the rooms of the\n"
	.string "palace.\p"
	.string "He could be hiding in one of them.$"

ALKHARID_GYM_ALI_Text_0:
	.string "Welcome to the Al Kharid Gym.$"

ALKHARID_GYM_ALI_Text_1:
	.string "That was a very enjoyable battle!$"

ALKHARID_GYM_ALI_Text_2:
	.string "Have this Badge.$"

ALKHARID_GYM_ALI_Text_3:
	.string "{PLAYER} received the Al-Kharid\n"
	.string "BADGE from Prince Ali.$"

ALKHARID_GYM_ALI_Text_4:
	.string "Also have this Scroll.$"

ALKHARID_GYM_ALI_Text_5:
	.string "That move is called Power Gem.\p"
	.string "It sparkles just as all our precious\n"
	.string "Gems around the palace do.$"

ALKHARID_GYM_ALI_Text_6:
	.string "You seem like you would be strong\n"
	.string "enough to take on the Barbarians,\l"
	.string "maybe you should head there next for\l"
	.string "your MvM gym challenge.$"

ALKHARID_GYM_ALI_Text_7:
	.string "You should go pester the Prince in Al\n"
	.string "Kharid for your next MvM gym challenge.$"

ALKHARID_MUSIC_TEST_Text_0:
	.string "AAAAAA!$"

ALKHARID_MUSIC_TEST_Text_1:
	.string "AAAAAA!!!$"

MOVERELEARNER_NPC_Text_0:
	.string "Would you like re-learn a move that\n"
	.string "you've forgotten?$"

MOVERELEARNER_NPC_Text_1:
	.string "Please select a Monster you wish to\n"
	.string "relearn a move with.$"

GYM_NPC_0_Text_0:
	.string "The prince has gone back to the throne\n"
	.string "room.$"

GYM_ALKHARID_TRAINER_1_Text_0:
	.string "Guard$"

GYM_ALKHARID_TRAINER_1_Text_1:
	.string "Brother, I will help thee with this\n"
	.string "infidel!$"

GYM_ALKHARID_TRAINER_1_Text_2:
	.string "Consider that a warning!$"

CHECK_IF_ALI_Text_0:
	.string "Warrior$"

CHECK_IF_ALI_Text_1:
	.string "I need to guard the south gate\n"
	.string "tomorrow and give out these cabbages…$"

CHECK_IF_ALI_Text_2:
	.string "…{PAUSE 16}…{PAUSE 16}\n"
	.string "Just Kidding!\p"
	.string "It was me all along.$"

CHECK_IF_ALI_Text_3:
	.string "You found me!\p"
	.string "Yep, that's right, you found me.\p"
	.string "I am simply known as the Greatest\n"
	.string "Warrior of Alkharid or GWoA for short.$"

CHECK_IF_ALI_Text_4:
	.string "Tomorrow I am going to show those\n"
	.string "pesky Merchants who owns this town.$"

CHECK_IF_ALI_Text_5:
	.string "Are you asking for a fight?$"

GYM_NPC_7_Text_0:
	.string "Guards help me as I make my escape!$"

GYM_NPC_7_Text_1:
	.string "You have defeated us!\p"
	.string "But the Prince has made his escape so\n"
	.string "we have done our jobs.$"

GYM_NPC_7_Text_2:
	.string "You have defeated us!\p"
	.string "But the Prince is still somewhere\n"
	.string "around the Palace.$"

GYM_NPC_7_Text_3:
	.string "Hello congrats on beating the gym.$"

GYM_NPC_7_Text_4:
	.string "Hello.$"

GYM_NPC_7_Text_5:
	.string "We use our lives to protect our prince.$"

BARROWS_GUTHAN_Text_0:
	.string "Guthan$"

BARROWS_GUTHAN_Text_1:
	.string "I am known simply as Guthan.\p"
	.string "Face me if you dare!$"

TEST_BATTLE_Text_0:
	.string "TEST$"

TEST_BATTLE_Text_1:
	.string "Face me if you dare!$"
