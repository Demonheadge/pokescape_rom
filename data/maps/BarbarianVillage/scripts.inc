BarbarianVillage_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD_1
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD_2
	return

BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	call STORYMODE_STATE_BARBARIAN_VILLAGE
	return

BarbarianVillage_MapScripts_MAP_SCRIPT_ON_LOAD_2:
	call OPENWORLDMODE_STATE_BARBARIAN_VILLAGE
	return


STORYMODE_STATE_BARBARIAN_VILLAGE::
	switch VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE
	case 0, STORYMODE_STATE_BARBARIAN_VILLAGE_2
	case 1, STORYMODE_STATE_BARBARIAN_VILLAGE_3
	case 2, STORYMODE_STATE_BARBARIAN_VILLAGE_3
	case 3, STORYMODE_STATE_BARBARIAN_VILLAGE_4
	return

STORYMODE_STATE_BARBARIAN_VILLAGE_2:
	setobjectxyperm 6, 11, 19
	setobjectmovementtype 6, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 7, 12, 19
	setobjectmovementtype 7, MOVEMENT_TYPE_FACE_DOWN
	return

STORYMODE_STATE_BARBARIAN_VILLAGE_3:
	return

STORYMODE_STATE_BARBARIAN_VILLAGE_4:
	setobjectxyperm 2, 13, 27
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


OPENWORLDMODE_STATE_BARBARIAN_VILLAGE::
	goto_if_set FLAG_BADGE06_GET, OPENWORLDMODE_STATE_BARBARIAN_VILLAGE_1
	return

OPENWORLDMODE_STATE_BARBARIAN_VILLAGE_1:
	setobjectxyperm 2, 13, 27
	setobjectmovementtype 2, MOVEMENT_TYPE_FACE_UP
	return


NPC_BARB_BLOCKADE_1::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 1
	goto_if_eq NPC_BARB_BLOCKADE_1_2
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 0
	goto_if_eq NPC_BARB_BLOCKADE_1_5
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 1
	goto_if_eq NPC_BARB_BLOCKADE_1_8
NPC_BARB_BLOCKADE_1_7:
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 2
	goto_if_eq NPC_BARB_BLOCKADE_1_23
NPC_BARB_BLOCKADE_1_22:
	compare VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 3
	goto_if_eq NPC_BARB_BLOCKADE_1_29
NPC_BARB_BLOCKADE_1_28:
	hidenamebox
	closemessage
	release
	end

NPC_BARB_BLOCKADE_1_2:
	msgbox NPC_BARB_BLOCKADE_1_Text_1
	hidenamebox
	release
	end

NPC_BARB_BLOCKADE_1_5:
	msgbox NPC_BARB_BLOCKADE_1_Text_2
	goto_if_set FLAG_BADGE01_GET, NPC_BARB_BLOCKADE_1_14
NPC_BARB_BLOCKADE_1_12:
	hidenamebox
	closemessage
	msgbox NPC_BARB_BLOCKADE_1_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_BARB_BLOCKADE_1_25
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARB_BLOCKADE_1_Text_6
	hidenamebox
	closemessage
	release
	end

NPC_BARB_BLOCKADE_1_8:
	msgbox NPC_BARB_BLOCKADE_1_Text_7
	goto NPC_BARB_BLOCKADE_1_7

NPC_BARB_BLOCKADE_1_10:
	hidenamebox
	closemessage
	applymovement 6, BARBARIANVILLAGE_BLOCK_1
	applymovement 7, BARBARIANVILLAGE_BLOCK_2
	waitmovement 0
	setvar VAR_POKESCAPE_BARBARIAN_VILLAGE_STATE, 1
	release
	end

NPC_BARB_BLOCKADE_1_11:
	msgbox NPC_BARB_BLOCKADE_1_Text_3
	hidenamebox
	closemessage
	goto NPC_BARB_BLOCKADE_1_10

NPC_BARB_BLOCKADE_1_13:
	goto_if_set FLAG_BADGE03_GET, NPC_BARB_BLOCKADE_1_18
	goto NPC_BARB_BLOCKADE_1_12

NPC_BARB_BLOCKADE_1_14:
	goto_if_set FLAG_BADGE02_GET, NPC_BARB_BLOCKADE_1_13
	goto NPC_BARB_BLOCKADE_1_12

