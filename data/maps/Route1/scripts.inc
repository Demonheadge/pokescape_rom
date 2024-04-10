Route1_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route1_MapScripts_MAP_SCRIPT_ON_LOAD
	map_script MAP_SCRIPT_ON_TRANSITION, Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route1_MapScripts_MAP_SCRIPT_ON_LOAD:
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Route1_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route1_MapScripts_MAP_SCRIPT_ON_LOAD_1:
	goto QUEST_STATE_WizardsTower_ROUTE1
	return

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 0
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	call OPENWORLD_STATE_ROUTE1
	return

Route1_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	call STORYMODE_STATE_ROUTE1
	return


OPENWORLD_STATE_ROUTE1::
	setobjectxyperm 4, 42, 10
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 12, 37, 12
	setobjectxyperm 13, 43, 12
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	addobject 5
	removeobject 22
	removeobject 23
	removeobject 31
	setobjectxyperm 5, 10, 12
	setobjectxyperm 6, 10, 13
	return


STORYMODE_STATE_ROUTE1::
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 20
	goto_if_ge STORYMODE_STATE_ROUTE1_2
STORYMODE_STATE_ROUTE1_1:
	return

STORYMODE_STATE_ROUTE1_2:
	setobjectxyperm 4, 42, 10
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_DOWN
	setobjectxyperm 12, 37, 12
	setobjectxyperm 13, 43, 12
	setobjectmovementtype 13, MOVEMENT_TYPE_FACE_DOWN
	goto STORYMODE_STATE_ROUTE1_1


QUEST_STATE_WizardsTower_ROUTE1::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, QUEST_STATE_WizardsTower_ROUTE1_2
	case 1, QUEST_STATE_WizardsTower_ROUTE1_2
	case 2, QUEST_STATE_WizardsTower_ROUTE1_2
	case 3, QUEST_STATE_WizardsTower_ROUTE1_2
	case 4, QUEST_STATE_WizardsTower_ROUTE1_2
	case 5, QUEST_STATE_WizardsTower_ROUTE1_3
	case 6, QUEST_STATE_WizardsTower_ROUTE1_4
	case 7, QUEST_STATE_WizardsTower_ROUTE1_4
	case 8, QUEST_STATE_WizardsTower_ROUTE1_4
	case 9, QUEST_STATE_WizardsTower_ROUTE1_4
	case 10, QUEST_STATE_WizardsTower_ROUTE1_5
	case 11, QUEST_STATE_WizardsTower_ROUTE1_5
	return

QUEST_STATE_WizardsTower_ROUTE1_2:
	removeobject 22
	removeobject 23
	removeobject 5
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_4
	release
	end

QUEST_STATE_WizardsTower_ROUTE1_3:
	clearflag FLAG_TEMP_2
	clearflag FLAG_TEMP_4
	addobject 23
	addobject 5
	removeobject 32
	removeobject 22
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_3
	release
	end

QUEST_STATE_WizardsTower_ROUTE1_4:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	removeobject 22
	removeobject 23
	removeobject 32
	clearflag FLAG_TEMP_4
	addobject 5
	release
	end

QUEST_STATE_WizardsTower_ROUTE1_5:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	setflag FLAG_TEMP_3
	clearflag FLAG_TEMP_4
	addobject 5
	removeobject 22
	removeobject 23
	removeobject 32
	setobjectxyperm 5, 10, 12
	setobjectxyperm 6, 10, 13
	release
	end


NPC_DUCK::
	lock
	faceplayer
	namebox NPC_DUCK_Text_0
	playmoncry SPECIES_PSYDUCK, 0
	msgbox NPC_DUCK_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_RAT::
	lock
	faceplayer
	namebox NPC_RAT_Text_0
	playmoncry SPECIES_RATTATA, 0
	msgbox NPC_RAT_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_SHEEP::
	lock
	faceplayer
	namebox NPC_SHEEP_Text_0
	playmoncry SPECIES_MAREEP, 0
	msgbox NPC_SHEEP_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_COW::
	lock
	faceplayer
	namebox NPC_COW_Text_0
	playmoncry SPECIES_MILTANK, 0
	msgbox NPC_COW_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_CAT::
	lock
	faceplayer
	namebox NPC_CAT_Text_0
	playmoncry SPECIES_MEOWTH, 0
	msgbox NPC_CAT_Text_1
	waitmoncry
	hidenamebox
	release
	end


