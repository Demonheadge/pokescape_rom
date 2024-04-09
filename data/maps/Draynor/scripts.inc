Draynor_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Draynor_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Draynor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Draynor_MapScripts_MAP_SCRIPT_ON_LOAD:
	call WizardsTower_Draynor_STATE
	call DRAYNOR_GUARD_STATE
	return

Draynor_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_POKESCAPE_GOLDENGNOMES, 15, GOLDENGNOME_EVENT_END
	.2byte 0


WizardsTower_Draynor_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_Draynor_STATE_2
	case 1, WizardsTower_Draynor_STATE_2
	case 2, WizardsTower_Draynor_STATE_2
	case 3, WizardsTower_Draynor_STATE_2
	case 4, WizardsTower_Draynor_STATE_3
	case 5, WizardsTower_Draynor_STATE_4
	case 6, WizardsTower_Draynor_STATE_5
	case 7, WizardsTower_Draynor_STATE_5
	case 8, WizardsTower_Draynor_STATE_5
	case 9, WizardsTower_Draynor_STATE_5
	case 10, WizardsTower_Draynor_STATE_5
	case 11, WizardsTower_Draynor_STATE_5
	return

WizardsTower_Draynor_STATE_2:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 21
	removeobject 24
	release
	return

WizardsTower_Draynor_STATE_3:
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	addobject 21
	addobject 24
	release
	return

WizardsTower_Draynor_STATE_4:
	setflag FLAG_TEMP_1
	removeobject 21
	clearflag FLAG_TEMP_2
	addobject 24
	return

WizardsTower_Draynor_STATE_5:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 21
	removeobject 24
	release
	return


DRAYNOR_GUARD_STATE::
	switch VAR_POKESCAPE_DRAYNOR_GUARD_STATE
	case 0, DRAYNOR_GUARD_STATE_2
	case 1, DRAYNOR_GUARD_STATE_3
	return

DRAYNOR_GUARD_STATE_2:
	setflag FLAG_TEMP_3
	removeobject 19
	release
	return

DRAYNOR_GUARD_STATE_3:
	clearflag FLAG_TEMP_3
	addobject 19
	setobjectxyperm 19, 17, 31
	release
	return


HAM_EVENT_Draynor::
	lockall
	applymovement 21, HAM_Movement6_1
	namebox HAM_EVENT_Draynor_Text_0
	msgbox HAM_EVENT_Draynor_Text_1
	waitmovement 0
	hidenamebox
	closemessage
	applymovement 21, HAM_Movement6_2
	waitmovement 0
	removeobject 21
	setflag FLAG_TEMP_1
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 5
	release
	end


HAM_Movement6_1:
	face_up
	delay_16
	face_left
	delay_16
	face_right
	delay_16
	face_left
	delay_16
	step_end

HAM_Movement6_2:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Draynor_Ariane::
	namebox HAM_EVENT_Draynor_Text_0
	msgbox Draynor_Ariane_Text_0
	hidenamebox
	release
	end


NPC_PIG::
	lock
	faceplayer
	playmoncry SPECIES_PIG, 0
	msgbox NPC_PIG_Text_0
	waitmoncry
	release
	end


Draynor_Diango::
	lock
	faceplayer
	namebox Draynor_Diango_Text_0
	msgbox Draynor_Diango_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne Draynor_Diango_2
	msgbox Draynor_Diango_Text_6
Draynor_Diango_1:
	hidenamebox
	release
	end

Draynor_Diango_2:
	hidenamebox
	msgbox Draynor_Diango_Text_2
	random 3
	compare VAR_RESULT, 0
	goto_if_eq Draynor_Diango_6
Draynor_Diango_5:
	goto_if_unset FLAG_DIANGO_GIFT_DRAGONKITE, Draynor_Diango_8
	goto_if_unset FLAG_DIANGO_GIFT_FROGEELBURGER, Draynor_Diango_9
	compare VAR_POKESCAPE_GOLDENGNOMES, 0
	goto_if_eq Draynor_Diango_10
	msgbox Draynor_Diango_Text_5
	goto Draynor_Diango_1

Draynor_Diango_6:
	msgbox Draynor_Diango_Text_3
	goto Draynor_Diango_5

Draynor_Diango_8:
	call GIFT_DRAGONKITE
	goto Draynor_Diango_1

Draynor_Diango_9:
	call GIFT_FROGEELBURGER
	goto Draynor_Diango_1