NPC_BARB_BLOCKADE_1_17:
	goto_if_set FLAG_BADGE05_GET, NPC_BARB_BLOCKADE_1_11
	goto NPC_BARB_BLOCKADE_1_12

NPC_BARB_BLOCKADE_1_18:
	goto_if_set FLAG_BADGE04_GET, NPC_BARB_BLOCKADE_1_17
	goto NPC_BARB_BLOCKADE_1_12

NPC_BARB_BLOCKADE_1_23:
	msgbox NPC_BARB_BLOCKADE_1_Text_8
	goto NPC_BARB_BLOCKADE_1_22

NPC_BARB_BLOCKADE_1_25:
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARB_BLOCKADE_1_Text_5
	goto NPC_BARB_BLOCKADE_1_10

NPC_BARB_BLOCKADE_1_29:
	msgbox NPC_BARB_BLOCKADE_1_Text_9
	goto NPC_BARB_BLOCKADE_1_28


BARBARIANVILLAGE_BLOCK_1:
	walk_left
	face_down
	step_end

BARBARIANVILLAGE_BLOCK_2:
	walk_right
	face_down
	step_end

NPC_BARBARIANVILLAGE_DUNGEONGIRL::
	lock
	faceplayer
	namebox NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_0
	goto_if_set FLAG_BADGE06_GET, NPC_BARBARIANVILLAGE_DUNGEONGIRL_2
	msgbox NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_2
NPC_BARBARIANVILLAGE_DUNGEONGIRL_1:
	hidenamebox
	release
	end

NPC_BARBARIANVILLAGE_DUNGEONGIRL_2:
	msgbox NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_1
	goto NPC_BARBARIANVILLAGE_DUNGEONGIRL_1


NPC_BARBARIANVILLAGE_SIGNPOST::
	lock
	msgbox NPC_BARBARIANVILLAGE_SIGNPOST_Text_0
	release
	end


NPC_BARBARIANVILLAGE_NPC1::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC1_Text_0
	hidenamebox
	release
	end


NPC_BARBARIANVILLAGE_NPC2::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC2_Text_0
	hidenamebox
	release
	end


NPC_BARBARIANVILLAGE_NPC3::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC3_Text_0
	hidenamebox
	release
	end


NPC_BARBARIANVILLAGE_NPC4::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC4_Text_0
	hidenamebox
	release
	end


NPC_BARBARIANVILLAGE_NPC5::
	lock
	faceplayer
	namebox NPC_BARBARIANVILLAGE_NPC5_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC5_Text_1
	hidenamebox
	release
	end


NPC_ROUTE20_NPC1::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_ROUTE20_NPC1_Text_0
	hidenamebox
	release
	end


BATTLE_ROUTE20_FISHERMAN_1::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_1, BATTLE_ROUTE20_FISHERMAN_1_Text_0, BATTLE_ROUTE20_FISHERMAN_1_Text_1
	msgbox BATTLE_ROUTE20_FISHERMAN_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE20_FISHERMAN_2::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_2, BATTLE_ROUTE20_FISHERMAN_2_Text_0, BATTLE_ROUTE20_FISHERMAN_2_Text_1
	msgbox BATTLE_ROUTE20_FISHERMAN_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE20_FISHERMAN_3::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_3, BATTLE_ROUTE20_FISHERMAN_3_Text_0, BATTLE_ROUTE20_FISHERMAN_3_Text_1
	msgbox BATTLE_ROUTE20_FISHERMAN_3_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE20_SKILLER::
	trainerbattle_single TRAINER_ROUTE20_TRAINER_4, BATTLE_ROUTE20_SKILLER_Text_0, BATTLE_ROUTE20_SKILLER_Text_1
	msgbox BATTLE_ROUTE20_SKILLER_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE20_DUO_1::
	trainerbattle_double TRAINER_ROUTE20_DUO, BATTLE_ROUTE20_DUO_1_Text_0, BATTLE_ROUTE20_DUO_1_Text_1, BATTLE_ROUTE20_DUO_1_Text_2
	namebox BATTLE_ROUTE20_DUO_1_Text_3
	msgbox BATTLE_ROUTE20_DUO_1_Text_4
	hidenamebox
	release
	end


