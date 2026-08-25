# 1 "data/maps/PalletTown_Frlg/scripts.pory"

# 2 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Frlg_MapScripts::
# 3 "data/maps/PalletTown_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 4 "data/maps/PalletTown_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_OnFrame
# 5 "data/maps/PalletTown_Frlg/scripts.pory"
	.byte 0
# 6 "data/maps/PalletTown_Frlg/scripts.pory"

# 7 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_OnTransition::
# 8 "data/maps/PalletTown_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 9 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 10 "data/maps/PalletTown_Frlg/scripts.pory"

# 11 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_OnFrame::
# 12 "data/maps/PalletTown_Frlg/scripts.pory"
    map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 0, PalletTown_EventScript_OakTriggerLeft
# 13 "data/maps/PalletTown_Frlg/scripts.pory"
    map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
# 14 "data/maps/PalletTown_Frlg/scripts.pory"
    .2byte 0
# 15 "data/maps/PalletTown_Frlg/scripts.pory"

# 16 "data/maps/PalletTown_Frlg/scripts.pory"
@ Oak approaches player after exiting their house post Elite Four to check if they should receieve the National Dex
# 17 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakRatingScene::
# 18 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 19 "data/maps/PalletTown_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 20 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectxyperm LOCALID_PALLET_PROF_OAK, 14, 14
# 21 "data/maps/PalletTown_Frlg/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 22 "data/maps/PalletTown_Frlg/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 23 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 24 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 25 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
# 26 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 27 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_0x8004, 0
# 28 "data/maps/PalletTown_Frlg/scripts.pory"
	specialvar VAR_RESULT, GetFrlgPokedexCount
# 29 "data/maps/PalletTown_Frlg/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 30 "data/maps/PalletTown_Frlg/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 31 "data/maps/PalletTown_Frlg/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 32 "data/maps/PalletTown_Frlg/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 33 "data/maps/PalletTown_Frlg/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 34 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 35 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 36 "data/maps/PalletTown_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 37 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 38 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 39 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 40 "data/maps/PalletTown_Frlg/scripts.pory"
	opendoor 16, 13
# 41 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 42 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 43 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 44 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 45 "data/maps/PalletTown_Frlg/scripts.pory"
	closedoor 16, 13
# 46 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 47 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 48 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 49 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 50 "data/maps/PalletTown_Frlg/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 51 "data/maps/PalletTown_Frlg/scripts.pory"
	waitstate
# 52 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
# 53 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 54 "data/maps/PalletTown_Frlg/scripts.pory"

# 55 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_EndOakRatingScene::
# 56 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 57 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakExit
# 58 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 59 "data/maps/PalletTown_Frlg/scripts.pory"
	removeobject LOCALID_PALLET_PROF_OAK
# 60 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 61 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
# 62 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 63 "data/maps/PalletTown_Frlg/scripts.pory"

# 64 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 65 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 66 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 67 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 68 "data/maps/PalletTown_Frlg/scripts.pory"

# 69 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_NotBeenToOneIslandYet::
# 70 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 71 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 72 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 73 "data/maps/PalletTown_Frlg/scripts.pory"

# 74 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor::
# 75 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 76 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 77 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 78 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 79 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 80 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 81 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 82 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 83 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 84 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 85 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 86 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 87 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 88 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_in_place_faster_up
# 89 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 90 "data/maps/PalletTown_Frlg/scripts.pory"

# 91 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakExit::
# 92 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 93 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 94 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 95 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 96 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 97 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 98 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 99 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 100 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 101 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 102 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 103 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 104 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 105 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 106 "data/maps/PalletTown_Frlg/scripts.pory"

# 107 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse::
# 108 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 109 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 110 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 111 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 112 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 113 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 114 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 115 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 116 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 117 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 118 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 119 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 120 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 121 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 122 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 123 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_in_place_faster_up
# 124 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 125 "data/maps/PalletTown_Frlg/scripts.pory"

