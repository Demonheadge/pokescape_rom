Lumbridge_Church_MapScripts::
	.byte 0


Lumbridge_Church_Father_Aereck::
	lock
	faceplayer
	msgbox Lumbridge_Church_Father_Aereck_Text_0
	release
	end


Lumbridge_Church_NPC1::
	lock
	faceplayer
	msgbox Lumbridge_Church_NPC1_Text_0
	release
	end


Lumbridge_Church_NPC2::
	lock
	faceplayer
	msgbox Lumbridge_Church_NPC2_Text_0
	release
	end


Lumbridge_Church_NPC3::
	lock
	faceplayer
	msgbox Lumbridge_Church_NPC3_Text_0
	release
	end


Pub_Mod_Dolan::
	lock
	faceplayer
	random 2
	switch VAR_RESULT
	case 0, Pub_Mod_Dolan_3
	case 1, Pub_Mod_Dolan_4
	release
	end

Pub_Mod_Dolan_3:
	namebox Pub_Mod_Dolan_Text_0
	msgbox Pub_Mod_Dolan_Text_1
	hidenamebox
	release
	end

Pub_Mod_Dolan_4:
	namebox Pub_Mod_Dolan_Text_0
	msgbox Pub_Mod_Dolan_Text_2
	hidenamebox
	release
	end


GnomeBoi_Kevin::
	lock
	faceplayer
	msgbox GnomeBoi_Kevin_Text_0
	release
	multichoicedefault 1, 0, MULTI_CHEAT_MENU, 0, 0
	switch VAR_RESULT
	case 0, GnomeBoi_Kevin_3
	case 1, GnomeBoi_Kevin_4
	case 2, GnomeBoi_Kevin_5
	case 3, GnomeBoi_Kevin_6
	case 4, GnomeBoi_Kevin_7
	case 5, GnomeBoi_Kevin_8
	case 6, GnomeBoi_Kevin_9
	case 7, GnomeBoi_Kevin_10
	case 8, GnomeBoi_Kevin_11
GnomeBoi_Kevin_1:
	msgbox GnomeBoi_Kevin_Text_9
	release
	end

GnomeBoi_Kevin_3:
	msgbox GnomeBoi_Kevin_Text_1
	waitmessage
	pokemart Cheat_Menu_Shop_Evolution
	release
	end

GnomeBoi_Kevin_4:
	msgbox GnomeBoi_Kevin_Text_2
	waitmessage
	pokemart Cheat_Menu_Shop_Pouches
	release
	end

GnomeBoi_Kevin_5:
	msgbox GnomeBoi_Kevin_Text_3
	waitmessage
	pokemart Cheat_Menu_Shop_TM
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_6:
	msgbox GnomeBoi_Kevin_Text_4
	waitmessage
	pokemart Cheat_Menu_Shop_Medicine
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_7:
	msgbox GnomeBoi_Kevin_Text_5
	waitmessage
	pokemart Cheat_Menu_Shop_Misc
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_8:
	msgbox GnomeBoi_Kevin_Text_6
	giveitem ITEM_SMALL_NET
	giveitem ITEM_BIG_NET
	giveitem ITEM_DRAGON_NET
	giveitem ITEM_TERRORBIRD_POUCH
	giveitem ITEM_YAK_POUCH
	giveitem ITEM_PICKAXE
	giveitem ITEM_BOAT
	giveitem ITEM_AXE
	giveitem ITEM_STRENGTHITEM
	giveitem ITEM_DIVEITEM
	giveitem ITEM_SPADE
	giveitem ITEM_FLYITEM
	giveitem ITEM_LANTERN
	giveitem ITEM_WATERFALLITEM
	giveitem ITEM_MAP
	giveitem ITEM_ITEMFINDER
	giveitem ITEM_POKEBLOCK_CASE
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_9:
	msgbox GnomeBoi_Kevin_Text_7
	addmoney 250000, 0
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_10:
	msgbox GnomeBoi_Kevin_Text_8
	additem ITEM_FRIENDSHIP_BOOSTER, 100
	additem ITEM_PULSE_CORE, 6
	additem ITEM_PURPLE_SWEETS, 100
	additem ITEM_FRAGMENT_OF_JAS, 5
	release
	goto GnomeBoi_Kevin_1

GnomeBoi_Kevin_11:
	release
	goto GnomeBoi_Kevin_1


    .align 2
