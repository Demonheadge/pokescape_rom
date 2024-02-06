Varrock_Sewers_2F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Varrock_Sewers_2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Varrock_Sewers_2F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call Randomise_VarrockSewer_2F_Spawns
	return


Randomise_VarrockSewer_2F_Spawns::
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_2
Randomise_VarrockSewer_2F_Spawns_1:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_5
Randomise_VarrockSewer_2F_Spawns_4:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_8
Randomise_VarrockSewer_2F_Spawns_7:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_11
Randomise_VarrockSewer_2F_Spawns_10:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_14
Randomise_VarrockSewer_2F_Spawns_13:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_17
Randomise_VarrockSewer_2F_Spawns_16:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_20
Randomise_VarrockSewer_2F_Spawns_19:
	random 2
	compare VAR_RESULT, 1
	goto_if_eq Randomise_VarrockSewer_2F_Spawns_23
Randomise_VarrockSewer_2F_Spawns_22:
	special DrawWholeMapView
	return

Randomise_VarrockSewer_2F_Spawns_2:
	setmetatile 12, 26, 726, 1
	setvar VAR_TEMP_0, 1
	goto Randomise_VarrockSewer_2F_Spawns_1

Randomise_VarrockSewer_2F_Spawns_5:
	setmetatile 10, 18, 726, 1
	setvar VAR_TEMP_1, 1
	goto Randomise_VarrockSewer_2F_Spawns_4

Randomise_VarrockSewer_2F_Spawns_8:
	setmetatile 9, 12, 726, 1
	setvar VAR_TEMP_2, 1
	goto Randomise_VarrockSewer_2F_Spawns_7

Randomise_VarrockSewer_2F_Spawns_11:
	setmetatile 11, 12, 726, 1
	setvar VAR_TEMP_3, 1
	goto Randomise_VarrockSewer_2F_Spawns_10

Randomise_VarrockSewer_2F_Spawns_14:
	setmetatile 12, 2, 726, 1
	setvar VAR_TEMP_4, 1
	goto Randomise_VarrockSewer_2F_Spawns_13

Randomise_VarrockSewer_2F_Spawns_17:
	setmetatile 29, 2, 726, 1
	setvar VAR_TEMP_5, 1
	goto Randomise_VarrockSewer_2F_Spawns_16

Randomise_VarrockSewer_2F_Spawns_20:
	setmetatile 33, 2, 726, 1
	setvar VAR_TEMP_6, 1
	goto Randomise_VarrockSewer_2F_Spawns_19

Randomise_VarrockSewer_2F_Spawns_23:
	setmetatile 41, 7, 726, 1
	setvar VAR_TEMP_7, 1
	goto Randomise_VarrockSewer_2F_Spawns_22


ITEM_VARROCK_SEWERS_1::
	finditem ITEM_SCURRIUS_CHEESE
	end


BATTLE_VARROCK_SEWERS_2F_TRAINER_1::
	trainerbattle_single TRAINER_VARROCK_SEWERS_2F_TRAINER_1, BATTLE_VARROCK_SEWERS_2F_TRAINER_1_Text_0, BATTLE_VARROCK_SEWERS_2F_TRAINER_1_Text_1
	namebox BATTLE_VARROCK_SEWERS_2F_TRAINER_1_Text_2
	msgbox BATTLE_VARROCK_SEWERS_2F_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_VARROCK_SEWERS_2F_TRAINER_2::
	trainerbattle_single TRAINER_VARROCK_SEWERS_2F_TRAINER_2, BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_0, BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_1
	namebox BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_2
	msgbox BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_VARROCK_SEWERS_2F_TRAINER_3::
	trainerbattle_single TRAINER_VARROCK_SEWERS_2F_TRAINER_3, BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_0, BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_1
	namebox BATTLE_VARROCK_SEWERS_2F_TRAINER_1_Text_2
	msgbox BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_VARROCK_SEWERS_2F_TRAINER_4::
	trainerbattle_single TRAINER_VARROCK_SEWERS_2F_TRAINER_4, BATTLE_VARROCK_SEWERS_2F_TRAINER_4_Text_0, BATTLE_VARROCK_SEWERS_2F_TRAINER_4_Text_1
	namebox BATTLE_VARROCK_SEWERS_2F_TRAINER_4_Text_2
	msgbox BATTLE_VARROCK_SEWERS_2F_TRAINER_4_Text_3
	hidenamebox
	release
	end


BATTLE_VARROCK_SEWERS_2F_TRAINER_5::
	trainerbattle_single TRAINER_VARROCK_SEWERS_2F_TRAINER_5, BATTLE_VARROCK_SEWERS_2F_TRAINER_5_Text_0, BATTLE_VARROCK_SEWERS_2F_TRAINER_5_Text_1
	namebox BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_2
	msgbox BATTLE_VARROCK_SEWERS_2F_TRAINER_5_Text_1
	hidenamebox
	release
	end


BATTLE_VARROCK_SEWERS_2F_TRAINER_6::
	trainerbattle_single TRAINER_VARROCK_SEWERS_2F_TRAINER_6, BATTLE_VARROCK_SEWERS_2F_TRAINER_6_Text_0, BATTLE_VARROCK_SEWERS_2F_TRAINER_6_Text_1
	namebox BATTLE_VARROCK_SEWERS_2F_TRAINER_6_Text_2
	msgbox BATTLE_VARROCK_SEWERS_2F_TRAINER_6_Text_1
	hidenamebox
	release
	end


VARROCK_SEWERS_2F_MAN::
	faceplayer
	msgbox VARROCK_SEWERS_2F_MAN_Text_0
	closemessage
	release
	end


BATTLE_VARROCK_SEWERS_2F_TRAINER_1_Text_0:
	.string "The skeleton eyes you with intent to\n"
	.string "battle!$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_1_Text_1:
	.string "The skeletal warrior seems content with\n"
	.string "the battle that unfolded.$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_1_Text_2:
	.string "SKELETON$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_0:
	.string "This place is great. Undead everywhere\n"
	.string "for me and only me to use. Now face me!$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_1:
	.string "One day I will own a nice sewer just like\n"
	.string "this and it will all be mine and mine\l"
	.string "alone.$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_2_Text_2:
	.string "NECROMANCER$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_4_Text_0:
	.string "Prepare yourself for battle most\n"
	.string "glorious.$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_4_Text_1:
	.string "I should have been prepared for defeat\n"
	.string "most humiliating.$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_4_Text_2:
	.string "WARRIOR$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_4_Text_3:
	.string "I should have been prepared for defeat\n"
	.string "most humiliating..$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_5_Text_0:
	.string "Behold my awesome power of ghosts!\n"
	.string "Tremble before me!$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_5_Text_1:
	.string "For now I can only use ghosts, but one\n"
	.string "day I will control skeletons and build\l"
	.string "an army.$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_6_Text_0:
	.string "Bah, hey you, fight me. I need a break.$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_6_Text_1:
	.string "200 rats. They assigned me a task of\n"
	.string "200 rats. Why the heck did they assign\l"
	.string "me 200 rats?\p"
	.string "Maybe this is what I get for skipping\n"
	.string "tasks for easy Slayer points...$"

BATTLE_VARROCK_SEWERS_2F_TRAINER_6_Text_2:
	.string "SLAYER$"

VARROCK_SEWERS_2F_MAN_Text_0:
	.string "Some Knight at the castle paid me a\n"
	.string "handful of coins to come down here and\l"
	.string "retrieve a key for him.\p"
	.string "I never did manage to find it though,\n"
	.string "and now I can't get out because of all\l"
	.string "the monsters!$"