# 126 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse::
# 127 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 128 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 130 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 131 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 132 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 133 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 134 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 135 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 136 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 137 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 138 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 139 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 140 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 141 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 142 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 143 "data/maps/PalletTown_Frlg/scripts.pory"

# 144 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTriggerLeft::
# 145 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 146 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 147 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 148 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 149 "data/maps/PalletTown_Frlg/scripts.pory"

# 150 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTriggerRight::
# 151 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 152 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 153 "data/maps/PalletTown_Frlg/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 154 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 155 "data/maps/PalletTown_Frlg/scripts.pory"

# 156 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakTrigger::
# 157 "data/maps/PalletTown_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 158 "data/maps/PalletTown_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 159 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 160 "data/maps/PalletTown_Frlg/scripts.pory"
	playbgm MUS_RG_OAK, 0
# 161 "data/maps/PalletTown_Frlg/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 162 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmessage
# 163 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 85
# 164 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 165 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 166 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 167 "data/maps/PalletTown_Frlg/scripts.pory"
	playse SE_PIN
# 168 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 169 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 170 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 171 "data/maps/PalletTown_Frlg/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 172 "data/maps/PalletTown_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 173 "data/maps/PalletTown_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 174 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 175 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 176 "data/maps/PalletTown_Frlg/scripts.pory"
	closemessage
# 177 "data/maps/PalletTown_Frlg/scripts.pory"
	delay 30
# 178 "data/maps/PalletTown_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 179 "data/maps/PalletTown_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 180 "data/maps/PalletTown_Frlg/scripts.pory"
	opendoor 16, 13
# 181 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 182 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 183 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 184 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 185 "data/maps/PalletTown_Frlg/scripts.pory"
	closedoor 16, 13
# 186 "data/maps/PalletTown_Frlg/scripts.pory"
	waitdooranim
# 187 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 0
# 188 "data/maps/PalletTown_Frlg/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 189 "data/maps/PalletTown_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 190 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 191 "data/maps/PalletTown_Frlg/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 192 "data/maps/PalletTown_Frlg/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 193 "data/maps/PalletTown_Frlg/scripts.pory"
	waitstate
# 194 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
# 195 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 196 "data/maps/PalletTown_Frlg/scripts.pory"

# 197 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakEnterLeft::
# 198 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 199 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 200 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 201 "data/maps/PalletTown_Frlg/scripts.pory"

# 202 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakEnterRight::
# 203 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterRight
# 204 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 205 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 206 "data/maps/PalletTown_Frlg/scripts.pory"

# 207 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 208 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 209 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 210 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 211 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 212 "data/maps/PalletTown_Frlg/scripts.pory"

# 213 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabRight::
# 214 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 215 "data/maps/PalletTown_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 216 "data/maps/PalletTown_Frlg/scripts.pory"
	waitmovement 0
# 217 "data/maps/PalletTown_Frlg/scripts.pory"
	return
# 218 "data/maps/PalletTown_Frlg/scripts.pory"

# 219 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakEnterLeft::
# 220 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 221 "data/maps/PalletTown_Frlg/scripts.pory"
    walk_left
# 222 "data/maps/PalletTown_Frlg/scripts.pory"
    walk_left
# 223 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 224 "data/maps/PalletTown_Frlg/scripts.pory"
    walk_left
# 225 "data/maps/PalletTown_Frlg/scripts.pory"
    walk_left
# 226 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 227 "data/maps/PalletTown_Frlg/scripts.pory"
    step_end
# 228 "data/maps/PalletTown_Frlg/scripts.pory"

# 229 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 230 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 231 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 232 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 233 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 234 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 235 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 236 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 237 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 238 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 239 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 240 "data/maps/PalletTown_Frlg/scripts.pory"

# 241 "data/maps/PalletTown_Frlg/scripts.pory"
	.macro walk_to_lab
# 242 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 243 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 244 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 245 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 246 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 247 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 248 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 249 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 250 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 251 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 252 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 253 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 254 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 255 "data/maps/PalletTown_Frlg/scripts.pory"
	.endm