Draynor_Diango_10:
	msgbox Draynor_Diango_Text_4
	call GOLDENGNOME_EVENT_START
	goto Draynor_Diango_1


GIFT_DRAGONKITE::
	msgbox GIFT_DRAGONKITE_Text_0
	givemon SPECIES_DRAGONKITE, 10, ITEM_NONE
	bufferspeciesname 1, SPECIES_DRAGONKITE
	playfanfare MUS_OBTAIN_ITEM
	msgbox GIFT_DRAGONKITE_Text_1
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_DRAGONKITE
	setflag FLAG_DIANGO_GIFT_DRAGONKITE
	msgbox GIFT_DRAGONKITE_Text_2
	msgbox GIFT_DRAGONKITE_Text_3
	return


GIFT_FROGEELBURGER::
	msgbox GIFT_DRAGONKITE_Text_0
	additem ITEM_FROGEEL_BURGER, 1
	playfanfare MUS_OBTAIN_ITEM
	msgbox GIFT_FROGEELBURGER_Text_0
	waitmessage
	waitfanfare
	setflag FLAG_DIANGO_GIFT_FROGEELBURGER
	msgbox GIFT_DRAGONKITE_Text_2
	msgbox GIFT_FROGEELBURGER_Text_1
	return


Draynor_Miss_Schism::
	lock
	faceplayer
	namebox Draynor_Miss_Schism_Text_0
	msgbox Draynor_Miss_Schism_Text_1
	hidenamebox
	release
	end


Draynor_Oliva::
	lock
	faceplayer
	namebox Draynor_Oliva_Text_0
	msgbox Draynor_Oliva_Text_1
	hidenamebox
	release
	end


Draynor_Martin::
	lock
	faceplayer
	namebox Draynor_Martin_Text_0
	msgbox Draynor_Martin_Text_1
	hidenamebox
	release
	end


Draynor_Guard1::
	namebox Draynor_Guard1_Text_0
	msgbox Draynor_Guard1_Text_1
	hidenamebox
	release
	end


Draynor_Coolmom227::
	namebox Draynor_Coolmom227_Text_0
	msgbox Draynor_Coolmom227_Text_1
	hidenamebox
	release
	end


Draynor_Guard2::
	lock
	faceplayer
	namebox Draynor_Guard1_Text_0
	msgbox Draynor_Guard2_Text_0
	hidenamebox
	release
	end


Draynor_Guard3::
	lock
	faceplayer
	namebox Draynor_Guard1_Text_0
	msgbox Draynor_Guard3_Text_0
	hidenamebox
	release
	end


Draynor_FORTUNATO::
	faceplayer
	namebox Draynor_FORTUNATO_Text_0
	msgbox Draynor_FORTUNATO_Text_1
	hidenamebox
	release
	end


Draynor_AGGIE::
	lock
	faceplayer
	namebox Draynor_AGGIE_Text_0
	goto_if_unset FLAG_RECEIVED_TM63, Draynor_AGGIE_2
	msgbox Draynor_AGGIE_Text_4
	hidenamebox
	release
	end

Draynor_AGGIE_2:
	msgbox Draynor_AGGIE_Text_1
	msgbox Draynor_AGGIE_Text_2
	giveitem ITEM_TM63, 1
	msgbox Draynor_AGGIE_Text_3
	setflag FLAG_RECEIVED_TM63
	hidenamebox
	release
	end


Draynor_TREE::
	compare VAR_POKESCAPE_DRAYNOR_GUARD_STATE, 0
	goto_if_eq Draynor_TREE_1
	end

Draynor_TREE_1:
	lock
	namebox Draynor_TREE_Text_0
	msgbox Draynor_TREE_Text_1
	hidenamebox
	addobject 19
	playse SE_LEDGE
	applymovement 19, Movement_DraynorGuardTree_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_DraynorGuardTree_2
	waitmovement 0
	namebox Draynor_Guard1_Text_0
	msgbox Draynor_TREE_Text_2
	hidenamebox
	closemessage
	applymovement 19, Movement_DraynorGuardTree_3
	waitmovement 0
	setvar VAR_POKESCAPE_DRAYNOR_GUARD_STATE, 1
	release
	end


Movement_DraynorGuardTree_1:
	jump_special_down
	step_end

Movement_DraynorGuardTree_2:
	lock_facing_direction
	walk_fast_down
	unlock_facing_direction
	step_end

Movement_DraynorGuardTree_3:
	walk_right
	walk_right
	walk_up
	walk_up
	face_down
	step_end