NPC_ABYSSALDEMON::
	lock
	faceplayer
	namebox NPC_ABYSSALDEMON_Text_0
	msgbox NPC_ABYSSALDEMON_Text_1
	hidenamebox
	release
	end


NPC_CAMEL::
	lock
	faceplayer
	namebox NPC_CAMEL_Text_0
	playmoncry SPECIES_MILTANK, 0
	msgbox NPC_CAMEL_Text_1
	waitmoncry
	hidenamebox
	release
	end


SIGN_ROUTE1_1::
	lock
	msgbox SIGN_ROUTE1_1_Text_0
	release
	end


SIGN_ROUTE1_2::
	lock
	msgbox SIGN_ROUTE1_2_Text_0
	release
	end


SIGN_ROUTE1_3::
	lock
	msgbox SIGN_ROUTE1_3_Text_0
	release
	end


NPC_FISHERMAN_1::
	lock
	faceplayer
	msgbox NPC_FISHERMAN_1_Text_0
	checkitem ITEM_SMALL_NET, 1
	compare VAR_RESULT, 0
	goto_if_eq NPC_FISHERMAN_1_2
	release
	end

	release
	end

NPC_FISHERMAN_1_2:
	msgbox NPC_FISHERMAN_1_Text_1
	giveitem ITEM_SMALL_NET
	msgbox NPC_FISHERMAN_1_Text_2
	release
	end


BLOCK_ROUTE1_FARMER::
	lock
	faceplayer
	namebox BLOCK_ROUTE1_FARMER_Text_0
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 15
	goto_if_eq BLOCK_ROUTE1_FARMER_2
	compare VAR_POKESCAPE_STORYMODE_PROGRESS, 10
	goto_if_le BLOCK_ROUTE1_FARMER_3
	msgbox BLOCK_ROUTE1_FARMER_Text_3
BLOCK_ROUTE1_FARMER_1:
	hidenamebox
	closemessage
	release
	end

BLOCK_ROUTE1_FARMER_2:
	msgbox BLOCK_ROUTE1_FARMER_Text_1
	goto BLOCK_ROUTE1_FARMER_1

BLOCK_ROUTE1_FARMER_3:
	msgbox BLOCK_ROUTE1_FARMER_Text_2
	goto BLOCK_ROUTE1_FARMER_1


THIEF_ROUTE_1::
	lock
	faceplayer
	namebox THIEF_ROUTE_1_Text_0
	msgbox THIEF_ROUTE_1_Text_1
	hidenamebox
	closemessage
	release
	end


ROUTE1_FarmerFred::
	lock
	faceplayer
	namebox ROUTE1_FarmerFred_Text_0
	msgbox ROUTE1_FarmerFred_Text_1
	hidenamebox
	closemessage
	release
	end


Wartfoot_Route1_Battle::
	trainerbattle_single TRAINER_GOBLIN_1_ROUTE1, Wartfoot_Route1_Battle_Text_0, Wartfoot_Route1_Battle_Text_1
	namebox Wartfoot_Route1_Battle_Text_2
	msgbox Wartfoot_Route1_Battle_Text_3
	hidenamebox
	release
	end


Frogface_Route1_Battle::
	trainerbattle_single TRAINER_GOBLIN_2_ROUTE1, Frogface_Route1_Battle_Text_0, Frogface_Route1_Battle_Text_1
	namebox Frogface_Route1_Battle_Text_2
	msgbox Frogface_Route1_Battle_Text_3
	hidenamebox
	release
	end


Trainer1_Route1_Battle::
	trainerbattle_single TRAINER_RSN_ROUTE1, Trainer1_Route1_Battle_Text_0, Trainer1_Route1_Battle_Text_1
	namebox Trainer1_Route1_Battle_Text_2
	msgbox Trainer1_Route1_Battle_Text_3
	closemessage
	hidenamebox
	release
	end


MudbeardBattle::
	trainerbattle_single TRAINER_GOBLIN_3_ROUTE1, MudbeardBattle_Text_0, MudbeardBattle_Text_1
	namebox MudbeardBattle_Text_2
	msgbox MudbeardBattle_Text_3
	closemessage
	hidenamebox
	release
	return


