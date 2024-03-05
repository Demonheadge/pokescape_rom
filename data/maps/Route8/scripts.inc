Route8_MapScripts::
	.byte 0


ROUTE8_SIGNPOST::
	msgbox ROUTE8_SIGNPOST_Text_0
	closemessage
	end


ROUTE8_MAN::
	faceplayer
	namebox ROUTE8_MAN_Text_0
	msgbox ROUTE8_MAN_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE8_MINER_3::
	faceplayer
	namebox ROUTE8_MINER_3_Text_0
	msgbox ROUTE8_MINER_3_Text_1
	closemessage
	hidenamebox
	release
	end


ITEM_ROUTE8_ITEM_MITHRIL_POUCH::
	finditem ITEM_MITHRIL_POUCH
	end


ITEM_ROUTE8_ITEM_FLAX::
	finditem ITEM_FLAX
	end


ITEM_ROUTE8_ITEM_PRAYER_POTION::
	finditem ITEM_PRAYER_POTION
	end


BATTLE_ROUTE8_THIEF::
	trainerbattle_single TRAINER_ROUTE8_THIEF, BATTLE_ROUTE8_THIEF_Text_0, BATTLE_ROUTE8_THIEF_Text_1
	msgbox BATTLE_ROUTE8_THIEF_Text_1
	release
	return


BATTLE_ROUTE8_NOOB::
	trainerbattle_single TRAINER_ROUTE8_NOOB, BATTLE_ROUTE8_NOOB_Text_0, BATTLE_ROUTE8_NOOB_Text_1
	msgbox BATTLE_ROUTE8_NOOB_Text_2
	release
	return


BATTLE_ROUTE8_DnD::
	trainerbattle_single TRAINER_ROUTE8_DnD, BATTLE_ROUTE8_DnD_Text_0, BATTLE_ROUTE8_DnD_Text_1
	msgbox BATTLE_ROUTE8_DnD_Text_2
	release
	return


BATTLE_ROUTE8_MINER_1::
	trainerbattle_single TRAINER_ROUTE8_MINER_1, BATTLE_ROUTE8_MINER_1_Text_0, BATTLE_ROUTE8_MINER_1_Text_1
	msgbox BATTLE_ROUTE8_MINER_1_Text_2
	release
	return


BATTLE_ROUTE8_WOODCUTTER::
	trainerbattle_single TRAINER_ROUTE8_WOODCUTTER, BATTLE_ROUTE8_WOODCUTTER_Text_0, BATTLE_ROUTE8_WOODCUTTER_Text_1
	msgbox BATTLE_ROUTE8_WOODCUTTER_Text_2
	release
	return


BATTLE_ROUTE8_MINER_2::
	trainerbattle_single TRAINER_ROUTE8_MINER_2, BATTLE_ROUTE8_MINER_2_Text_0, BATTLE_ROUTE8_MINER_2_Text_1
	msgbox BATTLE_ROUTE8_MINER_2_Text_1
	release
	return


BATTLE_ROUTE8_WIZARD_AIR::
	trainerbattle_single TRAINER_ROUTE8_WIZARD_AIR, BATTLE_ROUTE8_WIZARD_AIR_Text_0, BATTLE_ROUTE8_WIZARD_AIR_Text_1
	msgbox BATTLE_ROUTE8_WIZARD_AIR_Text_2
	release
	return


BATTLE_ROUTE8_WIZARD_WATER::
	trainerbattle_single TRAINER_ROUTE8_WIZARD_WATER, BATTLE_ROUTE8_WIZARD_WATER_Text_0, BATTLE_ROUTE8_WIZARD_WATER_Text_1
	msgbox BATTLE_ROUTE8_WIZARD_WATER_Text_2
	release
	return


BATTLE_ROUTE8_WIZARD_EARTH::
	trainerbattle_single TRAINER_ROUTE8_WIZARD_EARTH, BATTLE_ROUTE8_WIZARD_EARTH_Text_0, BATTLE_ROUTE8_WIZARD_EARTH_Text_1
	msgbox BATTLE_ROUTE8_WIZARD_EARTH_Text_2
	release
	return


