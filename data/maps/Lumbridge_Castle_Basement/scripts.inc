Lumbridge_Castle_Basement_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Lumbridge_Castle_Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Lumbridge_Castle_Basement_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return


NPC_FROGEEL::
	lock
	faceplayer
	namebox NPC_FROGEEL_Text_0
	msgbox NPC_FROGEEL_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_LumbridgeBasement_Demonheadge::
	lock
	faceplayer
	namebox NPC_LumbridgeBasement_Demonheadge_Text_0
	msgbox NPC_LumbridgeBasement_Demonheadge_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_LumbridgeBasement_Item::
	lock
	faceplayer
	msgbox NPC_LumbridgeBasement_Item_Text_0
	waitmessage
	release
	end


NPC_FROGEEL_Text_0:
	.string "FROGEEL$"

NPC_FROGEEL_Text_1:
	.string "AAAAAAAAAAAA!$"

NPC_LumbridgeBasement_Demonheadge_Text_0:
	.string "Demonheadge$"

NPC_LumbridgeBasement_Demonheadge_Text_1:
	.string "Hi there, I hope you enjoy playing\n"
	.string "PokeScape.\p"
	.string "Just so you know this portal leads to\n"
	.string "my beta testing area.\p"
	.string "So please do not go here unless you\n"
	.string "have finished playing the beta and\l"
	.string "want to mess around with some buggy\l"
	.string "mess, cheat, etc.\p"
	.string "I do highly recommend you play through\n"
	.string "the beta once first.$"

NPC_LumbridgeBasement_Item_Text_0:
	.string "Demonheadge seems to be using this\n"
	.string "pouch to store future content.$"
