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
	applymovement LOCALID_PLAYER, MOVEMENT_PLAYER_POSITIONING
# 27 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement
# 28 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
	return


# 31 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
MOVEMENT_OAK_ENTRANCE_SCENE:
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 32 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 33 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	face_down
	step_end

# 36 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
MOVEMENT_OAK_POSITIONING:
# 37 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	face_down
	step_end

# 40 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
MOVEMENT_PLAYER_POSITIONING:
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
	step_end

PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 45 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 46 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	faceplayer
# 47 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_2
PalletTown_ProfessorOaksLab_EventScript_ProfOak_1:
# 50 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_5
PalletTown_ProfessorOaksLab_EventScript_ProfOak_4:
# 53 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_8
PalletTown_ProfessorOaksLab_EventScript_ProfOak_7:
# 56 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ProfOak_11
PalletTown_ProfessorOaksLab_EventScript_ProfOak_10:
# 59 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return

PalletTown_ProfessorOaksLab_EventScript_ProfOak_2:
# 48 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Dialogue
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_1

PalletTown_ProfessorOaksLab_EventScript_ProfOak_5:
# 51 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Go_On_Pick
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_4

PalletTown_ProfessorOaksLab_EventScript_ProfOak_8:
# 54 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Whats_In_The_Box
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_7

PalletTown_ProfessorOaksLab_EventScript_ProfOak_11:
# 57 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Make_Me_Proud
	goto PalletTown_ProfessorOaksLab_EventScript_ProfOak_10


Starter_Dialogue::
# 64 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 65 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Dialogue_Text_0
# 73 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 74 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 75 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Go_On_Pick::
# 79 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 80 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Go_On_Pick_Text_0
# 81 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Whats_In_The_Box::
# 85 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 86 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Whats_In_The_Box_Text_0
# 87 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Lastly_Dialogue::
# 91 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 92 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 93 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 94 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 95 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 96 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Lastly_Dialogue_Text_0
# 98 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 103 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 104 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_2
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1:
# 107 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic SPECIES_BULBASAUR, 10, 3
# 108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_0
# 109 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 110 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 111 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Confirmation_Scene
	return

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_2:
# 105 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Balls_On_Table
	goto PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_1


PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 115 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 116 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_2
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1:
# 119 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic SPECIES_SQUIRTLE, 10, 3
# 120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_Text_0
# 121 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 122 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 123 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Confirmation_Scene
	return

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_2:
# 117 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Balls_On_Table
	goto PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_1


PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 128 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 129 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
	goto_if_ne PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_2
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1:
# 132 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	showmonpic SPECIES_CHARMANDER, 10, 3
# 133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_Text_0
# 134 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 135 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 136 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Starter_Confirmation_Scene
	return

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_2:
# 130 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Balls_On_Table
	goto PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_1


Starter_Confirmation_Scene::
# 140 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_0, MSGBOX_YESNO
# 142 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Starter_Confirmation_Scene_2
# 169 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_3
Starter_Confirmation_Scene_1:
# 172 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 173 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end

Starter_Confirmation_Scene_2:
# 143 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	givemon PLAYER_STARTER_SPECIES, 10
# 144 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_MILTANK
# 145 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Starter_Confirmation_Scene_5
# 154 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Starter_Confirmation_Scene_6
# 164 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_2
	goto Starter_Confirmation_Scene_1

Starter_Confirmation_Scene_5:
# 146 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_1
# 148 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 149 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Disappear
# 150 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call NicknamePartyMon
# 151 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 152 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Lastly_Dialogue
	goto Starter_Confirmation_Scene_1

Starter_Confirmation_Scene_6:
# 155 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 156 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Starter_Confirmation_Scene_Text_1
# 157 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	removeobject VAR_LAST_TALKED
# 158 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Disappear
# 159 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call NicknameBoxMon
# 160 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 161 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Lastly_Dialogue
	goto Starter_Confirmation_Scene_1


Disappear::
# 178 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_LAST_TALKED, LOCALID_CHARMANDER_BALL
	goto_if_eq Disappear_2
# 182 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_LAST_TALKED, LOCALID_BULBASAUR_BALL
	goto_if_eq Disappear_5
# 186 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_LAST_TALKED, LOCALID_SQUIRTLE_BALL
	goto_if_eq Disappear_8
	return

