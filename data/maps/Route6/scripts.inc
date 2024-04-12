Route6_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_ROUTE6
	return

Route6_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	goto FALADORSOUTH_STATE
	return


OPENWORLD_STATE_ROUTE6::
	addobject 2
	clearflag FLAG_TEMP_1
	removeobject 5
	removeobject 7
	removeobject 4
	removeobject 6
	setflag FLAG_TEMP_2
	return


FALADORSOUTH_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 110
	goto_if_lt FALADORSOUTH_STATE_2
	removeobject 5
	removeobject 7
	removeobject 4
	removeobject 6
	setflag FLAG_TEMP_2
FALADORSOUTH_STATE_1:
	return

FALADORSOUTH_STATE_2:
	removeobject 2
	setflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	addobject 5
	addobject 7
	addobject 4
	addobject 6
	addobject 8
	goto FALADORSOUTH_STATE_1


ROUTE6_NPC_GUARD_HAM::
	lock
	faceplayer
	namebox ROUTE6_NPC_GUARD_HAM_Text_0
	msgbox ROUTE6_NPC_GUARD_HAM_Text_1
	hidenamebox
	closemessage
	release
	end


ROUTE6_BLOCK_FaladorGuard::
	applymovement 5, MOVEMENT_ROUTE6_MUGGER
	waitmovement 0
	namebox ROUTE6_BLOCK_FaladorGuard_Text_0
	msgbox ROUTE6_BLOCK_FaladorGuard_Text_1
	closemessage
	hidenamebox
	applymovement 7, MOVEMENT_ROUTE6_RAT
	waitmovement 0
	playmoncry SPECIES_RATTATA, 0
	namebox ROUTE6_BLOCK_FaladorGuard_Text_2
	msgbox ROUTE6_BLOCK_FaladorGuard_Text_3
	waitmoncry
	closemessage
	hidenamebox
	applymovement 4, MOVEMENT_ROUTE6_GUARD
	waitmovement 0
	namebox ROUTE6_NPC_GUARD_HAM_Text_0
	msgbox ROUTE6_BLOCK_FaladorGuard_Text_4
	closemessage
	hidenamebox
	applymovement 6, MOVEMENT_ROUTE6_UNICORN
	waitmovement 0
	playmoncry SPECIES_LOTAD, 0
	namebox ROUTE6_BLOCK_FaladorGuard_Text_5
	msgbox ROUTE6_BLOCK_FaladorGuard_Text_6
	waitmoncry
	closemessage
	hidenamebox
	release
	end


MOVEMENT_ROUTE6_MUGGER:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

MOVEMENT_ROUTE6_RAT:
	walk_in_place_right
	walk_in_place_right
	walk_in_place_right
	step_end

MOVEMENT_ROUTE6_GUARD:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

MOVEMENT_ROUTE6_UNICORN:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

BATTLE_ROUTE6_FIREMAKER::
	trainerbattle_single TRAINER_ROUTE6_FIREMAKER, BATTLE_ROUTE6_FIREMAKER_Text_0, BATTLE_ROUTE6_FIREMAKER_Text_1
	msgbox BATTLE_ROUTE6_FIREMAKER_Text_1
	release
	return


BATTLE_ROUTE6_MUGGER::
	trainerbattle_single TRAINER_MUGGER_ROUTE6, BATTLE_ROUTE6_MUGGER_Text_0, BATTLE_ROUTE6_MUGGER_Text_1
	namebox ROUTE6_BLOCK_FaladorGuard_Text_0
	msgbox BATTLE_ROUTE6_MUGGER_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE6_GUARD_1::
	trainerbattle_single TRAINER_ROUTE6_GUARD_1, BATTLE_ROUTE6_GUARD_1_Text_0, BATTLE_ROUTE6_GUARD_1_Text_1
	namebox ROUTE6_NPC_GUARD_HAM_Text_0
	msgbox BATTLE_ROUTE6_GUARD_1_Text_2
	hidenamebox
	release
	end


ROUTE6_NPC_GUARD_HAM_Text_0:
	.string "Guard$"

ROUTE6_NPC_GUARD_HAM_Text_1:
	.string "We've recieved reports that there is\n"
	.string "current H.A.M activity in Rimmington.\p"
	.string "We wish to send some White Knights to\n"
	.string "go investigate but they are currently\l"
	.string "busy with some distrubances within the\l"
	.string "Dwarven Mines.$"

ROUTE6_BLOCK_FaladorGuard_Text_0:
	.string "Mugger$"

ROUTE6_BLOCK_FaladorGuard_Text_1:
	.string "Heh, I bet you won't even last 30\n"
	.string "seconds against my Rat!$"

ROUTE6_BLOCK_FaladorGuard_Text_2:
	.string "Rat$"

ROUTE6_BLOCK_FaladorGuard_Text_3:
	.string "Squeeek!$"

ROUTE6_BLOCK_FaladorGuard_Text_4:
	.string "You will not enter Falador for as long\n"
	.string "as I am here you disgusting mugger!$"

ROUTE6_BLOCK_FaladorGuard_Text_5:
	.string "Unicorn$"

ROUTE6_BLOCK_FaladorGuard_Text_6:
	.string "Neeeigh!$"

BATTLE_ROUTE6_FIREMAKER_Text_0:
	.string "Hey get out of my way, I'm making\n"
	.string "bonfires here!$"

BATTLE_ROUTE6_FIREMAKER_Text_1:
	.string "Burned to a crisp.\p"
	.string "I hope you levelled up…$"

BATTLE_ROUTE6_MUGGER_Text_0:
	.string "Your money or your life!$"

BATTLE_ROUTE6_MUGGER_Text_1:
	.string "Okay I guess you can keep both…$"

BATTLE_ROUTE6_MUGGER_Text_2:
	.string "Shoo you're making it hard for me to mug\n"
	.string "people.$"

BATTLE_ROUTE6_GUARD_1_Text_0:
	.string "Welcome to Falador, I greet you with a\n"
	.string "battle!$"

BATTLE_ROUTE6_GUARD_1_Text_1:
	.string "Welcome and goodbye.$"

BATTLE_ROUTE6_GUARD_1_Text_2:
	.string "Enjoy your stay, and do not get in\n"
	.string "trouble.$"
