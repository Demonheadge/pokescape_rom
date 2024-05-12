Varrock_Bank_West_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Varrock_Bank_West_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Varrock_Bank_West_MapScripts_MAP_SCRIPT_ON_LOAD:
	call VarrockWest_Bank_OnTransition
	return


VarrockWest_Bank_OnTransition::
	setrespawn HEAL_LOCATION_VARROCK
	return


VARROCKBANKWEST_NPC_NPC1::
	faceplayer
	msgbox VARROCKBANKWEST_NPC_NPC1_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCKBANKWEST_NPC_NPC2::
	faceplayer
	msgbox VARROCKBANKWEST_NPC_NPC2_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCKBANKWEST_NPC_NPC3::
	faceplayer
	msgbox VARROCKBANKWEST_NPC_NPC3_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCKBANKWEST_NPC_NPC4::
	faceplayer
	msgbox VARROCKBANKWEST_NPC_NPC4_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCKBANKWEST_NPC_NPC5::
	faceplayer
	msgbox VARROCKBANKWEST_NPC_NPC5_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCKBANKWEST_NPC_NPC6::
	faceplayer
	msgbox VARROCKBANKWEST_NPC_NPC6_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCKBANKWEST_NPC_NPC7::
	faceplayer
	msgbox VARROCKBANKWEST_NPC_NPC7_Text_0
	closemessage
	hidenamebox
	release
	end


VARROCKBANKWEST_NPC_NPC8::
	faceplayer
	msgbox VARROCKBANKWEST_NPC_NPC8_Text_0
	closemessage
	hidenamebox
	release
	end


QUEST_DROPPARTY_1::
	faceplayer
	msgbox QUEST_DROPPARTY_1_Text_0
	closemessage
	hidenamebox
	release
	end


QUEST_DROPPARTY_2::
	msgbox QUEST_DROPPARTY_2_Text_0
	closemessage
	hidenamebox
	release
	end


QUEST_DROPPARTY_3::
	msgbox QUEST_DROPPARTY_3_Text_0
	closemessage
	hidenamebox
	release
	end


QUEST_DROPPARTY_4::
	msgbox QUEST_DROPPARTY_4_Text_0
	closemessage
	hidenamebox
	release
	end


QUEST_DROPPARTY_NPCS_LURED::
	msgbox QUEST_DROPPARTY_NPCS_LURED_Text_0
	msgbox QUEST_DROPPARTY_NPCS_LURED_Text_1
	msgbox QUEST_DROPPARTY_NPCS_LURED_Text_2
	msgbox QUEST_DROPPARTY_NPCS_LURED_Text_3
	closemessage
	hidenamebox
	msgbox QUEST_DROPPARTY_NPCS_LURED_Text_4
	giveitem ITEM_ABYSSAL_WHIP, 1
	giveitem ITEM_SANTA_HAT, 1
	giveitem ITEM_CABBAGE, 1
	giveitem ITEM_CABBAGE, 1
	giveitem ITEM_CABBAGE, 1
	release
	end


QUEST_DROPPARTY_NPCS_HYPED::
	random 3
	switch VAR_RESULT
	case 0, QUEST_DROPPARTY_NPCS_HYPED_3
	case 1, QUEST_DROPPARTY_NPCS_HYPED_4
	case 2, QUEST_DROPPARTY_NPCS_HYPED_5
	case 3, QUEST_DROPPARTY_NPCS_HYPED_6
QUEST_DROPPARTY_NPCS_HYPED_1:
	closemessage
	hidenamebox
	release
	end

QUEST_DROPPARTY_NPCS_HYPED_3:
	msgbox QUEST_DROPPARTY_NPCS_HYPED_Text_0
	goto QUEST_DROPPARTY_NPCS_HYPED_1

QUEST_DROPPARTY_NPCS_HYPED_4:
	msgbox QUEST_DROPPARTY_NPCS_HYPED_Text_1
	goto QUEST_DROPPARTY_NPCS_HYPED_1

QUEST_DROPPARTY_NPCS_HYPED_5:
	msgbox QUEST_DROPPARTY_NPCS_HYPED_Text_2
	goto QUEST_DROPPARTY_NPCS_HYPED_1

QUEST_DROPPARTY_NPCS_HYPED_6:
	msgbox QUEST_DROPPARTY_NPCS_HYPED_Text_3
	goto QUEST_DROPPARTY_NPCS_HYPED_1


QUEST_DROPPARTY_NPCS_BORED::
	random 3
	switch VAR_RESULT
	case 0, QUEST_DROPPARTY_NPCS_BORED_3
	case 1, QUEST_DROPPARTY_NPCS_BORED_4
	case 2, QUEST_DROPPARTY_NPCS_BORED_5
	case 3, QUEST_DROPPARTY_NPCS_BORED_6
QUEST_DROPPARTY_NPCS_BORED_1:
	closemessage
	hidenamebox
	release
	end

QUEST_DROPPARTY_NPCS_BORED_3:
	msgbox QUEST_DROPPARTY_NPCS_BORED_Text_0
	goto QUEST_DROPPARTY_NPCS_BORED_1

QUEST_DROPPARTY_NPCS_BORED_4:
	msgbox QUEST_DROPPARTY_NPCS_BORED_Text_1
	goto QUEST_DROPPARTY_NPCS_BORED_1

QUEST_DROPPARTY_NPCS_BORED_5:
	msgbox QUEST_DROPPARTY_NPCS_BORED_Text_2
	goto QUEST_DROPPARTY_NPCS_BORED_1