Cheat_Menu_Shop_Pouches:
	.2byte ITEM_NORMAL_POUCH
    .2byte ITEM_BRONZE_POUCH
    .2byte ITEM_IRON_POUCH
	.2byte ITEM_STEEL_POUCH
	.2byte ITEM_MITHRIL_POUCH
	.2byte ITEM_ADAMANT_POUCH
    .2byte ITEM_RUNE_POUCH
	.2byte ITEM_DRAGON_POUCH
	.2byte ITEM_CRYSTAL_POUCH
	.2byte ITEM_BLACK_POUCH
	.2byte ITEM_MYSTIC_POUCH
	.2byte ITEM_ANCIENT_POUCH
	.2byte ITEM_BARROWS_POUCH
	.2byte ITEM_GRANITE_POUCH
	.2byte ITEM_AUGMENTED_POUCH
	.2byte ITEM_SPLITBARK_POUCH
	.2byte ITEM_ELEMENTAL_POUCH
	.2byte ITEM_DRAGONBANE_POUCH
    .2byte ITEM_NONE
    release
    end

    .align 2
Cheat_Menu_Shop_Evolution:
    .2byte ITEM_AIR_RUNE 
    .2byte ITEM_WATER_RUNE 
    .2byte ITEM_EARTH_RUNE 
    .2byte ITEM_FIRE_RUNE 
    .2byte ITEM_MIND_RUNE 
    .2byte ITEM_BODY_RUNE 
    .2byte ITEM_LAW_RUNE 
    .2byte ITEM_NATURE_RUNE 
    .2byte ITEM_CHAOS_RUNE 
    .2byte ITEM_COSMIC_RUNE 
    .2byte ITEM_BLOOD_RUNE 
    .2byte ITEM_SOUL_RUNE 
    .2byte ITEM_DEATH_RUNE 
    .2byte ITEM_MUD_RUNE 
    .2byte ITEM_MIST_RUNE 
    .2byte ITEM_LAVA_RUNE 
    .2byte ITEM_DUST_RUNE 
    .2byte ITEM_ASTRAL_RUNE 
    .2byte ITEM_LIFE_RUNE 
    .2byte ITEM_SPIRIT_CHARM 
    .2byte ITEM_LEGENDARY_ITEM 
    .2byte ITEM_BAD_EGG 
    .2byte ITEM_DAGANNOTH_EGG_SHELL 
    .2byte ITEM_DAGANNOTH_SCALE 
    .2byte ITEM_NUMBLING_ROOT 
    .2byte ITEM_ROTTEN_POTATO 
    .2byte ITEM_SHRIVELLED_DAGANNOTH_CLAW 
    .2byte ITEM_SOCK 
    .2byte ITEM_TEAR_OF_GUTHIX 
    .2byte ITEM_RED_SCALE 
    .2byte ITEM_GREEN_SCALE 
    .2byte ITEM_BLUE_SCALE 
    .2byte ITEM_BLACK_SCALE 
    .2byte ITEM_FRAGMENT_OF_JAS 
    .2byte ITEM_NONE
    release
    end

    .align 2
Cheat_Menu_Shop_Medicine:
    
    
    .2byte ITEM_BREAD 
    .2byte ITEM_CAKE 
	.2byte ITEM_CHOCOLATE_CAKE 

	.2byte ITEM_BLUEBERRY_SPECIAL 
    .2byte ITEM_CHOCOLATE_SUNDAY  //Antidote
    .2byte ITEM_DRUNK_DRAGON 
    .2byte ITEM_FRUIT_BLAST 
    .2byte ITEM_PINEAPPLE_PUNCH 
    .2byte ITEM_WIZARDS_BLIZZARD

    .2byte ITEM_POTION_HP 
    .2byte ITEM_POTION_ATT 
    .2byte ITEM_POTION_DEF 
    .2byte ITEM_POTION_SPATT
    .2byte ITEM_POTION_SPDEF
    .2byte ITEM_POTION_SPEED

    .2byte ITEM_PRAYER_POTION
    .2byte ITEM_SUPER_PRAYER_POTION //MAX-ELIXER

	.2byte ITEM_PURPLE_SWEETS

	.2byte ITEM_STAT_BEER //PP-UP
	.2byte ITEM_STAT_MOONLIGHT_MEAD //PP-MAX

	.2byte ITEM_LAMP_ATT 
    .2byte ITEM_LAMP_DEF 
    .2byte ITEM_LAMP_HP 
    .2byte ITEM_LAMP_SPATT 
    .2byte ITEM_LAMP_SPDEF 
    .2byte ITEM_LAMP_SPEED 


    .2byte ITEM_NONE
    release
    end

    .align 2
