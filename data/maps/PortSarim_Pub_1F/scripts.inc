PortSarim_Pub_1F_MapScripts::
	.byte 0


NPC_PortSarimPub_BARTENDER::
	lock
	faceplayer
	namebox NPC_PortSarimPub_BARTENDER_Text_0
	msgbox NPC_PortSarimPub_BARTENDER_Text_1
	hidenamebox
	release
	end


NPC_PortSarimPub_NPC_1::
	lock
	faceplayer
	namebox NPC_PortSarimPub_NPC_1_Text_0
	msgbox NPC_PortSarimPub_NPC_1_Text_1
	hidenamebox
	release
	end


NPC_PortSarimPub_NPC_2::
	lock
	faceplayer
	namebox NPC_PortSarimPub_NPC_2_Text_0
	msgbox NPC_PortSarimPub_NPC_2_Text_1
	hidenamebox
	release
	end


NPC_PortSarimPub_Pirate_1::
	lock
	faceplayer
	namebox NPC_PortSarimPub_NPC_2_Text_0
	msgbox NPC_PortSarimPub_Pirate_1_Text_0
	hidenamebox
	goto_if_unset FLAG_UNUSED_0x935, NPC_PortSarimPub_Pirate_1_2
NPC_PortSarimPub_Pirate_1_1:
	hidenamebox
	release
	end

NPC_PortSarimPub_Pirate_1_2:
	msgbox NPC_PortSarimPub_Pirate_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PortSarimPub_Pirate_1_4
	goto NPC_PortSarimPub_Pirate_1_1

NPC_PortSarimPub_Pirate_1_4:
	hidenamebox
	setflag FLAG_UNUSED_0x935
	trainerbattle_no_intro TRAINER_PUB_SARIM_1, NPC_PortSarimPub_Pirate_1_Text_2
	namebox NPC_PortSarimPub_NPC_2_Text_0
	msgbox NPC_PortSarimPub_Pirate_1_Text_3
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto NPC_PortSarimPub_Pirate_1_1


NPC_PortSarimPub_Pirate_2::
	lock
	faceplayer
	namebox NPC_PortSarimPub_NPC_2_Text_0
	msgbox NPC_PortSarimPub_Pirate_2_Text_0
	hidenamebox
	goto_if_unset FLAG_UNUSED_0x936, NPC_PortSarimPub_Pirate_2_2
NPC_PortSarimPub_Pirate_2_1:
	hidenamebox
	release
	end

NPC_PortSarimPub_Pirate_2_2:
	msgbox NPC_PortSarimPub_Pirate_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PortSarimPub_Pirate_2_4
	goto NPC_PortSarimPub_Pirate_2_1

NPC_PortSarimPub_Pirate_2_4:
	hidenamebox
	setflag FLAG_UNUSED_0x936
	trainerbattle_no_intro TRAINER_PUB_SARIM_2, NPC_PortSarimPub_Pirate_1_Text_2
	namebox NPC_PortSarimPub_NPC_2_Text_0
	msgbox NPC_PortSarimPub_Pirate_2_Text_1
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto NPC_PortSarimPub_Pirate_2_1


NPC_PortSarimPub_Dwarf::
	lock
	faceplayer
	namebox NPC_PortSarimPub_Dwarf_Text_0
	msgbox NPC_PortSarimPub_Dwarf_Text_1
	hidenamebox
	goto_if_unset FLAG_UNUSED_0x937, NPC_PortSarimPub_Dwarf_2
NPC_PortSarimPub_Dwarf_1:
	hidenamebox
	release
	end

NPC_PortSarimPub_Dwarf_2:
	msgbox NPC_PortSarimPub_Pirate_1_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_PortSarimPub_Dwarf_4
	goto NPC_PortSarimPub_Dwarf_1

NPC_PortSarimPub_Dwarf_4:
	hidenamebox
	setflag FLAG_UNUSED_0x937
	trainerbattle_no_intro TRAINER_PUB_SARIM_3, NPC_PortSarimPub_Pirate_1_Text_2
	namebox NPC_PortSarimPub_Dwarf_Text_0
	msgbox NPC_PortSarimPub_Dwarf_Text_2
	hidenamebox
	call GIVE_RANDOM_ITEM
	goto NPC_PortSarimPub_Dwarf_1


NPC_PortSarimPub_PUBCRAWL::
	lock
	faceplayer
	namebox NPC_PortSarimPub_PUBCRAWL_Text_0
	msgbox NPC_PortSarimPub_PUBCRAWL_Text_1
	hidenamebox
	release
	end


NPC_PortSarim_Church_Monk_1::
	lock
	faceplayer
	namebox NPC_PortSarim_Church_Monk_1_Text_0
	msgbox NPC_PortSarim_Church_Monk_1_Text_1
	hidenamebox
	release
	end


NPC_PortSarim_Church_Monk_2::
	lock
	faceplayer
	namebox NPC_PortSarim_Church_Monk_1_Text_0
	msgbox NPC_PortSarim_Church_Monk_2_Text_0
	hidenamebox
	release
	end


