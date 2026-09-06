PewterCity_Museum_1F_Frlg_MapScripts::
# 2 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_Museum_1F_Frlg_OnTransition
# 3 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PewterCity_Museum_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PewterCity_Museum_1F_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	map_script_2 VAR_MUSEUM_ROCKET_SCENE, 0, PewterCity_Museum_1F_Frlg_RocketSceneIntro
	.2byte 0


PewterCity_Museum_1F_Frlg_OnTransition::
# 9 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_set FLAG_ROCKET_MUSEUM_DONE, PewterCity_Museum_1F_Frlg_OnTransition_1
# 16 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PewterCity_Museum_1F_Frlg_OnTransition_4
# 21 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_Museum_1F_Frlg_OnTransition_5
	return

PewterCity_Museum_1F_Frlg_OnTransition_1:
# 10 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_MUSEUM_ROCKET_SCENE, 1
# 11 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setflag FLAG_TITO_MUSEUM
# 12 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setflag FLAG_ROCKET_MUSEUM
	return

PewterCity_Museum_1F_Frlg_OnTransition_4:
# 17 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setflag FLAG_TITO_MUSEUM
# 18 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setflag FLAG_ROCKET_MUSEUM
	return

PewterCity_Museum_1F_Frlg_OnTransition_5:
# 22 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	clearflag FLAG_TITO_MUSEUM
# 23 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setflag FLAG_ROCKET_MUSEUM
	return


PewterCity_Museum_1F_Frlg_RocketSceneIntro::
# 30 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_Museum_1F_Frlg_RocketSceneIntro_1
	return

PewterCity_Museum_1F_Frlg_RocketSceneIntro_1:
# 31 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setvar VAR_MUSEUM_ROCKET_SCENE, 1
# 32 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_Frlg_TitoYouMadeIt
	return


PewterCity_Museum_1F_Frlg_TitoYouMadeIt::
# 38 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 39 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_TITO_MUSEUM, Common_Movement_ExclamationMark
# 40 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 41 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_TITO_MUSEUM, PewterCity_Museum_1F_Movement_TitoStart
# 42 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 43 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_TitoFirst
# 44 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 45 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 46 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_TITO_MUSEUM, PewterCity_Museum_1F_Movement_TitoStatues
# 47 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_PlayerStatues
# 48 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 49 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_TitoStatues
# 50 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 51 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 52 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_TITO_MUSEUM, PewterCity_Museum_1F_Movement_TitoScroll
# 53 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_PlayerScroll
# 54 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 55 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_TitoScroll
# 56 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 57 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_Frlg_CuratorScene
	return


PewterCity_Museum_1F_Frlg_CuratorScene::
# 62 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_CURATOR, Common_Movement_ExclamationMark
# 63 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 64 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_CURATOR, PewterCity_Museum_1F_Movement_CuratorScroll
# 65 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 66 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_CuratorsResearch
# 67 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 68 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 69 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_Frlg_RocketEntrance
	return


PewterCity_Museum_1F_Frlg_RocketEntrance::
# 73 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_RocketStop
# 74 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 75 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	addobject LOCALID_ROCKET_EXEC_RED_MUSEUM
# 76 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	addobject LOCALID_ROCKET_1_MUSEUM
# 77 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	addobject LOCALID_ROCKET_2_MUSEUM
# 78 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	playbgm MUS_AQUA_MAGMA_HIDEOUT, FALSE
# 79 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	playse SE_PIN
# 80 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_CURATOR, Common_Movement_ExclamationMark
# 81 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_TITO_MUSEUM, Common_Movement_ExclamationMark
# 82 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 83 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 84 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_ROCKET_EXEC_RED_MUSEUM, PewterCity_Museum_1F_Movement_RedExecEntrance
# 85 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_ROCKET_1_MUSEUM, PewterCity_Museum_1F_Movement_R1Entrance
# 86 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_ROCKET_2_MUSEUM, PewterCity_Museum_1F_Movement_R2Entrance
# 87 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovementall
# 88 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_Frlg_RocketSteal
	return