Route1FarmerBattle::
	trainerbattle_single TRAINER_FARMER_ROUTE1, Route1FarmerBattle_Text_0, Route1FarmerBattle_Text_1
	namebox Route1FarmerBattle_Text_2
	msgbox Route1FarmerBattle_Text_3
	hidenamebox
	release
	return


FeetfingersBattle::
	trainerbattle_single TRAINER_GOBLIN_4_ROUTE1, FeetfingersBattle_Text_0, FeetfingersBattle_Text_1
	namebox FeetfingersBattle_Text_2
	msgbox FeetfingersBattle_Text_3
	hidenamebox
	release
	end


ChickenBattleScript1::
	lock
	faceplayer
	playmoncry SPECIES_TORCHIC, 0
	msgbox ChickenBattleScript1_Text_0
	waitmoncry
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 4, ITEM_NONE
	dowildbattle
	removeobject 8
	release
	return


ChickenBattleScript2::
	lock
	faceplayer
	playmoncry SPECIES_TORCHIC, 0
	msgbox ChickenBattleScript1_Text_0
	waitmoncry
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 4, ITEM_NONE
	dowildbattle
	removeobject 9
	release
	return


ChickenBattleScript3::
	lock
	faceplayer
	playmoncry SPECIES_TORCHIC, 0
	msgbox ChickenBattleScript1_Text_0
	waitmoncry
	setwildbattle SPECIES_CHICKEN_NORMAL_FORM, 4, ITEM_NONE
	dowildbattle
	removeobject 10
	release
	return


EvilChickenBattleScript::
	lock
	playmoncry SPECIES_EVILCHICKEN, 0
	msgbox EvilChickenBattleScript_Text_0
	waitmoncry
	setwildbattle SPECIES_EVILCHICKEN, 10, ITEM_NONE
	dowildbattle
	removeobject VAR_LAST_TALKED
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 5
	return


ErnestAndVeronica::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq ErnestAndVeronica_1
	namebox ErnestAndVeronica_Text_2
	msgbox ErnestAndVeronica_Text_12
	hidenamebox
	closemessage
	namebox ErnestAndVeronica_Text_0
	msgbox ErnestAndVeronica_Text_13
	hidenamebox
	closemessage
	release
	end

ErnestAndVeronica_1:
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, ErnestAndVeronica_5
	case 1, ErnestAndVeronica_5
	case 2, ErnestAndVeronica_5
	case 3, ErnestAndVeronica_5
	case 4, ErnestAndVeronica_5
	case 5, ErnestAndVeronica_6
	case 6, ErnestAndVeronica_6
	case 7, ErnestAndVeronica_6
	case 8, ErnestAndVeronica_6
	case 9, ErnestAndVeronica_6
	case 10, ErnestAndVeronica_7
	case 11, ErnestAndVeronica_7
	return

ErnestAndVeronica_5:
	playmoncry SPECIES_TORCHIC, 0
	namebox ErnestAndVeronica_Text_0
	msgbox ErnestAndVeronica_Text_1
	waitmoncry
	hidenamebox
	closemessage
	applymovement 6, HAM_Movement7_6
	namebox ErnestAndVeronica_Text_2
	msgbox ErnestAndVeronica_Text_3
	hidenamebox
	closemessage
	waitmovement 0
	playmoncry SPECIES_TORCHIC, 0
	namebox ErnestAndVeronica_Text_0
	msgbox ErnestAndVeronica_Text_4
	waitmoncry
	playmoncry SPECIES_TORCHIC, 0
	msgbox ErnestAndVeronica_Text_5
	waitmoncry
	hidenamebox
	closemessage
	applymovement 6, HAM_Movement7_6
	namebox ErnestAndVeronica_Text_2
	msgbox ErnestAndVeronica_Text_6
	hidenamebox
	closemessage
	waitmovement 0
	playmoncry SPECIES_COMBUSKEN, 0
	namebox ErnestAndVeronica_Text_0
	msgbox ErnestAndVeronica_Text_7
	waitmoncry
	hidenamebox
	closemessage
	release
	end

ErnestAndVeronica_6:
	namebox ErnestAndVeronica_Text_0
	msgbox ErnestAndVeronica_Text_8
	hidenamebox
	closemessage
	namebox ErnestAndVeronica_Text_2
	msgbox ErnestAndVeronica_Text_9
	hidenamebox
	closemessage
	release
	end

