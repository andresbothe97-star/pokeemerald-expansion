PalletTown_PlayersHouse_1F_Frlg_MapScripts::
	.byte 0

PalletTown_PlayersHouse_1F_EventScript_Mom::
	lock
	faceplayer
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_1F_EventScript_MomHeal
	checkplayergender
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale
	closemessage
	applymovement LOCALID_PLAYERS_HOUSE_1F_MOM, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouMale::
	msgbox PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou
	return

PalletTown_PlayersHouse_1F_EventScript_MomOakLookingForYouFemale::
	msgbox PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou
	return

PalletTown_PlayersHouse_1F_EventScript_MomHeal::
	msgbox PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	goto_if_unset FLAG_EASY_MODE, PalletTown_PlayersHouse_1F_EventScript_Easier
	msgbox PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare
	release
	end

PalletTown_PlayersHouse_1F_EventScript_Easier::
	msgbox PalletTown_PlayersHouse_1F_Text_IsItTooHard
	multichoice 19, 8, MULTI_YESNO, FALSE | (TRUE << 1)
	switch VAR_RESULT
	case 0, PalletTown_PlayersHouse_1F_EventScript_TooHardYesFirst
	case 1, PalletTown_PlayersHouse_1F_EventScript_TooHardNo
	case MULTI_B_PRESSED, PalletTown_PlayersHouse_1F_EventScript_TooHardNo
	end

PalletTown_PlayersHouse_1F_EventScript_TooHardYesFirst::
	msgbox PalletTown_PlayersHouse_1F_Text_YesAreYouSure
	multichoice 19, 8, MULTI_YESNO, FALSE | (TRUE << 1)
	switch VAR_RESULT
	case 0, PalletTown_PlayersHouse_1F_EventScript_TooHardYesFinal
	case 1, PalletTown_PlayersHouse_1F_EventScript_TooHardNo
	case MULTI_B_PRESSED, PalletTown_PlayersHouse_1F_EventScript_TooHardNo
	end

PalletTown_PlayersHouse_1F_EventScript_TooHardYesFinal::
	playfanfare MUS_LEVEL_UP
	waitfanfare
	msgbox PalletTown_PlayersHouse_1F_Text_EasyModeEngaged
	setflag FLAG_EASY_MODE
	release
	end

PalletTown_PlayersHouse_1F_EventScript_TooHardNo::
	msgbox PalletTown_PlayersHouse_1F_Text_EasyModeOkayComeBack
	release
	end

@ Displays special text if interacted with from side or back (which are normally inaccessible)
PalletTown_PlayersHouse_1F_EventScript_TV::
	lockall
	goto_if_eq VAR_FACING, DIR_NORTH, PalletTown_PlayersHouse_1F_EventScript_TVScreen
	msgbox PalletTown_PlayersHouse_1F_Text_OopsWrongSide
	releaseall
	end

PalletTown_PlayersHouse_1F_EventScript_TVScreen::
	checkplayergender
	call_if_eq VAR_RESULT, MALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
	call_if_eq VAR_RESULT, FEMALE, PalletTown_PlayersHouse_1F_EventScript_TVScreenMale
	releaseall
	end

PalletTown_PlayersHouse_1F_EventScript_TVScreenMale::
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad
	return

PalletTown_PlayersHouse_1F_EventScript_TVScreenFemale::
	msgbox PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad
	return

PalletTown_PlayersHouse_1F_Text_AllBoysLeaveOakLookingForYou::
	.string "MOM: …Right.\n"
	.string "All boys leave home someday.\l"
	.string "It said so on TV.\p"
	.string "Oh, yes. PROF. OAK, next door, was\n"
	.string "looking for you.$"

PalletTown_PlayersHouse_1F_Text_AllGirlsLeaveOakLookingForYou::
	.string "MOM: …Right.\n"
	.string "All boys leave home someday.\l"
	.string "It said so on TV.\p"
	.string "Oh, yes. PROF. OAK, next door, was\n"
	.string "looking for you.$"

PalletTown_PlayersHouse_1F_Text_YouShouldTakeQuickRest::
	.string "MOM: {PLAYER}!\n"
	.string "You should take a quick rest.$"

PalletTown_PlayersHouse_1F_Text_LookingGreatTakeCare::
	.string "MOM: Oh, good! You and your\n"
	.string "POKéMON are looking great.\l"
	.string "Take care now!$"

PalletTown_PlayersHouse_1F_Text_MovieOnTVFourBoysOnRailroad::
	.string "The Slow Brogan experience is on!\n"
	.string "Owch! I think I lost some IQ!$"

PalletTown_PlayersHouse_1F_Text_MovieOnTVGirlOnBrickRoad::
	.string "There's a movie on TV.\n"
	.string "A girl with her hair in pigtails is\l"
	.string "walking up a brick road.\p"
	.string "…I better go, too.$"

PalletTown_PlayersHouse_1F_Text_OopsWrongSide::
	.string "Oops, wrong side…$"

PalletTown_PlayersHouse_1F_Text_IsItTooHard::
	.string "If you are finding this too difficult,\n"
	.string "I can give you my insurance card.\l"
	.string "You'd be able to revive your Pokemon.\p"
	.string "Is this something you'd want?$"

PalletTown_PlayersHouse_1F_Text_YesAreYouSure::
	.string "If you agree to take my insurance,\n"
	.string "You will not be able to give it back.\p"
	.string "Of course it does not cover\n"
	.string "Preexisting conditions.\p"
	.string "Are you sure you want to take this?$"

PalletTown_PlayersHouse_1F_Text_EasyModeEngaged::
	.string "Golden HMO Card Received!$"

PalletTown_PlayersHouse_1F_Text_EasyModeOkayComeBack::
	.string "Okay. If you decide you need my help\n"
	.string "Come back and let me know!$"