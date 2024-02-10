Route31_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route31_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route31_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 6
	call WEATHER_CHANGE_ROUTE
	return


WEATHER_CHANGE_ROUTE::
	random 6
	switch VAR_RESULT
	case 1, WEATHER_CHANGE_ROUTE_3
	case 2, WEATHER_CHANGE_ROUTE_4
	case 4, WEATHER_CHANGE_ROUTE_5
	case 5, WEATHER_CHANGE_ROUTE_6
WEATHER_CHANGE_ROUTE_1:
	return

WEATHER_CHANGE_ROUTE_3:
	setweather WEATHER_RAIN
	doweather
	goto WEATHER_CHANGE_ROUTE_1

WEATHER_CHANGE_ROUTE_4:
	setweather WEATHER_DOWNPOUR
	doweather
	playbgm MUS_ABNORMAL_WEATHER, 0
	savebgm MUS_ABNORMAL_WEATHER
	goto WEATHER_CHANGE_ROUTE_1

WEATHER_CHANGE_ROUTE_5:
	setweather WEATHER_SANDSTORM
	doweather
	playbgm MUS_ROUTE113, 0
	savebgm MUS_ROUTE113
	goto WEATHER_CHANGE_ROUTE_1

WEATHER_CHANGE_ROUTE_6:
	setweather WEATHER_DROUGHT
	doweather
	playbgm MUS_WEATHER_GROUDON, 0
	savebgm MUS_WEATHER_GROUDON
	goto WEATHER_CHANGE_ROUTE_1


WEATHER_CHANGE_ROUTE_RAIN::
	random 6
	switch VAR_RESULT
	case 0, WEATHER_CHANGE_ROUTE_RAIN_3
	case 1, WEATHER_CHANGE_ROUTE_RAIN_4
	case 2, WEATHER_CHANGE_ROUTE_RAIN_5
	case 4, WEATHER_CHANGE_ROUTE_RAIN_6
	case 5, WEATHER_CHANGE_ROUTE_RAIN_7
	case 6, WEATHER_CHANGE_ROUTE_RAIN_8
WEATHER_CHANGE_ROUTE_RAIN_1:
	return

WEATHER_CHANGE_ROUTE_RAIN_3:
	return

WEATHER_CHANGE_ROUTE_RAIN_4:
	setweather WEATHER_RAIN
	doweather
	goto WEATHER_CHANGE_ROUTE_RAIN_1

WEATHER_CHANGE_ROUTE_RAIN_5:
	setweather WEATHER_DOWNPOUR
	doweather
	goto WEATHER_CHANGE_ROUTE_RAIN_1

WEATHER_CHANGE_ROUTE_RAIN_6:
	return

WEATHER_CHANGE_ROUTE_RAIN_7:
	return

WEATHER_CHANGE_ROUTE_RAIN_8:
	return


WEATHER_CHANGE_ROUTE_SAND::
	random 15
	switch VAR_RESULT
	case 0, WEATHER_CHANGE_ROUTE_SAND_3
	case 1, WEATHER_CHANGE_ROUTE_SAND_4
	case 8, WEATHER_CHANGE_ROUTE_SAND_5
	case 12, WEATHER_CHANGE_ROUTE_SAND_6
	case 13, WEATHER_CHANGE_ROUTE_SAND_7
	case 14, WEATHER_CHANGE_ROUTE_SAND_8
WEATHER_CHANGE_ROUTE_SAND_1:
	return

WEATHER_CHANGE_ROUTE_SAND_3:
	return

WEATHER_CHANGE_ROUTE_SAND_4:
	return

WEATHER_CHANGE_ROUTE_SAND_5:
	setweather WEATHER_SUNNY
	doweather
	goto WEATHER_CHANGE_ROUTE_SAND_1

WEATHER_CHANGE_ROUTE_SAND_6:
	setweather WEATHER_SANDSTORM
	doweather
	goto WEATHER_CHANGE_ROUTE_SAND_1

WEATHER_CHANGE_ROUTE_SAND_7:
	setweather WEATHER_SANDSTORM
	doweather
	goto WEATHER_CHANGE_ROUTE_SAND_1

WEATHER_CHANGE_ROUTE_SAND_8:
	setweather WEATHER_DROUGHT
	doweather
	goto WEATHER_CHANGE_ROUTE_SAND_1