QUEST_DROPPARTY_NPCS_BORED_6:
	msgbox QUEST_DROPPARTY_NPCS_BORED_Text_3
	goto QUEST_DROPPARTY_NPCS_BORED_1


BARBSTRONGHOLD_RIVAL_BOOT_CHOICE::
	faceplayer
	namebox BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_0
	msgbox BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_1
	closemessage
	hidenamebox
	msgbox BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_2
	msgbox BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_3
	msgbox BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_4
	giveitem ITEM_FANCY_BOOTS, 1
	msgbox BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_5
	release
	end


VARROCKBANKWEST_NPC_NPC1_Text_0:
	.string "Can't you see I am busy High-Alching,\n"
	.string "what do you want!$"

VARROCKBANKWEST_NPC_NPC2_Text_0:
	.string "I only made 1m profit today.\p"
	.string "If this keeps up I might be poor in 5\n"
	.string "years or so.\p"
	.string "Or if the economy suddenly suffered\n"
	.string "from inflation.$"

VARROCKBANKWEST_NPC_NPC3_Text_0:
	.string "Nice outfit Noob!\p"
	.string "I bet you couldn't afford to buy\n"
	.string "anything awesome like mine from the\l"
	.string "Solomon Store.$"

VARROCKBANKWEST_NPC_NPC4_Text_0:
	.string "I bought a bunch of runes here in\n"
	.string "Varrock, but I have no idea who to use\l"
	.string "them on.\p"
	.string "Why is there no list?\p"
	.string "Do I have to actually use my brain and\n"
	.string "experiment?!$"

VARROCKBANKWEST_NPC_NPC5_Text_0:
	.string "Get lost kid, I am Fletching and need to\n"
	.string "concentrate.$"

VARROCKBANKWEST_NPC_NPC6_Text_0:
	.string "{COLOR RED}red:wave: Buying Abyssal Whip!$"

VARROCKBANKWEST_NPC_NPC7_Text_0:
	.string "I have been trying to telegrab the ring\n"
	.string "in the basement for hours now!\p"
	.string "Do I need a higher magic level?$"

VARROCKBANKWEST_NPC_NPC8_Text_0:
	.string "People often make fires outside.\p"
	.string "Be careful, or else the flames might get\n"
	.string "you.$"

QUEST_DROPPARTY_1_Text_0:
	.string "Drop Party!\p"
	.string "Drop Party!\p"
	.string "Follow me for Drop Party!$"

QUEST_DROPPARTY_2_Text_0:
	.string "This way for Drop Party!$"

QUEST_DROPPARTY_3_Text_0:
	.string "Drop party!\p"
	.string "Dropping lots!$"

QUEST_DROPPARTY_4_Text_0:
	.string "Drop party happening now!\p"
	.string "Dropping items!$"

QUEST_DROPPARTY_NPCS_LURED_Text_0:
	.string "Don't go in it is a lure!$"

QUEST_DROPPARTY_NPCS_LURED_Text_1:
	.string "Woah I got an Abyssal Whip!$"

QUEST_DROPPARTY_NPCS_LURED_Text_2:
	.string "I got a Santa hat!$"

QUEST_DROPPARTY_NPCS_LURED_Text_3:
	.string "Haha! Got lured you!\p"
	.string "I bet you weren't expecting this.\p"
	.string "Now Hand over your Monsters!$"

QUEST_DROPPARTY_NPCS_LURED_Text_4:
	.string "What?!\p"
	.string "No way he/she managed to anti-lure us!\p"
	.string "Flee before the guards get here!$"

QUEST_DROPPARTY_NPCS_HYPED_Text_0:
	.string "Oooh a drop party!\p"
	.string "I am so excited!$"

QUEST_DROPPARTY_NPCS_HYPED_Text_1:
	.string "Fr33 St00F PL0X!$"

QUEST_DROPPARTY_NPCS_HYPED_Text_2:
	.string "Trade me!$"

QUEST_DROPPARTY_NPCS_HYPED_Text_3:
	.string "Why is everyone following this guy?$"

QUEST_DROPPARTY_NPCS_BORED_Text_0:
	.string "This is boring, I am about to leave.$"

QUEST_DROPPARTY_NPCS_BORED_Text_1:
	.string "Scammer!\p"
	.string "Don't trust this guy!$"

QUEST_DROPPARTY_NPCS_BORED_Text_2:
	.string "Where are you going?\p"
	.string "Just drop it here.$"

QUEST_DROPPARTY_NPCS_BORED_Text_3:
	.string "LOL he is going to the Wildy.$"

BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_0:
	.string "RIVAL$"

BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_1:
	.string "Fancy seeing you here {PLAYER}.\p"
	.string "There are two boots here and it says we\n"
	.string "can only take one.\p"
	.string "I am so indecisive I don't know what one\n"
	.string "to pick…\p"
	.string "Oh I know!\p"
	.string "I'll get you to pick.\p"
	.string "I will take whichever one you don't\n"
	.string "choose.$"

BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_2:
	.string "Nice choice!\p"
	.string "Then I will select these ones!$"

BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_3:
	.string "RIVAL OBTAINED FANCY BOOTS.$"

BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_4:
	.string "…{PAUSE 16}… Actually…\p"
	.string "I kind of don't want these anymore.\p"
	.string "Here you can take them!$"

BARBSTRONGHOLD_RIVAL_BOOT_CHOICE_Text_5:
	.string "Don't worry I doubt this counts as you\n"
	.string "taking both boots since I took it\l"
	.string "first.\p"
	.string "Enjoy, I'll see you around!$"
