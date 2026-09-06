PewterCity_Frlg_MapScripts::
# 2 "data/maps/PewterCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
# 3 "data/maps/PewterCity_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PewterCity_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PewterCity_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PewterCity_Frlg/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PEWTER_CITY_BEATBROCK, 1, PewterCity_RivalPostBrock
	.2byte 0


PewterCity_OnTransition::
# 9 "data/maps/PewterCity_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PEWTER_CITY
# 10 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_OnTransition_1
# 22 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_BEATBROCK, 0
# 23 "data/maps/PewterCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PEWTER_RIVAL
	return

PewterCity_OnTransition_1:
# 11 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_set FLAG_PEWTER_RIVAL_DONE, PewterCity_OnTransition_4
# 17 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_BEATBROCK, 1
	return

PewterCity_OnTransition_4:
# 12 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_BEATBROCK, 0
# 13 "data/maps/PewterCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PEWTER_RIVAL
	return


PewterCity_RivalPostBrock::
# 30 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 31 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_RIVAL
# 32 "data/maps/PewterCity_Frlg/scripts.pory"
	addobject LOCALID_PEWTER_RIVAL
# 33 "data/maps/PewterCity_Frlg/scripts.pory"
	playse SE_PIN
# 34 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerNotice
# 35 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 36 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement
# 37 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_RIVAL, PewterCity_Movement_RivaltoPlayer
# 38 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement
# 39 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_TitoIsInMuseum
# 40 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_RIVAL, PewterCity_Movement_RivalExit
# 41 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement
# 42 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_RIVAL
# 43 "data/maps/PewterCity_Frlg/scripts.pory"
	setflag FLAG_HIDE_PEWTER_RIVAL
# 44 "data/maps/PewterCity_Frlg/scripts.pory"
	setflag FLAG_PEWTER_RIVAL_DONE
# 45 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_BEATBROCK, 0
# 46 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
	end


# 50 "data/maps/PewterCity_Frlg/scripts.pory"

# 51 "data/maps/PewterCity_Frlg/scripts.pory"

# 52 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_TitoIsInMuseum::
# 53 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "{RIVAL}: {PLAYER}!\n"
# 54 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I see you beat Brock!\p"
# 55 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Well done! I'm going to Cerulean to\n"
# 56 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "take on the second Gym.\p"
# 57 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "By the way, I saw Tito in the Museum\n"
# 58 "data/maps/PewterCity_Frlg/scripts.pory"
    .string "I think he's looking for you!\p"
# 59 "data/maps/PewterCity_Frlg/scripts.pory"
    .string "Catch you later!$"
# 60 "data/maps/PewterCity_Frlg/scripts.pory"

# 61 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_RivaltoPlayer::
# 62 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 63 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 64 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 65 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 66 "data/maps/PewterCity_Frlg/scripts.pory"
    walk_right
# 67 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 68 "data/maps/PewterCity_Frlg/scripts.pory"
    walk_right
# 69 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 70 "data/maps/PewterCity_Frlg/scripts.pory"

# 71 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_RivalExit::
# 72 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 73 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 75 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 76 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 77 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 78 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 79 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 80 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 81 "data/maps/PewterCity_Frlg/scripts.pory"

# 82 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerNotice::
# 83 "data/maps/PewterCity_Frlg/scripts.pory"
    face_left
# 84 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 85 "data/maps/PewterCity_Frlg/scripts.pory"

# 86 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuide::
# 87 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 88 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 89 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 90 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 91 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 92 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_WalkToGymEast
# 93 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 94 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 95 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 96 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 97 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 98 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 99 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 100 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 101 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 102 "data/maps/PewterCity_Frlg/scripts.pory"

# 103 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymEast::
# 104 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideEast
# 105 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadEast
# 106 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 107 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 108 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymEast
# 109 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 110 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 111 "data/maps/PewterCity_Frlg/scripts.pory"

# 112 "data/maps/PewterCity_Frlg/scripts.pory"
@ Unused
# 113 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymWest::
# 114 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideWest
# 115 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadWest
# 116 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 117 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymWest
# 118 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymWest
# 119 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 120 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 121 "data/maps/PewterCity_Frlg/scripts.pory"

