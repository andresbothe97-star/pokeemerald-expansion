# 1 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
# 3 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 4 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3

PalletTown_ProfessorOaksLab_Frlg_MapScripts::
# 7 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 8 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PalletTown_ProfessorOaksLab_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 9 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 0, Get_Ready_To_Move
	.2byte 0


PalletTown_ProfessorOaksLab_OnTransition::
# 14 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 15 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 0
	goto_if_eq PalletTown_ProfessorOaksLab_OnTransition_1
	return

PalletTown_ProfessorOaksLab_OnTransition_1:
# 16 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxy LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 17 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
	return


Get_Ready_To_Move::
# 22 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_OAK_ENTRANCE_SCENE
# 23 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 25 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxy LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 26 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_OAK_POSITIONING
# 27 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
	return


# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
MOVEMENT_OAK_ENTRANCE_SCENE:
# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
	step_end

# 34 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
MOVEMENT_OAK_POSITIONING:
# 35 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	face_down
	step_end

PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 39 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 40 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_2
PalletTown_ProfessorOaksLab_EventScript_ProfOak_1:
# 44 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_5
PalletTown_ProfessorOaksLab_EventScript_ProfOak_4:
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_8
PalletTown_ProfessorOaksLab_EventScript_ProfOak_7:
# 50 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return

PalletTown_ProfessorOaksLab_EventScript_ProfOak_2:
# 42 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Dialogue
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1

PalletTown_ProfessorOaksLab_EventScript_ProfOak_5:
# 45 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Go_On_Pick
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_4

PalletTown_ProfessorOaksLab_EventScript_ProfOak_8:
# 48 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Make_Me_Proud
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_7


Starter_Dialogue::
# 55 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 56 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Dialogue_Text_0
# 64 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 65 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Go_On_Pick::
# 69 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 70 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Go_On_Pick_Text_0
# 71 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Lastly_Dialogue::
# 75 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 76 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 77 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 78 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 79 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Lastly_Dialogue_Text_0
# 81 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 88 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 89 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_2
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1:
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_0
# 94 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 95 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 96 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Confirmation_Scene
	return

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_2:
# 90 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Balls_On_Table
	goto PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1


PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_2
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1:
# 105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_Text_0
# 107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Confirmation_Scene
	return

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_2:
# 103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Balls_On_Table
	goto PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_2
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1:
# 118 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_Text_0
# 120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Confirmation_Scene
	return

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_2:
# 116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Balls_On_Table
	goto PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1


Starter_Confirmation_Scene::
# 126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_0, MSGBOX_YESNO
# 128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Starter_Confirmation_Scene_2
# 155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_3
Starter_Confirmation_Scene_1:
# 158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end

Starter_Confirmation_Scene_2:
# 129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 10
# 130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_MILTANK
# 131 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Confirmation_Scene_5
# 140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Confirmation_Scene_6
# 150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_2
	goto Starter_Confirmation_Scene_1

Starter_Confirmation_Scene_5:
# 132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_1
# 134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Disappear
# 136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call NicknamePartyMon
# 137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Lastly_Dialogue
	goto Starter_Confirmation_Scene_1

Starter_Confirmation_Scene_6:
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_1
# 143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Disappear
# 145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call NicknameBoxMon
# 146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Lastly_Dialogue
	goto Starter_Confirmation_Scene_1


Disappear::
# 164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_LAST_TALKED, LOCALID_CHARMANDER_BALL
	goto_if_eq Disappear_2
# 168 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_LAST_TALKED, LOCALID_BULBASAUR_BALL
	goto_if_eq Disappear_5
# 172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_LAST_TALKED, LOCALID_SQUIRTLE_BALL
	goto_if_eq Disappear_8
	return

Disappear_2:
# 165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_HIDE_CHARMANDER_BALL
	return

Disappear_5:
# 169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_HIDE_BULBASAUR_BALL
	return

Disappear_8:
# 173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_HIDE_SQUIRTLE_BALL
	return


NicknamePartyMon::
# 181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 184 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 185 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Balls_On_Table::
# 199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Balls_On_Table_Text_0
# 201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Balls_And_Dexes::
# 205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
	goto_if_ne Balls_And_Dexes_2
# 211 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
	goto_if_eq Balls_And_Dexes_4
	return

Balls_And_Dexes_2:
# 207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Balls_And_Dexes_Text_0
# 208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end

Balls_And_Dexes_4:
# 212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Balls_And_Dexes_Text_1
# 213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 217 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 218 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special SetUnlockedPokedexFlags
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special EnableNationalPokedex
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg Balls_And_Dexes_Text_2, ITEM_POKE_BALL, 30
# 223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Final_Dialogue
	return


Final_Dialogue::
# 229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Final_Dialogue_Text_0
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Make_Me_Proud::
# 236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Make_Me_Proud_Text_0
# 238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Starter_Dialogue_Text_0:
# 56 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: {PLAYER}!\n"
	.string "I think you're finally old enough.\p"
	.string "Now that you're in your 30s,\n"
	.string "you need your very own Pokemon!\p"
	.string "{RIVAL} was up before you\n"
	.string "and Tito has PJ.\p"
	.string "So they already have their Pokemon.\n"
	.string "But please, take your pick!\n$"

Go_On_Pick_Text_0:
# 70 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Go on! Take a pick!$"

Lastly_Dialogue_Text_0:
# 79 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: Oh! I have one more gift for you!\p"
	.string "Take a look inside that box next me.$"

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_0:
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ahh, I see you've chosen Bulbasaur!$"

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_Text_0:
# 106 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ahh, I see you've chosen Squirtle!$"

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_Text_0:
# 119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ahh, I see you've chosen Charmander!$"

Starter_Confirmation_Scene_Text_0:
# 127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: So this is the one you want, eh?$"

Starter_Confirmation_Scene_Text_1:
# 133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Received the Pokemon!$"

Starter_Confirmation_Scene_Text_2:
# 151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "No more Room.$"

Starter_Confirmation_Scene_Text_3:
# 156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Okay, so not that one?$"

NicknamePartyMon_Text_0:
# 181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Give it a nickname?$"

Balls_On_Table_Text_0:
# 200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A dusty pokeball on the table.$"

Balls_And_Dexes_Text_0:
# 207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A simple cardboard box.$"

Balls_And_Dexes_Text_1:
# 212 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A Pokedex, running shoes and map!$"

Balls_And_Dexes_Text_2:
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "And 30 Pokeballs!$"

Final_Dialogue_Text_0:
# 230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: I hope these little trifles\n"
	.string "can help you on your adventure!\n$"

Make_Me_Proud_Text_0:
# 237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: Go on and have an adventure!\n$"