# 256 "data/maps/PalletTown_Frlg/scripts.pory"

# 257 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 258 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 259 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_to_lab
# 260 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 261 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_in_place_faster_up
# 262 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 263 "data/maps/PalletTown_Frlg/scripts.pory"

# 264 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 265 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 266 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 267 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_to_lab
# 268 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 269 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_in_place_faster_up
# 270 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 271 "data/maps/PalletTown_Frlg/scripts.pory"

# 272 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_OakEnterLab::
# 273 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 274 "data/maps/PalletTown_Frlg/scripts.pory"
	set_invisible
# 275 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 276 "data/maps/PalletTown_Frlg/scripts.pory"

# 277 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 278 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 279 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_to_lab
# 280 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 281 "data/maps/PalletTown_Frlg/scripts.pory"

# 282 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 283 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 284 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_down
# 285 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_left
# 286 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_to_lab
# 287 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 288 "data/maps/PalletTown_Frlg/scripts.pory"

# 289 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Movement_PlayerEnterLab::
# 290 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 291 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_right
# 292 "data/maps/PalletTown_Frlg/scripts.pory"
	walk_up
# 293 "data/maps/PalletTown_Frlg/scripts.pory"
	set_invisible
# 294 "data/maps/PalletTown_Frlg/scripts.pory"
	step_end
# 295 "data/maps/PalletTown_Frlg/scripts.pory"

# 296 "data/maps/PalletTown_Frlg/scripts.pory"

# 297 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_FatMan::
# 298 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 299 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 300 "data/maps/PalletTown_Frlg/scripts.pory"

# 301 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_OaksLabSign::
# 302 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 303 "data/maps/PalletTown_Frlg/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 304 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 305 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
# 306 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 307 "data/maps/PalletTown_Frlg/scripts.pory"

# 308 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_PlayersHouseSign::
# 309 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
# 310 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 311 "data/maps/PalletTown_Frlg/scripts.pory"

# 312 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_EventScript_RivalsHouseSign::
# 313 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
# 314 "data/maps/PalletTown_Frlg/scripts.pory"
	end
# 315 "data/maps/PalletTown_Frlg/scripts.pory"

# 316 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OakDontGoOut::
# 317 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hans: Hey!\n"
# 318 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You're finally awake!$"
# 319 "data/maps/PalletTown_Frlg/scripts.pory"

# 320 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OakGrassUnsafeNeedMon::
# 321 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hans: I have a gift for you.\n"
# 322 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Here, come with me!$"
# 323 "data/maps/PalletTown_Frlg/scripts.pory"

# 324 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_RaisingMonsToo::
# 325 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "I'm raising POKéMON, too.\p"
# 326 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "When they get strong, they can\n"
# 327 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "protect me.$"
# 328 "data/maps/PalletTown_Frlg/scripts.pory"

# 329 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_CanStoreItemsAndMonsInPC::
# 330 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "I made Pallet Town's\n"
# 331 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "very own patch of tall grass!\p"
# 332 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "POKéMON seem to already like it.$"
# 333 "data/maps/PalletTown_Frlg/scripts.pory"

# 334 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OakPokemonResearchLab::
# 335 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "HANS POKéMON VETERINARY LAB$"
# 336 "data/maps/PalletTown_Frlg/scripts.pory"

# 337 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_PlayersHouse::
# 338 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "{PLAYER}'s house$"
# 339 "data/maps/PalletTown_Frlg/scripts.pory"

# 340 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_RivalsHouse::
# 341 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "{RIVAL}'s house$"
# 342 "data/maps/PalletTown_Frlg/scripts.pory"

# 343 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_TownSign::
# 344 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "PALLET TOWN\n"
# 345 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Shades of your journey await!$"
# 346 "data/maps/PalletTown_Frlg/scripts.pory"

