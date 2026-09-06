VermilionCity_Gym_Frlg_MapScripts::
# 2 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_Frlg_Gauntlet_OnTransition
# 3 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

VermilionCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	map_script_2 VAR_GYM_BLOCK_AND_SAVE, 0, VermilionCity_Gym_Block_And_Save
	.2byte 0


VermilionCity_Gym_Frlg_Gauntlet_OnTransition::
# 10 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, VermilionCity_Gym_Frlg_Gauntlet_OnTransition_1
# 18 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_GYM_BLOCK_AND_SAVE, 1
# 19 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setobjectxyperm LOCALID_GYM_GUY_VERMILION, 7, 25
	return

VermilionCity_Gym_Frlg_Gauntlet_OnTransition_1:
# 11 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_SYS_GYM_MODE
# 12 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clear_gym_trainers_frlg 3
# 13 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setobjectxyperm LOCALID_GYM_GUY_VERMILION, 7, 25
# 14 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_GYM_BLOCK_AND_SAVE, 0
	return


VermilionCity_Gym_EventScript_Eli::
# 25 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_double TRAINER_TWINS_ELI_ANNE, VermilionCity_Gym_Text_EliIntro, VermilionCity_Gym_Text_EliDefeat, VermilionCity_Gym_Text_EliNotEnoughMons
# 26 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	return


VermilionCity_Gym_EventScript_Anne::
# 30 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_double TRAINER_TWINS_ELI_ANNE, VermilionCity_Gym_Text_AnneIntro, VermilionCity_Gym_Text_AnneDefeat, VermilionCity_Gym_Text_AnneNotEnoughMons
# 31 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_AnnePostBattle, MSGBOX_AUTOCLOSE
	return


VermilionCity_Gym_EventScript_Lisa::
# 35 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_double TRAINER_TWINS_ELI_ANNE_2, VermilionCity_Gym_Text_LisaIntro, VermilionCity_Gym_Text_LisaDefeat, VermilionCity_Gym_Text_LisaNotEnoughMons
# 36 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
	return


VermilionCity_Gym_EventScript_Ray::
# 40 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_double TRAINER_TWINS_ELI_ANNE_2, VermilionCity_Gym_Text_RayIntro, VermilionCity_Gym_Text_RayDefeat, VermilionCity_Gym_Text_RayNotEnoughMons
# 41 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_RayPostBattle, MSGBOX_AUTOCLOSE
	return


VermilionCity_Gym_Block_And_Save::
# 46 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 47 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setvar VAR_GYM_BLOCK_AND_SAVE, 1
# 48 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_VermilionCity_Gym_PlayerStart
# 49 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitmovement
# 50 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_GYM_GUY_VERMILION, Movement_VermilionCity_GymGuyStart
# 51 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitmovement
# 52 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setobjectxyperm LOCALID_GYM_GUY_VERMILION, 5, 25
# 53 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	forcesave
# 54 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	return


# 57 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Frlg_PlayerBossPos:
# 58 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_up
# 58 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_up
# 58 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_up
# 59 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_left
# 59 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_left
# 59 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_left
# 60 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	face_right
	step_end

# 63 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Frlg_SurgeBossPos:
# 64 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_up
# 64 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_up
# 65 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_right
# 65 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_right
# 65 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_right
# 66 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	face_left
	step_end

# 69 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
Movement_VermilionCity_Gym_PlayerStart:
# 70 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_up
	step_end

# 73 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
Movement_VermilionCity_GymGuyStart:
# 74 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_left
# 74 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	walk_left
# 75 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	face_up
	step_end

VermilionCity_Gym_EventScript_GymStatue::
# 79 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lockall
# 80 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_EventScript_GymStatue_2
VermilionCity_Gym_EventScript_GymStatue_1:
# 83 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatue, MSGBOX_YESNO
# 84 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitmessage
# 85 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq VermilionCity_Gym_EventScript_GymStatue_4
# 89 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_GymStatue_Text_0
# 92 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end