Cheat_Menu_Shop_TM:
	.2byte ITEM_TM01
    .2byte ITEM_TM02
    .2byte ITEM_TM03
    .2byte ITEM_TM04
    .2byte ITEM_TM05
    .2byte ITEM_TM06
    .2byte ITEM_TM07
    .2byte ITEM_TM08
    .2byte ITEM_TM09
    .2byte ITEM_TM10
    .2byte ITEM_TM11
    .2byte ITEM_TM12
    .2byte ITEM_TM13
    .2byte ITEM_TM14
    .2byte ITEM_TM15
    .2byte ITEM_TM16
    .2byte ITEM_TM17
    .2byte ITEM_TM18
    .2byte ITEM_TM19
    .2byte ITEM_TM20
    .2byte ITEM_TM21
    .2byte ITEM_TM22
    .2byte ITEM_TM23
    .2byte ITEM_TM24
    .2byte ITEM_TM25
    .2byte ITEM_TM26
    .2byte ITEM_TM27
    .2byte ITEM_TM28
    .2byte ITEM_TM29
    .2byte ITEM_TM30
    .2byte ITEM_TM31
    .2byte ITEM_TM32
    .2byte ITEM_TM33
    .2byte ITEM_TM34
    .2byte ITEM_TM35
    .2byte ITEM_TM36
    .2byte ITEM_TM37
    .2byte ITEM_TM38
    .2byte ITEM_TM39
    .2byte ITEM_TM40
    .2byte ITEM_TM41
    .2byte ITEM_TM42
    .2byte ITEM_TM43
    .2byte ITEM_TM44
    .2byte ITEM_TM45
    .2byte ITEM_TM46
    .2byte ITEM_TM47
    .2byte ITEM_TM48
    .2byte ITEM_TM49
    .2byte ITEM_TM50
    .2byte ITEM_TM51
    .2byte ITEM_TM52
    .2byte ITEM_TM53
    .2byte ITEM_TM54
    .2byte ITEM_TM55
    .2byte ITEM_TM56
    .2byte ITEM_TM57
    .2byte ITEM_TM58
    .2byte ITEM_TM59
    .2byte ITEM_TM60
    .2byte ITEM_TM61
    .2byte ITEM_TM62
    .2byte ITEM_TM63
    .2byte ITEM_TM64
    .2byte ITEM_TM65
    .2byte ITEM_TM66

    .2byte ITEM_NONE
    release
    end

    .align 2
