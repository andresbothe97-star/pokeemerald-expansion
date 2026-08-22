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
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
	return


Get_Ready_To_Move::
# 21 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_OAK_ENTRANCE_SCENE
# 22 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 24 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 25 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_OAK_POSITIONING
# 26 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
	return


# 29 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
MOVEMENT_OAK_ENTRANCE_SCENE:
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 30 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	face_down
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
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_8
PalletTown_ProfessorOaksLab_EventScript_ProfOak_7:
# 50 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_11
PalletTown_ProfessorOaksLab_EventScript_ProfOak_10:
# 53 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
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
	goto Whats_In_The_Box
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_7

PalletTown_ProfessorOaksLab_EventScript_ProfOak_11:
# 51 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Make_Me_Proud
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_10


Starter_Dialogue::
# 58 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 59 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Dialogue_Text_0
# 67 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 68 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 69 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Go_On_Pick::
# 73 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 74 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Go_On_Pick_Text_0
# 75 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Whats_In_The_Box::
# 79 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 80 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Whats_In_The_Box_Text_0
# 81 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Lastly_Dialogue::
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 86 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 87 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 88 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 89 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 90 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Lastly_Dialogue_Text_0
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 97 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 98 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_2
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1:
# 101 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_0
# 103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Confirmation_Scene
	return

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_2:
# 99 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Balls_On_Table
	goto PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1


PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_2
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1:
# 113 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_Text_0
# 115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Confirmation_Scene
	return

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_2:
# 111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Balls_On_Table
	goto PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_2
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1:
# 126 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_Text_0
# 128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Confirmation_Scene
	return

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_2:
# 124 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Balls_On_Table
	goto PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1


Starter_Confirmation_Scene::
# 134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_0, MSGBOX_YESNO
# 136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Starter_Confirmation_Scene_2
# 163 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_3
Starter_Confirmation_Scene_1:
# 166 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 167 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end

Starter_Confirmation_Scene_2:
# 137 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 10
# 138 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_MILTANK
# 139 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Confirmation_Scene_5
# 148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Confirmation_Scene_6
# 158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_2
	goto Starter_Confirmation_Scene_1

Starter_Confirmation_Scene_5:
# 140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_1
# 142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Disappear
# 144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call NicknamePartyMon
# 145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Lastly_Dialogue
	goto Starter_Confirmation_Scene_1

Starter_Confirmation_Scene_6:
# 149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_1
# 151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Disappear
# 153 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call NicknameBoxMon
# 154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Lastly_Dialogue
	goto Starter_Confirmation_Scene_1


Disappear::
# 172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_LAST_TALKED, LOCALID_CHARMANDER_BALL
	goto_if_eq Disappear_2
# 176 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_LAST_TALKED, LOCALID_BULBASAUR_BALL
	goto_if_eq Disappear_5
# 180 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_LAST_TALKED, LOCALID_SQUIRTLE_BALL
	goto_if_eq Disappear_8
	return

Disappear_2:
# 173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_HIDE_CHARMANDER_BALL
	return

Disappear_5:
# 177 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_HIDE_BULBASAUR_BALL
	return

Disappear_8:
# 181 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_HIDE_SQUIRTLE_BALL
	return


NicknamePartyMon::
# 189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 190 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 191 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 192 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 193 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 200 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 203 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 201 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Balls_On_Table::
# 207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Balls_On_Table_Text_0
# 209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Balls_And_Dexes::
# 213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
	goto_if_ne Balls_And_Dexes_2
# 219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
	goto_if_eq Balls_And_Dexes_4
	return

Balls_And_Dexes_2:
# 215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Balls_And_Dexes_Text_0
# 216 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end

Balls_And_Dexes_4:
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Balls_And_Dexes_Text_1
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 223 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 224 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 227 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special SetUnlockedPokedexFlags
# 229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special EnableNationalPokedex
# 230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg Balls_And_Dexes_Text_2, ITEM_POKE_BALL, 30
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Final_Dialogue
	return


Final_Dialogue::
# 238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Final_Dialogue_Text_0
# 242 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Make_Me_Proud::
# 246 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Make_Me_Proud_Text_0
# 248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Dont_Leave_Yet::
# 252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 255 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 256 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Dont_Leave_Yet_Text_0
# 258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, MOVEMENT_DONT_LEAVE
# 260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_PLAYER
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
MOVEMENT_DONT_LEAVE:
# 265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
	step_end

Starter_Dialogue_Text_0:
# 59 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: {PLAYER}!\n"
	.string "I think you're finally old enough.\p"
	.string "Now that you're in your 30s,\n"
	.string "you need your very own Pokemon!\p"
	.string "{RIVAL} was up before you\n"
	.string "and Tito has PJ.\p"
	.string "So they already have their Pokemon.\n"
	.string "But please, take your pick!$"

Go_On_Pick_Text_0:
# 74 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Go on! Take a pick!$"

Whats_In_The_Box_Text_0:
# 80 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Look in the Box!$"

Lastly_Dialogue_Text_0:
# 90 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: Oh! I have one more gift for you!\p"
	.string "Take a look inside that box next me.$"

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_0:
# 102 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ahh, I see you've chosen Bulbasaur!$"

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_Text_0:
# 114 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ahh, I see you've chosen Squirtle!$"

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_Text_0:
# 127 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ahh, I see you've chosen Charmander!$"

Starter_Confirmation_Scene_Text_0:
# 135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: So this is the one you want, eh?$"

Starter_Confirmation_Scene_Text_1:
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Received the Pokemon!$"

Starter_Confirmation_Scene_Text_2:
# 159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "No more Room.$"

Starter_Confirmation_Scene_Text_3:
# 164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Okay, so not that one?$"

NicknamePartyMon_Text_0:
# 189 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Give it a nickname?$"

Balls_On_Table_Text_0:
# 208 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A dusty pokeball on the table.$"

Balls_And_Dexes_Text_0:
# 215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A simple cardboard box.$"

Balls_And_Dexes_Text_1:
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Score! A whole bunch of things!\n"
	.string "A Pokedex, Running Shoes, and Map!\p$"

Balls_And_Dexes_Text_2:
# 231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "And 30 Pokeballs!$"

Final_Dialogue_Text_0:
# 239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: Lastly, remember that your\n"
	.string "insurance does not cover fainted\p"
	.string "Pokemon so be very careful out there!$"

Make_Me_Proud_Text_0:
# 247 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: Go on and have an adventure!\n$"

Dont_Leave_Yet_Text_0:
# 257 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: Wait! Don't leave yet!$"
