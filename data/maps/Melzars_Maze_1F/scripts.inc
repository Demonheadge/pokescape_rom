Melzars_Maze_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call MELZARS_1F_STATE
	return

Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_STORYMODE_PROGRESS, 105, MELZARS_1F_RAT
	.2byte 0


MELZARS_1F_RAT::
	playmoncry SPECIES_GIANT_RAT_NORMAL_FORM, 0
	delay 60
	applymovement 11, movement_MELZAR_RAT_1
	waitmovement 0
	playmoncry SPECIES_GIANT_RAT_NORMAL_FORM, 0
	msgbox MELZARS_1F_RAT_Text_0
	waitmoncry
	closemessage
	delay 30
	applymovement 11, movement_MELZAR_RAT_3
	waitmovement 0
	playfanfare MUS_OBTAIN_ITEM
	removeobject 10
	setflag FLAG_TEMP_1F
	msgbox MELZARS_1F_RAT_Text_1
	waitfanfare
	closemessage
	delay 30
	applymovement 11, movement_MELZAR_RAT_2
	playmoncry SPECIES_GIANT_RAT_NORMAL_FORM, 0
	waitmovement 0
	removeobject 11
	setflag FLAG_TEMP_1E
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 106
	closemessage
	return


MELZARS_1F_STATE::
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 105, MELZARS_1F_STATE_3
	case 106, MELZARS_1F_STATE_4
	case 110, MELZARS_1F_STATE_4
MELZARS_1F_STATE_1:
	return

MELZARS_1F_STATE_3:
	setvar VAR_TEMP_F, 5
	goto MELZARS_1F_STATE_1

MELZARS_1F_STATE_4:
	setvar VAR_TEMP_F, 5
	removeobject 10
	setflag FLAG_TEMP_1F
	removeobject 11
	setflag FLAG_TEMP_1E
	goto MELZARS_1F_STATE_1


movement_MELZAR_RAT_1:
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_right
	face_player
	step_end

movement_MELZAR_RAT_2:
	face_player
	delay_16
	delay_16
	delay_16
	delay_16
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	step_end

movement_MELZAR_RAT_3:
	face_up
	step_end

MELZARS_1F_RATS_QUEST::
	lock
	faceplayer
	namebox MELZARS_1F_RATS_QUEST_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 106
	goto_if_eq MELZARS_1F_RATS_QUEST_2
	msgbox MELZARS_1F_RATS_QUEST_Text_4
	hidenamebox
	closemessage
MELZARS_1F_RATS_QUEST_1:
	release
	end

MELZARS_1F_RATS_QUEST_2:
	playmoncry SPECIES_GIANT_RAT_NORMAL_FORM, 0
	msgbox MELZARS_1F_RAT_Text_0
	waitmoncry
	hidenamebox
	closemessage
	random VAR_TEMP_F
	switch VAR_RESULT
	case 0, MELZARS_1F_RATS_QUEST_6
	case 1, MELZARS_1F_RATS_QUEST_7
	case 2, MELZARS_1F_RATS_QUEST_7
	case 3, MELZARS_1F_RATS_QUEST_7
	case 4, MELZARS_1F_RATS_QUEST_7
	goto MELZARS_1F_RATS_QUEST_1

MELZARS_1F_RATS_QUEST_6:
	setwildbattle SPECIES_GIANT_RAT_NORMAL_FORM, 10, ITEM_NONE
	dowildbattle
	removeobject VAR_LAST_TALKED
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 110
	msgbox MELZARS_1F_RATS_QUEST_Text_1
	playfanfare MUS_OBTAIN_ITEM
	msgbox MELZARS_1F_RATS_QUEST_Text_2
	waitfanfare
	closemessage
	release
	end

MELZARS_1F_RATS_QUEST_7:
	setwildbattle SPECIES_GIANT_RAT_NORMAL_FORM, 10, ITEM_NONE
	dowildbattle
	removeobject VAR_LAST_TALKED
	msgbox MELZARS_1F_RATS_QUEST_Text_3
	closemessage
	subvar VAR_TEMP_F, 1
	release
	end


MELZARS_LOCKED_DOOR::
	return


