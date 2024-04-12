Melzars_Maze_B1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Melzars_Maze_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Melzars_Maze_B1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 0
	call MELZARS_B1F_STATE
	return


MELZARS_B1F_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	goto_if_eq MELZARS_B1F_STATE_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 106
	goto_if_eq MELZARS_B1F_STATE_2
	removeobject 2
	removeobject 3
	setflag FLAG_TEMP_1D
MELZARS_B1F_STATE_1:
	return

MELZARS_B1F_STATE_2:
	addobject 2
	addobject 3
	clearflag FLAG_TEMP_1D
	goto MELZARS_B1F_STATE_1


Melzar_Maze_B1F_HAM_Patty::
	msgbox Melzar_Maze_B1F_HAM_Patty_Text_0
	closemessage
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 110
	end


Melzar_Maze_B1F_GREEN_KEY::
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 2
	goto_if_eq Melzar_Maze_B1F_GREEN_KEY_2
Melzar_Maze_B1F_GREEN_KEY_1:
	msgbox Melzar_Maze_B1F_GREEN_KEY_Text_2
	closemessage
	end

Melzar_Maze_B1F_GREEN_KEY_2:
	msgbox Melzar_Maze_B1F_GREEN_KEY_Text_0
	closemessage
	setvar VAR_POKESCAPE_MELZARS_MAZE_DOORS, 3
	playfanfare MUS_OBTAIN_ITEM
	msgbox Melzar_Maze_B1F_GREEN_KEY_Text_1
	waitfanfare
	closemessage
	goto Melzar_Maze_B1F_GREEN_KEY_1


Melzar_Maze_B1F_HAM_Patty_Text_0:
	.string "Hey so this script is unfinished, but\n"
	.string "count this as Melzars Maze section\l"
	.string "completed.\p"
	.string "Now go to Falador.$"

Melzar_Maze_B1F_GREEN_KEY_Text_0:
	.string "The skeleton stares at you.\p"
	.string "It appears to be giving you something.$"

Melzar_Maze_B1F_GREEN_KEY_Text_1:
	.string "{PLAYER} obtained the GREEN KEY.$"

Melzar_Maze_B1F_GREEN_KEY_Text_2:
	.string "The skeleton smiles at you.\p"
	.string "Or at least you think that's a smile.$"
