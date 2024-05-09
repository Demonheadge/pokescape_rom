Route5_MapScripts::
	.byte 0


BATTLE_ROUTE5_CAPTAINTOCK::
	trainerbattle_single TRAINER_ROUTE5_CAPTAINTOCK, BATTLE_ROUTE5_CAPTAINTOCK_Text_0, BATTLE_ROUTE5_CAPTAINTOCK_Text_1
	namebox BATTLE_ROUTE5_CAPTAINTOCK_Text_2
	msgbox BATTLE_ROUTE5_CAPTAINTOCK_Text_3
	release
	return


BATTLE_ROUTE5_WOODCUTTER::
	trainerbattle_single TRAINER_ROUTE5_WOODCUTTER, BATTLE_ROUTE5_WOODCUTTER_Text_0, BATTLE_ROUTE5_WOODCUTTER_Text_1
	namebox BATTLE_ROUTE5_WOODCUTTER_Text_2
	msgbox BATTLE_ROUTE5_WOODCUTTER_Text_3
	release
	return


BATTLE_ROUTE5_CAPTAINTOCK_Text_0:
	.string "Avast ye landlubber!\p"
	.string "Port Sarim be forward!$"

BATTLE_ROUTE5_CAPTAINTOCK_Text_1:
	.string "Arrr… Hang the Jib…$"

BATTLE_ROUTE5_CAPTAINTOCK_Text_2:
	.string "Captain Tock$"

BATTLE_ROUTE5_CAPTAINTOCK_Text_3:
	.string "Me hearties be at thee pub.\p"
	.string "Me hasn't enough doubloons after thee\n"
	.string "battle with ye to join them thour.$"

BATTLE_ROUTE5_WOODCUTTER_Text_0:
	.string "See those chopped trees?\p"
	.string "Yeah, I did that and now I will do the\n"
	.string "same to you!$"

BATTLE_ROUTE5_WOODCUTTER_Text_1:
	.string "Tiiiimmmmbbbeeerrr!$"

BATTLE_ROUTE5_WOODCUTTER_Text_2:
	.string "CHOPSALOT$"

BATTLE_ROUTE5_WOODCUTTER_Text_3:
	.string "Well you sure chopped me down to size.$"
