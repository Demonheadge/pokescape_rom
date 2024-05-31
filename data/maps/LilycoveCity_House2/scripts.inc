LilycoveCity_House2_MapScripts::
	.byte 0

LilycoveCity_House2_EventScript_FatMan::
	end

LilycoveCity_House2_EventScript_ReceivedRest::
	msgbox LilycoveCity_House2_Text_SleepIsEssential, MSGBOX_DEFAULT
	release
	end

LilycoveCity_House2_Text_NotAwakeYetHaveThis:
	.string "Huh? What? What's that?\p"
	.string "I'm not near awake yet…\n"
	.string "You can have this…$"

LilycoveCity_House2_Text_SleepIsEssential:
	.string "Yawn…\p"
	.string "Sleep is essential for good health…\n"
	.string "Sleep and regain health…$"
