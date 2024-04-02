Route11_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route11_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route11_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 5
	return


BATTLE_ROUTE11_QUESTER::
	trainerbattle_single TRAINER_ROUTE11_QUESTER, BATTLE_ROUTE11_QUESTER_Text_0, BATTLE_ROUTE11_QUESTER_Text_1
	msgbox BATTLE_ROUTE11_QUESTER_Text_2
	release
	return


BATTLE_ROUTE11_PIRATE::
	trainerbattle_single TRAINER_ROUTE11_PIRATE, BATTLE_ROUTE11_PIRATE_Text_0, BATTLE_ROUTE11_PIRATE_Text_1
	msgbox BATTLE_ROUTE11_PIRATE_Text_1
	release
	return


BATTLE_ROUTE11_SAILOR::
	trainerbattle_single TRAINER_ROUTE11_SAILOR, BATTLE_ROUTE11_SAILOR_Text_0, BATTLE_ROUTE11_SAILOR_Text_1
	msgbox BATTLE_ROUTE11_SAILOR_Text_1
	release
	return


BATTLE_ROUTE11_PvMer::
	trainerbattle_single TRAINER_ROUTE11_PvMer, BATTLE_ROUTE11_PvMer_Text_0, BATTLE_ROUTE11_PvMer_Text_1
	msgbox BATTLE_ROUTE11_PvMer_Text_1
	release
	return


BATTLE_ROUTE11_GRACEFUL::
	trainerbattle_single TRAINER_ROUTE11_GRACEFUL, BATTLE_ROUTE11_GRACEFUL_Text_0, BATTLE_ROUTE11_GRACEFUL_Text_1
	msgbox BATTLE_ROUTE11_GRACEFUL_Text_2
	release
	return


ITEM_ROUTE11_ITEM_1::
	finditem ITEM_POTION_ATT
	end


ITEM_ROUTE11_ITEM_2::
	finditem ITEM_MITHRIL_POUCH
	end


ITEM_ROUTE11_ITEM_3::
	finditem ITEM_CRYSTAL_POUCH
	end


ITEM_ROUTE11_ITEM_4::
	finditem ITEM_TM54
	end


ITEM_ROUTE11_ITEM_5::
	finditem ITEM_WATER_RUNE
	end


NPC_MUDSKIPPERPOINT_NPC_1::
	lock
	faceplayer
	namebox NPC_MUDSKIPPERPOINT_NPC_1_Text_0
	msgbox NPC_MUDSKIPPERPOINT_NPC_1_Text_1
	hidenamebox
	release
	end


NPC_MUDSKIPPERPOINT_FAIRY::
	lock
	faceplayer
	namebox NPC_MUDSKIPPERPOINT_FAIRY_Text_0
	msgbox NPC_MUDSKIPPERPOINT_FAIRY_Text_1
	hidenamebox
	release
	end


NPC_MUDSKIPPERPOINT_THURGO::
	lock
	faceplayer
	namebox NPC_MUDSKIPPERPOINT_THURGO_Text_0
	msgbox NPC_MUDSKIPPERPOINT_THURGO_Text_1
	hidenamebox
	release
	end


BATTLE_MUDSKIPPERPOINT_SLAYER::
	trainerbattle_single TRAINER_MUDSKIPPERPOINT_SLAYER, BATTLE_MUDSKIPPERPOINT_SLAYER_Text_0, BATTLE_MUDSKIPPERPOINT_SLAYER_Text_1
	msgbox BATTLE_MUDSKIPPERPOINT_SLAYER_Text_2
	release
	return


BATTLE_MUDSKIPPERPOINT_FISHER_1::
	trainerbattle_single TRAINER_MUDSKIPPERPOINT_FISHERMAN_1, BATTLE_MUDSKIPPERPOINT_FISHER_1_Text_0, BATTLE_MUDSKIPPERPOINT_FISHER_1_Text_1
	msgbox BATTLE_MUDSKIPPERPOINT_FISHER_1_Text_2
	release
	return


BATTLE_MUDSKIPPERPOINT_FISHER_2::
	trainerbattle_single TRAINER_MUDSKIPPERPOINT_FISHERMAN_2, BATTLE_MUDSKIPPERPOINT_FISHER_2_Text_0, BATTLE_MUDSKIPPERPOINT_FISHER_2_Text_1
	msgbox BATTLE_MUDSKIPPERPOINT_FISHER_2_Text_2
	release
	return


