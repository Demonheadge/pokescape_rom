PortSarim_Lighthouse_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PortSarim_Lighthouse_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PortSarim_Lighthouse_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call LIGHTHOUSE_3F_STATE
	return


LIGHTHOUSE_3F_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 101
	goto_if_eq LIGHTHOUSE_3F_STATE_2
	removeobject 4
	removeobject 3
	removeobject 6
	removeobject 8
	removeobject 2
	setflag FLAG_TEMP_1E
	removeobject 1
	removeobject 5
	setflag FLAG_TEMP_1F
	setobjectmovementtype 7, MOVEMENT_TYPE_WANDER_AROUND
	setobjectxyperm 7, 10, 10
LIGHTHOUSE_3F_STATE_1:
	return

LIGHTHOUSE_3F_STATE_2:
	addobject 4
	addobject 3
	addobject 6
	addobject 8
	addobject 2
	clearflag FLAG_TEMP_1E
	addobject 1
	addobject 5
	clearflag FLAG_TEMP_1F
	goto LIGHTHOUSE_3F_STATE_1


LIGHTHOUSE_3F_NPC_1::
	msgbox LIGHTHOUSE_3F_NPC_1_Text_0
	closemessage
	release
	end


LIGHTHOUSE_3F_NPC_2::
	msgbox LIGHTHOUSE_3F_NPC_2_Text_0
	closemessage
	release
	end


LIGHTHOUSE_3F_NPC_3::
	msgbox LIGHTHOUSE_3F_NPC_3_Text_0
	closemessage
	release
	end


LIGHTHOUSE_3F_NPC_4::
	msgbox LIGHTHOUSE_3F_NPC_4_Text_0
	closemessage
	release
	end


BATTLE_LIGHTHOUSE_3F_TRAINER_1::
	trainerbattle_single TRAINER_LIGHTHOUSE_3F_TRAINER_1, BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_0, BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_1
	namebox BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_2
	msgbox BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_1
	hidenamebox
	release
	end


LIGHTHOUSE_HAM_BABE::
	namebox LIGHTHOUSE_HAM_BABE_Text_0
	msgbox LIGHTHOUSE_HAM_BABE_Text_1
	namebox LIGHTHOUSE_HAM_BABE_Text_2
	msgbox LIGHTHOUSE_HAM_BABE_Text_3
	namebox LIGHTHOUSE_HAM_BABE_Text_0
	msgbox LIGHTHOUSE_HAM_BABE_Text_4
	namebox LIGHTHOUSE_HAM_BABE_Text_2
	msgbox LIGHTHOUSE_HAM_BABE_Text_5
	namebox LIGHTHOUSE_HAM_BABE_Text_0
	msgbox LIGHTHOUSE_HAM_BABE_Text_6
	namebox LIGHTHOUSE_HAM_BABE_Text_2
	msgbox LIGHTHOUSE_HAM_BABE_Text_7
	namebox LIGHTHOUSE_HAM_BABE_Text_0
	msgbox LIGHTHOUSE_HAM_BABE_Text_8
	namebox LIGHTHOUSE_HAM_BABE_Text_0
	msgbox LIGHTHOUSE_HAM_BABE_Text_9
	namebox LIGHTHOUSE_HAM_BABE_Text_0
	msgbox LIGHTHOUSE_HAM_BABE_Text_10
	namebox LIGHTHOUSE_HAM_BABE_Text_0
	msgbox LIGHTHOUSE_HAM_BABE_Text_11
	closemessage
	fadescreen FADE_TO_BLACK
	removeobject 4
	removeobject 3
	removeobject 6
	removeobject 8
	removeobject 2
	setflag FLAG_TEMP_1E
	removeobject 7
	setflag FLAG_TEMP_1D
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_LEFT
	setobjectxyperm 5, 8, 11
	setobjectxy 5, 8, 11
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	namebox LIGHTHOUSE_HAM_BABE_Text_12
	msgbox LIGHTHOUSE_HAM_BABE_Text_13
	namebox LIGHTHOUSE_HAM_BABE_Text_12
	msgbox LIGHTHOUSE_HAM_BABE_Text_14
	namebox LIGHTHOUSE_HAM_BABE_Text_2
	msgbox LIGHTHOUSE_HAM_BABE_Text_15
	applymovement OBJ_EVENT_ID_PLAYER, Movement_lighthouse_ham_3
	applymovement 5, Movement_lighthouse_ham_0
	waitmovement 0
	applymovement 5, Movement_lighthouse_ham_1
	applymovement 1, Movement_lighthouse_ham_2
	waitmovement 0
	removeobject 1
	removeobject 5
	setflag FLAG_TEMP_1F
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 102
	call LIGHTHOUSE_3F_STATE
	closemessage
	hidenamebox
	release
	end


