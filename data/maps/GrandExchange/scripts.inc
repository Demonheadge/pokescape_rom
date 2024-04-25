GrandExchange_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GrandExchange_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GrandExchange_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 16
	return


GE_GUARD_BLOCK::
	lock
	faceplayer
	namebox GE_GUARD_BLOCK_Text_0
	msgbox GE_GUARD_BLOCK_Text_1
	closemessage
	hidenamebox
	msgbox GE_GUARD_BLOCK_Text_2
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


GE_GUARD_BLOCK_Text_0:
	.string "Guard$"

GE_GUARD_BLOCK_Text_1:
	.string "Hello adventurer.\p"
	.string "I have a message for you from the\n"
	.string "POKESCAPERS.$"

GE_GUARD_BLOCK_Text_2:
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
