PortSarim_Lighthouse_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PortSarim_Lighthouse_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PortSarim_Lighthouse_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	call LIGHTHOUSE_3F_STATE
	return


LIGHTHOUSE_3F_STATE::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
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
	removeobject 9
	setflag FLAG_TEMP_F
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
	removeobject 9
	setflag FLAG_TEMP_F
	setvar VAR_TEMP_0, 1
	special Overworld_PlaySpecialMapMusic
	goto LIGHTHOUSE_3F_STATE_1


LIGHTHOUSE_3F_NPC_1::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq LIGHTHOUSE_3F_NPC_1_2
	lock
	faceplayer
	namebox LIGHTHOUSE_3F_NPC_1_Text_1
	msgbox LIGHTHOUSE_3F_NPC_1_Text_2
LIGHTHOUSE_3F_NPC_1_1:
	closemessage
	hidenamebox
	release
	end

LIGHTHOUSE_3F_NPC_1_2:
	msgbox LIGHTHOUSE_3F_NPC_1_Text_0
	goto LIGHTHOUSE_3F_NPC_1_1


LIGHTHOUSE_3F_NPC_2::
	msgbox LIGHTHOUSE_3F_NPC_2_Text_0
	closemessage
	release
	end


LIGHTHOUSE_3F_NPC_3::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 100
	goto_if_eq LIGHTHOUSE_3F_NPC_3_2
	lock
	faceplayer
	namebox LIGHTHOUSE_3F_NPC_1_Text_1
	msgbox LIGHTHOUSE_3F_NPC_1_Text_2
LIGHTHOUSE_3F_NPC_3_1:
	closemessage
	hidenamebox
	release
	end

LIGHTHOUSE_3F_NPC_3_2:
	msgbox LIGHTHOUSE_3F_NPC_3_Text_0
	goto LIGHTHOUSE_3F_NPC_3_1


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


TRIGGER_LIGHTHOUSE_HAM_PATTY::
	getplayerxy VAR_TEMP_1, VAR_TEMP_2
	compare VAR_TEMP_2, 11
	goto_if_eq TRIGGER_LIGHTHOUSE_HAM_PATTY_2
	compare VAR_TEMP_2, 12
	goto_if_eq TRIGGER_LIGHTHOUSE_HAM_PATTY_3
TRIGGER_LIGHTHOUSE_HAM_PATTY_1:
	waitmovement 0
	goto LIGHTHOUSE_HAM_PATTY
	return

TRIGGER_LIGHTHOUSE_HAM_PATTY_2:
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_WALKLEFT
	goto TRIGGER_LIGHTHOUSE_HAM_PATTY_1

TRIGGER_LIGHTHOUSE_HAM_PATTY_3:
	applymovement OBJ_EVENT_ID_PLAYER, Movement_lighthouse_ham_4
	goto TRIGGER_LIGHTHOUSE_HAM_PATTY_1