GIVE_RANDOM_ITEM::
	random 17
	switch VAR_RESULT
	case 0, GIVE_RANDOM_ITEM_3
	case 1, GIVE_RANDOM_ITEM_4
	case 2, GIVE_RANDOM_ITEM_5
	case 3, GIVE_RANDOM_ITEM_6
	case 4, GIVE_RANDOM_ITEM_7
	case 5, GIVE_RANDOM_ITEM_8
	case 6, GIVE_RANDOM_ITEM_9
	case 7, GIVE_RANDOM_ITEM_10
	case 8, GIVE_RANDOM_ITEM_11
	case 9, GIVE_RANDOM_ITEM_12
	case 10, GIVE_RANDOM_ITEM_13
	case 11, GIVE_RANDOM_ITEM_14
	case 12, GIVE_RANDOM_ITEM_15
	case 13, GIVE_RANDOM_ITEM_16
	case 14, GIVE_RANDOM_ITEM_17
	case 15, GIVE_RANDOM_ITEM_18
	case 16, GIVE_RANDOM_ITEM_19
GIVE_RANDOM_ITEM_1:
	return

GIVE_RANDOM_ITEM_3:
	giveitem ITEM_FLAX, 3
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_4:
	giveitem ITEM_SPIRIT_SHARD, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_5:
	giveitem ITEM_PRAYER_POTION, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_6:
	giveitem ITEM_LAMP_SPATT, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_7:
	giveitem ITEM_STAT_BEER, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_8:
	giveitem ITEM_STAT_BEER, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_9:
	giveitem ITEM_PURPLE_SWEETS, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_10:
	giveitem ITEM_CHOCOLATE_CAKE, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_11:
	giveitem ITEM_MINT_CAKE, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_12:
	giveitem ITEM_HWEEN_MASK, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_13:
	giveitem ITEM_EMPTY_BUCKET, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_14:
	giveitem ITEM_EMPTY_BUCKET, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_15:
	giveitem ITEM_GRANITE_POUCH, 5
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_16:
	giveitem ITEM_BLACK_POUCH, 10
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_17:
	giveitem ITEM_NORMAL_POUCH, 20
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_18:
	giveitem ITEM_SPIRIT_CHARM, 1
	goto GIVE_RANDOM_ITEM_1

GIVE_RANDOM_ITEM_19:
	giveitem ITEM_GODRABBITFOOT, 1
	goto GIVE_RANDOM_ITEM_1


NPC_PortSarimPub_BARTENDER_Text_0:
	.string "BARTENDER$"

NPC_PortSarimPub_BARTENDER_Text_1:
	.string "Here at the Battle Pub, adventurers can\n"
	.string "challenge each other to battles.\p"
	.string "The loser must pay for their meals.\p"
	.string "I would say that it is making me profit,\n"
	.string "but the amount of damage that they\l"
	.string "cause makes me break about even.$"

NPC_PortSarimPub_NPC_1_Text_0:
	.string "SAILOR$"

NPC_PortSarimPub_NPC_1_Text_1:
	.string "There is an unspoken rule where you can\n"
	.string "only battle the same person once per\l"
	.string "day.\p"
	.string "I heard this rule came about after too\n"
	.string "many drunks lost all of their gold\l"
	.string "pieces.$"

NPC_PortSarimPub_NPC_2_Text_0:
	.string "PIRATE$"

NPC_PortSarimPub_NPC_2_Text_1:
	.string "I heard that far off to the east they\n"
	.string "hold contests to show off the beauty\l"
	.string "of monsters instead of battling with\l"
	.string "them.\p"
	.string "Disgusting!$"

NPC_PortSarimPub_Pirate_1_Text_0:
	.string "The customs officer confiscates all\n"
	.string "Karamja Rum.\p"
	.string "She is the reason the Rum is always\n"
	.string "gone.$"

NPC_PortSarimPub_Pirate_1_Text_1:
	.string "Do you wish to challenge them to a\n"
	.string "battle?$"

NPC_PortSarimPub_Pirate_1_Text_2:
	.string "…$"

NPC_PortSarimPub_Pirate_1_Text_3:
	.string "I guess I owe you this.$"

NPC_PortSarimPub_Pirate_2_Text_0:
	.string "AYE!\p"
	.string "This is Port Sarim's Battle Pub.$"

NPC_PortSarimPub_Pirate_2_Text_1:
	.string "Yaarr, take this.$"

NPC_PortSarimPub_Dwarf_Text_0:
	.string "DWARF$"

NPC_PortSarimPub_Dwarf_Text_1:
	.string "Outrageous!\p"
	.string "The barmaid does not want to sell me\n"
	.string "drinks because I am a miner!$"

NPC_PortSarimPub_Dwarf_Text_2:
	.string "This round is on me.$"

NPC_PortSarimPub_PUBCRAWL_Text_0:
	.string "BARBARIAN$"

NPC_PortSarimPub_PUBCRAWL_Text_1:
	.string "Are you here for the Pubcrawl\n"
	.string "challenge?\p"
	.string "No?\p"
	.string "If you are interested in signing up you\n"
	.string "should go to Barbarian Village and talk\l"
	.string "to our champion about it.$"

NPC_PortSarim_Church_Monk_1_Text_0:
	.string "MONK$"

NPC_PortSarim_Church_Monk_1_Text_1:
	.string "The other night I saw a drunk throwing\n"
	.string "things into the ocean.\p"
	.string "He was shouting something about\n"
	.string "Mudskippers.\p"
	.string "I don't even know what a Mudskipper is.$"

NPC_PortSarim_Church_Monk_2_Text_0:
	.string "Not many people visit our Church out\n"
	.string "here.\p"
	.string "I don't think many people know of its\n"
	.string "existence.$"
