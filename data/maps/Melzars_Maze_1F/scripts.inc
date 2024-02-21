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


HAM_ROUTE9_MELZARS_1_Text_0:
	.string "H.A.M GRUNT$"

HAM_ROUTE9_MELZARS_1_Text_1:
	.string "This is the meeting point right?\p"
	.string "Where is everyone?$"

HAM_ROUTE9_MELZARS_2_Text_0:
	.string "Where is she?\p"
	.string "Everyone has already gone in to look\n"
	.string "for the map.$"