ErnestAndVeronica_7:
	namebox ErnestAndVeronica_Text_2
	msgbox ErnestAndVeronica_Text_10
	hidenamebox
	closemessage
	namebox ErnestAndVeronica_Text_0
	msgbox ErnestAndVeronica_Text_11
	hidenamebox
	closemessage
	release
	end


HAM_EVENT_Route1_MAIN_1::
	lockall
	playbgm MUS_PS_ENCOUNTER_HAM, 1
	applymovement 23, HAM_Movement7_1
	namebox HAM_EVENT_Route1_MAIN_1_Text_0
	msgbox HAM_EVENT_Route1_MAIN_1_Text_1
	hidenamebox
	closemessage
	waitmovement 0
	applymovement 5, HAM_Movement7_7
	namebox ErnestAndVeronica_Text_0
	msgbox HAM_EVENT_Route1_MAIN_1_Text_2
	hidenamebox
	waitmovement 0
	applymovement 6, HAM_Movement7_6
	namebox ErnestAndVeronica_Text_2
	msgbox HAM_EVENT_Route1_MAIN_1_Text_3
	hidenamebox
	waitmovement 0
	applymovement 23, HAM_Movement7_1
	namebox HAM_EVENT_Route1_MAIN_1_Text_0
	msgbox HAM_EVENT_Route1_MAIN_1_Text_4
	hidenamebox
	closemessage
	waitmovement 0
	return


HAM_EVENT_Route1_TRIGGER_1::
	call HAM_EVENT_Route1_MAIN_1
	clearflag FLAG_TEMP_2
	addobject 22
	applymovement 22, HAM_Movement7_2
	waitmovement 0
	namebox HAM_EVENT_Route1_TRIGGER_1_Text_0
	msgbox HAM_EVENT_Route1_TRIGGER_1_Text_1
	hidenamebox
	closemessage
	call HAM_EVENT_Route1_MAIN_2
	applymovement 22, HAM_Movement7_4
	waitmovement 0
	goto HAM_EVENT_Route1_MAIN_3
	return


HAM_EVENT_Route1_TRIGGER_2::
	call HAM_EVENT_Route1_MAIN_1
	clearflag FLAG_TEMP_2
	addobject 22
	applymovement 22, HAM_Movement7_8
	waitmovement 0
	namebox HAM_EVENT_Route1_TRIGGER_1_Text_0
	msgbox HAM_EVENT_Route1_TRIGGER_1_Text_1
	hidenamebox
	closemessage
	call HAM_EVENT_Route1_MAIN_2
	applymovement 22, HAM_Movement7_9
	waitmovement 0
	goto HAM_EVENT_Route1_MAIN_3
	return


HAM_EVENT_Route1_MAIN_2::
	applymovement 23, HAM_Movement7_5
	waitmovement 0
	namebox HAM_EVENT_Route1_MAIN_1_Text_0
	msgbox HAM_EVENT_Route1_MAIN_2_Text_0
	hidenamebox
	closemessage
	applymovement 23, HAM_Movement7_3
	delay 16
	return


HAM_EVENT_Route1_MAIN_3::
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 22
	removeobject 23
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 6
	savebgm MUS_DUMMY
	fadedefaultbgm
	release
	end


HAM_Movement7_1:
	walk_in_place_left
	walk_in_place_left
	walk_in_place_left
	step_end

HAM_Movement7_2:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_left
	step_end

HAM_Movement7_8:
	walk_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	face_left
	step_end

HAM_Movement7_3:
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

HAM_Movement7_4:
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

HAM_Movement7_9:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

HAM_Movement7_5:
	face_right
	step_end

HAM_Movement7_6:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	step_end

HAM_Movement7_7:
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	step_end

