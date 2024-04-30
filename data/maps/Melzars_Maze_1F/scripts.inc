Melzars_Maze_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call MELZARS_1F_STATE
	return

Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
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
	setvar VAR_TEMP_F, 5
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq MELZARS_1F_STATE_2
	removeobject 10
	setflag FLAG_TEMP_1F
	removeobject 11
	setflag FLAG_TEMP_1E
MELZARS_1F_STATE_1:
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 110
	goto_if_lt MELZARS_1F_STATE_6
	removeobject 9
	setflag FLAG_TEMP_1D
MELZARS_1F_STATE_5:
	return

MELZARS_1F_STATE_2:
	addobject 10
	clearflag FLAG_TEMP_1F
	addobject 11
	clearflag FLAG_TEMP_1E
	goto MELZARS_1F_STATE_1

MELZARS_1F_STATE_6:
	addobject 9
	clearflag FLAG_TEMP_1D
	goto MELZARS_1F_STATE_5


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
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 0
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
	setvar VAR_POKESCAPE_MELZARS_MAZE_DOORS, 1
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


MELZARS_LOCKED_DOOR_1F_1::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 1
	goto_if_eq MELZARS_LOCKED_DOOR_1F_1_2
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 2
	goto_if_eq MELZARS_LOCKED_DOOR_1F_1_2
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_1F_1_2
	msgbox MELZARS_LOCKED_DOOR_1F_1_Text_0
	closemessage
MELZARS_LOCKED_DOOR_1F_1_1:
	end

MELZARS_LOCKED_DOOR_1F_1_2:
	setmetatile 8, 6, 849, 0
	setmetatile 8, 8, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_1F_1_1


MELZARS_LOCKED_DOOR_1F_2::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 1
	goto_if_eq MELZARS_LOCKED_DOOR_1F_2_2
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 2
	goto_if_eq MELZARS_LOCKED_DOOR_1F_2_2
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_1F_2_2
	msgbox MELZARS_LOCKED_DOOR_1F_1_Text_0
	closemessage
MELZARS_LOCKED_DOOR_1F_2_1:
	end

MELZARS_LOCKED_DOOR_1F_2_2:
	setmetatile 14, 6, 849, 0
	setmetatile 14, 8, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_1F_2_1


MELZARS_LOCKED_DOOR_1F_3::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 1
	goto_if_eq MELZARS_LOCKED_DOOR_1F_3_2
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 2
	goto_if_eq MELZARS_LOCKED_DOOR_1F_3_2
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_1F_3_2
	msgbox MELZARS_LOCKED_DOOR_1F_1_Text_0
	closemessage
MELZARS_LOCKED_DOOR_1F_3_1:
	end

MELZARS_LOCKED_DOOR_1F_3_2:
	setmetatile 20, 6, 849, 0
	setmetatile 20, 8, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_1F_3_1


MELZARS_LOCKED_DOOR_1F_4::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_1F_4_2
	msgbox MELZARS_LOCKED_DOOR_1F_4_Text_0
	closemessage
MELZARS_LOCKED_DOOR_1F_4_1:
	end

MELZARS_LOCKED_DOOR_1F_4_2:
	setmetatile 19, 19, 849, 0
	setmetatile 19, 21, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_1F_4_1


MELZARS_LOCKED_DOOR_B1F_1::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_B1F_1_2
	msgbox MELZARS_LOCKED_DOOR_1F_4_Text_0
	closemessage
MELZARS_LOCKED_DOOR_B1F_1_1:
	end

MELZARS_LOCKED_DOOR_B1F_1_2:
	setmetatile 2, 11, 849, 0
	setmetatile 2, 13, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_B1F_1_1


MELZARS_LOCKED_DOOR_B1F_2::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_B1F_2_2
	msgbox MELZARS_LOCKED_DOOR_1F_4_Text_0
	closemessage
MELZARS_LOCKED_DOOR_B1F_2_1:
	end

MELZARS_LOCKED_DOOR_B1F_2_2:
	setmetatile 5, 11, 849, 0
	setmetatile 5, 13, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_B1F_2_1


MELZARS_LOCKED_DOOR_B1F_3::
	compare VAR_TEMP_E, 1
	goto_if_eq MELZARS_LOCKED_DOOR_B1F_3_2
	msgbox MELZARS_LOCKED_DOOR_B1F_3_Text_0
	closemessage
MELZARS_LOCKED_DOOR_B1F_3_1:
	return

MELZARS_LOCKED_DOOR_B1F_3_2:
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	goto_if_eq MELZARS_LOCKED_DOOR_B1F_3_5
	msgbox MELZARS_LOCKED_DOOR_1F_4_Text_0
	closemessage
	goto MELZARS_LOCKED_DOOR_B1F_3_1

MELZARS_LOCKED_DOOR_B1F_3_5:
	setmetatile 10, 5, 849, 0
	setmetatile 10, 7, 121, 0
	special DrawWholeMapView
	goto MELZARS_LOCKED_DOOR_B1F_3_1