BATTLE_ROUTE20_DUO_2::
	trainerbattle_double TRAINER_ROUTE20_DUO, BATTLE_ROUTE20_DUO_2_Text_0, BATTLE_ROUTE20_DUO_2_Text_1, BATTLE_ROUTE20_DUO_1_Text_2
	namebox BATTLE_ROUTE20_DUO_2_Text_2
	msgbox BATTLE_ROUTE20_DUO_2_Text_3
	hidenamebox
	release
	end


NPC_BARBARIANVILLAGE_NPC6::
	lock
	faceplayer
	namebox NPC_BARB_BLOCKADE_1_Text_0
	msgbox NPC_BARBARIANVILLAGE_NPC6_Text_0
	hidenamebox
	release
	end


SHOP_HELMET_BARBARIANVILLAGE::
	lock
	faceplayer
	namebox SHOP_HELMET_BARBARIANVILLAGE_Text_0
	msgbox SHOP_HELMET_BARBARIANVILLAGE_Text_1
	waitmessage
	hidenamebox
	pokemart STORE_Helmet
	msgbox SHOP_HELMET_BARBARIANVILLAGE_Text_2
	release
	end


NPC_BARB_BLOCKADE_1_Text_0:
	.string "Barbarian$"

NPC_BARB_BLOCKADE_1_Text_1:
	.string "Our Chieftain is very strong.\p"
	.string "Do not underestimate him!$"

NPC_BARB_BLOCKADE_1_Text_2:
	.string "Only the strong may enter our longhall!\p"
	.string "You should probably leave if you know\n"
	.string "what is good for you.$"

NPC_BARB_BLOCKADE_1_Text_3:
	.string "Ohhoho!!\p"
	.string "Impressive you have at least four\n"
	.string "Badges.\p"
	.string "You may pass, we shall watch your\n"
	.string "battle and cheer for your victory!$"

NPC_BARB_BLOCKADE_1_Text_4:
	.string "It is recommended that you have at\n"
	.string "least 4 Gym Badges attempting our Gym.\p"
	.string "Are you sure you would like to challenge\n"
	.string "the Gym?$"

NPC_BARB_BLOCKADE_1_Text_5:
	.string "Ohho, so this challenger thinks they\n"
	.string "have what it takes to beat our\l"
	.string "Chieftain?\p"
	.string "This will be entertaining to watch, very\n"
	.string "well.\p"
	.string "You may pass.$"

NPC_BARB_BLOCKADE_1_Text_6:
	.string "Come back when you are stronger!$"

NPC_BARB_BLOCKADE_1_Text_7:
	.string "Good luck on your gym challenge.$"

NPC_BARB_BLOCKADE_1_Text_8:
	.string "We knew you would be struggling but\n"
	.string "good luck on your gym challenge.$"

NPC_BARB_BLOCKADE_1_Text_9:
	.string "You defeated our Chieftain!\p"
	.string "We are impressed, well done!$"

NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_0:
	.string "Litara$"

NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_1:
	.string "You have proved yourself a barbarian in\n"
	.string "name and spirit!\p"
	.string "I grant you access to use our\n"
	.string "stronghold for training.\p"
	.string "The monsters found within are very\n"
	.string "strong, so have fun training!$"

NPC_BARBARIANVILLAGE_DUNGEONGIRL_Text_2:
	.string "Only once you have proved yourself a\n"
	.string "barbarian are you allowed to use our\l"
	.string "dungeon for training.$"

NPC_BARBARIANVILLAGE_SIGNPOST_Text_0:
	.string "Barbarian Village.\p"
	.string "Also known as Gunnarsgrunn.$"

NPC_BARBARIANVILLAGE_NPC1_Text_0:
	.string "Chieftain Gunthor is the strongest\n"
	.string "warrior of our village and also the 6th\l"
	.string "strongest MvM Gym Leader.$"

NPC_BARBARIANVILLAGE_NPC2_Text_0:
	.string "Finally after all the training my\n"
	.string "Monster learnt a new move.\p"
	.string "The crazy thing is that it evolved right\n"
	.string "after!$"

