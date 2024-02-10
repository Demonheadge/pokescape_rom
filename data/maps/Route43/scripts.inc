Route43_MapScripts::
	.byte 0


BATTLE_ROUTE_43_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE_43_TRAINER_1, BATTLE_ROUTE_43_TRAINER_1_Text_0, BATTLE_ROUTE_43_TRAINER_1_Text_1
	namebox BATTLE_ROUTE_43_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE_43_TRAINER_1_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_43_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE_43_TRAINER_2, BATTLE_ROUTE_43_TRAINER_2_Text_0, BATTLE_ROUTE_43_TRAINER_2_Text_1
	namebox BATTLE_ROUTE_43_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE_43_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_43_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE_43_TRAINER_3, BATTLE_ROUTE_43_TRAINER_3_Text_0, BATTLE_ROUTE_43_TRAINER_3_Text_1
	namebox BATTLE_ROUTE_43_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE_43_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE_43_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE_43_TRAINER_4, BATTLE_ROUTE_43_TRAINER_4_Text_0, BATTLE_ROUTE_43_TRAINER_4_Text_1
	namebox BATTLE_ROUTE_43_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE_43_TRAINER_4_Text_1
	hidenamebox
	release
	end


ITEM_ROUTE_43_MOONLIGHT_MEAD::
	finditem ITEM_STAT_MOONLIGHT_MEAD
	end


ITEM_ROUTE_43_SPEED_LAMP::
	finditem ITEM_LAMP_SPEED
	end


ROUTE_43_SIGN_1::
	lock
	faceplayer
	msgbox ROUTE_43_SIGN_1_Text_0
	release
	end


ROUTE_43_SIGN_2::
	lock
	faceplayer
	msgbox ROUTE_43_SIGN_2_Text_0
	release
	end


BATTLE_ROUTE_43_TRAINER_1_Text_0:
	.string "Rattle rattle rattle.$"

BATTLE_ROUTE_43_TRAINER_1_Text_1:
	.string "Rattle rattle rattle rattle$"

BATTLE_ROUTE_43_TRAINER_1_Text_2:
	.string "Rattlerattle$"

BATTLE_ROUTE_43_TRAINER_2_Text_0:
	.string "I am not a skeleton.$"

BATTLE_ROUTE_43_TRAINER_2_Text_1:
	.string "I'm posing as a skeleton so people won't\n"
	.string "kill me.\p"
	.string "Don't tell the PKers.$"

BATTLE_ROUTE_43_TRAINER_2_Text_2:
	.string "$"

BATTLE_ROUTE_43_TRAINER_3_Text_0:
	.string "The skeleton seems to be guarding\n"
	.string "something.$"

BATTLE_ROUTE_43_TRAINER_3_Text_1:
	.string "The skeleton no longer seems to be\n"
	.string "guarding anything.$"

BATTLE_ROUTE_43_TRAINER_3_Text_2:
	.string "Tonton$"

BATTLE_ROUTE_43_TRAINER_4_Text_0:
	.string "This skeleton is clearly dead on the\n"
	.string "outside.$"

BATTLE_ROUTE_43_TRAINER_4_Text_1:
	.string "The skeleton looks dead on the inside\n"
	.string "now too.$"

BATTLE_ROUTE_43_TRAINER_4_Text_2:
	.string "Funorb$"

ROUTE_43_SIGN_1_Text_0:
	.string "There are deep gouges in the wood where\n"
	.string "something with sharp claws has\l"
	.string "attacked it.$"

ROUTE_43_SIGN_2_Text_0:
	.string "Gravediggers will be prosecuted.\p"
	.string "The word 'prosecuted' has then been\n"
	.string "scribbled out and the word 'murdered'\l"
	.string "scrawled beside it in what looks like\l"
	.string "blood.$"