ArianeChaseHamEvent7::
	lockall
	namebox HAM_EVENT_Route1_MAIN_1_Text_0
	msgbox ArianeChaseHamEvent7_Text_0
	hidenamebox
	namebox ErnestAndVeronica_Text_0
	msgbox HAM_EVENT_Route1_MAIN_1_Text_2
	hidenamebox
	namebox ErnestAndVeronica_Text_2
	msgbox ArianeChaseHamEvent7_Text_1
	hidenamebox
	msgbox ArianeChaseHamEvent7_Text_2
	namebox HAM_EVENT_Route1_MAIN_1_Text_0
	msgbox ArianeChaseHamEvent7_Text_3
	hidenamebox
	release
	lockall
	applymovement 23, HamMemberRuns3
	waitmovement 0
	applymovement 5, ErnestShoved
	waitmovement 0
	namebox ErnestAndVeronica_Text_0
	msgbox ArianeChaseHamEvent7_Text_4
	hidenamebox
	release
	lockall
	applymovement 5, ErnestMoveBack
	namebox HAM_EVENT_Route1_TRIGGER_1_Text_0
	msgbox ArianeChaseHamEvent7_Text_5
	hidenamebox
	namebox HAM_EVENT_Route1_MAIN_1_Text_0
	msgbox ArianeChaseHamEvent7_Text_6
	hidenamebox
	release
	lockall
	applymovement 23, HamMemberRuns4
	waitmovement 0
	applymovement 22, ArianeRunAfterHam11
	waitmovement 0
	removeobject 23
	setflag FLAG_TEMP_4
	removeobject 22
	setflag FLAG_TEMP_5
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 7
	return


HamMemberRuns3:
	walk_fast_left
	step_end

ErnestShoved:
	slide_left
	face_right
	step_end

ErnestMoveBack:
	walk_right
	face_up
	step_end

HamMemberRuns4:
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

ArianeRunAfterHam11:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

BATTLE_AREA_TRAINER_1::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_HAM_GRUNT_1, BATTLE_AREA_TRAINER_1_Text_0, BATTLE_AREA_TRAINER_1_Text_1
	namebox BATTLE_AREA_TRAINER_1_Text_2
	msgbox BATTLE_AREA_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_AREA_TRAINER_2::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_HAM_GRUNT_1, BATTLE_AREA_TRAINER_2_Text_0, BATTLE_AREA_TRAINER_2_Text_1
	namebox BATTLE_AREA_TRAINER_1_Text_2
	msgbox BATTLE_AREA_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_AREA_TRAINER_3::
	trainerbattle_single TRAINER_KARAMJAVOLCANO_HAM_GRUNT_1, BATTLE_AREA_TRAINER_3_Text_0, BATTLE_AREA_TRAINER_3_Text_1
	namebox BATTLE_AREA_TRAINER_1_Text_2
	msgbox BATTLE_AREA_TRAINER_3_Text_2
	hidenamebox
	release
	end


NPC_DUCK_Text_0:
	.string "DUCK$"

NPC_DUCK_Text_1:
	.string "Quack!$"

NPC_RAT_Text_0:
	.string "RAT$"

NPC_RAT_Text_1:
	.string "SKREEK!$"

NPC_SHEEP_Text_0:
	.string "SHEEP$"

NPC_SHEEP_Text_1:
	.string "Baaa!$"

NPC_COW_Text_0:
	.string "COW$"

NPC_COW_Text_1:
	.string "Mooo!$"

NPC_CAT_Text_0:
	.string "CAT$"

NPC_CAT_Text_1:
	.string "Meeeooww…$"

NPC_ABYSSALDEMON_Text_0:
	.string "ABYSSAL DEMON$"

NPC_ABYSSALDEMON_Text_1:
	.string "Schttle, skrtch!$"

NPC_CAMEL_Text_0:
	.string "CAMEL$"

NPC_CAMEL_Text_1:
	.string "The Camel spits at you.$"

SIGN_ROUTE1_1_Text_0:
	.string "Fred's Farm.$"

SIGN_ROUTE1_2_Text_0:
	.string "NORTH to MILL LANE MILL\p"
	.string "WEST to DRAYNOR\p"
	.string "EAST to LUMBRIDGE$"

SIGN_ROUTE1_3_Text_0:
	.string "NORTH to DRAYNOR MANOR\p"
	.string "WEST to FALADOR\p"
	.string "EAST to LUMBRIDGE\p"
	.string "SOUTH to DRAYNOR$"

NPC_FISHERMAN_1_Text_0:
	.string "I love to fish in this pond.\p"
	.string "It is so peaceful, with the ducks that\n"
	.string "keep me company.\p"
	.string "I cannot imagine anything bad to\n"
	.string "happen here.$"