BATTLE_ROUTE8_WIZARD_FIRE::
	trainerbattle_single TRAINER_ROUTE8_WIZARD_FIRE, BATTLE_ROUTE8_WIZARD_FIRE_Text_0, BATTLE_ROUTE8_WIZARD_FIRE_Text_1
	msgbox BATTLE_ROUTE8_WIZARD_FIRE_Text_2
	release
	return


BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER::
	checktrainerflag TRAINER_ROUTE8_WIZARD_MALIGNIUS_MORTIFER
	compare VAR_RESULT, 0
	goto_if_eq BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_1
	lock
	faceplayer
	namebox BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_2
	msgbox BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_4
	hidenamebox
	closemessage
	release
	end

BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_1:
	trainerbattle_single TRAINER_ROUTE8_WIZARD_MALIGNIUS_MORTIFER, BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_0, BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_1
	namebox BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_2
	msgbox BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_3
	hidenamebox
	closemessage
	giveitem ITEM_STAFF_OF_EARTH, 1
	namebox BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_2
	msgbox BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_4
	hidenamebox
	closemessage
	release
	end


ABYSSALRIFT_Route8_ENTER::
	msgbox ABYSSALRIFT_Route8_ENTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ABYSSALRIFT_Route8_ENTER_2
	closemessage
	release
	end

ABYSSALRIFT_Route8_ENTER_2:
	msgbox ABYSSALRIFT_Route8_ENTER_Text_1
	warp MAP_ABYSSAL_REALM_2, 0, 0, 0
	closemessage
	release
	end


ABYSSALRIFT_Route8_RETURN::
	msgbox ABYSSALRIFT_Route8_ENTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ABYSSALRIFT_Route8_RETURN_2
	closemessage
	release
	end

ABYSSALRIFT_Route8_RETURN_2:
	msgbox ABYSSALRIFT_Route8_ENTER_Text_1
	warp MAP_ROUTE8, 0, 0, 0
	closemessage
	release
	end


ABYSSALRIFT_Route8_SudoBash::
	msgbox ABYSSALRIFT_Route8_SudoBash_Text_0
	closemessage
	release
	end


ABYSSALRIFT_Mazcab_ENTER::
	msgbox ABYSSALRIFT_Route8_ENTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ABYSSALRIFT_Mazcab_ENTER_2
	closemessage
	release
	end

ABYSSALRIFT_Mazcab_ENTER_2:
	msgbox ABYSSALRIFT_Route8_ENTER_Text_1
	warp MAP_MAZCAB_OTOT, 0, 0, 0
	closemessage
	release
	end


ABYSSALRIFT_Mazcab_RETURN::
	msgbox ABYSSALRIFT_Route8_ENTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ABYSSALRIFT_Mazcab_RETURN_2
	closemessage
	release
	end

ABYSSALRIFT_Mazcab_RETURN_2:
	msgbox ABYSSALRIFT_Route8_ENTER_Text_1
	warp MAP_ABYSSAL_REALM_1, 10, 0, 0
	closemessage
	release
	end


ABYSSALRIFT_Mazcab_Shauny::
	faceplayer
	namebox ABYSSALRIFT_Mazcab_Shauny_Text_0
	msgbox ABYSSALRIFT_Mazcab_Shauny_Text_1
	closemessage
	hidenamebox
	release
	end


ALTAR_WATER_ENTER::
	msgbox ALTAR_WATER_ENTER_Text_0
	msgbox ALTAR_WATER_ENTER_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ALTAR_WATER_ENTER_2
	closemessage
	release
	end

ALTAR_WATER_ENTER_2:
	msgbox ALTAR_WATER_ENTER_Text_2
	warp MAP_MAZCAB_OTOT, 0, 0, 0
	closemessage
	release
	end


ALTAR_WATER_RETURN::
	msgbox ALTAR_WATER_RETURN_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ALTAR_WATER_RETURN_2
	closemessage
	release
	end

ALTAR_WATER_RETURN_2:
	msgbox ALTAR_WATER_RETURN_Text_1
	warp MAP_ROUTE4, 1, 0, 0
	closemessage
	release
	end