Movement_lighthouse_ham_0:
	walk_left
	walk_left
	walk_left
	step_end

Movement_lighthouse_ham_1:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_lighthouse_ham_2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_lighthouse_ham_3:
	face_up
	lock_facing_direction
	walk_down
	step_end

LIGHTHOUSE_3F_NPC_1_Text_0:
	.string "The guard looks like they're struggling\n"
	.string "to hold the HAM member off.$"

LIGHTHOUSE_3F_NPC_2_Text_0:
	.string "They appear to be winning.\p"
	.string "Someone needs to stop these HAM\n"
	.string "members before it's too late.$"

LIGHTHOUSE_3F_NPC_3_Text_0:
	.string "The guard hurriedly points to the\n"
	.string "nearby HAM members.$"

LIGHTHOUSE_3F_NPC_4_Text_0:
	.string "The HAM member looks like they're about\n"
	.string "to cry.\p"
	.string "Probably not a good look in front of one\n"
	.string "of their boss.$"

BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_0:
	.string "Our Admin is still getting what she\n"
	.string "needs, so I guess it's up to me to stop\l"
	.string "you.$"

BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_1:
	.string "Aw, doesn't look like I'll be getting\n"
	.string "that promotion now…$"

BATTLE_LIGHTHOUSE_3F_TRAINER_1_Text_2:
	.string "HAM Member$"

LIGHTHOUSE_HAM_BABE_Text_0:
	.string "Babe$"

LIGHTHOUSE_HAM_BABE_Text_1:
	.string "Give me the map you stupid Goblin!$"

LIGHTHOUSE_HAM_BABE_Text_2:
	.string "WORM GOBLIN$"

LIGHTHOUSE_HAM_BABE_Text_3:
	.string "Only if you pay me 10,000 GP.$"

LIGHTHOUSE_HAM_BABE_Text_4:
	.string "What no one has that kind of money!$"

LIGHTHOUSE_HAM_BABE_Text_5:
	.string "No map for pink lady then.\p"
	.string "Only way you can get map is if you take\n"
	.string "it from me.\p"
	.string "But I in jail cell, you cannot reach me.$"

LIGHTHOUSE_HAM_BABE_Text_6:
	.string "…\p"
	.string "You're not in a jail cell anymore.$"

LIGHTHOUSE_HAM_BABE_Text_7:
	.string "…$"

LIGHTHOUSE_HAM_BABE_Text_8:
	.string "Taste this telekentic fist!$"

LIGHTHOUSE_HAM_BABE_Text_9:
	.string "I'll be taking that you stupid goblin.$"

LIGHTHOUSE_HAM_BABE_Text_10:
	.string "Wait who are you?\p"
	.string "You want to battle bring it!$"

LIGHTHOUSE_HAM_BABE_Text_11:
	.string "This cannot be, take the map for now\n"
	.string "but we will be back for it later.\p"
	.string "I won't forget you!\p"
	.string "Time to go everyone!$"

LIGHTHOUSE_HAM_BABE_Text_12:
	.string "Guard$"

LIGHTHOUSE_HAM_BABE_Text_13:
	.string "Thank you for assisting us in repelling\n"
	.string "HAM.\p"
	.string "They've been very organised as of late.\p"
	.string "Im not sure what they are after.\p"
	.string "But here take this for helping us out.$"

LIGHTHOUSE_HAM_BABE_Text_14:
	.string "Come on Goblin, back to your cell.$"

LIGHTHOUSE_HAM_BABE_Text_15:
	.string "Me think me nose is broken…$"