NPC_FISHERMAN_1_Text_1:
	.string "You seem like someone who would also\n"
	.string "enjoy fishing in this pond.\p"
	.string "Here take this!$"

NPC_FISHERMAN_1_Text_2:
	.string "It is only a small net but I'm sure there\n"
	.string "are plenty of things you could fish up\l"
	.string "with it!$"

BLOCK_ROUTE1_FARMER_Text_0:
	.string "Farmer$"

BLOCK_ROUTE1_FARMER_Text_1:
	.string "Hey sorry bud, I think I'm going to be\n"
	.string "here awhile.\p"
	.string "If you want to get to Draynor you'll\n"
	.string "have to go through the swamp to the\l"
	.string "south.$"

BLOCK_ROUTE1_FARMER_Text_2:
	.string "Some Goblins scared my cows out of\n"
	.string "their pens.\p"
	.string "Now I'm struggling to get them back in!$"

BLOCK_ROUTE1_FARMER_Text_3:
	.string "I finally got my Cows out of the way.$"

THIEF_ROUTE_1_Text_0:
	.string "Darren$"

THIEF_ROUTE_1_Text_1:
	.string "Nothing to see here kid.\p"
	.string "SHOOO!$"

ROUTE1_FarmerFred_Text_0:
	.string "Fred$"

ROUTE1_FarmerFred_Text_1:
	.string "Get off my farm!$"

Wartfoot_Route1_Battle_Text_0:
	.string "Brown armour best!$"

Wartfoot_Route1_Battle_Text_1:
	.string "Um… My brown armour in the wash.$"

Wartfoot_Route1_Battle_Text_2:
	.string "WartFoot$"

Wartfoot_Route1_Battle_Text_3:
	.string "Me like brown armour, but now it dirty.$"

Frogface_Route1_Battle_Text_0:
	.string "You ugly!$"

Frogface_Route1_Battle_Text_1:
	.string "You still ugly!$"

Frogface_Route1_Battle_Text_2:
	.string "FrogFace$"

Frogface_Route1_Battle_Text_3:
	.string "You really, really ugly!$"

Trainer1_Route1_Battle_Text_0:
	.string "You look like a noob!$"

Trainer1_Route1_Battle_Text_1:
	.string "Maybe I'm the noob…$"

Trainer1_Route1_Battle_Text_2:
	.string "Bob$"

Trainer1_Route1_Battle_Text_3:
	.string "The mill is up ahead.\p"
	.string "I heard you can get some good flour\n"
	.string "there.$"

MudbeardBattle_Text_0:
	.string "Go away smelly human!$"

MudbeardBattle_Text_1:
	.string "Leave me alone!$"

MudbeardBattle_Text_2:
	.string "Mudbeard$"

MudbeardBattle_Text_3:
	.string "Smelly human!$"

Route1FarmerBattle_Text_0:
	.string "Cor blimey what are ye doing on me\n"
	.string "lands!$"

Route1FarmerBattle_Text_1:
	.string "Its not really my lands yet.$"

Route1FarmerBattle_Text_2:
	.string "John$"

Route1FarmerBattle_Text_3:
	.string "It's not really my lands yet.$"

FeetfingersBattle_Text_0:
	.string "Me Feetfingers who you?$"

FeetfingersBattle_Text_1:
	.string "Feetfingers, impressed!$"

FeetfingersBattle_Text_2:
	.string "Feetfingers$"

FeetfingersBattle_Text_3:
	.string "Friend of Feetfingers?$"

ChickenBattleScript1_Text_0:
	.string "BWAK!$"

EvilChickenBattleScript_Text_0:
	.string "BWAWWWK!\p"
	.string "BEGONE {PLAYER}!$"

ErnestAndVeronica_Text_0:
	.string "Ernest$"

ErnestAndVeronica_Text_1:
	.string "Bwak bwak bwwwaaaakk!$"

ErnestAndVeronica_Text_2:
	.string "Veronica$"

ErnestAndVeronica_Text_3:
	.string "What do you mean a scientist turned you\n"
	.string "into a chicken!?\p"
	.string "You were meant to get directions!$"

ErnestAndVeronica_Text_4:
	.string "Bwakbawk.$"

ErnestAndVeronica_Text_5:
	.string "Bwak bwakbwak!$"

