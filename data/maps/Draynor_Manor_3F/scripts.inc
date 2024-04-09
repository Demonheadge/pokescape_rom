Draynor_Manor_3F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Draynor_Manor_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Draynor_Manor_3F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setvar VAR_EVOLUTION_MAP_STATE, 1
	return


NPC_DraynorManor_Chicken::
	lock
	faceplayer
	namebox NPC_DraynorManor_Chicken_Text_0
	playmoncry SPECIES_TORCHIC, 0
	msgbox NPC_DraynorManor_Chicken_Text_1
	waitmoncry
	hidenamebox
	closemessage
	namebox NPC_DraynorManor_Chicken_Text_2
	msgbox NPC_DraynorManor_Chicken_Text_3
	hidenamebox
	closemessage
	release
	end


ITEM_DRAYNORMANOR_FISHFOOD::
	finditem ITEM_FISH_FOOD
	closemessage
	end


ITEM_DRAYNORMANOR_OILCAN::
	finditem ITEM_OIL_CAN
	closemessage
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ERNEST_THE_CHICKEN, SUB_QUEST_ERNESTTHECHICKEN_1
	end


ITEM_DRAYNORMANOR_RUBBERTUBE::
	finditem ITEM_RUBBER_TUBE
	closemessage
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ERNEST_THE_CHICKEN, SUB_QUEST_ERNESTTHECHICKEN_2
	end


SCRIPT_DraynorManor_Poison::
	msgbox SCRIPT_DraynorManor_Poison_Text_0
	checkitem ITEM_FISH_FOOD, 1
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Poison_2
	closemessage
	end

SCRIPT_DraynorManor_Poison_2:
	msgbox SCRIPT_DraynorManor_Poison_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Poison_4
	closemessage
	end

SCRIPT_DraynorManor_Poison_4:
	msgbox SCRIPT_DraynorManor_Poison_Text_2
	removeitem ITEM_FISH_FOOD
	giveitem ITEM_FISH_FOOD_POISONED
	closemessage
	end


SCRIPT_DraynorManor_Fountain::
	msgbox SCRIPT_DraynorManor_Fountain_Text_0
	closemessage
	checkitem ITEM_FISH_FOOD_POISONED, 1
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Fountain_2
	end

SCRIPT_DraynorManor_Fountain_2:
	msgbox SCRIPT_DraynorManor_Fountain_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Fountain_4
	closemessage
	end

SCRIPT_DraynorManor_Fountain_4:
	msgbox SCRIPT_DraynorManor_Fountain_Text_2
	removeitem ITEM_FISH_FOOD_POISONED
	finditem ITEM_PRESSURE_GAUGE
	closemessage
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_ERNEST_THE_CHICKEN, SUB_QUEST_ERNESTTHECHICKEN_3
	end


SCRIPT_DraynorManor_Gravestone::
	msgbox SCRIPT_DraynorManor_Gravestone_Text_0
	closemessage
	checkitem ITEM_MAGICAL_CAGE, 1
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Gravestone_2
	end

SCRIPT_DraynorManor_Gravestone_2:
	msgbox SCRIPT_DraynorManor_Gravestone_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne SCRIPT_DraynorManor_Gravestone_4
	closemessage
	end

SCRIPT_DraynorManor_Gravestone_4:
	msgbox SCRIPT_DraynorManor_Gravestone_Text_2
	removeitem ITEM_MAGICAL_CAGE
	msgbox SCRIPT_DraynorManor_Gravestone_Text_3
	call EventScript_DraynorManor_ExExParrot
	msgbox SCRIPT_DraynorManor_Gravestone_Text_4
	closemessage
	end


EventScript_DraynorManor_ExExParrot::
	setvar VAR_TEMP_1, SPECIES_EXEXPARROT
	givemon SPECIES_EXEXPARROT, 5, ITEM_NONE
	compare VAR_RESULT, 0
	goto_if_eq EventScript_DraynorManor_SendParty_ExExParrot
	compare VAR_RESULT, 1
	goto_if_eq EventScript_DraynorManor_SendPC_ExExParrot
	goto Common_EventScript_NoMoreRoomForPokemon
	end