NPC_Draynor_Woman_1::
	lock
	faceplayer
	namebox NPC_Draynor_Woman_1_Text_0
	msgbox NPC_Draynor_Woman_1_Text_1
	hidenamebox
	release
	end


NPC_Draynor_Noob_WillowTree::
	lock
	faceplayer
	namebox NPC_Draynor_Noob_WillowTree_Text_0
	msgbox NPC_Draynor_Noob_WillowTree_Text_1
	hidenamebox
	release
	end


Draynor_Morgan::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, Draynor_Morgan_2
	case 1, Draynor_Morgan_2
	case 2, Draynor_Morgan_2
	case 3, Draynor_Morgan_2
	case 4, Draynor_Morgan_2
	case 5, Draynor_Morgan_2
	case 6, Draynor_Morgan_2
	case 7, Draynor_Morgan_2
	case 8, Draynor_Morgan_2
	case 9, Draynor_Morgan_3
	case 10, Draynor_Morgan_3
	case 11, Draynor_Morgan_3
	return

Draynor_Morgan_2:
	lock
	faceplayer
	namebox Draynor_Morgan_Text_0
	msgbox Draynor_Morgan_Text_1
	hidenamebox
	release
	end

Draynor_Morgan_3:
	lock
	faceplayer
	namebox Draynor_Morgan_Text_0
	msgbox Draynor_Morgan_Text_2
	hidenamebox
	release
	end


NPC_Draynor_Morgans_Wife::
	lock
	faceplayer
	namebox NPC_Draynor_Morgans_Wife_Text_0
	msgbox NPC_Draynor_Morgans_Wife_Text_1
	hidenamebox
	release
	end


NPC_Draynor_Mugger::
	lock
	faceplayer
	namebox NPC_Draynor_Mugger_Text_0
	msgbox NPC_Draynor_Mugger_Text_1
	hidenamebox
	release
	end


NPC_Draynor_WiseOldMan::
	lock
	faceplayer
	namebox NPC_Draynor_WiseOldMan_Text_0
	msgbox Draynor_Coolmom227_Text_1
	hidenamebox
	release
	end


HAM_EVENT_Draynor_Text_0:
	.string "Ariane$"

HAM_EVENT_Draynor_Text_1:
	.string "I'm not sure which way he went…\p"
	.string "Maybe the market…$"

Draynor_Ariane_Text_0:
	.string "I cannot see him anywhere…\p"
	.string "Did I take a wrong turn?\p"
	.string "I hope he didn't run north towards\n"
	.string "Draynor Manor…$"

NPC_PIG_Text_0:
	.string "OINK!$"

Draynor_Diango_Text_0:
	.string "Diango$"

Draynor_Diango_Text_1:
	.string "Howdy!\p"
	.string "Would you like to see if you have any\n"
	.string "gifts avaliable?$"

Draynor_Diango_Text_2:
	.string "Loading - please wait{PAUSE 32}.{PAUSE 32}.{PAUSE 32}.$"

Draynor_Diango_Text_3:
	.string "Connection Lost.\p"
	.string "Please wait - attempting to\n"
	.string "reestablish{PAUSE 32}.{PAUSE 32}.{PAUSE 32}.$"

Draynor_Diango_Text_4:
	.string "An announcement was found!$"

Draynor_Diango_Text_5:
	.string "There was no gift to be found…$"

Draynor_Diango_Text_6:
	.string "Thank you come again.$"

GIFT_DRAGONKITE_Text_0:
	.string "Gift successfully found!$"

GIFT_DRAGONKITE_Text_1:
	.string "{PLAYER} obtained a {STR_VAR_2}.$"

GIFT_DRAGONKITE_Text_2:
	.string "There is a note alongside the gift, it\n"
	.string "reads:$"

GIFT_DRAGONKITE_Text_3:
	.string "Thank you for using Gift System.\n"
	.string "- Diango$"

GIFT_FROGEELBURGER_Text_0:
	.string "{PLAYER} obtained a FROGEEL BURGER.$"

GIFT_FROGEELBURGER_Text_1:
	.string "Thank you for playing PokeScape.\p"
	.string "Check out our website and discord\n"
	.string "server for the latest updates.$"

Draynor_Miss_Schism_Text_0:
	.string "Miss Schism$"