BATTLE_ROUTE11_QUESTER_Text_0:
	.string "That darned Squire, how did I get into\n"
	.string "this mess.\p"
	.string "Hey you!\n"
	.string "Have you seen any Blurite?!$"

BATTLE_ROUTE11_QUESTER_Text_1:
	.string "I hate this quest.$"

BATTLE_ROUTE11_QUESTER_Text_2:
	.string "I've been searching for hours I cannot\n"
	.string "find Blurite ore anywhere!\p"
	.string "I hate this quest.$"

BATTLE_ROUTE11_PIRATE_Text_0:
	.string "Me be reading the map to find the\n"
	.string "treasure, stay off scalliwag!$"

BATTLE_ROUTE11_PIRATE_Text_1:
	.string "Reading maps be easier if both me eyes\n"
	.string "were not made of glass.$"

BATTLE_ROUTE11_SAILOR_Text_0:
	.string "What do you do with a drunken sailor?\p"
	.string "Battle him of course!$"

BATTLE_ROUTE11_SAILOR_Text_1:
	.string "I'm not drunk enough for this.$"

BATTLE_ROUTE11_PvMer_Text_0:
	.string "You look like a good warmup, prepare\n"
	.string "yourself!$"

BATTLE_ROUTE11_PvMer_Text_1:
	.string "Losing to you it makes me wonder how I\n"
	.string "will beat a Mogre…$"

BATTLE_ROUTE11_GRACEFUL_Text_0:
	.string "He-Hoof-Ha{PAUSE 15}…{PAUSE 15}…\n"
	.string "Ha-Hoo-wheeze{PAUSE 15}…{PAUSE 15}…\p"
	.string "Blurgh-bleck-boohgh{PAUSE 15}…{PAUSE 15}…\n"
	.string "Ba…tt…le Me…$"

BATTLE_ROUTE11_GRACEFUL_Text_1:
	.string "If I grunt while working out that means\n"
	.string "I am doing a good job right?$"

BATTLE_ROUTE11_GRACEFUL_Text_2:
	.string "Excuse me I have a lot of agility\n"
	.string "training to do.$"

NPC_MUDSKIPPERPOINT_NPC_1_Text_0:
	.string "QUESTER$"

NPC_MUDSKIPPERPOINT_NPC_1_Text_1:
	.string "I heard you could get Yellow Flippers\n"
	.string "from the Mogres.\p"
	.string "Do you think they would give me a pair if\n"
	.string "I ask nicely?$"

NPC_MUDSKIPPERPOINT_FAIRY_Text_0:
	.string "FAIRY$"

NPC_MUDSKIPPERPOINT_FAIRY_Text_1:
	.string "I am not sure why, but our Fairy Ring\n"
	.string "network seems to be down.$"

NPC_MUDSKIPPERPOINT_THURGO_Text_0:
	.string "THURGO$"

NPC_MUDSKIPPERPOINT_THURGO_Text_1:
	.string "I don't suppose you have any Redberry\n"
	.string "Pie?$"

BATTLE_MUDSKIPPERPOINT_SLAYER_Text_0:
	.string "No!\p"
	.string "I left my explosive potions at the\n"
	.string "bank!$"

BATTLE_MUDSKIPPERPOINT_SLAYER_Text_1:
	.string "This is such an xp waste!$"

BATTLE_MUDSKIPPERPOINT_SLAYER_Text_2:
	.string "How am I meant to challenge the Morges\n"
	.string "to a battle without explosive potions\l"
	.string "and a full team of fainted monsters.$"

BATTLE_MUDSKIPPERPOINT_FISHER_1_Text_0:
	.string "Oh!\p"
	.string "Looks like I have snagged a big one in\n"
	.string "my net!$"

BATTLE_MUDSKIPPERPOINT_FISHER_1_Text_1:
	.string "Aww it got away…$"

BATTLE_MUDSKIPPERPOINT_FISHER_1_Text_2:
	.string "I heard that there was some sort of\n"
	.string "device that allows you to dive under\l"
	.string "the water.\p"
	.string "What I'd give to see how the\n"
	.string "Mudskippers live!$"

BATTLE_MUDSKIPPERPOINT_FISHER_2_Text_0:
	.string "Do you know why they call this place\n"
	.string "Mudskipper Point?$"

BATTLE_MUDSKIPPERPOINT_FISHER_2_Text_1:
	.string "I am serious, why do they call this place\n"
	.string "Mudskipper Point?$"

BATTLE_MUDSKIPPERPOINT_FISHER_2_Text_2:
	.string "Oh now I get it.\p"
	.string "It is because of all the Mudskippers\n"
	.string "right?$"
