Varrock_Lowe_Shop_MapScripts::
	.byte 0


NPC_LOWE::
	lock
	faceplayer
	namebox NPC_LOWE_Text_0
	msgbox NPC_LOWE_Text_1
	waitmessage
	hidenamebox
	release
	end


LOWES_SHOP_NPC::
	lock
	faceplayer
	namebox LOWES_SHOP_NPC_Text_0
	msgbox LOWES_SHOP_NPC_Text_1
	waitmessage
	hidenamebox
	release
	end


NPC_LOWES_DOG::
	lock
	faceplayer
	msgbox NPC_LOWES_DOG_Text_0
	waitmessage
	hidenamebox
	release
	end


LOWESBOOK::
	lock
	msgbox LOWESBOOK_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne LOWESBOOK_2
	msgbox LOWESBOOK_Text_2
	closemessage
LOWESBOOK_1:
	release
	end

LOWESBOOK_2:
	msgbox LOWESBOOK_Text_1
	closemessage
	goto LOWESBOOK_1


LOWES_BONE_CROSSBOW::
	finditem ITEM_BONECROSSBOW
	end


NPC_LOWE_Text_0:
	.string "Lowe$"

NPC_LOWE_Text_1:
	.string "This used to be one of the best places\n"
	.string "in Misthalin to buy arrows.\p"
	.string "However, people don't care about\n"
	.string "archery anymore!\p"
	.string "They just want to catch monsters...$"

LOWES_SHOP_NPC_Text_0:
	.string "Der4ng3d$"

LOWES_SHOP_NPC_Text_1:
	.string "I thought this place sold arrows?\p"
	.string "How am I meant to train ranged without\n"
	.string "them, it's not like I could make my own!$"

NPC_LOWES_DOG_Text_0:
	.string "You lean down and scratch the dog\n"
	.string "behind the ears.\p"
	.string "It looks up at you as it stretches out\n"
	.string "on the ground$"

LOWESBOOK_Text_0:
	.string "There is a journal on the table.\p"
	.string "Do you want to read it?$"

LOWESBOOK_Text_1:
	.string "I've heard rumours that Robin lives\n"
	.string "across the River Salve.\p"
	.string "Imagine living so close to THE Robin.\p"
	.string "A Master Bowman.\p"
	.string "I'd love to meet him one day, and get\n"
	.string "some tips.\p"
	.string "I don't think anybody else in Gielinor\n"
	.string "shares my love of archery like he does.\p"
	.string "{PAUSE 15}The journal continues on sharing Lowe's\n"
	.string "admiration of Robin for many, many,\l"
	.string "many more pages.\p"
	.string "You decide not to continue reading...$"

LOWESBOOK_Text_2:
	.string "You decide not to read the journal.$"