EventScript_DraynorManor_SendParty_ExExParrot::
	call EventScript_DraynorManor_ReceivedFanfare_ExExParrot
	msgbox EventScript_DraynorManor_SendParty_ExExParrot_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_DraynorManor_Received_ExExParrot
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto EventScript_DraynorManor_Received_ExExParrot
	end


EventScript_DraynorManor_SendPC_ExExParrot::
	call EventScript_DraynorManor_ReceivedFanfare_ExExParrot
	msgbox EventScript_DraynorManor_SendParty_ExExParrot_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EventScript_DraynorManor_TransferredToPC_ExExParrot
	call Common_EventScript_NameReceivedBoxMon
	goto EventScript_DraynorManor_TransferredToPC_ExExParrot
	end


EventScript_DraynorManor_TransferredToPC_ExExParrot::
	call Common_EventScript_TransferredToPC
	goto EventScript_DraynorManor_Received_ExExParrot
	end


EventScript_DraynorManor_ReceivedFanfare_ExExParrot::
	bufferspeciesname 1, SPECIES_EXEXPARROT
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 3
	playfanfare MUS_OBTAIN_ITEM
	msgbox EventScript_DraynorManor_ReceivedFanfare_ExExParrot_Text_0
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_EXEXPARROT
	return


EventScript_DraynorManor_Received_ExExParrot::
	releaseall
	return


NPC_DraynorManor_Oddenstein::
	lock
	faceplayer
	switch VAR_POKESCAPE_ERNEST_QUEST_STATE
	case 0, NPC_DraynorManor_Oddenstein_2
	case 1, NPC_DraynorManor_Oddenstein_3
	case 2, NPC_DraynorManor_Oddenstein_4
	case 3, NPC_DraynorManor_Oddenstein_5
	case 4, NPC_DraynorManor_Oddenstein_6
	return

NPC_DraynorManor_Oddenstein_2:
	namebox NPC_DraynorManor_Chicken_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_0
	msgbox NPC_DraynorManor_Oddenstein_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Oddenstein_7
	msgbox NPC_DraynorManor_Oddenstein_Text_7
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Oddenstein_3:
	namebox NPC_DraynorManor_Chicken_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Oddenstein_10
	msgbox NPC_DraynorManor_Oddenstein_Text_7
	hidenamebox
	release
	end

NPC_DraynorManor_Oddenstein_4:
	namebox NPC_DraynorManor_Chicken_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_14
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Oddenstein_5:
	namebox NPC_DraynorManor_Chicken_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_15
	hidenamebox
	closemessage
	special ChoosePartyMon
	waitstate
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	compare VAR_RESULT, SPECIES_EXEXPARROT
	goto_if_eq NPC_DraynorManor_Oddenstein_13
	namebox NPC_DraynorManor_Chicken_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_17
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Oddenstein_6:
	namebox NPC_DraynorManor_Chicken_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_18
	closemessage
	hidenamebox
	end

NPC_DraynorManor_Oddenstein_7:
	startquest QUEST_ERNEST_THE_CHICKEN
	msgbox NPC_DraynorManor_Oddenstein_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_3
	msgbox NPC_DraynorManor_Oddenstein_Text_4
	msgbox NPC_DraynorManor_Oddenstein_Text_5
	msgbox NPC_DraynorManor_Oddenstein_Text_6
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 1
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Oddenstein_10:
	msgbox NPC_DraynorManor_Oddenstein_Text_9
	call CooksAssistant_Check_OilCan
	call CooksAssistant_Check_PressureGauge
	call CooksAssistant_Check_RubberTube
	msgbox NPC_DraynorManor_Oddenstein_Text_10
	removeitem ITEM_OIL_CAN
	removeitem ITEM_PRESSURE_GAUGE
	removeitem ITEM_RUBBER_TUBE
	applymovement 1, MOVEMENT_DraynorManor_Oddenstein_1
	waitmovement 0
	msgbox NPC_DraynorManor_Oddenstein_Text_11
	applymovement 1, MOVEMENT_DraynorManor_Oddenstein_2
	waitmovement 0
	msgbox NPC_DraynorManor_Oddenstein_Text_12
	giveitem ITEM_MAGICAL_CAGE, 1
	msgbox NPC_DraynorManor_Oddenstein_Text_13
	hidenamebox
	closemessage
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 2
	release
	end

