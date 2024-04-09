Mill_Lane_Mill_3_MapScripts::
	.byte 0


Millie_Miller::
	compare VAR_POKESCAPE_COOKS_ASSISTANT_QUEST_STATE, 1
	goto_if_eq Millie_Miller_1
	lock
	faceplayer
	msgbox Millie_Miller_Text_4
	pokemart MillLaneMillFlourShop
	release
	end

Millie_Miller_1:
	checkitem ITEM_EXTRA_FINE_FLOUR, 1
	compare VAR_RESULT, 0
	goto_if_eq Millie_Miller_4
	lock
	faceplayer
	msgbox Millie_Miller_Text_4
	pokemart MillLaneMillFlourShop
	release
	end

Millie_Miller_4:
	lock
	faceplayer
	namebox Millie_Miller_Text_0
	msgbox Millie_Miller_Text_1
	trainerbattle_single TRAINER_MILLIE_MILLER_MILLLANEMILL, Millie_Miller_Text_2, Millie_Miller_Text_3, GiveQuestWheat
	hidenamebox
	release
	end


GiveQuestWheat::
	lock
	faceplayer
	namebox Millie_Miller_Text_0
	msgbox GiveQuestWheat_Text_0
	hidenamebox
	giveitem ITEM_EXTRA_FINE_FLOUR
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_COOKS_ASSISTANT, SUB_QUEST_COOKSASSISTANT_3
	namebox Millie_Miller_Text_0
	msgbox GiveQuestWheat_Text_1
	hidenamebox
	release
	end


    .align 2
MillLaneMillFlourShop:
	.2byte ITEM_FLOUR_POT
    .2byte ITEM_EMPTY_POT
    .2byte ITEM_WHEAT
	.2byte ITEM_NONE

    release
    end

MillLaneMill_Item_FLOUR_POT::
	finditem ITEM_BREAD
	end


Millie_Miller_Text_0:
	.string "Millie Miller$"

Millie_Miller_Text_1:
	.string "Welcome to Mill Lane Mill!\p"
	.string "I heard that you were after some of our\n"
	.string "flour.\p"
	.string "Tehehehehe.\p"
	.string "I can give you some if you want…$"

Millie_Miller_Text_2:
	.string "But you'll have to battle me for it.\p"
	.string "Teheehehe!$"

Millie_Miller_Text_3:
	.string "I was so close!$"

Millie_Miller_Text_4:
	.string "Welcome to Mill Lane Mill!\p"
	.string "Would you like to buy some flour?$"

GiveQuestWheat_Text_0:
	.string "Congratulations!\nHere is the flour.$"

GiveQuestWheat_Text_1:
	.string "If you run out you may get some more\n"
	.string "from me anytime you wish.\p"
	.string "Although it will come at a cost.\p"
	.string "Tehehehe!$"