Disappear_2:
# 179 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_HIDE_CHARMANDER_BALL
	return

Disappear_5:
# 183 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_HIDE_BULBASAUR_BALL
	return

Disappear_8:
# 187 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_HIDE_SQUIRTLE_BALL
	return


NicknamePartyMon::
# 195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 196 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 197 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 198 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 199 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 204 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 205 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	hidemonpic
# 206 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 209 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 207 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


Balls_On_Table::
# 213 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Balls_On_Table_Text_0
# 215 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Balls_And_Dexes::
# 219 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 220 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
	goto_if_ne Balls_And_Dexes_2
# 225 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
	goto_if_eq Balls_And_Dexes_4
	return

Balls_And_Dexes_2:
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Balls_And_Dexes_Text_0
# 222 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	end

Balls_And_Dexes_4:
# 226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Balls_And_Dexes_Text_1
# 228 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 229 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 230 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 231 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 232 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 233 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 234 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special SetUnlockedPokedexFlags
# 235 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	special EnableNationalPokedex
# 236 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem ITEM_TOWN_MAP
# 237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	giveitem_msg Balls_And_Dexes_Text_2, ITEM_POKE_BALL, 30
# 238 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 239 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	goto Final_Dialogue
	return


Final_Dialogue::
# 244 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Final_Dialogue_Text_0
# 248 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Make_Me_Proud::
# 252 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Make_Me_Proud_Text_0
# 254 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


Dont_Leave_Yet::
# 258 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	lockall
# 259 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 260 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 261 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 262 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	msgbox Dont_Leave_Yet_Text_0
# 264 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmessage
# 265 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, MOVEMENT_DONT_LEAVE
# 266 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	waitmovement LOCALID_PLAYER
# 267 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	releaseall
	return


# 270 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
MOVEMENT_DONT_LEAVE:
# 271 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	walk_up
	step_end

Starter_Dialogue_Text_0:
# 65 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: {PLAYER}!\n"
	.string "I think you're finally old enough.\p"
	.string "Now that you're in your 30s,\n"
	.string "you need your very own Pokemon!\p"
	.string "{RIVAL} was up before you\n"
	.string "and Tito has PJ.\p"
	.string "So they already have their Pokemon.\n"
	.string "But please, take your pick!$"

Go_On_Pick_Text_0:
# 80 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Go on! Take a pick!$"

Whats_In_The_Box_Text_0:
# 86 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Look in the Box!$"

Lastly_Dialogue_Text_0:
# 96 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: Oh! I have one more gift for you!\p"
	.string "Take a look inside that box next me.$"

PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall_Text_0:
# 108 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ahh, I see you've chosen Bulbasaur!$"

PalletTown_ProfessorOaksLab_EventScript_SquirtleBall_Text_0:
# 120 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ahh, I see you've chosen Squirtle!$"

PalletTown_ProfessorOaksLab_EventScript_CharmanderBall_Text_0:
# 133 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Ahh, I see you've chosen Charmander!$"

Starter_Confirmation_Scene_Text_0:
# 141 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: So this is the one you want, eh?$"

Starter_Confirmation_Scene_Text_1:
# 147 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Received the Pokemon!$"

Starter_Confirmation_Scene_Text_2:
# 165 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "No more Room.$"

Starter_Confirmation_Scene_Text_3:
# 170 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Okay, so not that one?$"

NicknamePartyMon_Text_0:
# 195 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Give it a nickname?$"

Balls_On_Table_Text_0:
# 214 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A dusty pokeball on the table.$"

Balls_And_Dexes_Text_0:
# 221 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "A simple cardboard box.$"

Balls_And_Dexes_Text_1:
# 226 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Score! A whole bunch of things!\n"
	.string "A Pokedex, Running Shoes, and Map!\p$"

Balls_And_Dexes_Text_2:
# 237 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "And 30 Pokeballs!$"

Final_Dialogue_Text_0:
# 245 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: Lastly, remember that your\n"
	.string "insurance does not cover fainted\p"
	.string "Pokemon so be very careful out there!$"

Make_Me_Proud_Text_0:
# 253 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: Go on and have an adventure!\n$"

Dont_Leave_Yet_Text_0:
# 263 "data/maps/PalletTown_ProfessorOaksLab_Frlg/scripts.pory"
	.string "Hans: Wait! Don't leave yet!$"