# 122 "data/maps/PewterCity_Frlg/scripts.pory"
@ Unused
# 123 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymNorth::
# 124 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideNorth
# 125 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadNorth
# 126 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 127 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymNorth
# 128 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymNorth
# 129 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 130 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 131 "data/maps/PewterCity_Frlg/scripts.pory"

# 132 "data/maps/PewterCity_Frlg/scripts.pory"
.macro walk_to_gym
# 133 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 134 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 135 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 136 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 137 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 138 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 139 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 140 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 141 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 142 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 143 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 144 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 145 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 146 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 147 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 148 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 149 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 150 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 151 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 152 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 153 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 154 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 155 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 156 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 157 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 158 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 159 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 160 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 161 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 162 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 163 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 164 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 165 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 166 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 167 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 168 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 170 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 171 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 172 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 173 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 174 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 175 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 176 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 177 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 178 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 179 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 180 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 181 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 182 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 183 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 184 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 185 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 186 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 187 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 188 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 189 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 190 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 191 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 192 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 193 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 194 "data/maps/PewterCity_Frlg/scripts.pory"
.endm
# 195 "data/maps/PewterCity_Frlg/scripts.pory"

# 196 "data/maps/PewterCity_Frlg/scripts.pory"
.macro walk_to_gym_alt
# 197 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 198 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 199 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 200 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 201 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 202 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 203 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 204 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 206 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 208 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 209 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 210 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 211 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 212 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 213 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 214 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 215 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 216 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 217 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 218 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 219 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 220 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 221 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 222 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 223 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 224 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 225 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 226 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 227 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 228 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 229 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 230 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 231 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 232 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 233 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 234 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 235 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 236 "data/maps/PewterCity_Frlg/scripts.pory"
.endm
# 237 "data/maps/PewterCity_Frlg/scripts.pory"

# 238 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideEast::
# 239 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 240 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 241 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_4
# 242 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_down
# 243 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 244 "data/maps/PewterCity_Frlg/scripts.pory"

# 245 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymEast::
# 246 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 247 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 248 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 249 "data/maps/PewterCity_Frlg/scripts.pory"

# 250 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideWest::
# 251 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 252 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 253 "data/maps/PewterCity_Frlg/scripts.pory"

# 254 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymWest::
# 255 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 256 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 257 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 258 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 259 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 260 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 261 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 262 "data/maps/PewterCity_Frlg/scripts.pory"

# 263 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideNorth::
# 264 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 265 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 266 "data/maps/PewterCity_Frlg/scripts.pory"

# 267 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymNorth::
# 268 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 269 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 270 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 271 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 272 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 273 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 274 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 275 "data/maps/PewterCity_Frlg/scripts.pory"

# 276 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadEast::
# 277 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 278 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 279 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 280 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_up
# 281 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 282 "data/maps/PewterCity_Frlg/scripts.pory"

# 283 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymEast::
# 284 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 285 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 286 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 287 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 288 "data/maps/PewterCity_Frlg/scripts.pory"

# 289 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadWest::
# 290 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 291 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 292 "data/maps/PewterCity_Frlg/scripts.pory"

# 293 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymWest::
# 294 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 295 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 296 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 297 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 298 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 299 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 300 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 301 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 302 "data/maps/PewterCity_Frlg/scripts.pory"

# 303 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadNorth::
# 304 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 305 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 306 "data/maps/PewterCity_Frlg/scripts.pory"

# 307 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymNorth::
# 308 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 309 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 310 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 311 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 312 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 313 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 314 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 315 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 316 "data/maps/PewterCity_Frlg/scripts.pory"

# 317 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GymGuideExit::
# 318 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 319 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 320 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 322 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 323 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 324 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 325 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 326 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 327 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 328 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 329 "data/maps/PewterCity_Frlg/scripts.pory"

# 330 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerTop::
# 331 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 332 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 0
# 333 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 334 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 335 "data/maps/PewterCity_Frlg/scripts.pory"

