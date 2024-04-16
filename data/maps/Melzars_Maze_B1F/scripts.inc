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
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 107
	goto_if_eq MELZARS_B1F_STATE_3
	removeobject 2
	removeobject 3
	setflag FLAG_TEMP_1B
	setflag FLAG_TEMP_1A
	setflag FLAG_TEMP_1D
	setvar VAR_TEMP_E, 1
MELZARS_B1F_STATE_1:
	return

MELZARS_B1F_STATE_2:
	addobject 2
	addobject 3
	clearflag FLAG_TEMP_1D
	setvar VAR_TEMP_0, 1
	setvar VAR_TEMP_5, 1
	playbgm MUS_PS_ENCOUNTER_HAM, TRUE
	goto MELZARS_B1F_STATE_1

MELZARS_B1F_STATE_3:
	addobject 2
	addobject 3
	clearflag FLAG_TEMP_1D
	setflag FLAG_TEMP_1C
	setvar VAR_TEMP_0, 0
	setvar VAR_TEMP_5, 1
	setobjectxyperm 3, 7, 8
	setvar VAR_TEMP_E, 1
	playbgm MUS_PS_ENCOUNTER_HAM, TRUE
	goto MELZARS_B1F_STATE_1


Melzar_Maze_B1F_HAM_Patty::
	msgbox Melzar_Maze_B1F_HAM_Patty_Text_0
	closemessage
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 110
	end


Melzar_Maze_B1F_GREEN_KEY::
	faceplayer
	compare VAR_POKESCAPE_MELZARS_MAZE_DOORS, 2
	goto_if_eq Melzar_Maze_B1F_GREEN_KEY_2
Melzar_Maze_B1F_GREEN_KEY_1:
	msgbox Melzar_Maze_B1F_GREEN_KEY_Text_2
	closemessage
	release
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


TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 8
	goto_if_eq TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_2
	compare VAR_TEMP_2, 9
	goto_if_eq TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_3
TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_1:
	waitmovement 0
	applymovement 3, Common_Movement_FacePlayer
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_RIGHT
	applymovement 3, movement_MelzarsMazeB1F_HAM1
	waitmovement 0
	setobjectxyperm 3, 7, 8
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_2
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_3
	closemessage
	hidenamebox
	trainerbattle_no_intro TRAINER_MELZARSMAZE_MELZAR_THE_MAD, TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_4
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_2
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_5
	closemessage
	hidenamebox
	applymovement 1, movement_MelzarsMazeB1F_Melzar1
	waitmovement 0
	setvar VAR_TEMP_E, 1
	call MELZARS_LOCKED_DOOR_B1F_3
	applymovement 1, movement_MelzarsMazeB1F_Melzar2
	waitmovement 0
	setflag FLAG_TEMP_1C
	removeobject 1
	setvar VAR_TEMP_0, 2
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 107
	release
	end

TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_2:
	applymovement OBJ_EVENT_ID_PLAYER, movement_MelzarsMazeB1F_Player2
	goto TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_1

TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_3:
	applymovement OBJ_EVENT_ID_PLAYER, movement_MelzarsMazeB1F_Player1
	goto TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_1


Melzar_Maze_B1F_HAM_GRUNT_1::
	lock
	faceplayer
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_0
	msgbox Melzar_Maze_B1F_HAM_GRUNT_1_Text_0
	closemessage
	hidenamebox
	release
	end


Melzar_Maze_B1F_HAM_GRUNT_2::
	lock
	faceplayer
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_0
	msgbox Melzar_Maze_B1F_HAM_GRUNT_2_Text_0
	closemessage
	hidenamebox
	release
	end


Melzar_Maze_B1F_HAM_GRUNT_3::
	lock
	faceplayer
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_0
	msgbox Melzar_Maze_B1F_HAM_GRUNT_3_Text_0
	closemessage
	hidenamebox
	release
	end


Melzar_Maze_B1F_HAM_GRUNT_4::
	lock
	faceplayer
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_0
	msgbox Melzar_Maze_B1F_HAM_GRUNT_4_Text_0
	closemessage
	hidenamebox
	release
	end


Melzar_Maze_B1F_MelzarTheMad::
	lock
	faceplayer
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_2
	msgbox Melzar_Maze_B1F_MelzarTheMad_Text_0
	closemessage
	hidenamebox
	release
	end