Draynor_Miss_Schism_Text_1:
	.string "Hello, I hear a lot of gossip and\n"
	.string "rumours.\p"
	.string "For example did you know if you use\n"
	.string "flavoured milk on a Cow it may evolve\l"
	.string "into another Cow.\p"
	.string "Furthermore, if that Cow learns a move\n"
	.string "that spins around really fast it can\l"
	.string "evolve even further!$"

Draynor_Oliva_Text_0:
	.string "Oliva$"

Draynor_Oliva_Text_1:
	.string "The other day a stranger dressed in\n"
	.string "blue and yellow gave me a kitten.$"

Draynor_Martin_Text_0:
	.string "Martin$"

Draynor_Martin_Text_1:
	.string "Sorry, I'm a bit too busy to talk.\p"
	.string "Someone nicked my cabbage.$"

Draynor_Guard1_Text_0:
	.string "Guard$"

Draynor_Guard1_Text_1:
	.string "Hey!\n"
	.string "Get your hands off there!$"

Draynor_Coolmom227_Text_0:
	.string "Cool Mom227$"

Draynor_Coolmom227_Text_1:
	.string "…$"

Draynor_Guard2_Text_0:
	.string "Don't cause any trouble.$"

Draynor_Guard3_Text_0:
	.string "What do you want now?\p"
	.string "Can you not see I am working?$"

Draynor_FORTUNATO_Text_0:
	.string "Fortunato$"

Draynor_FORTUNATO_Text_1:
	.string "Can I interest you in something to\n"
	.string "drink?$"

Draynor_AGGIE_Text_0:
	.string "Aggie$"

Draynor_AGGIE_Text_1:
	.string "Would you be interested in any dyes?$"

Draynor_AGGIE_Text_2:
	.string "Oh you are one of those adventuers\n"
	.string "that fight with Monsters.\p"
	.string "Here I might have something to help\n"
	.string "with that.$"

Draynor_AGGIE_Text_3:
	.string "Who ever is hit by that move will be\n"
	.string "turned into a Ghost-type.$"

Draynor_AGGIE_Text_4:
	.string "I usually help adventurers dye their\n"
	.string "items but for you hopefully that move\l"
	.string "will come in handy instead.$"

Draynor_TREE_Text_0:
	.string "???$"

Draynor_TREE_Text_1:
	.string "Ooooch!\p"
	.string "Oof!\p"
	.string "Ouch!$"

Draynor_TREE_Text_2:
	.string "Ow!\p"
	.string "That really hurt!\p"
	.string "Hey what is the big idea!\p"
	.string "I was trying to catch a red coloured\n"
	.string "Ravenling, but you scared it away!\p"
	.string "…\p"
	.string "Sigh…\p"
	.string "Oh well, I guess I should better get\n"
	.string "back to work…$"

NPC_Draynor_Woman_1_Text_0:
	.string "Quester$"

NPC_Draynor_Woman_1_Text_1:
	.string "If you follow this road south, it will\n"
	.string "lead you to the Wizards' Tower.\p"
	.string "Make sure to be all healed up before\n"
	.string "trekking there.$"

NPC_Draynor_Noob_WillowTree_Text_0:
	.string "Noob$"

NPC_Draynor_Noob_WillowTree_Text_1:
	.string "The dark wizards told me they were\n"
	.string "thrown out of the Wizards' Tower for\l"
	.string "being Zamorakians and now I cannot\l"
	.string "play by the willow trees.$"

Draynor_Morgan_Text_0:
	.string "Morgan$"

Draynor_Morgan_Text_1:
	.string "There's a Vampyre in Draynor Manor but\n"
	.string "no one believes me…$"

Draynor_Morgan_Text_2:
	.string "What is that?!\p"
	.string "You defeated the Vampyre in a battle?\p"
	.string "Well thanks for that!$"

NPC_Draynor_Morgans_Wife_Text_0:
	.string "Morgans Wife$"

NPC_Draynor_Morgans_Wife_Text_1:
	.string "All my husband thinks of is slaying\n"
	.string "vampyres these days…\p"
	.string "But I think he is trying to slay our\n"
	.string "marriage instead.$"

NPC_Draynor_Mugger_Text_0:
	.string "Mugger$"

NPC_Draynor_Mugger_Text_1:
	.string "Draynor Village is the town of farmers\n"
	.string "and vampyres.\p"
	.string "I am not sure why I decided to be a\n"
	.string "mugger here but it's a job somebody has\l"
	.string "to take.$"

NPC_Draynor_WiseOldMan_Text_0:
	.string "Wise Old Man$"
