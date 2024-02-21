Route10_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route10_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route10_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	call ROUTE_10_STATE
	return


ROUTE_10_STATE::
	compare VAR_POKESCAPE_GAMEMODE_STATE, 0
	goto_if_eq ROUTE_10_STATE_1
	removeobject 11
	removeobject 12
	setflag FLAG_TEMP_1F
	return

ROUTE_10_STATE_1:
	switch VAR_POKESCAPE_STORYMODE_PROGRESS
	case 100, ROUTE_10_STATE_6
	removeobject 11
	removeobject 12
	setflag FLAG_TEMP_1F
	return

ROUTE_10_STATE_6:
	addobject 11
	addobject 12
	clearflag FLAG_TEMP_1F
	return


ROUTE10_Pirate::
	faceplayer
	namebox ROUTE10_Pirate_Text_0
	msgbox ROUTE10_Pirate_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE10_DragonBot::
	faceplayer
	namebox ROUTE10_DragonBot_Text_0
	msgbox ROUTE10_DragonBot_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE10_SirRebrum::
	faceplayer
	namebox ROUTE10_SirRebrum_Text_0
	msgbox ROUTE10_SirRebrum_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE10_WhiteKnight_1::
	faceplayer
	namebox ROUTE10_WhiteKnight_1_Text_0
	msgbox ROUTE10_WhiteKnight_1_Text_1
	closemessage
	hidenamebox
	release
	end


ROUTE10_WhiteKnight_2::
	faceplayer
	namebox ROUTE10_WhiteKnight_1_Text_0
	msgbox ROUTE10_WhiteKnight_2_Text_0
	closemessage
	hidenamebox
	release
	end


BATTLE_ROUTE10_MONK::
	trainerbattle_single TRAINER_ROUTE10_MONK, BATTLE_ROUTE10_MONK_Text_0, BATTLE_ROUTE10_MONK_Text_1
	msgbox BATTLE_ROUTE10_MONK_Text_2
	release
	return


BATTLE_ROUTE10_GOBLIN_1::
	trainerbattle_single TRAINER_ROUTE10_GOBLIN_1, BATTLE_ROUTE10_GOBLIN_1_Text_0, BATTLE_ROUTE10_GOBLIN_1_Text_1
	msgbox BATTLE_ROUTE10_GOBLIN_1_Text_2
	release
	return


BATTLE_ROUTE10_GOBLIN_2::
	trainerbattle_single TRAINER_ROUTE10_GOBLIN_2, BATTLE_ROUTE10_GOBLIN_2_Text_0, BATTLE_ROUTE10_GOBLIN_2_Text_1
	msgbox BATTLE_ROUTE10_GOBLIN_2_Text_2
	release
	return


ITEM_ROUTE10_TM38_ROCKTOMB::
	finditem ITEM_TM38
	end


ITEM_ROUTE10_PINEAPPLE_PUNCH::
	finditem ITEM_PINEAPPLE_PUNCH
	end


ROUTE10_Gravestone_1::
	msgbox ROUTE10_Gravestone_1_Text_0
	closemessage
	end


ROUTE10_Gravestone_2::
	msgbox ROUTE10_Gravestone_2_Text_0
	closemessage
	end


ROUTE10_Gravestone_3::
	msgbox ROUTE10_Gravestone_3_Text_0
	closemessage
	end


ROUTE10_Gravestone_4::
	msgbox ROUTE10_Gravestone_4_Text_0
	closemessage
	end


ROUTE10_Gravestone_5::
	msgbox ROUTE10_Gravestone_5_Text_0
	closemessage
	end


ROUTE10_Signpost::
	msgbox ROUTE10_Signpost_Text_0
	closemessage
	end


ROUTE10_Pirate_Text_0:
	.string "PIRATE$"

ROUTE10_Pirate_Text_1:
	.string "Arrrr…\p"
	.string "Me best matey Polly past away a few\n"
	.string "yeeyarrs ago…\p"
	.string "It feels like only yeesterrdey.$"

ROUTE10_DragonBot_Text_0:
	.string "L337AFK3R69$"

ROUTE10_DragonBot_Text_1:
	.string "Urgh I went afk for 5 minutes!\p"
	.string "When I came back a Goblin had PKed me!$"

ROUTE10_SirRebrum_Text_0:
	.string "Sir Rebrum$"

ROUTE10_SirRebrum_Text_1:
	.string "Go no further adventurer!\p"
	.string "Ghastly, smelly worm monsters have been\n"
	.string "attacking folks around this area.\p"
	.string "We have been dispatched here to secure\n"
	.string "the area for the time being.$"

ROUTE10_WhiteKnight_1_Text_0:
	.string "White Knight$"

ROUTE10_WhiteKnight_1_Text_1:
	.string "Disgusting!\p"
	.string "I have worm juice all over my shiny new\n"
	.string "armour!$"

ROUTE10_WhiteKnight_2_Text_0:
	.string "All of my monsters fainted…\p"
	.string "I need to recover for a bit.$"

BATTLE_ROUTE10_MONK_Text_0:
	.string "You don't seem to be dead…\p"
	.string "We might be able arrange something to\n"
	.string "fix that.$"

BATTLE_ROUTE10_MONK_Text_1:
	.string "Oh you prefer to live?\p"
	.string "That too is an option.$"

BATTLE_ROUTE10_MONK_Text_2:
	.string "Did you know Death Runes make certain\n"
	.string "monsters evolve?\p"
	.string "Do you think there are Life Rune too?\p"
	.string "It really makes you think.$"

BATTLE_ROUTE10_GOBLIN_1_Text_0:
	.string "HUMAN!\p"
	.string "Me not let you pass!\p"
	.string "This is goblin road!$"

BATTLE_ROUTE10_GOBLIN_1_Text_1:
	.string "Ok human can pass!$"

BATTLE_ROUTE10_GOBLIN_1_Text_2:
	.string "Me sorry for causing trouble for human!\p"
	.string "Don't hurt goblin!$"

BATTLE_ROUTE10_GOBLIN_2_Text_0:
	.string "Me want to visit graves but stupid\n"
	.string "humans won't let me!$"

BATTLE_ROUTE10_GOBLIN_2_Text_1:
	.string "Me just want to see friend…$"

BATTLE_ROUTE10_GOBLIN_2_Text_2:
	.string "Me friend is spider.\p"
	.string "Me accidently sat on him.\p"
	.string "Me want to visit grave and say sorry…$"

ROUTE10_Gravestone_1_Text_0:
	.string "The gravestone reads…\p"
	.string "Here lies my hopes and Dreams…$"

ROUTE10_Gravestone_2_Text_0:
	.string "The gravestone reads…\p"
	.string "Died to seafood.$"

ROUTE10_Gravestone_3_Text_0:
	.string "The gravestone reads…\p"
	.string "PokeScapes initial ETA$"

ROUTE10_Gravestone_4_Text_0:
	.string "The grave is really old and is hard to\n"
	.string "read…\p"
	.string "R…Sca…e For…ms\p"
	.string "You wonder what it could mean.$"

ROUTE10_Gravestone_5_Text_0:
	.string "The gravestone reads…\p"
	.string "Died by thinking it was a good idea to\n"
	.string "throw fishing explosives at a Mogre.$"

ROUTE10_Signpost_Text_0:
	.string "Port Sarim Church.\p"
	.string "North to Port Sarim Graveyard.$"