NPC_DraynorManor_Oddenstein_13:
	namebox NPC_DraynorManor_Chicken_Text_2
	msgbox NPC_DraynorManor_Oddenstein_Text_16
	hidenamebox
	closemessage
	giveitem ITEM_MINT_CAKE, 2
	setvar VAR_POKESCAPE_ERNEST_QUEST_STATE, 4
	release
	end


MOVEMENT_DraynorManor_Oddenstein_1:
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	step_end

MOVEMENT_DraynorManor_Oddenstein_2:
	walk_in_place_down
	walk_in_place_down
	walk_in_place_down
	face_player
	step_end

CooksAssistant_Check_OilCan::
	checkitem ITEM_OIL_CAN, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_Check_OilCan_1
	msgbox CooksAssistant_Check_OilCan_Text_1
	closemessage
	return

CooksAssistant_Check_OilCan_1:
	msgbox CooksAssistant_Check_OilCan_Text_0
	hidenamebox
	closemessage
	release
	end


CooksAssistant_Check_PressureGauge::
	checkitem ITEM_PRESSURE_GAUGE, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_Check_PressureGauge_1
	msgbox CooksAssistant_Check_PressureGauge_Text_1
	closemessage
	return

CooksAssistant_Check_PressureGauge_1:
	msgbox CooksAssistant_Check_PressureGauge_Text_0
	hidenamebox
	closemessage
	release
	end


CooksAssistant_Check_RubberTube::
	checkitem ITEM_RUBBER_TUBE, 1
	compare VAR_RESULT, 0
	goto_if_eq CooksAssistant_Check_RubberTube_1
	msgbox CooksAssistant_Check_RubberTube_Text_1
	closemessage
	return

CooksAssistant_Check_RubberTube_1:
	msgbox CooksAssistant_Check_RubberTube_Text_0
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Fisherman::
	lock
	faceplayer
	checkitem ITEM_PRESSURE_GAUGE, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Fisherman_2
	checkitem ITEM_FISH_FOOD_POISONED, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Fisherman_5
	checkitem ITEM_FISH_FOOD, 1
	compare VAR_RESULT, 0
	goto_if_ne NPC_DraynorManor_Fisherman_7
	switch VAR_POKESCAPE_ERNEST_QUEST_STATE
	case 0, NPC_DraynorManor_Fisherman_11
	case 1, NPC_DraynorManor_Fisherman_12
	case 2, NPC_DraynorManor_Fisherman_13
	case 3, NPC_DraynorManor_Fisherman_13
	case 4, NPC_DraynorManor_Fisherman_13
	return

NPC_DraynorManor_Fisherman_2:
	msgbox NPC_DraynorManor_Fisherman_Text_0
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Fisherman_5:
	msgbox NPC_DraynorManor_Fisherman_Text_1
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Fisherman_7:
	msgbox NPC_DraynorManor_Fisherman_Text_2
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Fisherman_11:
	msgbox NPC_DraynorManor_Fisherman_Text_3
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Fisherman_12:
	msgbox NPC_DraynorManor_Fisherman_Text_4
	hidenamebox
	closemessage
	release
	end

NPC_DraynorManor_Fisherman_13:
	msgbox NPC_DraynorManor_Fisherman_Text_5
	hidenamebox
	closemessage
	release
	end


