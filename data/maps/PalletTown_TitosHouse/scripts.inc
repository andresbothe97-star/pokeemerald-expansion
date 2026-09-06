PalletTown_TitosHouse_MapScripts::
# 2 "data/maps/PalletTown_TitosHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_TitosHouse_TitoLeft
	.byte 0


PalletTown_TitosHouse_TitoLeft::
# 6 "data/maps/PalletTown_TitosHouse/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PalletTown_TitosHouse_TitoLeft_1
	return

PalletTown_TitosHouse_TitoLeft_1:
# 7 "data/maps/PalletTown_TitosHouse/scripts.pory"
	removeobject LOCALID_PJBALL
# 8 "data/maps/PalletTown_TitosHouse/scripts.pory"
	removeobject LOCAL_ID_PALLETTOWN_TITO
	return


PalletTown_Tito_HeadingToMuseum::
# 13 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 14 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_Tito_HeadingToMuseum_Text_0
# 18 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return


PalletTown_Tito_RomHack::
# 22 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 23 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_Tito_RomHack_Text_0
# 25 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return


PalletTown_EventScript_SecretMon::
# 29 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 30 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_0x408C, 2
	goto_if_eq PalletTown_EventScript_SecretMon_2
# 32 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_0x408C, 0
	goto_if_eq PalletTown_EventScript_SecretMon_3
# 36 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_2, MSGBOX_YESNO
# 38 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PalletTown_EventScript_SecretMon_7
# 52 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_5
PalletTown_EventScript_SecretMon_1:
# 55 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return

PalletTown_EventScript_SecretMon_2:
# 31 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_0
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_3:
# 33 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_1
# 34 "data/maps/PalletTown_TitosHouse/scripts.pory"
	setvar VAR_0x408C, 1
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_7:
# 39 "data/maps/PalletTown_TitosHouse/scripts.pory"
	givemon SPECIES_MEOWTH_GALAR, 5
# 40 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PalletTown_EventScript_SecretMon_10
# 45 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PalletTown_EventScript_SecretMon_11
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_10:
# 41 "data/maps/PalletTown_TitosHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 42 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_3
# 43 "data/maps/PalletTown_TitosHouse/scripts.pory"
	setvar VAR_0x408C, 2
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_11:
# 46 "data/maps/PalletTown_TitosHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 47 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_4
# 49 "data/maps/PalletTown_TitosHouse/scripts.pory"
	setvar VAR_0x408C, 2
	goto PalletTown_EventScript_SecretMon_1


PalletTown_Tito_PJsBall::
# 59 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 60 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_Tito_PJsBall_Text_0
# 62 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return


PalletTown_Tito_HeadingToMuseum_Text_0:
# 14 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Tito: Hi {PLAYER}!\n"
	.string "PJ and I are heading out to the\p"
	.string "Museum in Pewter City soon!\n"
	.string "Maybe we'll see you there?$"

PalletTown_Tito_RomHack_Text_0:
# 23 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Woah!\n"
	.string "This rom hack took how many hours??$"

PalletTown_EventScript_SecretMon_Text_0:
# 31 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "It really is empty now.$"

PalletTown_EventScript_SecretMon_Text_1:
# 33 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Looks like an empty cabinet.$"

PalletTown_EventScript_SecretMon_Text_2:
# 36 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Looks like a Poke Ball is wedged inside!\n"
	.string "Would you like to take it out?$"

PalletTown_EventScript_SecretMon_Text_3:
# 42 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "You received a Galarian Meowth!$"

PalletTown_EventScript_SecretMon_Text_4:
# 47 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Your party is full.\n"
	.string "The Pokemon was sent to your PC.$"

PalletTown_EventScript_SecretMon_Text_5:
# 52 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Better to leave the Ball in the cabinet.$"

PalletTown_Tito_PJsBall_Text_0:
# 60 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "It's a Pokéball containing\n"
	.string "Tito's Pokémon: PJ!$"