WEATHER_CHANGE_ROUTE_SNOW::
	random 6
	switch VAR_RESULT
	case 0, WEATHER_CHANGE_ROUTE_SNOW_3
	case 1, WEATHER_CHANGE_ROUTE_SNOW_4
	case 2, WEATHER_CHANGE_ROUTE_SNOW_5
	case 4, WEATHER_CHANGE_ROUTE_SNOW_6
	case 5, WEATHER_CHANGE_ROUTE_SNOW_7
	case 6, WEATHER_CHANGE_ROUTE_SNOW_8
WEATHER_CHANGE_ROUTE_SNOW_1:
	return

WEATHER_CHANGE_ROUTE_SNOW_3:
	return

WEATHER_CHANGE_ROUTE_SNOW_4:
	setweather WEATHER_SNOW
	doweather
	goto WEATHER_CHANGE_ROUTE_SNOW_1

WEATHER_CHANGE_ROUTE_SNOW_5:
	setweather WEATHER_SNOW
	doweather
	goto WEATHER_CHANGE_ROUTE_SNOW_1

WEATHER_CHANGE_ROUTE_SNOW_6:
	return

WEATHER_CHANGE_ROUTE_SNOW_7:
	return

WEATHER_CHANGE_ROUTE_SNOW_8:
	return


BATTLE_SCAPEINK::
	trainerbattle_single TRAINER_SCAPEINK, BATTLE_SCAPEINK_Text_0, BATTLE_SCAPEINK_Text_1
	namebox BATTLE_SCAPEINK_Text_2
	msgbox BATTLE_SCAPEINK_Text_3
	hidenamebox
	release
	end


BATTLE_TRAINER_ROUTE_31_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_31_TRAINER_1, BATTLE_TRAINER_ROUTE_31_TRAINER_1_Text_0, BATTLE_TRAINER_ROUTE_31_TRAINER_1_Text_1
	namebox BATTLE_TRAINER_ROUTE_31_TRAINER_1_Text_2
	msgbox BATTLE_TRAINER_ROUTE_31_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_TRAINER_ROUTE_31_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_31_TRAINER_2, BATTLE_TRAINER_ROUTE_31_TRAINER_2_Text_0, BATTLE_TRAINER_ROUTE_31_TRAINER_2_Text_1
	namebox BATTLE_TRAINER_ROUTE_31_TRAINER_2_Text_2
	msgbox BATTLE_TRAINER_ROUTE_31_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_TRAINER_ROUTE_31_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE_31_TRAINER_3, BATTLE_TRAINER_ROUTE_31_TRAINER_3_Text_0, BATTLE_TRAINER_ROUTE_31_TRAINER_3_Text_1
	namebox BATTLE_TRAINER_ROUTE_31_TRAINER_3_Text_2
	msgbox BATTLE_TRAINER_ROUTE_31_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_TRAINER_ROUTE_31_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE_31_TRAINER_4, BATTLE_TRAINER_ROUTE_31_TRAINER_4_Text_0, BATTLE_TRAINER_ROUTE_31_TRAINER_4_Text_1
	namebox BATTLE_TRAINER_ROUTE_31_TRAINER_4_Text_2
	msgbox BATTLE_TRAINER_ROUTE_31_TRAINER_4_Text_1
	hidenamebox
	release
	end


BATTLE_TRAINER_ROUTE_31_TRAINER_5::
	trainerbattle_single TRAINER_ROUTE_31_TRAINER_5, BATTLE_TRAINER_ROUTE_31_TRAINER_5_Text_0, BATTLE_TRAINER_ROUTE_31_TRAINER_5_Text_1
	namebox BATTLE_TRAINER_ROUTE_31_TRAINER_5_Text_2
	msgbox BATTLE_TRAINER_ROUTE_31_TRAINER_5_Text_1
	hidenamebox
	release
	end


BATTLE_TRAINER_ROUTE_31_TRAINER_6::
	trainerbattle_single TRAINER_ROUTE_31_TRAINER_6, BATTLE_TRAINER_ROUTE_31_TRAINER_6_Text_0, BATTLE_TRAINER_ROUTE_31_TRAINER_6_Text_1
	namebox BATTLE_TRAINER_ROUTE_31_TRAINER_6_Text_2
	msgbox BATTLE_TRAINER_ROUTE_31_TRAINER_6_Text_1
	hidenamebox
	release
	end


BATTLE_TRAINER_ROUTE_31_TRAINER_7::
	trainerbattle_single TRAINER_ROUTE_31_TRAINER_7, BATTLE_TRAINER_ROUTE_31_TRAINER_7_Text_0, BATTLE_TRAINER_ROUTE_31_TRAINER_7_Text_1
	msgbox BATTLE_TRAINER_ROUTE_31_TRAINER_7_Text_1
	release
	end