# 347 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OakLetMeSeePokedex::
# 348 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hans: Ah, {PLAYER}!\n"
# 349 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You're back, are you?\p"
# 350 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "How much have you filled in your\n"
# 351 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "POKéDEX?\p"
# 352 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "May I see it?\p"
# 353 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Let's see…$"
# 354 "data/maps/PalletTown_Frlg/scripts.pory"

# 355 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_CaughtXPuttingInHonestEffort::
# 356 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You've caught {STR_VAR_2}…\p"
# 357 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hm, it looks as if you're putting\n"
# 358 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "in an honest effort.\p"
# 359 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "When you manage to fill it some\n"
# 360 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "more, come show me, please.$"
# 361 "data/maps/PalletTown_Frlg/scripts.pory"

# 362 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_CaughtXImpressiveFollowMe::
# 363 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You've caught… {STR_VAR_2}!?\n"
# 364 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Now, this is impressive!\p"
# 365 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "There's something I wanted to ask\n"
# 366 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "of you, {PLAYER}.\p"
# 367 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Come.\n"
# 368 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Follow me.$"
# 369 "data/maps/PalletTown_Frlg/scripts.pory"

# 370 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OakYouEnjoyingTraveling::
# 371 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hans: Ah, {PLAYER}!\n"
# 372 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "You seem to be enjoying traveling.\p"
# 373 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Knowing you, {PLAYER}, I can easily\n"
# 374 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "imagine you going out to even more\l"
# 375 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "exotic locales.\p"
# 376 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Good for you, good for you.\n"
# 377 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hohoho.$"
# 378 "data/maps/PalletTown_Frlg/scripts.pory"

# 379 "data/maps/PalletTown_Frlg/scripts.pory"
@ For the NPC in Pallet Town that talks about the Trainer Tips sign
# 380 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_HmmIsThatRight::
# 381 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Hmm…\n"
# 382 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Is that right…$"
# 383 "data/maps/PalletTown_Frlg/scripts.pory"

# 384 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_OhLookLook::
# 385 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Oh!\n"
# 386 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Look, look!$"
# 387 "data/maps/PalletTown_Frlg/scripts.pory"

# 388 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_ReadItReadIt::
# 389 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Read it, read it!$"
# 390 "data/maps/PalletTown_Frlg/scripts.pory"

# 391 "data/maps/PalletTown_Frlg/scripts.pory"
@ Used by sign
# 392 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_PressStartToOpenMenu::
# 393 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 394 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Press START to open the MENU!$"
# 395 "data/maps/PalletTown_Frlg/scripts.pory"

# 396 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_SignsAreUsefulArentThey::
# 397 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Signs are useful, aren't they?$"
# 398 "data/maps/PalletTown_Frlg/scripts.pory"

# 399 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_LookCopiedTrainerTipsSign::
# 400 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Look, look!\p"
# 401 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "I copied what it said on one of\n"
# 402 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "those TRAINER TIPS signs!$"
# 403 "data/maps/PalletTown_Frlg/scripts.pory"

# 404 "data/maps/PalletTown_Frlg/scripts.pory"
@ Used by NPC
# 405 "data/maps/PalletTown_Frlg/scripts.pory"
PalletTown_Text_PressStartToOpenMenuCopy::
# 406 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "TRAINER TIPS!\p"
# 407 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Press START to open the MENU!$"

PalletTown_EventScript_TitosHouse::
# 411 "data/maps/PalletTown_Frlg/scripts.pory"
	lockall
# 412 "data/maps/PalletTown_Frlg/scripts.pory"
	giveitem ITEM_RARE_CANDY, 1
# 413 "data/maps/PalletTown_Frlg/scripts.pory"
	msgbox PalletTown_EventScript_TitosHouse_Text_0
# 414 "data/maps/PalletTown_Frlg/scripts.pory"
	releaseall
	return


PalletTown_EventScript_TitosHouse_Text_0:
# 413 "data/maps/PalletTown_Frlg/scripts.pory"
	.string "Tito's House$"
