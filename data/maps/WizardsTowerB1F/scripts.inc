WizardsTowerB1F_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, WizardsTowerB1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

WizardsTowerB1F_MapScripts_MAP_SCRIPT_ON_LOAD:
	call WizardsTower_B1F_STATE
	return


WizardsTower_B1F_STATE::
	switch VAR_POKESCAPE_WIZARDS_TOWER_STATE
	case 0, WizardsTower_B1F_STATE_2
	case 1, WizardsTower_B1F_STATE_2
	case 2, WizardsTower_B1F_STATE_2
	case 3, WizardsTower_B1F_STATE_2
	case 4, WizardsTower_B1F_STATE_2
	case 5, WizardsTower_B1F_STATE_2
	case 6, WizardsTower_B1F_STATE_2
	case 7, WizardsTower_B1F_STATE_2
	case 8, WizardsTower_B1F_STATE_2
	case 9, WizardsTower_B1F_STATE_2
	case 10, WizardsTower_B1F_STATE_3
	case 11, WizardsTower_B1F_STATE_3
	return

WizardsTower_B1F_STATE_2:
	setflag FLAG_TEMP_1
	setflag FLAG_TEMP_2
	removeobject 1
	removeobject 6
	release
	return

WizardsTower_B1F_STATE_3:
	clearflag FLAG_TEMP_1
	clearflag FLAG_TEMP_2
	addobject 1
	addobject 6
	release
	return


NPC_WizardsTowerB1F_Ariane::
	faceplayer
	namebox NPC_WizardsTowerB1F_Ariane_Text_0
	msgbox NPC_WizardsTowerB1F_Ariane_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_WizardsTowerB1F_Sedridor::
	lock
	faceplayer
	namebox NPC_WizardsTowerB1F_Sedridor_Text_0
	compare VAR_POKESCAPE_WIZARDS_TOWER_STATE, 10
	goto_if_eq NPC_WizardsTowerB1F_Sedridor_2
	checkitem ITEM_TALISMAN_MYSTERY, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_WizardsTowerB1F_Sedridor_5
	checkitem ITEM_TALISMAN_AIR, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_WizardsTowerB1F_Sedridor_7
	return

NPC_WizardsTowerB1F_Sedridor_2:
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_1
	hidenamebox
	closemessage
	giveitem ITEM_SPIRIT_SHARD, 5
	setvar VAR_POKESCAPE_WIZARDS_TOWER_STATE, 11
	release
	end

NPC_WizardsTowerB1F_Sedridor_5:
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_2
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_3
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_4
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_RUNE_MYSTERIES, SUB_QUEST_RUNEMYSTERIES_1
	hidenamebox
	closemessage
	giveitem ITEM_TALISMAN_AIR, 1
	removeitem ITEM_TALISMAN_MYSTERY, 1
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_5
	release
	end

NPC_WizardsTowerB1F_Sedridor_7:
	msgbox NPC_WizardsTowerB1F_Sedridor_Text_6
	hidenamebox
	closemessage
	release
	end


NPC_WizardsTowerB1F_Ariane_Text_0:
	.string "Ariane$"

NPC_WizardsTowerB1F_Ariane_Text_1:
	.string "I cannot believe that guy got away…$"

NPC_WizardsTowerB1F_Sedridor_Text_0:
	.string "Sedridor$"

NPC_WizardsTowerB1F_Sedridor_Text_1:
	.string "Hello {PLAYER}, I heard from Ariane\n"
	.string "that you gave chase into Draynor\l"
	.string "Manor.\p"
	.string "It's a shame that they got away but it\n"
	.string "cannot be helped.\p"
	.string "Here I would like you to have this for\n"
	.string "your troubles.$"

NPC_WizardsTowerB1F_Sedridor_Text_2:
	.string "You have something for me from the\n"
	.string "Duke of Lumbridge?\p"
	.string "May I take a look at it for a moment?$"

NPC_WizardsTowerB1F_Sedridor_Text_3:
	.string "Aha!\p"
	.string "So that's what this is!$"

NPC_WizardsTowerB1F_Sedridor_Text_4:
	.string "{PLAYER}, have you seen any of those\n"
	.string "mysterious altars in your travels?\p"
	.string "These talismans grants you access to\n"
	.string "the realm within the altar.\p"
	.string "Actually could you do me one small\n"
	.string "favour?\p"
	.string "Take this talisman to the Air Altar and\n"
	.string "report your findings back to me.\p"
	.string "It will be beneficial for your travels.$"

NPC_WizardsTowerB1F_Sedridor_Text_5:
	.string "The Air altar is located south of\n"
	.string "Falador on Route 7.\p"
	.string "Good luck.$"

NPC_WizardsTowerB1F_Sedridor_Text_6:
	.string "Hello {PLAYER}, have you visited\n"
	.string "those mysterious altars?\p"
	.string "The Air altar is located south of\n"
	.string "Falador on Route 7.$"