# 336 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerMid::
# 337 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 338 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 1
# 339 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 340 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 341 "data/maps/PewterCity_Frlg/scripts.pory"

# 342 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerBottom::
# 343 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 344 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 2
# 345 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 346 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 347 "data/maps/PewterCity_Frlg/scripts.pory"

# 348 "data/maps/PewterCity_Frlg/scripts.pory"
@ This trigger is inaccessible and its corresponding movement script isnt linked
# 349 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTriggerRight::
# 350 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 351 "data/maps/PewterCity_Frlg/scripts.pory"
	setvar VAR_TEMP_1, 3
# 352 "data/maps/PewterCity_Frlg/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 353 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 354 "data/maps/PewterCity_Frlg/scripts.pory"

# 355 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymGuideTrigger::
# 356 "data/maps/PewterCity_Frlg/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 357 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 358 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 359 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 360 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_WalkToGymTop
# 361 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_WalkToGymMid
# 362 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_WalkToGymBottom
# 363 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 364 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 365 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 366 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 367 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 368 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_GYM_GUIDE
# 369 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 370 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 371 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 372 "data/maps/PewterCity_Frlg/scripts.pory"

# 373 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymTop::
# 374 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadTop
# 375 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 376 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 377 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymTop
# 378 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 379 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 380 "data/maps/PewterCity_Frlg/scripts.pory"

# 381 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymMid::
# 382 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadMid
# 383 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 384 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 385 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymMid
# 386 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 387 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 388 "data/maps/PewterCity_Frlg/scripts.pory"

# 389 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymBottom::
# 390 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadBottom
# 391 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 392 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 393 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymBottom
# 394 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 395 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 396 "data/maps/PewterCity_Frlg/scripts.pory"

# 397 "data/maps/PewterCity_Frlg/scripts.pory"
@ Unused
# 398 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_WalkToGymRight::
# 399 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideApproachPlayerRight
# 400 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 401 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymRight
# 402 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymRight
# 403 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 404 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 405 "data/maps/PewterCity_Frlg/scripts.pory"

# 406 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymTop::
# 407 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 408 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 409 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 410 "data/maps/PewterCity_Frlg/scripts.pory"

# 411 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymMid::
# 412 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 413 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 414 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 415 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 416 "data/maps/PewterCity_Frlg/scripts.pory"

# 417 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymBottom::
# 418 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 419 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 420 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 421 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 422 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 423 "data/maps/PewterCity_Frlg/scripts.pory"

# 424 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToGymRight::
# 425 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 426 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 427 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 428 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 429 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 430 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 431 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 432 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 433 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 434 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 435 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 436 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 437 "data/maps/PewterCity_Frlg/scripts.pory"

# 438 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadTop::
# 439 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 440 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 441 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_right
# 442 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 443 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 444 "data/maps/PewterCity_Frlg/scripts.pory"

# 445 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadMid::
# 446 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 447 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 448 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 449 "data/maps/PewterCity_Frlg/scripts.pory"

# 450 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideMoveToLeadBottom::
# 451 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 452 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 453 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_down
# 454 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 455 "data/maps/PewterCity_Frlg/scripts.pory"

# 456 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideApproachPlayerRight::
# 457 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 458 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 459 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 460 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 461 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 462 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_right
# 463 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 464 "data/maps/PewterCity_Frlg/scripts.pory"

# 465 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymTop::
# 466 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 467 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 468 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 469 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 470 "data/maps/PewterCity_Frlg/scripts.pory"

# 471 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymMid::
# 472 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 473 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 474 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 475 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 476 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 477 "data/maps/PewterCity_Frlg/scripts.pory"

# 478 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymBottom::
# 479 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 480 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 481 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym
# 482 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 483 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 484 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 485 "data/maps/PewterCity_Frlg/scripts.pory"

# 486 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToGymRight::
# 487 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 488 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 489 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 490 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 491 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 492 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 493 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 494 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 495 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 496 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_gym_alt
# 497 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 498 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_left
# 499 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 500 "data/maps/PewterCity_Frlg/scripts.pory"

# 501 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_Lass::
# 502 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
# 503 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 504 "data/maps/PewterCity_Frlg/scripts.pory"