NPC_DraynorManor_Chicken_Text_0:
	.string "Chicken$"

NPC_DraynorManor_Chicken_Text_1:
	.string "BWawkrk!$"

NPC_DraynorManor_Chicken_Text_2:
	.string "Prof.Oddenstein$"

NPC_DraynorManor_Chicken_Text_3:
	.string "Oh that?\p"
	.string "I call that an Ernest Chicken!\p"
	.string "I named it this breed after its father.\p"
	.string "Basically I turned this guy called\n"
	.string "Ernest into a chicken, he laid some\l"
	.string "eggs and these chickens are what\l"
	.string "hatched from them.$"

SCRIPT_DraynorManor_Poison_Text_0:
	.string "You search the shelves…{PAUSE 15} …{PAUSE 15}\p"
	.string "You find a bunch of products labeled\n"
	.string "with a skull and bones.$"

SCRIPT_DraynorManor_Poison_Text_1:
	.string "Would you like to mix it them with the\n"
	.string "Fish Food?$"

SCRIPT_DraynorManor_Poison_Text_2:
	.string "You mix the poison in with the Fish\n"
	.string "Food.$"

SCRIPT_DraynorManor_Fountain_Text_0:
	.string "There appears to be a lot of piranha in\n"
	.string "there.$"

SCRIPT_DraynorManor_Fountain_Text_1:
	.string "Would you like to use FISH FOOD P++?$"

SCRIPT_DraynorManor_Fountain_Text_2:
	.string "Seeing the piranhas in the fountain you\n"
	.string "throw the fish food into the fountain.$"

SCRIPT_DraynorManor_Gravestone_Text_0:
	.string "It is a gravestone.\p"
	.string "It reads 'here lies Polly'.$"

SCRIPT_DraynorManor_Gravestone_Text_1:
	.string "Would you like to dig up Polly?$"

SCRIPT_DraynorManor_Gravestone_Text_2:
	.string "You dig up the corpse of an ex-parrot.\p"
	.string "You place the body in the cage.\p"
	.string "…{PAUSE 15} …{PAUSE 15} The cage begins to glow.$"

SCRIPT_DraynorManor_Gravestone_Text_3:
	.string "The ex-parrot comes to life!$"

SCRIPT_DraynorManor_Gravestone_Text_4:
	.string "You should show Prof.Oddenstein.$"

EventScript_DraynorManor_SendParty_ExExParrot_Text_0:
	.string "Would you like to give your monster a\n"
	.string "nickname?$"

EventScript_DraynorManor_ReceivedFanfare_ExExParrot_Text_0:
	.string "{PLAYER} obtained a {STR_VAR_2}.$"

NPC_DraynorManor_Oddenstein_Text_0:
	.string "Hello there, you seem to be an\n"
	.string "adventurer.\p"
	.string "I have a new experiment!\p"
	.string "I want to bring something back to life!$"

NPC_DraynorManor_Oddenstein_Text_1:
	.string "Would you like to assist me?$"

NPC_DraynorManor_Oddenstein_Text_2:
	.string "I need a few items for my experiment to\n"
	.string "succeed can you go get me them?\p"
	.string "I need a Oil Can, Pressure Gauge and\n"
	.string "Rubber Tube.$"

NPC_DraynorManor_Oddenstein_Text_3:
	.string "The Oil Can should be somewhere in the\n"
	.string "basement.$"

NPC_DraynorManor_Oddenstein_Text_4:
	.string "I believe the last place I saw the\n"
	.string "Pressure Gauge was outside in the\l"
	.string "fountain.$"

NPC_DraynorManor_Oddenstein_Text_5:
	.string "As I recall McBoneFace borrowed the\n"
	.string "Rubber Tube, he should be in his room.$"

NPC_DraynorManor_Oddenstein_Text_6:
	.string "Alright off you go my assistant!\p"
	.string "I cannot do this experiment without\n"
	.string "those items!$"

