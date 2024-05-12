GrandExchange_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GrandExchange_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GrandExchange_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	return


TRIGGER_GE_GUARD_BLOCK::
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_UP
	waitmovement 0
	namebox TRIGGER_GE_GUARD_BLOCK_Text_0
	msgbox TRIGGER_GE_GUARD_BLOCK_Text_1
	closemessage
	hidenamebox
	msgbox TRIGGER_GE_GUARD_BLOCK_Text_2
	closemessage
	hidenamebox
	setvar VAR_TEMP_0, 1
	release
	end


TRIGGER_GE_GUARD_BLOCK_2::
	applymovement OBJ_EVENT_ID_PLAYER, MOVEMENT_FACE_RIGHT
	waitmovement 0
	namebox TRIGGER_GE_GUARD_BLOCK_Text_0
	msgbox TRIGGER_GE_GUARD_BLOCK_Text_1
	closemessage
	hidenamebox
	msgbox TRIGGER_GE_GUARD_BLOCK_Text_2
	closemessage
	hidenamebox
	setvar VAR_TEMP_0, 1
	release
	end


GE_GUARD_BLOCK::
	lock
	faceplayer
	namebox TRIGGER_GE_GUARD_BLOCK_Text_0
	msgbox TRIGGER_GE_GUARD_BLOCK_Text_1
	closemessage
	hidenamebox
	msgbox TRIGGER_GE_GUARD_BLOCK_Text_2
	closemessage
	hidenamebox
	end


GE_TRADE_INFO::
	lock
	faceplayer
	msgbox GE_TRADE_INFO_Text_0
	closemessage
	hidenamebox
	end


GE_TRADE_WARP::
	lock
	faceplayer
	msgbox GE_TRADE_WARP_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne GE_TRADE_WARP_2
	msgbox GE_TRADE_WARP_Text_2
	closemessage
	hidenamebox
	end

GE_TRADE_WARP_2:
	msgbox GE_TRADE_WARP_Text_1
	closemessage
	hidenamebox
	warp MAP_OLDALE_TOWN_POKEMON_CENTER_2F, 3, 0, 0
	closemessage
	release
	end


GE_WONDER_TRADE::
	faceplayer
	namebox GE_WONDER_TRADE_Text_0
	msgbox GE_WONDER_TRADE_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_GE_SPIRITTREE::
	faceplayer
	namebox NPC_GE_SPIRITTREE_Text_0
	msgbox NPC_GE_SPIRITTREE_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_GE_NPC1::
	faceplayer
	namebox GE_WONDER_TRADE_Text_0
	msgbox NPC_GE_NPC1_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_GE_NPC2::
	faceplayer
	namebox NPC_GE_NPC2_Text_0
	msgbox NPC_GE_NPC2_Text_1
	closemessage
	hidenamebox
	release
	end


TRIGGER_GE_GUARD_BLOCK_Text_0:
	.string "Guard$"

TRIGGER_GE_GUARD_BLOCK_Text_1:
	.string "Hello adventurer.\p"
	.string "I have a message for you from the\n"
	.string "POKESCAPERS.$"

TRIGGER_GE_GUARD_BLOCK_Text_2:
	.string "The Grand Exchange is currently a Work\n"
	.string "in progress.\p"
	.string "The plan is to have to make use of\n"
	.string "multiplayer features.\p"
	.string "Use it at your own risk.$"

GE_TRADE_INFO_Text_0:
	.string "Welcome to the Grand Exchange.\p"
	.string "Here we trade many goods, but seeing as\n"
	.string "you are an MvM Challenger we have a\l"
	.string "very special section for you to use.\p"
	.string "You are able to battle and trade with\n"
	.string "other players.\p"
	.string "Talk to the clerk next to me to be taken\n"
	.string "to the special room.$"

GE_TRADE_WARP_Text_0:
	.string "Would you like to be taken to the\n"
	.string "multiplayer corner?$"

GE_TRADE_WARP_Text_1:
	.string "Have fun.$"

GE_TRADE_WARP_Text_2:
	.string "Please come again soon.$"

GE_WONDER_TRADE_Text_0:
	.string "Clerk$"

GE_WONDER_TRADE_Text_1:
	.string "Welcome to the Wonder Trade desk!\p"
	.string "Here you can trade monsters with\n"
	.string "random strangers.\p"
	.string "We are still setting up, please come\n"
	.string "back later.$"

NPC_GE_SPIRITTREE_Text_0:
	.string "Spirit Tree$"

NPC_GE_SPIRITTREE_Text_1:
	.string "The… Forest…\l"
	.string "was… destroyed…\l"
	.string "for… this…\p"
	.string "Help… me…$"

NPC_GE_NPC1_Text_0:
	.string "Just ahead is the Grand Exchange!\p"
	.string "It was recently built so the services\n"
	.string "they offer still aren't up and running\l"
	.string "yet.$"

NPC_GE_NPC2_Text_0:
	.string "Merchant$"

NPC_GE_NPC2_Text_1:
	.string "All the construction works are on a tea\n"
	.string "break.\p"
	.string "I wish they'd hurry up and finish work\n"
	.string "on the GE.\p"
	.string "I want to do some more merching.$"