BATTLE_MELZARS_1F_TRAINER_1::
	trainerbattle_single TRAINER_MELZARS_1F_TRAINER_1, BATTLE_MELZARS_1F_TRAINER_1_Text_0, BATTLE_MELZARS_1F_TRAINER_1_Text_1
	namebox BATTLE_MELZARS_1F_TRAINER_1_Text_2
	msgbox BATTLE_MELZARS_1F_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_MELZARS_1F_TRAINER_2::
	trainerbattle_single TRAINER_MELZARS_1F_TRAINER_2, BATTLE_MELZARS_1F_TRAINER_2_Text_0, BATTLE_MELZARS_1F_TRAINER_2_Text_1
	msgbox BATTLE_MELZARS_1F_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_MELZARS_1F_TRAINER_3::
	trainerbattle_single TRAINER_MELZARS_1F_TRAINER_3, BATTLE_MELZARS_1F_TRAINER_3_Text_0, BATTLE_MELZARS_1F_TRAINER_3_Text_1
	msgbox BATTLE_MELZARS_1F_TRAINER_3_Text_2
	hidenamebox
	release
	end


HAM_ROUTE9_MELZARS_1::
	lock
	faceplayer
	namebox BATTLE_MELZARS_1F_TRAINER_1_Text_2
	msgbox HAM_ROUTE9_MELZARS_1_Text_0
	hidenamebox
	closemessage
	release
	end


HAM_ROUTE9_MELZARS_2::
	lock
	faceplayer
	namebox BATTLE_MELZARS_1F_TRAINER_1_Text_2
	msgbox HAM_ROUTE9_MELZARS_2_Text_0
	hidenamebox
	closemessage
	release
	end


MELZARS_1F_RAT_Text_0:
	.string "Squeek!$"

MELZARS_1F_RAT_Text_1:
	.string "RAT obtained the DOOR KEY.$"

MELZARS_1F_RATS_QUEST_Text_0:
	.string "RAT$"

MELZARS_1F_RATS_QUEST_Text_1:
	.string "The Rat dropped the DOOR KEY!$"

MELZARS_1F_RATS_QUEST_Text_2:
	.string "{PLAYER} obtained the DOOR KEY.$"

MELZARS_1F_RATS_QUEST_Text_3:
	.string "Seems like this Rat did not have the\n"
	.string "key.$"

MELZARS_1F_RATS_QUEST_Text_4:
	.string "You've already got the key.\p"
	.string "You decide not to torture the poor rats\n"
	.string "any more.$"

BATTLE_MELZARS_1F_TRAINER_1_Text_0:
	.string "I won't let you stop our plans!$"

BATTLE_MELZARS_1F_TRAINER_1_Text_1:
	.string "You won't get very far without a key..$"

BATTLE_MELZARS_1F_TRAINER_1_Text_2:
	.string "H.A.M GRUNT$"

BATTLE_MELZARS_1F_TRAINER_1_Text_3:
	.string "Awwww, I had a key to meet up with\n"
	.string "everybody else but I tripped, dropped\l"
	.string "it, and the blasted rats stole it!$"

BATTLE_MELZARS_1F_TRAINER_2_Text_0:
	.string "The skeleton shambles towards you..$"

BATTLE_MELZARS_1F_TRAINER_2_Text_1:
	.string "The skeleton goes back to resting.$"

BATTLE_MELZARS_1F_TRAINER_2_Text_2:
	.string "The skeleton doesn't seem interested\n"
	.string "in you anymore.$"

BATTLE_MELZARS_1F_TRAINER_3_Text_0:
	.string "The skeleton lurches to life and\n"
	.string "attacks!$"

BATTLE_MELZARS_1F_TRAINER_3_Text_1:
	.string "The skeletons bones groan under the\n"
	.string "weight of defeat.$"

BATTLE_MELZARS_1F_TRAINER_3_Text_2:
	.string "Rattle rattle.$"

HAM_ROUTE9_MELZARS_1_Text_0:
	.string "This is the meeting point right?\p"
	.string "Where is everyone?$"

HAM_ROUTE9_MELZARS_2_Text_0:
	.string "Where is she?\p"
	.string "Everyone has already gone in to look\n"
	.string "for the map.$"
