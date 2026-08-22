PalletTown_TitosHouse_MapScripts::
	.byte 0


PalletTown_Tito_HeadingToMuseum::
# 4 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 5 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_Tito_HeadingToMuseum_Text_0
# 9 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return


PalletTown_Tito_RomHack::
# 13 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 14 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_Tito_RomHack_Text_0
# 16 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return


PalletTown_EventScript_SecretMon::
# 20 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 21 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_0x408C, 2
	goto_if_eq PalletTown_EventScript_SecretMon_2
# 23 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_0x408C, 0
	goto_if_eq PalletTown_EventScript_SecretMon_3
# 27 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_2, MSGBOX_YESNO
# 29 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PalletTown_EventScript_SecretMon_7
# 43 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_5
PalletTown_EventScript_SecretMon_1:
# 46 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return

PalletTown_EventScript_SecretMon_2:
# 22 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_0
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_3:
# 24 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_1
# 25 "data/maps/PalletTown_TitosHouse/scripts.pory"
	setvar VAR_0x408C, 1
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_7:
# 30 "data/maps/PalletTown_TitosHouse/scripts.pory"
	givemon SPECIES_MEOWTH_GALAR, 5
# 31 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PalletTown_EventScript_SecretMon_10
# 36 "data/maps/PalletTown_TitosHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PalletTown_EventScript_SecretMon_11
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_10:
# 32 "data/maps/PalletTown_TitosHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 33 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_3
# 34 "data/maps/PalletTown_TitosHouse/scripts.pory"
	setvar VAR_0x408C, 2
	goto PalletTown_EventScript_SecretMon_1

PalletTown_EventScript_SecretMon_11:
# 37 "data/maps/PalletTown_TitosHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_EventScript_SecretMon_Text_4
# 40 "data/maps/PalletTown_TitosHouse/scripts.pory"
	setvar VAR_0x408C, 2
	goto PalletTown_EventScript_SecretMon_1


PalletTown_Tito_PJsBall::
# 50 "data/maps/PalletTown_TitosHouse/scripts.pory"
	lockall
# 51 "data/maps/PalletTown_TitosHouse/scripts.pory"
	msgbox PalletTown_Tito_PJsBall_Text_0
# 53 "data/maps/PalletTown_TitosHouse/scripts.pory"
	releaseall
	return


PalletTown_Tito_HeadingToMuseum_Text_0:
# 5 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Tito: Hi {PLAYER}!\n"
	.string "PJ and I are heading out to the.\n"
	.string "Museum in Pewter City soon!\p"
	.string "Maybe we'll see you there!$"

PalletTown_Tito_RomHack_Text_0:
# 14 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Woah!\n"
	.string "This rom hack took how many hours??$"

PalletTown_EventScript_SecretMon_Text_0:
# 22 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "It really is empty now.$"

PalletTown_EventScript_SecretMon_Text_1:
# 24 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Looks like an empty cabinet.$"

PalletTown_EventScript_SecretMon_Text_2:
# 27 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Looks like a Poke Ball is wedged inside!\n"
	.string "Would you like to take it out?$"

PalletTown_EventScript_SecretMon_Text_3:
# 33 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "You received a Galarian Meowth!$"

PalletTown_EventScript_SecretMon_Text_4:
# 38 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Your party is full.\n"
	.string "The Pokemon was sent to your PC.$"

PalletTown_EventScript_SecretMon_Text_5:
# 43 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "Better to leave the Ball in the cabinet.$"

PalletTown_Tito_PJsBall_Text_0:
# 51 "data/maps/PalletTown_TitosHouse/scripts.pory"
	.string "It's a Pokéball containing\n"
	.string "Tito's Pokémon: PJ!$"