VermilionCity_Gym_EventScript_GymStatue_2:
# 81 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GymStatuePostVictory
	goto VermilionCity_Gym_EventScript_GymStatue_1

VermilionCity_Gym_EventScript_GymStatue_4:
# 86 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto Gym_Candies
	return


VermilionCity_Gym_EventScript_GymStatuePostVictory::
# 98 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatuePostVictory
# 99 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
	end


VermilionCity_Gym_Frlg_Boss_Start::
# 104 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_SurgePrePos
# 105 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitmessage
# 106 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, VermilionCity_Gym_Frlg_PlayerBossPos
# 107 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_SURGE, VermilionCity_Gym_Frlg_SurgeBossPos
# 108 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	waitmovement
	return


# 113 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 114 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 115 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_LtSurge::
# 116 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_SYS_GYM_MODE
# 117 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call remove_gym_candies
# 118 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_Script_SurgePostBattle
# 119 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    call VermilionCity_Gym_Frlg_Boss_Start
# 120 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_GYM_GUY_VERMILION, Movement_VermilionCity_GymGuyStart
# 121 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    setobjectxyperm LOCALID_GYM_GUY_VERMILION, 7, 25
# 122 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 123 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM34_FROM_SURGE, VermilionCity_Gym_EventScript_GiveTM34
# 124 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 125 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 126 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 127 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 128 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedLtSurge::
# 129 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 1
# 130 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	call_if_unset FLAG_GOT_HM05, VermilionCity_Gym_EventScript_ShowOaksAide
# 131 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
# 132 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_LT_SURGE
# 133 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE03_GET
# 134 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 3
# 135 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
# 136 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 137 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 138 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_ShowOaksAide::
# 139 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 140 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	return
# 141 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 142 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GiveTM34::
# 143 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis
# 144 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM34
# 145 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_Gym_EventScript_NoRoomForTM34
# 146 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	giveitem_msg VermilionCity_Gym_Text_ReceivedTM34FromLtSurge, ITEM_TM34
# 147 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM34_FROM_SURGE
# 148 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainTM34
# 149 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 150 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 151 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 152 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_NoRoomForTM34::
# 153 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_MakeRoomInYourBag
# 154 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 155 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 156 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 157 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymGuy::
# 158 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	lock
# 159 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	faceplayer
# 160 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_GymGuyPostVictory
# 161 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
# 162 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 163 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 164 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 165 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_EventScript_GymGuyPostVictory::
# 166 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
# 167 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	release
# 168 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 169 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 170 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Script_SurgePostBattle::
# 171 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 172 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	releaseall
# 173 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	end
# 174 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 175 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_SurgePrePos::
# 176 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "If you think you can beat me,\n"
# 177 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "go on and take your position!$"
# 178 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 179 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgeIntro::
# 180 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "I tell you, electric POKéMON\n"
# 181 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "saved me during the Iran war!\p"
# 182 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "They zapped my enemies into\n"
# 183 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "paralysis!\p"
# 184 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The same as I'll do to you!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 185 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 186 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgePostBattle::
# 187 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "A little word of advice!\p"
# 188 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Electricity is sure powerful!\p"
# 189 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "But, it's useless against GROUND-\n"
# 190 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "type POKéMON!$"
# 191 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 192 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis::
# 193 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "The THUNDERBADGE cranks up your\n"
# 194 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "POKéMON's SPEED!\p"
# 195 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "It also lets your POKéMON FLY\n"
# 196 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "lightning-quick anytime!\p"
# 197 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're special.\n"
# 198 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Take this!$"
# 199 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 200 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ReceivedTM34FromLtSurge::
# 201 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM34\n"
# 202 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "from LT. SURGE.$"
# 203 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 204 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_ExplainTM34::
# 205 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "TM34 contains SHOCK WAVE!\p"
# 206 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Teach it to an ELECTRIC POKéMON!$"
# 207 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 208 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_MakeRoomInYourBag::
# 209 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo, make room in your BAG!$"
# 210 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 211 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LtSurgeDefeat::
# 212 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Now that's a shocker!\p"
# 213 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "You're the real deal, kid!\p"
# 214 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Fine, then, take the THUNDERBADGE!$"
# 215 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 216 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymGuyAdvice::
# 217 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 218 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 219 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE has a nickname.\p"
# 220 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "People refer to him as the\n"
# 221 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Lightning American!\p"
# 222 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He's an expert on electric\n"
# 223 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "POKéMON.\p"
# 224 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "BIRD/WATER-type POKéMON match\n"
# 225 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "poorly against the ELECTRIC type.\p"
# 226 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Beware of paralysis, too.\p"
# 227 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LT. SURGE is very cautious.\p"
# 228 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "He's locked himself in, so it won't\n"
# 229 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "be easy getting to him.$"
# 230 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 231 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymGuyPostVictory::
# 232 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Whew!\n"
# 233 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "That match was electric!$"
# 234 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 235 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymStatuePostVictory::
# 236 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "VERMILION POKéMON GYM\n"
# 237 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "LEADER: LT. SURGE\p"
# 238 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 239 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
# 240 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 241 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_EliIntro::
# 242 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Elijah: Electicity is fantastic.\n"
# 243 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Did you know?$"
# 244 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 245 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_EliDefeat::
# 246 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Elijah: But…\n"
# 247 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "We used electric power…$"
# 248 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 249 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_EliPostBattle::
# 250 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Elijah: I caught my POKéMON with\n"
# 251 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Annelore!$"
# 252 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 253 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_EliNotEnoughMons::
# 254 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Elijah: We can't battle if you don't\n"
# 255 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "have two POKéMON.$"
# 256 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 257 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_AnneIntro::
# 258 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Annelore: We'll shock you with our\n"
# 259 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "power!$"
# 260 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 261 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_AnneDefeat::
# 262 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Annelore: Our power…$"
# 263 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 264 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_AnnePostBattle::
# 265 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Annelore: I'm raising POKéMON with\n"
# 266 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Elijah.$"
# 267 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 268 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_AnneNotEnoughMons::
# 269 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Annelore: Let's battle!\n"
# 270 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "But bring two POKéMON.$"
# 271 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 272 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LisaIntro::
# 273 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Lisa: Ready to see what we've got?\n"
# 274 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "We bring plenty of voltage to our battles!$"
# 275 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 276 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LisaDefeat::
# 277 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Lisa: We couldn't keep up…\n"
# 278 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "You really short-circuited us!$"
# 279 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 280 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LisaPostBattle::
# 281 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Lisa: That was a great battle!\n"
# 282 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "You really kept us on our toes.$"
# 283 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 284 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_LisaNotEnoughMons::
# 285 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Lisa: We can't battle without two\n"
# 286 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "POKéMON. Bring another one!$"
# 287 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 288 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_RayIntro::
# 289 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Ray: Let's see what you've got!\n"
# 290 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "We've got enough spark to handle you!$"
# 291 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 292 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_RayDefeat::
# 293 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Ray: What?! We lost?!\n"
# 294 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Guess we lost our charge…$"
# 295 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 296 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_RayPostBattle::
# 297 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Ray: Now that's what I call a battle!\n"
# 298 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "You really gave us a shock.$"
# 299 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 300 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_RayNotEnoughMons::
# 301 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Ray: Let's battle!\n"
# 302 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "But you'll need two POKéMON.$"
# 303 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"

# 304 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
VermilionCity_Gym_Text_GymStatue::
# 305 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
    .string "Gym Candy Dispenser.\n"
# 306 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Would you like to raise your\p"
# 307 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Pokémon's levels to the cap?$"

VermilionCity_Gym_EventScript_GymStatue_Text_0:
# 89 "data/maps/VermilionCity_Gym_Frlg/scripts.pory"
	.string "Should your Pokémon suffer\n"
	.string "career ending injuries,\p"
	.string "do come back!$"