TRIGGER_Melzar_Maze_HAM_EVENT_BABE::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 16
	goto_if_eq TRIGGER_Melzar_Maze_HAM_EVENT_BABE_2
	compare VAR_TEMP_2, 17
	goto_if_eq TRIGGER_Melzar_Maze_HAM_EVENT_BABE_3
	compare VAR_TEMP_2, 18
	goto_if_eq TRIGGER_Melzar_Maze_HAM_EVENT_BABE_4
TRIGGER_Melzar_Maze_HAM_EVENT_BABE_1:
	waitmovement 0
	applymovement 2, MOVEMENT_FACE_RIGHT
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_1
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_LEFT
	applymovement 4, MOVEMENT_WALK_RIGHT
	applymovement 2, Movement_lighthouse_ham_3
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_2
	playmoncry SPECIES_DEMON_LESSER_TONGUE_FORM, 0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_3
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	setwildbattle SPECIES_DEMON_LESSER_TONGUE_FORM, 25, ITEM_NONE
	dowildbattle
	fadescreen FADE_TO_BLACK
	setflag FLAG_TEMP_1B
	removeobject 4
	fadescreen FADE_FROM_BLACK
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_4
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_LEFT
	applymovement 2, movement_MelzarsMazeB1F_Babe1
	waitmovement 0
	setflag FLAG_TEMP_1A
	removeobject 9
	playfanfare MUS_OBTAIN_ITEM
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_5
	waitfanfare
	closemessage
	applymovement 2, movement_MelzarsMazeB1F_Babe2
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_6
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_LEFT
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_7, MSGBOX_YESNO
TRIGGER_Melzar_Maze_HAM_EVENT_BABE_9:
	compare VAR_RESULT, 1
	goto_if_ne TRIGGER_Melzar_Maze_HAM_EVENT_BABE_10
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_9
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_LEFT
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_10, MSGBOX_YESNO
TRIGGER_Melzar_Maze_HAM_EVENT_BABE_13:
	compare VAR_RESULT, 1
	goto_if_ne TRIGGER_Melzar_Maze_HAM_EVENT_BABE_14
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_12
	closemessage
	hidenamebox
	trainerbattle_no_intro TRAINER_MELZARSMAZE_HAM_ADMIN_BABE, TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_13
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_14
	closemessage
	hidenamebox
	applymovement 6, movement_MelzarsMazeB1F_HAM2
	applymovement 7, movement_MelzarsMazeB1F_HAM3
	giveitem ITEM_CRANDOR_MAP_PIECE2, 1
	closemessage
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_lighthouse_ham_3
	applymovement 2, movement_MelzarsMazeB1F_Babe3
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_15
	closemessage
	hidenamebox
	applymovement 6, MOVEMENT_INTERACT_LEFT
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_16
	closemessage
	hidenamebox
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_17
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_18
	closemessage
	hidenamebox
	applymovement 6, MOVEMENT_INTERACT_LEFT
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_19
	closemessage
	hidenamebox
	waitmovement 0
	applymovement 2, Movement_InteractFACERIGHT
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_20
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_FACE_DOWN
	waitmovement 0
	namebox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_21
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 110
	removeobject 6
	removeobject 7
	removeobject 8
	removeobject 3
	removeobject 2
	setflag FLAG_TEMP_1D
	setvar VAR_TEMP_5, 2
	playbgm MUS_PS_CAVE_F2P, FALSE
	fadescreen FADE_FROM_BLACK
	release
	end

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_2:
	applymovement OBJ_EVENT_ID_PLAYER, movement_MelzarsMazeB1F_Player3
	goto TRIGGER_Melzar_Maze_HAM_EVENT_BABE_1

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_3:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALK_LEFT
	goto TRIGGER_Melzar_Maze_HAM_EVENT_BABE_1

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_4:
	applymovement OBJ_EVENT_ID_PLAYER, movement_MelzarsMazeB1F_Player4
	goto TRIGGER_Melzar_Maze_HAM_EVENT_BABE_1

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_10:
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_8, MSGBOX_YESNO
	goto TRIGGER_Melzar_Maze_HAM_EVENT_BABE_9

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_14:
	msgbox TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_11, MSGBOX_YESNO
	goto TRIGGER_Melzar_Maze_HAM_EVENT_BABE_13


movement_MelzarsMazeB1F_Player1:
	walk_right
	walk_right
	walk_down
	face_right
	step_end

movement_MelzarsMazeB1F_Player2:
	walk_right
	walk_right
	walk_down
	walk_down
	face_right
	step_end

movement_MelzarsMazeB1F_HAM1:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	face_right
	step_end

movement_MelzarsMazeB1F_Melzar1:
	walk_slow_up
	walk_slow_up
	walk_slow_left
	walk_slow_left
	walk_slow_left
	face_up
	step_end