LIGHTHOUSE_HAM_PATTY::
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	applymovement 2, MOVEMENT_INTERACT_LEFT
	msgbox LIGHTHOUSE_HAM_PATTY_Text_1
	waitmovement 0
	namebox LIGHTHOUSE_HAM_PATTY_Text_2
	applymovement 1, MOVEMENT_INTERACT_RIGHT
	msgbox LIGHTHOUSE_HAM_PATTY_Text_3
	waitmovement 0
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_4
	namebox LIGHTHOUSE_HAM_PATTY_Text_2
	msgbox LIGHTHOUSE_HAM_PATTY_Text_5
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_6
	namebox LIGHTHOUSE_HAM_PATTY_Text_2
	msgbox LIGHTHOUSE_HAM_PATTY_Text_7
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_8
	waitmovement 1
	applymovement 2, MOVEMENT_DraynorManorCrypt_COUNT_3
	playse SE_WALL_HIT
	applymovement 1, MOVEMENT_DraynorManorCrypt_HAM_3
	waitmovement 1
	addobject 9
	clearflag FLAG_TEMP_F
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_9
	closemessage
	hidenamebox
	applymovement 2, MOVEMENT_WALKLEFT
	waitmovement 0
	delay 32
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_10
	closemessage
	hidenamebox
	removeobject 9
	setflag FLAG_TEMP_F
	delay 60
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_11
	closemessage
	hidenamebox
	applymovement 2, movement_WALKRIGHT
	waitmovement 0
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_12
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_LEFT
	waitmovement 0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_13
	closemessage
	hidenamebox
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_INTERACT_LEFT
	waitmovement 0
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_14
	closemessage
	hidenamebox
	trainerbattle_no_intro TRAINER_LIGHTHOUSE_3F_HAM_ADMIN_PATTY, LIGHTHOUSE_HAM_PATTY_Text_15
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_16
	hidenamebox
	closemessage
	giveitem ITEM_CRANDOR_MAP_PIECE1, 1
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_17
	closemessage
	hidenamebox
	applymovement 2, movement_WALKRIGHT
	applymovement OBJ_EVENT_ID_PLAYER, Movement_lighthouse_ham_3
	waitmovement 0
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_18
	hidenamebox
	closemessage
	applymovement 5, MOVEMENT_FACE_UP
	applymovement 4, Movement_lighthouse_ham_5
	waitmovement 0
	namebox LIGHTHOUSE_HAM_PATTY_Text_19
	msgbox LIGHTHOUSE_HAM_PATTY_Text_20
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_21
	applymovement 2, Movement_InteractFACEPLAYER
	waitmovement 0
	namebox LIGHTHOUSE_HAM_PATTY_Text_0
	msgbox LIGHTHOUSE_HAM_PATTY_Text_22
	closemessage
	hidenamebox
	fadescreen FADE_TO_BLACK
	removeobject 4
	removeobject 3
	removeobject 6
	removeobject 8
	removeobject 2
	setflag FLAG_TEMP_1E
	removeobject 7
	setflag FLAG_TEMP_1D
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 5, 7, 11
	setobjectxy 5, 7, 11
	applymovement 5, MOVEMENT_INTERACT_DOWN
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_InteractFACERIGHT
	waitmovement 0
	fadescreen FADE_FROM_BLACK
	namebox LIGHTHOUSE_3F_NPC_1_Text_1
	msgbox LIGHTHOUSE_HAM_PATTY_Text_23
	closemessage
	hidenamebox
	giveitem ITEM_TM62, 1
	closemessage
	applymovement 5, Movement_lighthouse_ham_0
	waitmovement 0
	namebox LIGHTHOUSE_3F_NPC_1_Text_1
	msgbox LIGHTHOUSE_HAM_PATTY_Text_24
	namebox LIGHTHOUSE_HAM_PATTY_Text_2
	msgbox LIGHTHOUSE_HAM_PATTY_Text_25
	closemessage
	hidenamebox
	applymovement 5, Movement_lighthouse_ham_1
	applymovement 1, Movement_lighthouse_ham_2
	waitmovement 0
	removeobject 1
	removeobject 5
	setflag FLAG_TEMP_1F
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 105
	setvar VAR_TEMP_0, 0
	call LIGHTHOUSE_3F_STATE
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
	unlock_facing_direction
	step_end

Movement_lighthouse_ham_4:
	walk_left
	walk_up
	face_left
	step_end

Movement_lighthouse_ham_5:
	walk_left
	walk_left
	walk_left
	step_end

Movement_punchGoblin:
	walk_in_place_faster_down
	step_end

LIGHTHOUSE_3F_NPC_1_Text_0:
	.string "The guard looks like they're struggling\n"
	.string "to hold the HAM member off.$"

LIGHTHOUSE_3F_NPC_1_Text_1:
	.string "Guard Captain$"

LIGHTHOUSE_3F_NPC_1_Text_2:
	.string "The lighthouse is for authorized\n"
	.string "personnel only.\p"
	.string "But if want to know more about it,\n"
	.string "basically we go up there every night\l"
	.string "and light a bonfire to help ships find\l"
	.string "thier way.$"

LIGHTHOUSE_3F_NPC_2_Text_0:
	.string "They appear to be winning.\p"
	.string "Someone needs to stop these H.A.M\n"
	.string "members before it's too late.$"

LIGHTHOUSE_3F_NPC_3_Text_0:
	.string "The guard hurriedly points to the\n"
	.string "nearby H.A.M members.$"

LIGHTHOUSE_3F_NPC_4_Text_0:
	.string "The H.A.M member looks like they're about\n"
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
	.string "H.A.M MEMBER$"

LIGHTHOUSE_HAM_PATTY_Text_0:
	.string "Patty$"

