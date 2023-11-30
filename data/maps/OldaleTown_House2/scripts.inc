OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_Woman, MSGBOX_NPC
	end

OldaleTown_House2_Text_Woman:
	.string "I'm sorry about my husband..$'"

OldaleTown_House2_EventScript_Man::
	trainerbattle_single TRAINER_BILL, ManIntro, ManOutro
	msgbox PostBattle_Man, MSGBOX_AUTOCLOSE
	waitmessage
	end


ManIntro::
	.string "Who are you? What are you doing here?$"

ManOutro::
	.string "Kids these days...$"

PostBattle_Man::
	.string "Get out of my house$"
