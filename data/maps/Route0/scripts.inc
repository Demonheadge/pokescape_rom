Route0_MapScripts::
	.byte 0


BATTLE_ROUTE0_TRAINER_1::
	trainerbattle_single TRAINER_ROUTE0_TRAINER_1, BATTLE_ROUTE0_TRAINER_1_Text_0, BATTLE_ROUTE0_TRAINER_1_Text_1
	namebox BATTLE_ROUTE0_TRAINER_1_Text_2
	msgbox BATTLE_ROUTE0_TRAINER_1_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE0_TRAINER_2::
	trainerbattle_single TRAINER_ROUTE0_TRAINER_2, BATTLE_ROUTE0_TRAINER_2_Text_0, BATTLE_ROUTE0_TRAINER_2_Text_1
	namebox BATTLE_ROUTE0_TRAINER_2_Text_2
	msgbox BATTLE_ROUTE0_TRAINER_2_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE0_TRAINER_3::
	trainerbattle_single TRAINER_ROUTE0_TRAINER_3, BATTLE_ROUTE0_TRAINER_3_Text_0, BATTLE_ROUTE0_TRAINER_3_Text_1
	namebox BATTLE_ROUTE0_TRAINER_3_Text_2
	msgbox BATTLE_ROUTE0_TRAINER_3_Text_1
	hidenamebox
	release
	end


BATTLE_ROUTE0_TRAINER_4::
	trainerbattle_single TRAINER_ROUTE0_TRAINER_4, BATTLE_ROUTE0_TRAINER_4_Text_0, BATTLE_ROUTE0_TRAINER_4_Text_1
	namebox BATTLE_ROUTE0_TRAINER_4_Text_2
	msgbox BATTLE_ROUTE0_TRAINER_4_Text_3
	hidenamebox
	release
	end


BATTLE_ROUTE0_TRAINER_5::
	trainerbattle_double TRAINER_ROUTE0_TRAINER_5, BATTLE_ROUTE0_TRAINER_5_Text_0, BATTLE_ROUTE0_TRAINER_5_Text_1, BATTLE_ROUTE0_TRAINER_5_Text_2
	namebox BATTLE_ROUTE0_TRAINER_5_Text_3
	msgbox BATTLE_ROUTE0_TRAINER_5_Text_1
	hidenamebox
	release
	end


NPC_ROUTE0_NPC_1::
	lock
	faceplayer
	msgbox NPC_ROUTE0_NPC_1_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE0_NPC_2::
	lock
	faceplayer
	msgbox NPC_ROUTE0_NPC_2_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE0_NPC_3::
	lock
	faceplayer
	msgbox NPC_ROUTE0_NPC_3_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE0_NPC_4::
	lock
	faceplayer
	namebox NPC_ROUTE0_NPC_4_Text_0
	msgbox NPC_ROUTE0_NPC_4_Text_1
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE0_NPC_5::
	lock
	faceplayer
	msgbox NPC_ROUTE0_NPC_5_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE0_CHICKEN::
	lock
	faceplayer
	msgbox NPC_ROUTE0_CHICKEN_Text_0
	closemessage
	hidenamebox
	release
	end


NPC_ROUTE0_RAPTOR::
	lock
	faceplayer
	msgbox NPC_ROUTE0_RAPTOR_Text_0
	closemessage
	hidenamebox
	release
	end


ITEM_ROUTE0_SWEETS::
	finditem ITEM_PURPLE_SWEETS
	end


ITEM_ROUTE0_TINDERBOX::
	finditem ITEM_TINDERBOX
	end


BATTLE_ROUTE0_TRAINER_1_Text_0:
	.string "You are interrupting me!$"

BATTLE_ROUTE0_TRAINER_1_Text_1:
	.string "I figured I could cheat and dig my way\n"
	.string "to the bottom of the dungeon...\p"
	.string "Turns out there's only bedrock here.$"

BATTLE_ROUTE0_TRAINER_1_Text_2:
	.string "RockS0lid$"

BATTLE_ROUTE0_TRAINER_1_Text_3:
	.string "I figured I could cheat and dig my way\n"
	.string "to the bottom of the dungeon…\p"
	.string "Turns out there's only bedrock here.$"

BATTLE_ROUTE0_TRAINER_2_Text_0:
	.string "Who goes there?\p"
	.string "Do you think you may survive this land?$"

BATTLE_ROUTE0_TRAINER_2_Text_1:
	.string "You may pass, we have need of you in the\n"
	.string "dungeon.$"

BATTLE_ROUTE0_TRAINER_2_Text_2:
	.string "Torbit$"

BATTLE_ROUTE0_TRAINER_3_Text_0:
	.string "Come to see the dungeon, have you?\p"
	.string "I will show you to the dungeon all right!$"

BATTLE_ROUTE0_TRAINER_3_Text_1:
	.string "That was a test, you have got what it\n"
	.string "takes.$"

BATTLE_ROUTE0_TRAINER_3_Text_2:
	.string "Geir$"

BATTLE_ROUTE0_TRAINER_4_Text_0:
	.string "I'm busy charting this region, don't get\n"
	.string "in my way.$"

BATTLE_ROUTE0_TRAINER_4_Text_1:
	.string "Ugh, you've made me smudge my map...$"

BATTLE_ROUTE0_TRAINER_4_Text_2:
	.string "Sonje$"

BATTLE_ROUTE0_TRAINER_4_Text_3:
	.string "If you're that strong you're wasted\n"
	.string "here, go up to the castle and help\l"
	.string "explore the depths below.$"

BATTLE_ROUTE0_TRAINER_5_Text_0:
	.string "Stop...\p"
	.string "If you can't defeat us...\p"
	.string "You will not survive the doom of\n"
	.string "Daemonheim...\p"
	.string "Boo!$"

BATTLE_ROUTE0_TRAINER_5_Text_1:
	.string "You might survive...\p"
	.string "The doom...\p"
	.string "Of the dungeon...\p"
	.string "Boo!$"

BATTLE_ROUTE0_TRAINER_5_Text_2:
	.string "okay.$"

BATTLE_ROUTE0_TRAINER_5_Text_3:
	.string "Knoll and Tott$"

NPC_ROUTE0_NPC_1_Text_0:
	.string "We came here across the sea after our\n"
	.string "Seer said a great evil lurked here.\p"
	.string "How we crossed the sea is a mystery.\p"
	.string "If you look at the map, it makes no\n"
	.string "sense!$"

NPC_ROUTE0_NPC_2_Text_0:
	.string "It's really cold up here so I'm in need\n"
	.string "of a fire.\p"
	.string "I brought magic logs but my firemaking\n"
	.string "level is too low.\p"
	.string "I deserve to freeze...$"

NPC_ROUTE0_NPC_3_Text_0:
	.string "Thok is our fiercest warrior, he and his\n"
	.string "brother Marmaros almost made it to the\l"
	.string "bottom of Daemonheim once!\p"
	.string "They don't talk about it however.$"

NPC_ROUTE0_NPC_4_Text_0:
	.string "Marmaros$"

NPC_ROUTE0_NPC_4_Text_1:
	.string "I-if you need Thok, g-go right up ahead.$"

NPC_ROUTE0_NPC_5_Text_0:
	.string "Don't think you can just go to the\n"
	.string "bottom of the dungeon on your first\l"
	.string "try.\p"
	.string "This is a tough place!$"

NPC_ROUTE0_CHICKEN_Text_0:
	.string "Bwuk bwuk bwaaaaauuuuukk$"

NPC_ROUTE0_RAPTOR_Text_0:
	.string "The Raptor ignores you.$"