LIGHTHOUSE_HAM_PATTY_Text_1:
	.string "Give me the map you stupid Goblin!$"

LIGHTHOUSE_HAM_PATTY_Text_2:
	.string "Wormbrain$"

LIGHTHOUSE_HAM_PATTY_Text_3:
	.string "If human want map, then human must pay\n"
	.string "Wormbrain 10,000GP.$"

LIGHTHOUSE_HAM_PATTY_Text_4:
	.string "You must be joking…$"

LIGHTHOUSE_HAM_PATTY_Text_5:
	.string "Wormbrain never joke if pink human want\n"
	.string "map, then pink human must pay\l"
	.string "Wormbrain 10,000GP.$"

LIGHTHOUSE_HAM_PATTY_Text_6:
	.string "How about I just take it from you\n"
	.string "instead, hows that sound?$"

LIGHTHOUSE_HAM_PATTY_Text_7:
	.string "Wormbrain think human is funny, would\n"
	.string "like to see human try.$"

LIGHTHOUSE_HAM_PATTY_Text_8:
	.string "Have it your way then goblin.\p"
	.string "Get a taste of this Wind Blast!$"

LIGHTHOUSE_HAM_PATTY_Text_9:
	.string "I'll be taking that map piece now.$"

LIGHTHOUSE_HAM_PATTY_Text_10:
	.string "Ew such a disgusting goblin, I don't\n"
	.string "want to go near you.\p"
	.string "So I won't I'll just telekentic grab it\n"
	.string "from here.$"

LIGHTHOUSE_HAM_PATTY_Text_11:
	.string "Map piece retrieved, time to head out.$"

LIGHTHOUSE_HAM_PATTY_Text_12:
	.string "Hey who are you?\p"
	.string "Grunts who let this one up here?!$"

LIGHTHOUSE_HAM_PATTY_Text_13:
	.string "Monster sympathiser?\p"
	.string "Are you here to stop me?\p"
	.string "Or maybe you just want the map piece.\p"
	.string "It matters not, this map goes to a place\n"
	.string "called Crandor, we the Humans Against\l"
	.string "Monsters simply won't let you have it.$"

LIGHTHOUSE_HAM_PATTY_Text_14:
	.string "Oh you want it that bad?\p"
	.string "Well lets see how much you want it!!$"

LIGHTHOUSE_HAM_PATTY_Text_15:
	.string "Why do you even want the map piece?$"

LIGHTHOUSE_HAM_PATTY_Text_16:
	.string "Fine, take it…$"

LIGHTHOUSE_HAM_PATTY_Text_17:
	.string "You may have won this time but you\n"
	.string "cannot stop the grand ambitions of\l"
	.string "H.A.M.\p"
	.string "We fight against the scourge that is\n"
	.string "monsters.\p"
	.string "Fight us and you fight against the\n"
	.string "people.$"

LIGHTHOUSE_HAM_PATTY_Text_18:
	.string "GRUNTS!!$"

LIGHTHOUSE_HAM_PATTY_Text_19:
	.string "H.A.M Grunt$"

LIGHTHOUSE_HAM_PATTY_Text_20:
	.string "Yes ma'am!$"

LIGHTHOUSE_HAM_PATTY_Text_21:
	.string "We're heading out, plan A is ruined, were\n"
	.string "going with plan B.\p"
	.string "Babe will fix things in the maze,\n"
	.string "meanwhile we head for Musa Point on\l"
	.string "Karamja.$"

LIGHTHOUSE_HAM_PATTY_Text_22:
	.string "Dont meddle with us again if you know\n"
	.string "whats good for you.\p"
	.string "We serve the populace of Gielinor by\n"
	.string "ridding it of monsters, opposing us\l"
	.string "means opposing the natural order.$"

LIGHTHOUSE_HAM_PATTY_Text_23:
	.string "Thank you for assisting us in repelling\n"
	.string "H.A.M.\p"
	.string "They've been very organised as of late.\p"
	.string "I'm not sure what they are after.\p"
	.string "But here take this for helping us out.$"

LIGHTHOUSE_HAM_PATTY_Text_24:
	.string "Come on goblin, back to your cell.$"

LIGHTHOUSE_HAM_PATTY_Text_25:
	.string "Me think me nose is broken…$"
