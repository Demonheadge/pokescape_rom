Melzars_Maze_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Melzars_Maze_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	return


MELZARS_1F_RATS_QUEST::
	lock
	faceplayer
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq MELZARS_1F_RATS_QUEST_2
	msgbox MELZARS_1F_RATS_QUEST_Text_1
	hidenamebox
	closemessage
	release
	end

MELZARS_1F_RATS_QUEST_2:
	msgbox MELZARS_1F_RATS_QUEST_Text_0
	closemessage
	setwildbattle SPECIES_GIANT_RAT_NORMAL_FORM, 10, ITEM_NONE
	dowildbattle
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 110
	release
	end


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
	namebox HAM_ROUTE9_MELZARS_1_Text_0
	msgbox HAM_ROUTE9_MELZARS_1_Text_1
	hidenamebox
	closemessage
	release
	end


HAM_ROUTE9_MELZARS_2::
	lock
	faceplayer
	namebox HAM_ROUTE9_MELZARS_1_Text_0
	msgbox HAM_ROUTE9_MELZARS_2_Text_0
	hidenamebox
	closemessage
	release
	end


MELZARS_1F_RATS_QUEST_Text_0:
	.string "Squeek!$"

MELZARS_1F_RATS_QUEST_Text_1:
	.string "You've already got the key.\p"
	.string "You decide not to torture the poor rats\n"
	.string "any more.$"

BATTLE_MELZARS_1F_TRAINER_1_Text_0:
	.string "I won't let you stop our plans!$"

BATTLE_MELZARS_1F_TRAINER_1_Text_1:
	.string "You won't get very far without a key..$"

BATTLE_MELZARS_1F_TRAINER_1_Text_2:
	.string "Derrick$"

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
	.string "H.A.M GRUNT$"

HAM_ROUTE9_MELZARS_1_Text_1:
	.string "This is the meeting point right?\p"
	.string "Where is everyone?$"

HAM_ROUTE9_MELZARS_2_Text_0:
	.string "Where is she?\p"
	.string "Everyone has already gone in to look\n"
	.string "for the map.$"
