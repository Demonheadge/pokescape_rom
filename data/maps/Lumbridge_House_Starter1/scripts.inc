Lumbridge_House_Starter1_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Lumbridge_House_Starter1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Lumbridge_House_Starter1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_TEMP_0, 0, Explorer_Jack_1
	.2byte 0


Explorer_Jack_1::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Explorer_Jack_1_1
	setvar VAR_TEMP_0, 1
	release
	return

Explorer_Jack_1_1:
	goto_if_unset FLAG_SET_WALL_CLOCK, Explorer_Jack_1_4
	setvar VAR_TEMP_0, 1
	release
	end

Explorer_Jack_1_4:
	lockall
	setvar VAR_POKESCAPE_STARTER_HOUSE_STATE, 1
	playse SE_PIN
	applymovement 1, Movement_Explorer_Jack_1
	waitmovement 0
	namebox Explorer_Jack_1_Text_0
	msgbox Explorer_Jack_1_Text_1
	goto SetClock
	hidenamebox
	setvar VAR_TEMP_0, 1
	release
	end


SetClock::
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	setflag FLAG_SET_WALL_CLOCK
	goto Explorer_Jack_2
	return


Explorer_Jack_2::
	namebox Explorer_Jack_1_Text_0
	gettime
	compare VAR_0x8000, 7
	goto_if_lt Explorer_Jack_2_2
	compare VAR_0x8000, 21
	goto_if_ge Explorer_Jack_2_2
	compare VAR_0x8000, 12
	goto_if_lt Explorer_Jack_2_3
	msgbox Explorer_Jack_2_Text_2
Explorer_Jack_2_1:
	msgbox Explorer_Jack_2_Text_3
	closemessage
	hidenamebox
	applymovement 1, Movement_Explorer_Jack_2
	waitmovement 0
	setflag FLAG_RECEIVED_RUNNING_SHOES
	setflag FLAG_SYS_B_DASH
	setflag FLAG_SYS_QUEST_MENU_GET
	additem ITEM_ROTTEN_POTATO
	setvar VAR_POKESCAPE_STORYMODE_PROGRESS, 1
	release
	end

Explorer_Jack_2_2:
	msgbox Explorer_Jack_2_Text_0
	goto Explorer_Jack_2_1

Explorer_Jack_2_3:
	msgbox Explorer_Jack_2_Text_1
	goto Explorer_Jack_2_1


Movement_Explorer_Jack_1:
	face_up
	emote_exclamation_mark
	delay_8
	walk_up
	walk_up
	walk_right
	face_up
	step_end

Movement_Explorer_Jack_2:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

Explorer_Jack_3::
	lock
	faceplayer
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq Explorer_Jack_3_1
	namebox Explorer_Jack_1_Text_0
	msgbox Explorer_Jack_3_Text_2
	hidenamebox
	release
	end

Explorer_Jack_3_1:
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 0
	goto_if_eq Explorer_Jack_3_4
	namebox Explorer_Jack_1_Text_0
	msgbox Explorer_Jack_3_Text_1
	hidenamebox
	release
	end

Explorer_Jack_3_4:
	namebox Explorer_Jack_1_Text_0
	msgbox Explorer_Jack_3_Text_0
	hidenamebox
	release
	end


CHEAT_ITEM_PULSE_CORE::
	finditem ITEM_PULSE_CORE
	end


ITEM_LUMBRIDGE_BREAD_1::
	finditem ITEM_BREAD
	end


ITEM_LUMBRIDGE_STEEL_POUCH::
	finditem ITEM_STEEL_POUCH
	end


ITEM_LUMBRIDGE_DRUNK_DRAGON::
	finditem ITEM_DRUNK_DRAGON
	end


ITEM_LUMBRIDGE_BREAD_2::
	finditem ITEM_BREAD
	end


ITEM_ROUTE1_BALL_OF_WOOL::
	finditem ITEM_WOOLBALL
	end


ITEM_LUMBRIDGE_CAKE::
	finditem ITEM_CAKE
	end


ITEM_LUMBRIDGE_PRISMATIC_STAR::
	finditem ITEM_PRISMATIC_STAR
	end


ITEM_ROUTE1_DEATH_RUNE::
	finditem ITEM_EARTH_RUNE
	end


ITEM_ROUTE1_CHOC_SUNDAY::
	finditem ITEM_CHOCOLATE_SUNDAY
	end


ITEM_ROUTE1_BREAD::
	finditem ITEM_BREAD
	end


ITEM_ROUTE1_CHOCOLATE_SUNDAY::
	finditem ITEM_CHOCOLATE_SUNDAY
	end


ITEM_MILLLANEMILL_TM05::
	finditem ITEM_TM05_TAILWIND
	end