BATTLE_MELZARS_1F_TRAINER_1::
	trainerbattle_single TRAINER_MELZARS_1F_TRAINER_1, BATTLE_MELZARS_1F_TRAINER_1_Text_0, BATTLE_MELZARS_1F_TRAINER_1_Text_1
	namebox BATTLE_MELZARS_1F_TRAINER_1_Text_2
	msgbox BATTLE_MELZARS_1F_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_MELZARS_1F_TRAINER_2::
	trainerbattle_single TRAINER_MELZARS_1F_TRAINER_2, BATTLE_MELZARS_1F_TRAINER_2_Text_0, BATTLE_MELZARS_1F_TRAINER_2_Text_1
	namebox BATTLE_MELZARS_1F_TRAINER_2_Text_2
	msgbox BATTLE_MELZARS_1F_TRAINER_2_Text_3
	hidenamebox
	release
	end


BATTLE_MELZARS_1F_TRAINER_3::
	trainerbattle_single TRAINER_MELZARS_1F_TRAINER_3, BATTLE_MELZARS_1F_TRAINER_3_Text_0, BATTLE_MELZARS_1F_TRAINER_3_Text_1
	msgbox BATTLE_MELZARS_1F_TRAINER_3_Text_2
	hidenamebox
	release
	end


ITEM_MELZARS_1F_ROPE::
	finditem ITEM_ESCAPE_ROPE
	end


HAM_ROUTE9_MELZARS_1::
	lock
	goto_if_set FLAG_POKESCAPE_RIMMINGTON_HAM_LOST_TIME, HAM_ROUTE9_MELZARS_1_2
	faceplayer
	namebox BATTLE_MELZARS_1F_TRAINER_1_Text_2
	msgbox HAM_ROUTE9_MELZARS_1_Text_3
HAM_ROUTE9_MELZARS_1_1:
	hidenamebox
	closemessage
	release
	end

HAM_ROUTE9_MELZARS_1_2:
	applymovement 13, MOVEMENT_FACE_LEFT
	namebox BATTLE_MELZARS_1F_TRAINER_1_Text_2
	msgbox HAM_ROUTE9_MELZARS_1_Text_0
	namebox HAM_ROUTE9_MELZARS_1_Text_1
	msgbox HAM_ROUTE9_MELZARS_1_Text_2
	goto HAM_ROUTE9_MELZARS_1_1


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
	.string "RAT obtained the RED KEY.$"

MELZARS_1F_RATS_QUEST_Text_0:
	.string "RAT$"

MELZARS_1F_RATS_QUEST_Text_1:
	.string "The Rat dropped the RED KEY!$"

MELZARS_1F_RATS_QUEST_Text_2:
	.string "{PLAYER} obtained the RED KEY.$"

MELZARS_1F_RATS_QUEST_Text_3:
	.string "Seems like this Rat did not have the\n"
	.string "key.$"

MELZARS_1F_RATS_QUEST_Text_4:
	.string "You've already got the key.\p"
	.string "You decide not to torture the poor rats\n"
	.string "any more.$"

MELZARS_LOCKED_DOOR_1F_1_Text_0:
	.string "You need a red key to unlock this door.$"

MELZARS_LOCKED_DOOR_1F_4_Text_0:
	.string "You need a green key to unlock this\n"
	.string "door.$"

MELZARS_LOCKED_DOOR_B1F_3_Text_0:
	.string "The door appears to be locked from this\n"
	.string "side.$"

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
	.string "Melzar has taught us the dark arts of\n"
	.string "necromancy. There is no way you can\l"
	.string "win.$"

BATTLE_MELZARS_1F_TRAINER_2_Text_1:
	.string "I guess I should go back to studying..$"

BATTLE_MELZARS_1F_TRAINER_2_Text_2:
	.string "Nuxor$"

BATTLE_MELZARS_1F_TRAINER_2_Text_3:
	.string "Some say Melzar built this place on top\n"
	.string "of the ruins of a camp of Crandorian\l"
	.string "refugees.\p"
	.string "I wonder what happened to them all?$"

BATTLE_MELZARS_1F_TRAINER_3_Text_0:
	.string "The skeleton lurches to life and\n"
	.string "attacks!$"

BATTLE_MELZARS_1F_TRAINER_3_Text_1:
	.string "The skeletons bones groan under the\n"
	.string "weight of defeat.$"

BATTLE_MELZARS_1F_TRAINER_3_Text_2:
	.string "Rattle rattle.$"

HAM_ROUTE9_MELZARS_1_Text_0:
	.string "Where have you been?\p"
	.string "Also where is everyone else?$"

HAM_ROUTE9_MELZARS_1_Text_1:
	.string "H.A.M FAN$"

HAM_ROUTE9_MELZARS_1_Text_2:
	.string "Sorry I saw all these famous people and\n"
	.string "were wanting them to sign my robe.\p"
	.string "Also I think they said the meetup point\n"
	.string "was down this path at that spooky old\l"
	.string "building.$"

HAM_ROUTE9_MELZARS_1_Text_3:
	.string "This is the meeting point right?\p"
	.string "Where is everyone?$"

HAM_ROUTE9_MELZARS_2_Text_0:
	.string "Where is she?\p"
	.string "Everyone has already gone in to look\n"
	.string "for the map.$"