ALTAR_EARTH_ENTER::
	msgbox ALTAR_WATER_ENTER_Text_0
	checkitem ITEM_TALISMAN_EARTH, 1
	compare VAR_RESULT, 0
	goto_if_ne ALTAR_EARTH_ENTER_2
	closemessage
	release
	end

ALTAR_EARTH_ENTER_2:
	msgbox ALTAR_EARTH_ENTER_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ALTAR_EARTH_ENTER_5
	closemessage
	release
	end

ALTAR_EARTH_ENTER_5:
	msgbox ALTAR_EARTH_ENTER_Text_1
	warp MAP_MAZCAB_OTOT, 0, 0, 0
	closemessage
	release
	end


ALTAR_EARTH_RETURN::
	msgbox ALTAR_WATER_RETURN_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne ALTAR_EARTH_RETURN_2
	closemessage
	release
	end

ALTAR_EARTH_RETURN_2:
	msgbox ALTAR_WATER_RETURN_Text_1
	warp MAP_ROUTE17, 1, 0, 0
	closemessage
	release
	end


CRAFTINGGUILD_MILKSELLER::
	lock
	faceplayer
	msgbox CRAFTINGGUILD_MILKSELLER_Text_0
	pokemart FlavouredMilkShop
	closemessage
	release
	end


    .align 2
FlavouredMilkShop:
	.2byte ITEM_MILK_BUCKET
    .2byte ITEM_VANILLA_MILK
    .2byte ITEM_STRAWBERRY_MILK
    .2byte ITEM_CHOCOLATE_MILK
	.2byte ITEM_NONE

    release
    end

CRAFTINGGUILD_NPC_1::
	namebox CRAFTINGGUILD_NPC_1_Text_0
	msgbox CRAFTINGGUILD_NPC_1_Text_1
	closemessage
	hidenamebox
	release
	end


CRAFTINGGUILD_NPC_2::
	namebox CRAFTINGGUILD_NPC_1_Text_0
	msgbox CRAFTINGGUILD_NPC_2_Text_0
	closemessage
	hidenamebox
	release
	end


CRAFTINGGUILD_NPC_3::
	namebox CRAFTINGGUILD_NPC_3_Text_0
	msgbox CRAFTINGGUILD_NPC_3_Text_1
	closemessage
	hidenamebox
	release
	end


PEST_CONTROL_ENTER::
	faceplayer
	namebox PEST_CONTROL_ENTER_Text_0
	msgbox PEST_CONTROL_ENTER_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne PEST_CONTROL_ENTER_2
	hidenamebox
	closemessage
	release
	end

PEST_CONTROL_ENTER_2:
	hidenamebox
	closemessage
	msgbox PEST_CONTROL_ENTER_Text_2
	warp MAP_MINIGAME_1, 0, 0, 0
	closemessage
	release
	end


PEST_CONTROL_RETURN::
	faceplayer
	namebox PEST_CONTROL_ENTER_Text_0
	msgbox PEST_CONTROL_RETURN_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne PEST_CONTROL_RETURN_2
	hidenamebox
	closemessage
	release
	end

PEST_CONTROL_RETURN_2:
	hidenamebox
	closemessage
	msgbox PEST_CONTROL_ENTER_Text_2
	warp MAP_PORT_SARIM, 9, 0, 0
	closemessage
	release
	end


ROUTE8_SIGNPOST_Text_0:
	.string "WEST to Crafting Guild.\p"
	.string "SOUTH to Rimmington.\p"
	.string "EAST to FALADOR.$"

ROUTE8_MAN_Text_0:
	.string "Man$"

ROUTE8_MAN_Text_1:
	.string "This is my secret pathway how did you\n"
	.string "find it?$"

ROUTE8_MINER_3_Text_0:
	.string "MINER$"

ROUTE8_MINER_3_Text_1:
	.string "I wish they had a Bank here.\p"
	.string "I have to make a trip all the way to\n"
	.string "Falador if I want to heal my monsters.$"

BATTLE_ROUTE8_THIEF_Text_0:
	.string "Hi there, you wouldn't want some very\n"
	.string "rare and expensive charcoal would you?$"

BATTLE_ROUTE8_THIEF_Text_1:
	.string "You could have just said no…$"

BATTLE_ROUTE8_NOOB_Text_0:
	.string "LOL!\n"
	.string "I'll pwn you noob!$"