# 505 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumGuide::
# 506 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 507 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 508 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 509 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_CheckedOutMuseum
# 510 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 511 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 512 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 10
# 513 "data/maps/PewterCity_Frlg/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 514 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PewterCity_EventScript_LeadToMuseumNorth
# 515 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PewterCity_EventScript_LeadToMuseumSouth
# 516 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PewterCity_EventScript_LeadToMuseumWest
# 517 "data/maps/PewterCity_Frlg/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_LeadToMuseumEast
# 518 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 519 "data/maps/PewterCity_Frlg/scripts.pory"
	closemessage
# 520 "data/maps/PewterCity_Frlg/scripts.pory"
	delay 10
# 521 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_MuseumGuideExit
# 522 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 523 "data/maps/PewterCity_Frlg/scripts.pory"
	fadedefaultbgm
# 524 "data/maps/PewterCity_Frlg/scripts.pory"
	removeobject LOCALID_PEWTER_MUSEUM_GUIDE
# 525 "data/maps/PewterCity_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
# 526 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 527 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 528 "data/maps/PewterCity_Frlg/scripts.pory"

# 529 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumNorth::
# 530 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumNorth
# 531 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumNorth
# 532 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 533 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 534 "data/maps/PewterCity_Frlg/scripts.pory"

# 535 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumSouth::
# 536 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumSouth
# 537 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
# 538 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 539 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 540 "data/maps/PewterCity_Frlg/scripts.pory"

# 541 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumWest::
# 542 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumWest
# 543 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
# 544 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 545 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 546 "data/maps/PewterCity_Frlg/scripts.pory"

# 547 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_LeadToMuseumEast::
# 548 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumEast
# 549 "data/maps/PewterCity_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
# 550 "data/maps/PewterCity_Frlg/scripts.pory"
	waitmovement 0
# 551 "data/maps/PewterCity_Frlg/scripts.pory"
	return
# 552 "data/maps/PewterCity_Frlg/scripts.pory"

# 553 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_CheckedOutMuseum::
# 554 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
# 555 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 556 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 557 "data/maps/PewterCity_Frlg/scripts.pory"

# 558 "data/maps/PewterCity_Frlg/scripts.pory"
.macro walk_to_museum
# 559 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 560 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 561 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 562 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 563 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 564 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 565 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 566 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 567 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 568 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 569 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 570 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 571 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 572 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 573 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 574 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 575 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 576 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 577 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 578 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 579 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 580 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 581 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 582 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 583 "data/maps/PewterCity_Frlg/scripts.pory"
.endm
# 584 "data/maps/PewterCity_Frlg/scripts.pory"

# 585 "data/maps/PewterCity_Frlg/scripts.pory"
.macro walk_to_museum_south
# 586 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 587 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 588 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 589 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 590 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 591 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 592 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 593 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 594 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 595 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 596 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 597 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 598 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 599 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 600 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 601 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 602 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 603 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 604 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 605 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 606 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 607 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 608 "data/maps/PewterCity_Frlg/scripts.pory"
.endm
# 609 "data/maps/PewterCity_Frlg/scripts.pory"

# 610 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumNorth::
# 611 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 612 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 613 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 614 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 615 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 616 "data/maps/PewterCity_Frlg/scripts.pory"

# 617 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumNorth::
# 618 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 619 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 620 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 621 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 622 "data/maps/PewterCity_Frlg/scripts.pory"

# 623 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumSouth::
# 624 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 625 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_16
# 626 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 627 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum_south
# 628 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 629 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 630 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 631 "data/maps/PewterCity_Frlg/scripts.pory"

# 632 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumSouth::
# 633 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 634 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_up
# 635 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum_south
# 636 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 637 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 638 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 639 "data/maps/PewterCity_Frlg/scripts.pory"

# 640 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumWest::
# 641 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 642 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 643 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 644 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 645 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 646 "data/maps/PewterCity_Frlg/scripts.pory"

# 647 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumWest::
# 648 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 649 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 650 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 651 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 652 "data/maps/PewterCity_Frlg/scripts.pory"