Cheat_Menu_Shop_Misc:

    .2byte ITEM_TALISMAN_AIR
    .2byte ITEM_TALISMAN_FIRE

    .2byte ITEM_PULSE_CORE
    .2byte ITEM_10TH_SQUAD_SIGIL
    .2byte ITEM_ABYSSAL_WHIP
    .2byte ITEM_ARMA_HELM
    .2byte ITEM_BLOODFURY
    .2byte ITEM_BLUEBOATER
    .2byte ITEM_BONECROSSBOW
    .2byte ITEM_BRONZEHELMET
    .2byte ITEM_DAGONHAIHAT
    .2byte ITEM_DOUBLE_EYEPATCH
    .2byte ITEM_DRAGON_CLAWS
    .2byte ITEM_DRAGON_DAGGER_POISON
    .2byte ITEM_DRAGON_SCIMITAR
    .2byte ITEM_DRUID_POUCH
    .2byte ITEM_EFFIGY
    .2byte ITEM_ELEMENTAL_SHIELD
    .2byte ITEM_FIGHTER_BOOTS
    .2byte ITEM_FIGHTER_TORSO
    .2byte ITEM_FIRECAPE
    .2byte ITEM_GHOSTSPEAK_AMULET
    .2byte ITEM_GODSWORD
    .2byte ITEM_GNOMEGOGGLES
    .2byte ITEM_GNOMESCARF
    .2byte ITEM_GODRABBITFOOT
    .2byte ITEM_GUTHANSPEAR
    .2byte ITEM_GRANITE_MAUL
    .2byte ITEM_HOLY_WRENCH
    .2byte ITEM_FANCY_BOOTS
    .2byte ITEM_IRONMAN_HELMET
    .2byte ITEM_ITEM_GNOMEBALL
    .2byte ITEM_KERIS
    .2byte ITEM_KRAKEN_TENTACLE
    .2byte ITEM_LINZAHAMMER
    .2byte ITEM_LUCKYRABBITFOOT
    .2byte ITEM_ORB_OF_OCULUS
    .2byte ITEM_OVERLOAD
    .2byte ITEM_PRISMATIC_STAR
    .2byte ITEM_RING_OF_LIFE
    .2byte ITEM_RING_OF_WEALTH
    .2byte ITEM_ROCKCAKE
    .2byte ITEM_SARADOMIN_BREW
    .2byte ITEM_SICKLE
    .2byte ITEM_SNELM
    .2byte ITEM_SPIRITSHIELD
    .2byte ITEM_SPOTTEDCAPE
    .2byte ITEM_STAFF_OF_EARTH
    .2byte ITEM_TINDERBOX
    .2byte ITEM_TOME_OF_FROST
    .2byte ITEM_WATERSKIN
    .2byte ITEM_WIZARDS_HAT
    .2byte ITEM_WOOLBALL
    .2byte ITEM_VERACFLAIL
    .2byte ITEM_DHAROKAXE
    .2byte ITEM_KARILCROSSBOW
    .2byte ITEM_AHRIMSTAFF
    .2byte ITEM_TORAGHAMMER
    .2byte ITEM_AKRISAEMACE
    .2byte ITEM_DFS
    .2byte ITEM_PHOENIX_NECKLACE
    .2byte ITEM_MITHRIL_SCIMITAR
    .2byte ITEM_SNOW_GLOBE
//QUEST STUFF TEST ICONS
    .2byte ITEM_FISH_FOOD
    .2byte ITEM_FISH_FOOD_POISONED
    .2byte ITEM_OIL_CAN
    .2byte ITEM_PRESSURE_GAUGE
    .2byte ITEM_RUBBER_TUBE
    .2byte ITEM_MAGICAL_CAGE



    .2byte ITEM_NONE
    release
    end

Lumbridge_Church_Father_Aereck_Text_0:
	.string "Monsters don't really die.\p"
	.string "They will not be needing graves.\p"
	.string "Just take them to the bank.$"

Lumbridge_Church_NPC1_Text_0:
	.string "Praise be Saradomin!$"

Lumbridge_Church_NPC2_Text_0:
	.string "Bow to the great one!$"

Lumbridge_Church_NPC3_Text_0:
	.string "I love Lumbridge.\p"
	.string "Nothing happens.\p"
	.string "Town is safe and Zamorak and Saradomin\n"
	.string "won't wreck it over some light balls.$"

Pub_Mod_Dolan_Text_0:
	.string "Mod Dolan$"

Pub_Mod_Dolan_Text_1:
	.string "..hic..\p"
	.string "...Have you seen my duck?\p"
	.string "..hic..\p"
	.string "..\p"
	.string "No, no my duck is yellow and he squeaks.\p"
	.string "..hic..$"

Pub_Mod_Dolan_Text_2:
	.string "..hic..\p"
	.string "...The Ruby Ring!\p"
	.string "..hic..\p"
	.string "..Rainbows you wear around your neck!\p"
	.string "..hic..\p"
	.string "Where is my duck?\p"
	.string "..hic..$"

GnomeBoi_Kevin_Text_0:
	.string "Hi Boss!\p"
	.string "I am here for all of your cheating\n"
	.string "needs.\p"
	.string "What can I do for ya?$"

GnomeBoi_Kevin_Text_1:
	.string "What runes would you like?$"

GnomeBoi_Kevin_Text_2:
	.string "What pouches would you like?$"

GnomeBoi_Kevin_Text_3:
	.string "Look at these Scrolls!$"

GnomeBoi_Kevin_Text_4:
	.string "Look at my wares!$"

GnomeBoi_Kevin_Text_5:
	.string "Look at my junk!$"

GnomeBoi_Kevin_Text_6:
	.string "These might be important!$"

GnomeBoi_Kevin_Text_7:
	.string "Get money!$"

GnomeBoi_Kevin_Text_8:
	.string "Heres some candy!$"

GnomeBoi_Kevin_Text_9:
	.string "Smell ya later!$"