ErnestAndVeronica_Text_6:
	.string "Well go get him to change you back!\p"
	.string "I don't want to be engaged to a\n"
	.string "chicken!\p"
	.string "That's just fowl…$"

ErnestAndVeronica_Text_7:
	.string "Bwak…$"

ErnestAndVeronica_Text_8:
	.string "Professor Oddenstein made me human\n"
	.string "again!$"

ErnestAndVeronica_Text_9:
	.string "I think I liked you better when you were\n"
	.string "a chicken.$"

ErnestAndVeronica_Text_10:
	.string "Did you ever end up getting some\n"
	.string "directions?$"

ErnestAndVeronica_Text_11:
	.string "Oh no!\p"
	.string "I completely forgot!$"

ErnestAndVeronica_Text_12:
	.string "I think we are lost, go to that mannor\n"
	.string "and ask for directions?$"

ErnestAndVeronica_Text_13:
	.string "But it is scary!\p"
	.string "I don't want to go.$"

HAM_EVENT_Route1_MAIN_1_Text_0:
	.string "H.A.M. member$"

HAM_EVENT_Route1_MAIN_1_Text_1:
	.string "Get out of my way!\p"
	.string "I need to get to Port Sarim!$"

HAM_EVENT_Route1_MAIN_1_Text_2:
	.string "I'm so glad I'm not a chicken anymore…\p"
	.string "That was cluckin' scary!$"

HAM_EVENT_Route1_MAIN_1_Text_3:
	.string "Let's just avoid that creepy Manor from\n"
	.string "now on.$"

HAM_EVENT_Route1_MAIN_1_Text_4:
	.string "Urgh!\p"
	.string "Why does everyone insist on getting in\n"
	.string "my way!$"

HAM_EVENT_Route1_TRIGGER_1_Text_0:
	.string "Ariane$"

HAM_EVENT_Route1_TRIGGER_1_Text_1:
	.string "Stop thief!\p"
	.string "There is nowhere left for you to run!$"

HAM_EVENT_Route1_MAIN_2_Text_0:
	.string "Urrrrgh!\p"
	.string "You are persistent!\p"
	.string "Leave me alone!$"

ArianeChaseHamEvent7_Text_0:
	.string "Get out of my way! you're blocking the\n"
	.string "path!$"

ArianeChaseHamEvent7_Text_1:
	.string "Let's just avoid that creepy manor from\n"
	.string "now on.$"

ArianeChaseHamEvent7_Text_2:
	.string "Kissing noises$"

ArianeChaseHamEvent7_Text_3:
	.string "I SAID GET OUT OF THE WAY!!$"

ArianeChaseHamEvent7_Text_4:
	.string "Well that was uncalled for!$"

ArianeChaseHamEvent7_Text_5:
	.string "Stop thief! There is nowhere left for\n"
	.string "you to run!$"

ArianeChaseHamEvent7_Text_6:
	.string "UGH! This dumb couple keeps blocking my\n"
	.string "way… but there is still the manor!$"

BATTLE_AREA_TRAINER_1_Text_0:
	.string "Cor Blimey what are ye doin in me\n"
	.string "pockets!$"

BATTLE_AREA_TRAINER_1_Text_1:
	.string "Oh, ye werent a pickpocket.$"

BATTLE_AREA_TRAINER_1_Text_2:
	.string "TRAINER$"

BATTLE_AREA_TRAINER_1_Text_3:
	.string "Sorry about the misunderstandin chap.$"

BATTLE_AREA_TRAINER_2_Text_0:
	.string "These are my wheat fields and if your\n"
	.string "about to rample them then go on the\l"
	.string "neighbors plot!$"

BATTLE_AREA_TRAINER_2_Text_1:
	.string "Wheat a twist!$"

BATTLE_AREA_TRAINER_2_Text_2:
	.string "Just this once I will look the other way,\n"
	.string "but be nice to my crops.$"

BATTLE_AREA_TRAINER_3_Text_0:
	.string "Human not understand glory of big high\n"
	.string "war god. Me show you!$"

BATTLE_AREA_TRAINER_3_Text_1:
	.string "Now human understands.$"

BATTLE_AREA_TRAINER_3_Text_2:
	.string "Big high war god is god of goblins.$"
