Mill_Lane_Mill_2_MapScripts::
	.byte 0


Trainer3_MillLaneMill_Battle::
	trainerbattle_single TRAINER_TRAINER3_MILLLANEMILL, Trainer3_MillLaneMill_Battle_Text_0, Trainer3_MillLaneMill_Battle_Text_1
	namebox Trainer3_MillLaneMill_Battle_Text_2
	msgbox Trainer3_MillLaneMill_Battle_Text_1
	hidenamebox
	release
	end


Trainer4_MillLaneMill_Battle::
	trainerbattle_single TRAINER_TRAINER4_MILLLANEMILL, Trainer4_MillLaneMill_Battle_Text_0, Trainer4_MillLaneMill_Battle_Text_1
	namebox Trainer4_MillLaneMill_Battle_Text_2
	msgbox Trainer4_MillLaneMill_Battle_Text_3
	hidenamebox
	release
	end


Trainer3_MillLaneMill_Battle_Text_0:
	.string "It seems its time for you to face the\n"
	.string "second strongest of the mill three!$"

Trainer3_MillLaneMill_Battle_Text_1:
	.string "One day I aim to be the strongest of\n"
	.string "the mill three.$"

Trainer3_MillLaneMill_Battle_Text_2:
	.string "CASSIDY$"

Trainer4_MillLaneMill_Battle_Text_0:
	.string "I can't let you pass and meet Millie\n"
	.string "without facing me.\p"
	.string "I am after all the second strongest of\n"
	.string "the mill three.$"

Trainer4_MillLaneMill_Battle_Text_1:
	.string "Wow you beat all of us.\pSay hi to Millie from me.$"

Trainer4_MillLaneMill_Battle_Text_2:
	.string "DIXIE$"

Trainer4_MillLaneMill_Battle_Text_3:
	.string "Wow you beat all of us.\p"
	.string "Say hi to Millie from me.$"