NPC_DraynorManor_Oddenstein_Text_7:
	.string "Shame.$"

NPC_DraynorManor_Oddenstein_Text_8:
	.string "Have you found the parts?$"

NPC_DraynorManor_Oddenstein_Text_9:
	.string "Let me check…$"

NPC_DraynorManor_Oddenstein_Text_10:
	.string "It looks like you have everything!\p"
	.string "Allow me to take those off your hands.$"

NPC_DraynorManor_Oddenstein_Text_11:
	.string "… {PAUSE 15}Just a few more adjustments…$"

NPC_DraynorManor_Oddenstein_Text_12:
	.string "Done!\p"
	.string "Here take this.$"

NPC_DraynorManor_Oddenstein_Text_13:
	.string "All we need now is a dead bird.\p"
	.string "Go dig up old polly and put her inside\n"
	.string "that cage!\p"
	.string "I buried her out the back by the\n"
	.string "gravestone.$"

NPC_DraynorManor_Oddenstein_Text_14:
	.string "Go dig up old polly and put her inside\n"
	.string "that cage!\p"
	.string "I buried her out the back by the\n"
	.string "gravestone.$"

NPC_DraynorManor_Oddenstein_Text_15:
	.string "Welcome back!\p"
	.string "What is that?\p"
	.string "You say it worked!?\p"
	.string "Show me Polly!$"

NPC_DraynorManor_Oddenstein_Text_16:
	.string "OLD POLLY!\p"
	.string "She lives!\p"
	.string "This is a fantastic breakthrough!\p"
	.string "Oh, it seems Polly would like to go on\n"
	.string "one last adventure.\p"
	.string "Very well take her with you but check\n"
	.string "back in from time to time!\p"
	.string "Thank you for assisting me!\p"
	.string "Also please take this as a reward for\n"
	.string "helping me.$"

NPC_DraynorManor_Oddenstein_Text_17:
	.string "That's not Polly…$"

NPC_DraynorManor_Oddenstein_Text_18:
	.string "How is Polly doing?$"

CooksAssistant_Check_OilCan_Text_0:
	.string "You don't have the Oil Can.\p"
	.string "It should be somewhere in the basement.$"

CooksAssistant_Check_OilCan_Text_1:
	.string "You have the Oil Can!$"

CooksAssistant_Check_PressureGauge_Text_0:
	.string "You don't have the Pressure Gauge.\p"
	.string "I believe the last place I saw that was\n"
	.string "outside in the fountain.$"

CooksAssistant_Check_PressureGauge_Text_1:
	.string "You have the Pressure Gauge!$"

CooksAssistant_Check_RubberTube_Text_0:
	.string "You don't have the Rubber Tube.\p"
	.string "As I recall McBoneFace borrowed it last.$"

CooksAssistant_Check_RubberTube_Text_1:
	.string "You have the Rubber Tube!$"

NPC_DraynorManor_Fisherman_Text_0:
	.string "Why did you do that?\p"
	.string "I just wanted to fish for piranhas.$"

NPC_DraynorManor_Fisherman_Text_1:
	.string "Hey, that fish food looks ominous.\p"
	.string "What are you planning to do?\p"
	.string "…{PAUSE 15}Murder the fish?$"

NPC_DraynorManor_Fisherman_Text_2:
	.string "Where did you get that fish food from?\p"
	.string "Hopefully you didn't get it from the\n"
	.string "Kitchen, theres a bunch of poisons in\l"
	.string "there.$"

NPC_DraynorManor_Fisherman_Text_3:
	.string "Rumours say there is a rare fish called\n"
	.string "piranha in this fountain.$"

NPC_DraynorManor_Fisherman_Text_4:
	.string "The fish are looking a bit hungry.$"

NPC_DraynorManor_Fisherman_Text_5:
	.string "The piranhas went extinct…$"