ITEM_ROUTE_31_PRAYER_POTION::
	finditem ITEM_PRAYER_POTION
	end


ITEM_ROUTE_31_SUPER_PRAYER_POTION::
	finditem ITEM_SUPER_PRAYER_POTION
	end


ITEM_ROUTE_31_CHOCOLATE_CAKE::
	finditem ITEM_CHOCOLATE_CAKE
	end


CHAOS_TUNNELS_SIGN::
	lock
	faceplayer
	msgbox CHAOS_TUNNELS_SIGN_Text_0
	release
	end


BATTLE_SCAPEINK_Text_0:
	.string "Ha got you!\p"
	.string "There is no where for you to run!$"

BATTLE_SCAPEINK_Text_1:
	.string "Oh no I dropped my dds.$"

BATTLE_SCAPEINK_Text_2:
	.string "ScapeInk$"

BATTLE_SCAPEINK_Text_3:
	.string "You were lucky this time, next time I\n"
	.string "will get you for sure!$"

BATTLE_TRAINER_ROUTE_31_TRAINER_1_Text_0:
	.string "The Wilderness is dangereous, why are\n"
	.string "you even here?$"

BATTLE_TRAINER_ROUTE_31_TRAINER_1_Text_1:
	.string "It's going to be tough, but there's\n"
	.string "runite in the Wilderness. I need to get\l"
	.string "it.$"

BATTLE_TRAINER_ROUTE_31_TRAINER_1_Text_2:
	.string "Runitescape$"

BATTLE_TRAINER_ROUTE_31_TRAINER_2_Text_0:
	.string "Excuse me, this gentleman is trying to\n"
	.string "sell me charcoal for cheap. 500k a\l"
	.string "piece even!\p"
	.string "Yeah buzz off!$"

BATTLE_TRAINER_ROUTE_31_TRAINER_2_Text_1:
	.string "Charcoal isn't worth 500k? This is why\n"
	.string "you're poor and I'm not.\p"
	.string "Did I say 500? I meant 700k.$"

BATTLE_TRAINER_ROUTE_31_TRAINER_2_Text_2:
	.string "SkrueMcDolk & Elari$"

BATTLE_TRAINER_ROUTE_31_TRAINER_3_Text_0:
	.string "I am going to kill a dragon.$"

BATTLE_TRAINER_ROUTE_31_TRAINER_3_Text_1:
	.string "Anti dragonfire shield? What's that?$"

BATTLE_TRAINER_ROUTE_31_TRAINER_3_Text_2:
	.string "Derrguun$"

BATTLE_TRAINER_ROUTE_31_TRAINER_4_Text_0:
	.string "How did I end up here?!\p"
	.string "HELP!$"

BATTLE_TRAINER_ROUTE_31_TRAINER_4_Text_1:
	.string "How do I get out of here?!\p"
	.string "HELP!$"

BATTLE_TRAINER_ROUTE_31_TRAINER_4_Text_2:
	.string "Cb4inP2P$"

BATTLE_TRAINER_ROUTE_31_TRAINER_5_Text_0:
	.string "Buzz off, I'm collecting charcoal.$"

BATTLE_TRAINER_ROUTE_31_TRAINER_5_Text_1:
	.string "All the quality charcoal is gone.. Damn\n"
	.string "scammers, they ruined scamming!$"

BATTLE_TRAINER_ROUTE_31_TRAINER_5_Text_2:
	.string "NoManSky$"

BATTLE_TRAINER_ROUTE_31_TRAINER_6_Text_0:
	.string "Psst, hey!\p"
	.string "Hey you!\p"
	.string "Yeah you?\p"
	.string "Want to buy a rock?$"

BATTLE_TRAINER_ROUTE_31_TRAINER_6_Text_1:
	.string "On second thought, I think I want to\n"
	.string "hold on to this one.$"

BATTLE_TRAINER_ROUTE_31_TRAINER_6_Text_2:
	.string "WarauSales$"

BATTLE_TRAINER_ROUTE_31_TRAINER_7_Text_0:
	.string "The skeleton is pointing at something.$"

BATTLE_TRAINER_ROUTE_31_TRAINER_7_Text_1:
	.string "The skeleton laughs.\p"
	.string "You guess it's saying something like\n"
	.string "'hah, made you look!'.$"

CHAOS_TUNNELS_SIGN_Text_0:
	.string "WARNING! DANGEROUS MONSTERS BE-\p"
	.string "The rest of the text is obscured by a\n"
	.string "rather large bloodstain.$"
