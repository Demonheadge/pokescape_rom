Draynor_House_WoM_2F_MapScripts::
	.byte 0


WOM_BED::
	lock
	msgbox WOM_BED_Text_0
	release
	end


WOM_BED_Text_0:
	.string "It's a fairly ordinary bed, but...\p"
	.string "{PAUSE 15}Was that a hand!?\p"
	.string "You decide it's best not to try to sleep\n"
	.string "in this bed.$"