NPC_BARBARIANVILLAGE_NPC3_Text_0:
	.string "We don't need no Banks to heal our\n"
	.string "Monsters in our Village.\p"
	.string "That is the path of a weakling.$"

NPC_BARBARIANVILLAGE_NPC4_Text_0:
	.string "My father is the Chieftain of this\n"
	.string "village and also a Gym Leader.\p"
	.string "I feel like I have a lot to live up to.$"

NPC_BARBARIANVILLAGE_NPC5_Text_0:
	.string "Dwarf$"

NPC_BARBARIANVILLAGE_NPC5_Text_1:
	.string "There is a girl I like, but I do not know\n"
	.string "if she would like me.\p"
	.string "I do not know what to do so I will stay\n"
	.string "here picking each petal of this flower\l"
	.string "until fate decides for me.$"

NPC_ROUTE20_NPC1_Text_0:
	.string "This is a popular spot for fly fishing.\p"
	.string "Many adventurers catch Trout and\n"
	.string "Salmon in our river.$"

BATTLE_ROUTE20_FISHERMAN_1_Text_0:
	.string "If you look carefully in the water you\n"
	.string "can see a rainbow.$"

BATTLE_ROUTE20_FISHERMAN_1_Text_1:
	.string "So these Rainbow Fish are why you can\n"
	.string "see a rainbow in the river.$"

BATTLE_ROUTE20_FISHERMAN_2_Text_0:
	.string "You just scared away my catch!$"

BATTLE_ROUTE20_FISHERMAN_2_Text_1:
	.string "I just ran out of feathers…$"

BATTLE_ROUTE20_FISHERMAN_2_Text_2:
	.string "Fly fishing is great!\p"
	.string "Much better than regular net fishing.$"

BATTLE_ROUTE20_FISHERMAN_3_Text_0:
	.string "I caught these fishing in a dungeon.\p"
	.string "I'd like to see how good they are in\n"
	.string "battle!$"

BATTLE_ROUTE20_FISHERMAN_3_Text_1:
	.string "I may have lost but I now understand\n"
	.string "the strength of these little guys.$"

BATTLE_ROUTE20_FISHERMAN_3_Text_2:
	.string "If you are interested where I got these\n"
	.string "from you should take a visit to the\l"
	.string "cavern by Mudskipper point.$"

BATTLE_ROUTE20_SKILLER_Text_0:
	.string "Fishing is great, I could do this all day.$"

BATTLE_ROUTE20_SKILLER_Text_1:
	.string "You should do some fishing too.$"

BATTLE_ROUTE20_SKILLER_Text_2:
	.string "You should do some fishing too.\p"
	.string "You would never know what rare fish you\n"
	.string "could find until you try.$"

BATTLE_ROUTE20_DUO_1_Text_0:
	.string "Pass the Trout.$"

BATTLE_ROUTE20_DUO_1_Text_1:
	.string "Oh no it burnt…$"

BATTLE_ROUTE20_DUO_1_Text_2:
	.string "We would love to have a double battle\n"
	.string "with you, but you don't have enough\l"
	.string "monsters.$"

BATTLE_ROUTE20_DUO_1_Text_3:
	.string "Cook$"

BATTLE_ROUTE20_DUO_1_Text_4:
	.string "Can someone light a fire for me?$"

BATTLE_ROUTE20_DUO_2_Text_0:
	.string "Feel the burn!$"

BATTLE_ROUTE20_DUO_2_Text_1:
	.string "The fire went out of control…$"

BATTLE_ROUTE20_DUO_2_Text_2:
	.string "Firemaker$"

BATTLE_ROUTE20_DUO_2_Text_3:
	.string "I have the most important job here.$"

NPC_BARBARIANVILLAGE_NPC6_Text_0:
	.string "I make all the clothes for our village.\p"
	.string "But don't tell anyone that I get my\n"
	.string "supplies from Thessalia in Varrock.$"

SHOP_HELMET_BARBARIANVILLAGE_Text_0:
	.string "Peska$"

SHOP_HELMET_BARBARIANVILLAGE_Text_1:
	.string "Welcome to my Helmet shop.\p"
	.string "Can I interest you in anything?$"

SHOP_HELMET_BARBARIANVILLAGE_Text_2:
	.string "Thank you, come again!$"