# 653 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumEast::
# 654 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 655 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 656 "data/maps/PewterCity_Frlg/scripts.pory"
	delay_8
# 657 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 658 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 659 "data/maps/PewterCity_Frlg/scripts.pory"

# 660 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumEast::
# 661 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_to_museum
# 662 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_left
# 663 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_faster_up
# 664 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 665 "data/maps/PewterCity_Frlg/scripts.pory"

# 666 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_MuseumGuideExit::
# 667 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 668 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 669 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 670 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 671 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 672 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 673 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 674 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 675 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 676 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 677 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_down
# 678 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 679 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 680 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_right
# 681 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 682 "data/maps/PewterCity_Frlg/scripts.pory"

# 683 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_FatMan::
# 684 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 685 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 686 "data/maps/PewterCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 2
# 687 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
# 688 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 689 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 690 "data/maps/PewterCity_Frlg/scripts.pory"

# 691 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_BugCatcher::
# 692 "data/maps/PewterCity_Frlg/scripts.pory"
	lock
# 693 "data/maps/PewterCity_Frlg/scripts.pory"
	faceplayer
# 694 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 695 "data/maps/PewterCity_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_KnowWhatTheyreDoing
# 696 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
# 697 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 698 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 699 "data/maps/PewterCity_Frlg/scripts.pory"

# 700 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_KnowWhatTheyreDoing::
# 701 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
# 702 "data/maps/PewterCity_Frlg/scripts.pory"
	release
# 703 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 704 "data/maps/PewterCity_Frlg/scripts.pory"

# 705 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_TrainerTips::
# 706 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
# 707 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 708 "data/maps/PewterCity_Frlg/scripts.pory"

# 709 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_PoliceNotice::
# 710 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
# 711 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 712 "data/maps/PewterCity_Frlg/scripts.pory"

# 713 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_MuseumSign::
# 714 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
# 715 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 716 "data/maps/PewterCity_Frlg/scripts.pory"

# 717 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_GymSign::
# 718 "data/maps/PewterCity_Frlg/scripts.pory"
	lockall
# 719 "data/maps/PewterCity_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 0
# 720 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 721 "data/maps/PewterCity_Frlg/scripts.pory"
	releaseall
# 722 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 723 "data/maps/PewterCity_Frlg/scripts.pory"

# 724 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_EventScript_CitySign::
# 725 "data/maps/PewterCity_Frlg/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
# 726 "data/maps/PewterCity_Frlg/scripts.pory"
	end
# 727 "data/maps/PewterCity_Frlg/scripts.pory"

# 728 "data/maps/PewterCity_Frlg/scripts.pory"
@ Unused
# 729 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Movement_WalkInPlaceLeft::
# 730 "data/maps/PewterCity_Frlg/scripts.pory"
	walk_in_place_left
# 731 "data/maps/PewterCity_Frlg/scripts.pory"
	step_end
# 732 "data/maps/PewterCity_Frlg/scripts.pory"

# 733 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterTeach::
# 734 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Yawn!\n"
# 735 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I must have dozed off in the sun.\p"
# 736 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I had this weird dream about\n"
# 737 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "a DROWZEE eating my dream.\p"
# 738 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "And…\n"
# 739 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I learned how to eat dreams…\p"
# 740 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Oogh, this is too spooky!\p"
# 741 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Let me teach it to a POKéMON so\n"
# 742 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I can forget about it!$"
# 743 "data/maps/PewterCity_Frlg/scripts.pory"

# 744 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterDeclined::
# 745 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "…Snore…$"
# 746 "data/maps/PewterCity_Frlg/scripts.pory"

# 747 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterWhichMon::
# 748 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Which POKéMON wants to learn\n"
# 749 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "DREAM EATER?$"
# 750 "data/maps/PewterCity_Frlg/scripts.pory"

# 751 "data/maps/PewterCity_Frlg/scripts.pory"
Text_DreamEaterTaught::
# 752 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "…ZZZ…\n"
# 753 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I…can't eat…anymore…$"
# 754 "data/maps/PewterCity_Frlg/scripts.pory"