PewterCity_Museum_1F_Frlg_RocketSteal::
# 92 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_RocketMoveIt
# 93 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 94 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Museum_1F_Movement_PlayerMoveit
# 95 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 96 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 97 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_ROCKET_EXEC_RED_MUSEUM, PewterCity_Museum_1F_Movement_RedExecApproach
# 98 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_RocketStealScroll
# 99 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 100 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removeobject LOCALID_ANCIENTSCROLL
# 101 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto PewterCity_Museum_1F_Frlg_RocketExit
	return


PewterCity_Museum_1F_Frlg_RocketExit::
# 105 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_RocketExit
# 106 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 107 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 108 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_ROCKET_EXEC_RED_MUSEUM, PewterCity_Museum_1F_Movement_RedExecExit
# 109 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_ROCKET_1_MUSEUM, PewterCity_Museum_1F_Movement_R1Exit
# 110 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_ROCKET_2_MUSEUM, PewterCity_Museum_1F_Movement_R2Exit
# 111 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovementall
# 112 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removeobject LOCALID_ROCKET_EXEC_RED_MUSEUM
# 113 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removeobject LOCALID_ROCKET_1_MUSEUM
# 114 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removeobject LOCALID_ROCKET_2_MUSEUM
# 115 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	fadedefaultbgm
# 116 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_TITO_MUSEUM, Common_Movement_ExclamationMark
# 117 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 118 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_TITO_MUSEUM, PewterCity_Museum_1F_Movement_TitoPostRocket
# 119 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 120 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_TitoFindScroll
# 121 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 122 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	closemessage
# 123 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_TITO_MUSEUM, PewterCity_Museum_1F_Movement_TitoFinal
# 124 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 125 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	removeobject LOCALID_TITO_MUSEUM
# 126 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	setflag FLAG_ROCKET_MUSEUM_DONE
# 127 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	return


PewterCity_Museum_1F_EventScript_MuseumCuratorPostInvasion::
# 131 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 132 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	goto_if_unset FLAG_ROCKET_MUSEUM_DONE, PewterCity_Museum_1F_EventScript_MuseumCuratorPostInvasion_1
# 142 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 143 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_CuratorAfterTheft
# 144 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 145 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_CURATOR, Common_Movement_FaceOriginalDirection
# 146 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 147 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end

PewterCity_Museum_1F_EventScript_MuseumCuratorPostInvasion_1:
# 133 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 134 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_CuratorAfterTheft
# 135 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 136 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_CURATOR, Common_Movement_FaceOriginalDirection
# 137 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement
# 138 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
	end