ITEM_MILLLANEMILL_MITHRIL_POUCH::
	finditem ITEM_MITHRIL_POUCH
	end


ITEM_DRAYNORMANOR_CAKE::
	finditem ITEM_CAKE
	end


ITEM_DRAYNORMANOR_CABBAGE::
	finditem ITEM_CABBAGE
	end


ITEM_DRAYNOR_DEFENCE_POTION::
	finditem ITEM_POTION_DEF
	end


ITEM_DRAYNORSEWERS_TM50::
	finditem ITEM_TM50_POISON_JAB
	end


ITEM_DRAYNORSEWERS_BEER::
	finditem ITEM_STAT_BEER
	end


ITEM_ROUTE2_MAGIC_POTION::
	finditem ITEM_POTION_SPATT
	end


ITEM_ROUTE2_RUNE_POUCH::
	finditem ITEM_RUNE_POUCH
	end


ITEM_WIZARDSTOWER_WIZARDS_HAT::
	finditem ITEM_WIZARDS_HAT
	end


ITEM_WIZARDSTOWER_AIR_RUNE::
	finditem ITEM_AIR_RUNE
	end


ITEM_WIZARDSTOWER_WATER_RUNE::
	finditem ITEM_WATER_RUNE
	end


ITEM_WIZARDSTOWER_EARTH_RUNE::
	finditem ITEM_EARTH_RUNE
	end


ITEM_WIZARDSTOWER_FIRE_RUNE::
	finditem ITEM_FIRE_RUNE
	end


ITEM_ROUTE12_BREAD::
	finditem ITEM_BREAD
	end


ITEM_ROUTE12_WIZARDS_BLIZZARD::
	finditem ITEM_WIZARDS_BLIZZARD
	end


ITEM_ROUTE12_CABBAGE::
	finditem ITEM_CABBAGE
	end


ITEM_ROUTE12_ATTACK_POTION::
	finditem ITEM_POTION_ATT
	end


ITEM_ROUTE12_EGG::
	finditem ITEM_CHOCOLATE_SUNDAY
	end


ITEM_ROUTE12_PRAYER_POTION::
	finditem ITEM_PRAYER_POTION
	end


ITEM_DRAYNORMANOR_TM43_PSYCHO_CUT::
	finditem ITEM_TM43_PSYCHO_CUT
	end


ITEM_WIZARDSTOWER_AIR_RUNE_2::
	finditem ITEM_AIR_RUNE
	end


ITEM_ROUTE4_FLAX::
	finditem ITEM_FLAX
	end


ITEM_PORTSARIM_BLUEBERRY_SPECIAL::
	finditem ITEM_BLUEBERRY_SPECIAL
	end


ITEM_PORTSARIM_ITEM_FRUIT_BLAST::
	finditem ITEM_FRUIT_BLAST
	end


ITEM_PORTSARIM_ITEM_SPIRIT_SHARD::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_LUMBRIDGESWAMP_ITEM_SPIRIT_SHARD::
	finditem ITEM_SPIRIT_SHARD
	end


ITEM_LUMBRIDGE_FOREST_CABBAGE::
	finditem ITEM_CABBAGE
	end


Explorer_Jack_1_Text_0:
	.string "Explorer Jack$"

Explorer_Jack_1_Text_1:
	.string "You're awake!\p"
	.string "Do you know what time it is?$"

Explorer_Jack_2_Text_0:
	.string "Are you sure you don't want to go back\n"
	.string "to bed?$"

Explorer_Jack_2_Text_1:
	.string "I am surprised you're up this early, you\n"
	.string "usually oversleep.$"

Explorer_Jack_2_Text_2:
	.string "It's about time you got up.$"

Explorer_Jack_2_Text_3:
	.string "Anyhow, I've got some news for you.\p"
	.string "Apparently a famous researcher is\n"
	.string "currently visiting the Duke in\l"
	.string "Lumbridge Castle and I heard he is\l"
	.string "giving out Monsters to anyone who can\l"
	.string "help him with a quest!\p"
	.string "I think you should go pay him a visit\n"
	.string "seeing as you've always had a fondness\l"
	.string "for adventures.$"

Explorer_Jack_3_Text_0:
	.string "You should make your way to Lumbridge\n"
	.string "Castle.$"

Explorer_Jack_3_Text_1:
	.string "Wow!\p"
	.string "The researcher gave you a monster and\n"
	.string "you've been invited to participate in\l"
	.string "the MvM Championships?!\p"
	.string "How Lucky!$"

Explorer_Jack_3_Text_2:
	.string "Lumbridge Castle is where this towns\n"
	.string "MvM Championships battle is held.\p"
	.string "The current Leader of our town is Duke\n"
	.string "Horacio.$"
