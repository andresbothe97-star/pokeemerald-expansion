PalletTown_TitosHouse_MapScripts::
	.byte 0


PalletTown_Tito_WhereIsPJ::
# 4 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 5 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_Tito_WhereIsPJ_Text_0
# 8 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return


PalletTown_Tito_RomHack::
# 12 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 13 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_Tito_RomHack_Text_0
# 15 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return


PalletTown_EventScript_SecretMon::
# 19 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 20 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_0x408C, 2
	goto_if_eq PalletTown_EventScript_SecretMon_2
# 22 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_0x408C, 0
	goto_if_eq PalletTown_EventScript_SecretMon_3
# 26 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_2, MSGBOX_YESNO
# 28 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PalletTown_EventScript_SecretMon_7
# 42 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_5
PalletTown_EventScript_SecretMon_1:
# 45 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return

PalletTown_EventScript_SecretMon_2:
# 21 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_0
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_3:
# 23 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_1
# 24 "data/maps/PalletTown_TitosHouse/scripts.pory"
	setvar VAR_0x408C, 1
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_7:
# 29 "data/maps/PalletTown_TitosHouse/scripts.pory"
	givemon SPECIES_MEOWTH_GALAR, 5
# 30 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PalletTown_EventScript_SecretMon_10
# 35 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PalletTown_EventScript_SecretMon_11
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_10:
# 31 "data/maps/PalletTown_TitosHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 32 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_3
# 33 "data/maps/PalletTown_TitosHouse/scripts.pory"
	setvar VAR_0x408C, 2
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_11:
# 36 "data/maps/PalletTown_TitosHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 37 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_4
# 39 "data/maps/PalletTown_TitosHouse/scripts.pory"
	setvar VAR_0x408C, 2
	goto PalletTown_EventScript_SecretMon_1


PalletTown_Tito_WhereIsPJ_Text_0:
# 5 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Tito: Have you seen PJ?\n"
	.string "I can't seem to find him anywhere.\n"
	.string "I hope he's not lost.$"

PalletTown_Tito_RomHack_Text_0:
# 13 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Woah!\n"
	.string "This rom hack took how many hours??$"

PalletTown_EventScript_SecretMon_Text_0:
# 21 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "It really is empty now.$"

PalletTown_EventScript_SecretMon_Text_1:
# 23 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Looks like an empty cabinet.$"

PalletTown_EventScript_SecretMon_Text_2:
# 26 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Looks like a Poke Ball is wedged inside!\n"
	.string "Would you like to take it out?$"

PalletTown_EventScript_SecretMon_Text_3:
# 32 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "You received a Galarian Meowth!$"

PalletTown_EventScript_SecretMon_Text_4:
# 37 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Your party is full.\n"
	.string "The Pokemon was sent to your PC.$"

PalletTown_EventScript_SecretMon_Text_5:
# 42 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Better to leave the Ball in the cabinet.$"
