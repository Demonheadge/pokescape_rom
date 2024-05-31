Sinkhole_1_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Sinkhole_1_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Sinkhole_1_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 43
	return


ITEM_SINKHOLE_1::
	finditem ITEM_STAT_MOONLIGHT_MEAD
	end


ITEM_SINKHOLE_2::
	finditem ITEM_HWEEN_MASK
	end


ITEM_SINKHOLE_3::
	finditem ITEM_SPIRIT_SHARD
	end


BOOK_SMUGGLERS_JOURNAL_1::
	msgbox BOOK_SMUGGLERS_JOURNAL_1_Text_0
	closemessage
	hidenamebox
	release
	end


BOOK_SMUGGLERS_JOURNAL_2::
	msgbox BOOK_SMUGGLERS_JOURNAL_1_Text_0
	closemessage
	hidenamebox
	release
	end


BOOK_SMUGGLERS_JOURNAL_3::
	msgbox BOOK_SMUGGLERS_JOURNAL_3_Text_0
	closemessage
	hidenamebox
	release
	end


DAMAGED_LADDER::
	msgbox DAMAGED_LADDER_Text_0
	closemessage
	hidenamebox
	release
	end


SINKHOLE_NPC_FORGOTTENWARRIOR_1::
	faceplayer
	namebox SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_0
	msgbox SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_1
	closemessage
	hidenamebox
	release
	end


SINKHOLE_NPC_TRADER::
	faceplayer
	msgbox SINKHOLE_NPC_TRADER_Text_0
	closemessage
	hidenamebox
	release
	end


SINKHOLE_NPC_FORGOTTENWARRIOR_2::
	faceplayer
	msgbox SINKHOLE_NPC_FORGOTTENWARRIOR_2_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1::
	trainerbattle_single TRAINER_SINKHOLE_NPC_FORGOTTENWARRIOR_1, BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_0, BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_1
	msgbox BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_2
	hidenamebox
	release
	end


ENCOUNTER_BEHEMOTH::
	lock
	faceplayer
	namebox ENCOUNTER_BEHEMOTH_Text_0
	playmoncry SPECIES_EKANS, 0
	msgbox ENCOUNTER_BEHEMOTH_Text_1
	waitmoncry
	hidenamebox
	closemessage
	delay 1
	goto_if_set FLAG_BADGE01_GET, ENCOUNTER_BEHEMOTH_2
	goto_if_set FLAG_BADGE02_GET, ENCOUNTER_BEHEMOTH_3
	goto_if_set FLAG_BADGE03_GET, ENCOUNTER_BEHEMOTH_4
	goto_if_set FLAG_BADGE04_GET, ENCOUNTER_BEHEMOTH_5
	goto_if_set FLAG_BADGE05_GET, ENCOUNTER_BEHEMOTH_6
	goto_if_set FLAG_BADGE06_GET, ENCOUNTER_BEHEMOTH_7
	goto_if_set FLAG_BADGE07_GET, ENCOUNTER_BEHEMOTH_8
	goto_if_set FLAG_BADGE08_GET, ENCOUNTER_BEHEMOTH_9
	setwildbattle SPECIES_BEHEMOTH_NORMAL_FORM, 10, ITEM_NONE
ENCOUNTER_BEHEMOTH_1:
	dowildbattle
	switch VAR_RESULT
	case B_OUTCOME_WON, ENCOUNTER_BEHEMOTH_21
	case B_OUTCOME_CAUGHT, ENCOUNTER_BEHEMOTH_22
ENCOUNTER_BEHEMOTH_19:
	release
	end

ENCOUNTER_BEHEMOTH_2:
	setwildbattle SPECIES_BEHEMOTH_ADOLSCENT_FORM, 20, ITEM_NONE
	goto ENCOUNTER_BEHEMOTH_1

ENCOUNTER_BEHEMOTH_3:
	setwildbattle SPECIES_BEHEMOTH_ADOLSCENT_FORM, 25, ITEM_NONE
	goto ENCOUNTER_BEHEMOTH_1

ENCOUNTER_BEHEMOTH_4:
	setwildbattle SPECIES_BEHEMOTH_ADOLSCENT_FORM, 30, ITEM_NONE
	goto ENCOUNTER_BEHEMOTH_1

ENCOUNTER_BEHEMOTH_5:
	setwildbattle SPECIES_BEHEMOTH_GLUTTONOUS_FORM, 35, ITEM_NONE
	goto ENCOUNTER_BEHEMOTH_1

ENCOUNTER_BEHEMOTH_6:
	setwildbattle SPECIES_BEHEMOTH_GLUTTONOUS_FORM, 40, ITEM_NONE
	goto ENCOUNTER_BEHEMOTH_1

ENCOUNTER_BEHEMOTH_7:
	setwildbattle SPECIES_BEHEMOTH_GLUTTONOUS_FORM, 45, ITEM_NONE
	goto ENCOUNTER_BEHEMOTH_1

ENCOUNTER_BEHEMOTH_8:
	setwildbattle SPECIES_BEHEMOTH_GLUTTONOUS_FORM, 50, ITEM_NONE
	goto ENCOUNTER_BEHEMOTH_1

ENCOUNTER_BEHEMOTH_9:
	setwildbattle SPECIES_BEHEMOTH_GLUTTONOUS_FORM, 55, ITEM_NONE
	goto ENCOUNTER_BEHEMOTH_1

ENCOUNTER_BEHEMOTH_21:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_BEHEMOTH_19

ENCOUNTER_BEHEMOTH_22:
	fadescreen FADE_TO_BLACK
	removeobject VAR_LAST_TALKED
	fadescreen FADE_FROM_BLACK
	goto ENCOUNTER_BEHEMOTH_19


BOOK_SMUGGLERS_JOURNAL_1_Text_0:
	.string "Smuggers Journal.\p"
	.string "The Book is iced over and you cannot\n"
	.string "turn the page to read more.\p"
	.string "Maybe there is a way to thaw it one day.$"

BOOK_SMUGGLERS_JOURNAL_3_Text_0:
	.string "You find a Smuggers Journal.\p"
	.string "The Book is iced over and you cannot\n"
	.string "turn the page to read more.\p"
	.string "Maybe there is a way to thaw it one day.$"

DAMAGED_LADDER_Text_0:
	.string "The ladder is too damaged to use it.$"

SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_0:
	.string "Forgotten Warrior$"

SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_1:
	.string "There are many sinkhole dungeons like\n"
	.string "this around the world.\p"
	.string "There is also a place in Daemonheim\n"
	.string "where the dungeons are randomised\l"
	.string "upon entry.\p"
	.string "It's kind of scary but cool.$"

SINKHOLE_NPC_TRADER_Text_0:
	.string "I have been down here for years.\p"
	.string "It is surprising to see a surface\n"
	.string "dweller here.$"

SINKHOLE_NPC_FORGOTTENWARRIOR_2_Text_0:
	.string "Hey thanks for opening the door\n"
	.string "earlier.\p"
	.string "By the way, have you tried fishing here?\p"
	.string "There are many monsters only exclusive\n"
	.string "to these dungeons.$"

BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_0:
	.string "Halt!\p"
	.string "Who are you and how did you get here?!$"

BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_1:
	.string "You have bested me.$"

BATTLE_SINKHOLE_NPC_FORGOTTENWARRIOR_1_Text_2:
	.string "You came from the surface?\p"
	.string "What is that?$"

ENCOUNTER_BEHEMOTH_Text_0:
	.string "BEHEMOTH$"

ENCOUNTER_BEHEMOTH_Text_1:
	.string "BEEHEHEHEHHROAAH!!$"