# 755 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ClefairyCameFromMoon::
# 756 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "CLEFAIRY came from the moon.\n"
# 757 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "That's what the rumor is.\p"
# 758 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "They appeared after MOON STONES\n"
# 759 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "fell on MT. MOON.$"
# 760 "data/maps/PewterCity_Frlg/scripts.pory"

# 761 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_BrockOnlySeriousTrainerHere::
# 762 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "There aren't many serious POKéMON\n"
# 763 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "TRAINERS here.\p"
# 764 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "They're all like BUG CATCHERS,\n"
# 765 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "you know, just hobbyists.\p"
# 766 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "But PEWTER GYM's BROCK isn't like\n"
# 767 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "that, not one bit.$"
# 768 "data/maps/PewterCity_Frlg/scripts.pory"

# 769 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_DidYouCheckOutMuseum::
# 770 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Did you check out the MUSEUM?$"
# 771 "data/maps/PewterCity_Frlg/scripts.pory"

# 772 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_WerentThoseFossilsAmazing::
# 773 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Weren't those fossils from MT. MOON\n"
# 774 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "amazing?$"
# 775 "data/maps/PewterCity_Frlg/scripts.pory"

# 776 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ReallyYouHaveToGo::
# 777 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Really?\n"
# 778 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You absolutely have to go!$"
# 779 "data/maps/PewterCity_Frlg/scripts.pory"

# 780 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ThisIsTheMuseum::
# 781 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "This is it, the MUSEUM.\p"
# 782 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You have to pay to get in, but it's\n"
# 783 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "worth it. See you around!$"
# 784 "data/maps/PewterCity_Frlg/scripts.pory"

# 785 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_DoYouKnowWhatImDoing::
# 786 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Psssst!\n"
# 787 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Do you know what I'm doing?$"
# 788 "data/maps/PewterCity_Frlg/scripts.pory"

# 789 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_ThatsRightItsHardWork::
# 790 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "That's right!\n"
# 791 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "It's hard work!$"
# 792 "data/maps/PewterCity_Frlg/scripts.pory"

# 793 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_SprayingRepelToKeepWildMonsOut::
# 794 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "I'm spraying REPEL to keep wild\n"
# 795 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "POKéMON out of my garden!$"
# 796 "data/maps/PewterCity_Frlg/scripts.pory"

# 797 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_BrocksLookingForChallengersFollowMe::
# 798 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "You're a TRAINER, right?\p"
# 799 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "BROCK's looking for new\n"
# 800 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "challengers. Follow me!$"
# 801 "data/maps/PewterCity_Frlg/scripts.pory"

# 802 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_GoTakeOnBrock::
# 803 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "If you have the right stuff,\n"
# 804 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "go take on BROCK!$"
# 805 "data/maps/PewterCity_Frlg/scripts.pory"

# 806 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_TrainerTipsEarningEXP::
# 807 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "TRAINER TIPS\p"
# 808 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "All POKéMON that appear in battle,\n"
# 809 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "however briefly, earn EXP Points.$"
# 810 "data/maps/PewterCity_Frlg/scripts.pory"

# 811 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_CallPoliceIfInfoOnThieves::
# 812 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "NOTICE!\p"
# 813 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Thieves have been stealing POKéMON\n"
# 814 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "fossils from MT. MOON.\p"
# 815 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "Please call the PEWTER POLICE if\n"
# 816 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "you have any information.$"
# 817 "data/maps/PewterCity_Frlg/scripts.pory"

# 818 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_MuseumOfScience::
# 819 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER MUSEUM OF SCIENCE$"
# 820 "data/maps/PewterCity_Frlg/scripts.pory"

# 821 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_GymSign::
# 822 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER CITY POKéMON GYM\n"
# 823 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "LEADER: BROCK\l"
# 824 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "The Rock-Solid POKéMON TRAINER!$"
# 825 "data/maps/PewterCity_Frlg/scripts.pory"

# 826 "data/maps/PewterCity_Frlg/scripts.pory"
PewterCity_Text_CitySign::
# 827 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "PEWTER CITY\n"
# 828 "data/maps/PewterCity_Frlg/scripts.pory"
	.string "A Stone Gray City$"