BATTLE_ROUTE8_NOOB_Text_1:
	.string "CH00B!$"

BATTLE_ROUTE8_NOOB_Text_2:
	.string "Ch00b!$"

BATTLE_ROUTE8_DnD_Text_0:
	.string "Have you seen any penguins around\n"
	.string "here?$"

BATTLE_ROUTE8_DnD_Text_1:
	.string "No?\n"
	.string "Aww I need to find 2 more this week.$"

BATTLE_ROUTE8_DnD_Text_2:
	.string "If you see any penguins let me know!$"

BATTLE_ROUTE8_MINER_1_Text_0:
	.string "Do you know the way to the crafting\n"
	.string "guild?$"

BATTLE_ROUTE8_MINER_1_Text_1:
	.string "I heard the crafting guild has a good\n"
	.string "ore deposit.$"

BATTLE_ROUTE8_MINER_1_Text_2:
	.string "I want to mine some silver ore at the\n"
	.string "crafting guild.$"

BATTLE_ROUTE8_WOODCUTTER_Text_0:
	.string "The trick to woodcutting is like any\n"
	.string "slayer task, the gear!$"

BATTLE_ROUTE8_WOODCUTTER_Text_1:
	.string "I should invest in better gear…$"

BATTLE_ROUTE8_WOODCUTTER_Text_2:
	.string "I should invest in better gear.$"

BATTLE_ROUTE8_MINER_2_Text_0:
	.string "Dig a dig a- oh hello there.$"

BATTLE_ROUTE8_MINER_2_Text_1:
	.string "Please move away, this rock is mine.$"

BATTLE_ROUTE8_WIZARD_AIR_Text_0:
	.string "Stop right there!\p"
	.string "If you wish to see Mr.Mortifer you will\n"
	.string "have to defeat the 4 elemental battle\l"
	.string "kings!\p"
	.string "Sadly this is as far as you will go!$"

BATTLE_ROUTE8_WIZARD_AIR_Text_1:
	.string "I may have lost, but you won't get much\n"
	.string "further!$"

BATTLE_ROUTE8_WIZARD_AIR_Text_2:
	.string "I lost to you, but I won't next time.$"

BATTLE_ROUTE8_WIZARD_WATER_Text_0:
	.string "You are a thousand years away from\n"
	.string "facing Mr.Mortifer!$"

BATTLE_ROUTE8_WIZARD_WATER_Text_1:
	.string "You just got lucky that is all…$"

BATTLE_ROUTE8_WIZARD_WATER_Text_2:
	.string "Water-types are superior.$"

BATTLE_ROUTE8_WIZARD_EARTH_Text_0:
	.string "All the other elemental battle kings\n"
	.string "opted to have demons on their teams.\p"
	.string "I have decided to take a different\n"
	.string "approach.\p"
	.string "How well do you think you can hold up?!$"

BATTLE_ROUTE8_WIZARD_EARTH_Text_1:
	.string "How could I have lost!\p"
	.string "Maybe I should look into getting a\n"
	.string "Sandfiend.$"

BATTLE_ROUTE8_WIZARD_EARTH_Text_2:
	.string "Maybe I should look into getting a\n"
	.string "Sandfiend.$"

BATTLE_ROUTE8_WIZARD_FIRE_Text_0:
	.string "I am who stands between you and\n"
	.string "Mr.Mortifer!\p"
	.string "There is no way you are getting past me!$"

BATTLE_ROUTE8_WIZARD_FIRE_Text_1:
	.string "Nooo!\p"
	.string "I don't want to be turned into a\n"
	.string "mushroom!$"

BATTLE_ROUTE8_WIZARD_FIRE_Text_2:
	.string "Noo!\p"
	.string "Please Mr.Mortifer don't turn me into a\n"
	.string "mushroom again!$"

BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_0:
	.string "Impressive…\p"
	.string "You got past the 4 elemental lame\n"
	.string "wizards.\p"
	.string "I'll have you know my skill is on a\n"
	.string "completely different level to them.\p"
	.string "I hope you are prepared for I will turn\n"
	.string "you into a mushroom, and then maybe\l"
	.string "have mushroom soup for dinner!$"

BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_1:
	.string "Impossible!$"

BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_2:
	.string "Malignius$"

BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_3:
	.string "Impossible!\p"
	.string "I have never lost a battle before.\p"
	.string "You are strong adventurer, I will give\n"
	.string "you that…\p"
	.string "Here as a reward for defeating me take\n"
	.string "this.$"

BATTLE_ROUTE8_WIZARD_MALIGNIUS_MORTIFER_Text_4:
	.string "You can go away now.\p"
	.string "If you do not I may have second\n"
	.string "thoughts about having mushroom soup.$"

ABYSSALRIFT_Route8_ENTER_Text_0:
	.string "There is a rift in space.\p"
	.string "Would you like to enter it?$"

ABYSSALRIFT_Route8_ENTER_Text_1:
	.string "As you step into the rift the world\n"
	.string "around you starts to shimmer.$"

ABYSSALRIFT_Route8_SudoBash_Text_0:
	.string "001000101001010101001\p"
	.string "0101010010101\p"
	.string "010101010010101010\p"
	.string "010101010\p"
	.string "0101010\n"
	.string "01001\n"
	.string "0101010\p"
	.string "2349812649632946317824024\p"
	.string "42069$"

ABYSSALRIFT_Mazcab_Shauny_Text_0:
	.string "Shauny$"

ABYSSALRIFT_Mazcab_Shauny_Text_1:
	.string "It is not my Birthday!\p"
	.string "…\p"
	.string "Oh wait, I am mistaken, today is indeed\n"
	.string "my birthday.$"

ALTAR_WATER_ENTER_Text_0:
	.string "It is a mysterious Altar.$"

ALTAR_WATER_ENTER_Text_1:
	.string "Would you like to use the Water\n"
	.string "Talisman?$"

ALTAR_WATER_ENTER_Text_2:
	.string "The WATER TALISMAN begins to glow.\p"
	.string "A mass of energy suddenly surrounds\n"
	.string "you!$"

ALTAR_WATER_RETURN_Text_0:
	.string "Would you like to leave this realm?$"

ALTAR_WATER_RETURN_Text_1:
	.string "As you step into the portal a mass of\n"
	.string "energy surrounds you!$"

ALTAR_EARTH_ENTER_Text_0:
	.string "Would you like to use the Earth\n"
	.string "Talisman?$"

ALTAR_EARTH_ENTER_Text_1:
	.string "The EARTH TALISMAN begins to glow.\p"
	.string "A mass of energy suddenly surrounds\n"
	.string "you!$"

CRAFTINGGUILD_MILKSELLER_Text_0:
	.string "Why hello there, are you interested in\n"
	.string "some flavoured Milk?$"

CRAFTINGGUILD_NPC_1_Text_0:
	.string "Master Crafter$"

CRAFTINGGUILD_NPC_1_Text_1:
	.string "Where's your brown apron?\p"
	.string "You can't come up here unless you're\n"
	.string "wearing one.$"

CRAFTINGGUILD_NPC_2_Text_0:
	.string "Hello, and welcome to the Crafting\n"
	.string "Guild!\p"
	.string "Accomplished crafters from all over the\n"
	.string "land come here to use our top notch\l"
	.string "workshops.\p"
	.string "You don't see any workshops?\p"
	.string "Of course not, they're all upstairs!$"

CRAFTINGGUILD_NPC_3_Text_0:
	.string "Miner$"

CRAFTINGGUILD_NPC_3_Text_1:
	.string "I came here because I heard there were\n"
	.string "a lot of useful ores to mine, but they\l"
	.string "just have useless ore like gold or\l"
	.string "silver!\p"
	.string "I don't want ore for jewellery, I want\n"
	.string "ore to make my own pouches and battle\l"
	.string "monsters!$"

PEST_CONTROL_ENTER_Text_0:
	.string "Void Squire$"

PEST_CONTROL_ENTER_Text_1:
	.string "Would you like to set sail to the\n"
	.string "Outpost?$"

PEST_CONTROL_ENTER_Text_2:
	.string "You board the ship.$"

PEST_CONTROL_RETURN_Text_0:
	.string "Would you like to return to the\n"
	.string "mainland?$"