movement_MelzarsMazeB1F_Melzar2:
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	walk_slow_up
	step_end

movement_MelzarsMazeB1F_Player3:
	walk_left
	walk_down
	face_left
	step_end

movement_MelzarsMazeB1F_Player4:
	walk_left
	walk_up
	face_left
	step_end

movement_MelzarsMazeB1F_Babe1:
	walk_left
	walk_up
	walk_left
	step_end

movement_MelzarsMazeB1F_Babe2:
	walk_right
	step_end

movement_MelzarsMazeB1F_HAM2:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

movement_MelzarsMazeB1F_HAM3:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	step_end

movement_MelzarsMazeB1F_Babe3:
	walk_right
	step_end

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

TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_0:
	.string "H.A.M Grunt$"

TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_1:
	.string "Hey are you the reinforcements?\p"
	.string "This crazy old guy is holding me back.\p"
	.string "Here, I'll leave him to you.$"

TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_2:
	.string "Melzar$"

TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_3:
	.string "Begone!\p"
	.string "Let me feed my pet rock!!!\p"
	.string "By the power of custard I will smite\n"
	.string "you!$"

TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_4:
	.string "My cabbages!$"

TRIGGER_Melzar_Maze_HAM_EVENT_MELZAR_Text_5:
	.string "I want to drink my tea in peace…$"

Melzar_Maze_B1F_HAM_GRUNT_1_Text_0:
	.string "So glad you dealt with that guy.\p"
	.string "I'm only a lower middle management\n"
	.string "grunt, I cant deal with actual\l"
	.string "opposition.$"

Melzar_Maze_B1F_HAM_GRUNT_2_Text_0:
	.string "Man, I am so exhausted…$"

Melzar_Maze_B1F_HAM_GRUNT_3_Text_0:
	.string "I never want to see a cabbage again…$"

Melzar_Maze_B1F_HAM_GRUNT_4_Text_0:
	.string "Now there is a Demon to deal with?!\p"
	.string "When does this end…$"

Melzar_Maze_B1F_MelzarTheMad_Text_0:
	.string "I gave my pet rock some custard, its\n"
	.string "feeling better now.$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_0:
	.string "Babe$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_1:
	.string "Oh.\p"
	.string "You're a new face.\p"
	.string "Here, dispose of this Demon for me.$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_2:
	.string "Lesser Demon$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_3:
	.string "GWARAKU!$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_4:
	.string "Thanks for that, let me just grab that\n"
	.string "map so we can move on.$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_5:
	.string "BABE obtained the MAP PIECE.$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_6:
	.string "Wait, you're not with us are you?\p"
	.string "Why are you here?$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_7:
	.string "You want this map piece?$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_8:
	.string "Then why are you here?\p"
	.string "Do you want this map piece?$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_9:
	.string "Well I can't do that.\p"
	.string "Sigmund needs this piece to get us to\n"
	.string "Crandor so we can exterminate all\l"
	.string "monsters.$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_10:
	.string "…{PAUSE 32}…{PAUSE 32}…\p"
	.string "You really want this map piece don't\n"
	.string "you?$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_11:
	.string "Then why are you still here?\p"
	.string "Do you want this map piece?$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_12:
	.string "I guess the only way to settle this is a\n"
	.string "battle.\p"
	.string "Winner takes the map piece.$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_13:
	.string "Oh, this is not good.$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_14:
	.string "Aah I lost.\p"
	.string "Sigmund is going to be mad at me again.\p"
	.string "Ok here you can have this map piece.$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_15:
	.string "Ok guys mission failed, we're going to\n"
	.string "Musa Point and meet up with Pattys\l"
	.string "crew.$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_16:
	.string "What about the batallion sent to\n"
	.string "falador?$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_17:
	.string "Right…{PAUSE 32}\n"
	.string "Well I don't really care about that.\p"
	.string "Let them do as they like I guess.$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_18:
	.string "Hey you, you may have won this time, but\n"
	.string "let me just say you shouldn't give\l"
	.string "chase after us.\p"
	.string "Some of the higher ups like Johannes\n"
	.string "and Sigmund can be real scary.\p"
	.string "I wouldn't want to oppose them.\p"
	.string "This one time I accidentally ate\n"
	.string "Sigmunds san-$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_19:
	.string "We should really move on now…$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_20:
	.string "Oh right!$"

TRIGGER_Melzar_Maze_HAM_EVENT_BABE_Text_21:
	.string "Bye person I don't know the name of.$"