# 153 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 154 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 155 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_TitoStart::
# 156 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 157 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 158 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 159 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 160 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 161 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_TitoStatues::
# 162 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 163 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 164 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 165 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 166 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 167 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 168 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 169 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 170 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 171 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    face_left
# 172 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 173 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 174 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_PlayerStatues::
# 175 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 176 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 177 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 178 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 179 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 180 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 181 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 182 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 183 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 184 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    face_up
# 185 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 186 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 187 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_TitoScroll::
# 188 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 189 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 190 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 191 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 192 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    face_up
# 193 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 194 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 195 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_PlayerScroll::
# 196 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 197 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 198 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 199 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 200 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 201 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 202 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_CuratorScroll::
# 203 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 204 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 205 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    face_left
# 206 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 207 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 208 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_RedExecEntrance::
# 209 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 210 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 211 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 212 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 213 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 214 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 215 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 216 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 217 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 218 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 219 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 220 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 221 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 222 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 223 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_R1Entrance::
# 224 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 225 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 226 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 227 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 228 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 229 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 230 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 231 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 232 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 233 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 234 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 235 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 236 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 237 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 238 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 239 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 240 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_R2Entrance::
# 241 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 242 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 243 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 244 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 245 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 246 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 247 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 248 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 249 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 250 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 251 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 252 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 253 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 254 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 255 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_PlayerMoveit::
# 256 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 257 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    face_down
# 258 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 259 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 260 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_RedExecApproach::
# 261 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_right
# 262 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 263 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 264 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_RedExecExit::
# 265 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 266 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 267 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 268 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 269 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 270 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 271 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 272 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 273 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 274 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 275 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 276 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 277 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 278 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 279 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 280 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_R1Exit::
# 281 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 282 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 283 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 284 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 285 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 286 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 287 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 288 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 289 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 290 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 291 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 292 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 293 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 294 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 295 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 296 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 297 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_R2Exit::
# 298 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 299 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 300 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 301 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 302 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 303 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 304 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 305 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_left
# 306 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 307 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 308 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 309 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_down
# 310 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 311 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 312 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_TitoPostRocket::
# 313 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_up
# 314 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 315 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 316 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Movement_TitoFinal::
# 317 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_left
# 318 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_left
# 319 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_left
# 320 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_left
# 321 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_left
# 322 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_left
# 323 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_left
# 324 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_left
# 325 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_left
# 326 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_down
# 327 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_down
# 328 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_down
# 329 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    walk_fast_down
# 330 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    step_end
# 331 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 332 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist1::
# 333 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 334 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 335 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit
# 336 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 337 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	applymovement LOCALID_MUSEUM_SCIENTIST1, Common_Movement_FaceOriginalDirection
# 338 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmovement 0
# 339 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 340 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 341 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 342 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist3::
# 343 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 344 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 345 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_AncientTrio
# 346 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 347 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 348 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 349 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 350 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Scientist2::
# 351 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 352 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	faceplayer
# 353 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ResurrectionFossils
# 354 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	waitmessage
# 355 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 356 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 357 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 358 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_OldMan::
# 359 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife, MSGBOX_NPC
# 360 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 361 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 362 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Cradily::
# 363 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    lockall
# 364 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    showmonpic SPECIES_CRADILY, 10, 3
# 365 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    msgbox PewterCity_Museum_1F_Text_Cradily
# 366 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    hidemonpic
# 367 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    releaseall
# 368 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    end
# 369 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 370 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Rampardos::
# 371 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    lockall
# 372 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    showmonpic SPECIES_RAMPARDOS, 10, 3
# 373 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    msgbox PewterCity_Museum_1F_Text_Rampardos
# 374 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    hidemonpic
# 375 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    releaseall
# 376 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    end
# 377 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 378 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Armaldo::
# 379 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    lockall
# 380 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    showmonpic SPECIES_ARMALDO, 10, 3
# 381 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    msgbox PewterCity_Museum_1F_Text_Armaldo
# 382 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    hidemonpic
# 383 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    releaseall
# 384 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    end
# 385 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 386 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_Relicanth::
# 387 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    lockall
# 388 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    showmonpic SPECIES_RELICANTH, 10, 3
# 389 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    msgbox PewterCity_Museum_1F_Text_Relicanth
# 390 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    hidemonpic
# 391 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    releaseall
# 392 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    end
# 393 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 394 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_AerodactylFossil::
# 395 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    lockall
# 396 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    showmonpic SPECIES_AERODACTYL, 10, 3
# 397 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    msgbox PewterCity_Museum_1F_Text_AerodactylFossil
# 398 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    hidemonpic
# 399 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    releaseall
# 400 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    end
# 401 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 402 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_EventScript_KabutopsFossil::
# 403 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	lockall
# 404 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	showmonpic SPECIES_KABUTOPS, 10, 3
# 405 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	msgbox PewterCity_Museum_1F_Text_KabutopsFossil
# 406 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	hidemonpic
# 407 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	releaseall
# 408 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	end
# 409 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 410 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_TitosResearch::
# 411 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 412 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_ResurrectionFossils::
# 413 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "There's a LAB somewhere trying to\n"
# 414 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "resurrect POKéMON fossils.$"
# 415 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 416 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_AncientTrio::
# 417 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "According to ancient legend, three\n"
# 418 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "mighty beings once walked the earth.\p"
# 419 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Their names have been lost to time,\n"
# 420 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "but their deeds have not.$"
# 421 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 422 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_CuratorPreTheft::
# 423 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "We've spent years collecting all\n"
# 424 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "the artifacts you see here!\p"
# 425 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "I hope you enjoy the exhibit!$"
# 426 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 427 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_CuratorAfterTheft::
# 428 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Those thieves... They knew exactly\n"
# 429 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "what they were looking for.\p"
# 430 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "The ancient manuscript-- gone!\n"
# 431 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "I've never seen anything like this.\p"
# 432 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "What could they possibly want with\n"
# 433 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "such an old artifact?$"
# 434 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 435 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
@ Unused
# 436 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_PleaseGoAround::
# 437 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "あちらへ　おまわりください$"
# 438 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 439 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_ShouldBeGratefulForLongLife::
# 440 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "I should be grateful for my long\n"
# 441 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "life.\p"
# 442 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "Never did I think I would get to\n"
# 443 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "see the bones of a dragon!$"
# 444 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 445 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_WeHaveTwoFossilsOnExhibit::
# 446 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "We have six fossils of rare,\n"
# 447 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "prehistoric POKéMON on exhibit.$"
# 448 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 449 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_AerodactylFossil::
# 450 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "AERODACTYL Fossil\p"
# 451 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "A fierce prehistoric POKéMON that\n"
# 452 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "once ruled the ancient skies.$"
# 453 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 454 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_KabutopsFossil::
# 455 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "KABUTOPS Fossil\p"
# 456 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "A primitive and rare POKéMON.$"
# 457 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 458 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_Cradily::
# 459 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "CRADILY Fossil\p"
# 460 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "A prehistoric POKéMON believed to\n"
# 461 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "have lived in ancient forests.$"
# 462 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 463 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_Rampardos::
# 464 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "RAMPARDOS Fossil\p"
# 465 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "A prehistoric POKéMON known for its\n"
# 466 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "remarkably strong skull.$"
# 467 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 468 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_Armaldo::
# 469 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "ARMALDO Fossil\p"
# 470 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "A prehistoric POKéMON with powerful\n"
# 471 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "claws and a durable shell.$"
# 472 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 473 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_Relicanth::
# 474 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "RELICANTH Fossil\p"
# 475 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "An ancient POKéMON that has remained\n"
# 476 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "unchanged for millions of years.$"
# 477 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 478 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_TitoFirst::
# 479 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Tito: {PLAYER}! Glad you could make it!\p"
# 480 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "There's a really cool new exhibit here\n"
# 481 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "about a legendary trio from history.$"
# 482 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 483 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_TitoStatues::
# 484 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "These three statues are said to be\n"
# 485 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "ancient depictions of the legendary trio.\p"
# 486 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Nobody knows for sure what they were,\n"
# 487 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "but their story has survived for ages.$"
# 488 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 489 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_TitoScroll::
# 490 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "And here is the most important find of\n"
# 491 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "them all.\p"
# 492 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "An ancient scroll detailing the story of\n"
# 493 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "a city that encountered the trio.\p"
# 494 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "According to the scroll, the city was\n"
# 495 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "later wiped out completely.$"
# 496 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 497 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_CuratorsResearch::
# 498 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "I couldn't help but overhear.\p"
# 499 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "My name is BJORN. I'm the curator of\n"
# 500 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "this museum.\p"
# 501 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Some exciting new research suggests\n"
# 502 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "these three beings may have actually\p"
# 503 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "been defending the city.\n"
# 504 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "They battled an outside threat and\p"
# 505 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "ultimately defeated it.\n"
# 506 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "But the city never recovered from the\p"
# 507 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "devastation caused by the battle.$"
# 508 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 509 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_RocketStop::
# 510 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "???: Everybody freeze!\n"
# 511 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Nobody move!$"
# 512 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 513 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_RocketMoveIt::
# 514 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Beat it! Move out of the way!$"
# 515 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 516 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_RocketStealScroll::
# 517 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "So the ancient scroll is real?\p"
# 518 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Fuhahaha!\n"
# 519 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "I'll be taking this for TEAM ROCKET!$"
# 520 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 521 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_RocketExit::
# 522 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Much obliged!\n"
# 523 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Fuhahaha!$"
# 524 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 525 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_TitoFindScroll::
# 526 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "Tito: Those thieves!\p"
# 527 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "We need to find out what they're up to\n"
# 528 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
    .string "and get that scroll back, {PLAYER}!$"
# 529 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"

# 530 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
PewterCity_Museum_1F_Text_Statue::
# 531 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "An ancient looking statue\n"
# 532 "data/maps/PewterCity_Museum_1F_Frlg/scripts.pory"
	.string "depicting some sort of creature.$"
