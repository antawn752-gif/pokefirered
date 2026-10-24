PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
	lockall
	goto_if_set FLAG_SYS_POKEMON_GET, PalletTown_ProfessorOaksLab_EventScript_AlreadyReceivedMon
	textcolor NPC_TEXT_COLOR_MALE
	fadeoutbgm 0
	playse SE_SELECT
	special SetOakLabBallOnTableGraphics
	handle_component_camera
	showmonpic SPECIES_PICHU, 10, 3
	msgbox PalletTown_Text_DoYouWantPichu, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DontChooseMon
	givemon SPECIES_PICHU, 5, ITEM_NONE
	setvar PLAYER_STARTER_NUM, 1
	setvar PLAYER_STARTER_SPECIES, SPECIES_PICHU
	setvar RIVAL_STARTER_SPECIES, SPECIES_LARVITAR
	setvar RIVAL_STARTER_ID, 2
	setflag FLAG_GOT_PICHU_FROM_OAK
	goto PalletTown_ProfessorOaksLab_EventScript_GiveStarterMon
	end

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
	lockall
	goto_if_set FLAG_SYS_POKEMON_GET, PalletTown_ProfessorOaksLab_EventScript_AlreadyReceivedMon
	textcolor NPC_TEXT_COLOR_MALE
	fadeoutbgm 0
	playse SE_SELECT
	special SetOakLabBallOnTableGraphics
	handle_component_camera
	showmonpic SPECIES_LARVITAR, 10, 3
	msgbox PalletTown_Text_DoYouWantLarvitar, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DontChooseMon
	givemon SPECIES_LARVITAR, 5, ITEM_NONE
	setvar PLAYER_STARTER_NUM, 2
	setvar PLAYER_STARTER_SPECIES, SPECIES_LARVITAR
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
	setvar RIVAL_STARTER_ID, 3
	setflag FLAG_GOT_LARVITAR_FROM_OAK
	goto PalletTown_ProfessorOaksLab_EventScript_GiveStarterMon
	end

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
	lockall
	goto_if_set FLAG_SYS_POKEMON_GET, PalletTown_ProfessorOaksLab_EventScript_AlreadyReceivedMon
	textcolor NPC_TEXT_COLOR_MALE
	fadeoutbgm 0
	playse SE_SELECT
	special SetOakLabBallOnTableGraphics
	handle_component_camera
	showmonpic SPECIES_CHARMANDER, 10, 3
	msgbox PalletTown_Text_DoYouWantCharmander, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DontChooseMon
	givemon SPECIES_CHARMANDER, 5, ITEM_NONE
	setvar PLAYER_STARTER_NUM, 3
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
	setvar RIVAL_STARTER_SPECIES, SPECIES_PICHU
	setvar RIVAL_STARTER_ID, 1
	setflag FLAG_GOT_CHARMANDER_FROM_OAK
	goto PalletTown_ProfessorOaksLab_EventScript_GiveStarterMon
	end
