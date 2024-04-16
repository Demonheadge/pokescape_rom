Route26_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route26_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route26_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 3
	call WEATHER_CHANGE_ROUTE_SNOW
	return


SIGN_ROUTE26::
	lock
	msgbox SIGN_ROUTE26_Text_0
	release
	end


BATTLE_ROUTE26_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_1, BATTLE_ROUTE26_TRAINER_1_Text_0, BATTLE_ROUTE26_TRAINER_1_Text_1
	namebox BATTLE_ROUTE26_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE26_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_2, BATTLE_ROUTE26_TRAINER_2_Text_0, BATTLE_ROUTE26_TRAINER_2_Text_0
	namebox BATTLE_ROUTE26_TRAINER_2_Text_1
	msgbox BATTLE_ROUTE26_TRAINER_2_Text_2
	hidenamebox
	release
	end


BATTLE_ROUTE26_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_3, BATTLE_ROUTE26_TRAINER_3_Text_0, BATTLE_ROUTE26_TRAINER_3_Text_1
	namebox BATTLE_ROUTE26_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_3_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE26_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE26_TRAINER_4, BATTLE_ROUTE26_TRAINER_4_Text_0, BATTLE_ROUTE26_TRAINER_4_Text_1
	namebox BATTLE_ROUTE26_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE26_TRAINER_4_Text_3
	hidenamebox
	release
	end


ROUTE26_SUPER_PRAYER_POTION::
	finditem ITEM_SUPER_PRAYER_POTION
	end


ROUTE26_ADAMANT_POUCH::
	finditem ITEM_ADAMANT_POUCH
	end


SIGN_ROUTE26_Text_0:
	.string "NORTH to ICE MOUNTAIN\p"
	.string "SOUTH to the DWARVEN MINES$"

BATTLE_ROUTE26_TRAINER_1_Text_0:
	.string "Hey!\p"
	.string "Too many humans have been coming here\n"
	.string "and slaughtering us when are just\l"
	.string "trying to earn a living!\p"
	.string "I won't let you do the same!$"

BATTLE_ROUTE26_TRAINER_1_Text_1:
	.string "Eek! You're strong.$"

BATTLE_ROUTE26_TRAINER_1_Text_2:
	.string "Omril$"

BATTLE_ROUTE26_TRAINER_1_Text_3:
	.string "Eek! You're strong.\p"
	.string "Please don't kill us all.\p"
	.string "I have a wife and two children at home..$"

BATTLE_ROUTE26_TRAINER_2_Text_0:
	.string "I am a cupholder.$"

BATTLE_ROUTE26_TRAINER_2_Text_1:
	.string "Elkot$"

BATTLE_ROUTE26_TRAINER_2_Text_2:
	.string "The skeletons eyes have returned to\n"
	.string "normal, perhaps something sinister\l"
	.string "nearby was controlling it earlier?$"

BATTLE_ROUTE26_TRAINER_3_Text_0:
	.string "Out of my way, I am on a quest for the\n"
	.string "Guildmaster of the Champions Guild!\p"
	.string "I must head to the top of the mountain\n"
	.string "and speak with the Oracle about\l"
	.string "obtaining a map piece to the forgotten\l"
	.string "island of Crandor so that I can slay\l"
	.string "the dragon who lives there!$"

BATTLE_ROUTE26_TRAINER_3_Text_1:
	.string "Maybe I need a stronger team before\n"
	.string "trying to take on a dragon..$"

BATTLE_ROUTE26_TRAINER_3_Text_2:
	.string "4TheL0re$"

BATTLE_ROUTE26_TRAINER_3_Text_3:
	.string "Wait, what do you mean you've already\n"
	.string "found all the map pieces and defeated\l"
	.string "Elvarg?\p"
	.string "How am I supposed to prove myself as a\n"
	.string "Champion now?!$"

BATTLE_ROUTE26_TRAINER_4_Text_0:
	.string "I was told that there are the ruins of\n"
	.string "an ancient civilisation buried around\l"
	.string "here.\p"
	.string "It will be my discovery, not yours!$"

BATTLE_ROUTE26_TRAINER_4_Text_1:
	.string "Oh.. Well maybe we could share the\n"
	.string "credit instead if we find it?$"

BATTLE_ROUTE26_TRAINER_4_Text_2:
	.string "Gerald$"

BATTLE_ROUTE26_TRAINER_4_Text_3:
	.string "Supposedly the cavern I am searching\n"
	.string "for was one the hall of the Imcando\l"
	.string "dwarves.\p"
	.string "I don't think there are any of them left\n"
	.string "alive now.$"
