CeruleanCity_Gym_Frlg_MapScripts::
# 2 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_Gym_Frlg_Gauntlet_OnTransition
# 3 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CeruleanCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

CeruleanCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	map_script_2 VAR_GYM_BLOCK_AND_SAVE, 0, CeruleanCity_Gym_Block_And_Save
	.2byte 0


CeruleanCity_Gym_Frlg_Gauntlet_OnTransition::
# 9 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, CeruleanCity_Gym_Frlg_Gauntlet_OnTransition_1
# 17 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setvar VAR_GYM_BLOCK_AND_SAVE, 1
# 18 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setobjectxyperm LOCALID_GYM_GUY_CERULEAN, 4, 23
	return

CeruleanCity_Gym_Frlg_Gauntlet_OnTransition_1:
# 10 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_SYS_GYM_MODE
# 11 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	clear_gym_trainers_frlg 2
# 12 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setobjectxyperm LOCALID_GYM_GUY_CERULEAN, 4, 23
# 13 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setvar VAR_GYM_BLOCK_AND_SAVE, 0
	return


CeruleanCity_Gym_Block_And_Save::
# 23 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lockall
# 24 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setvar VAR_GYM_BLOCK_AND_SAVE, 1
# 25 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_CeruleanCity_Gym_PlayerStart
# 26 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	waitmovement
# 27 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_GYM_GUY_CERULEAN, Movement_CeruleanCity_GymGuyStart
# 28 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	waitmovement
# 29 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setobjectxyperm LOCALID_GYM_GUY_CERULEAN, 6, 23
# 30 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	forcesave
# 31 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
	return


# 34 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Frlg_PlayerBossPos:
# 35 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_up
# 35 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_up
# 36 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	face_up
	step_end

# 39 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Frlg_MistyBossPos:
# 40 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_right
# 40 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_right
# 41 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_up
# 42 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_left
# 42 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_left
# 43 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_down
# 44 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	face_down
	step_end

# 47 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
Movement_CeruleanCity_Gym_PlayerStart:
# 48 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_up
	step_end

# 51 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
Movement_CeruleanCity_GymGuyStart:
# 52 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_right
# 52 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	walk_right
# 53 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	face_up
	step_end

CeruleanCity_Gym_EventScript_GymStatue::
# 57 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lockall
# 58 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatue_2
CeruleanCity_Gym_EventScript_GymStatue_1:
# 61 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatue, MSGBOX_YESNO
# 62 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	waitmessage
# 63 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CeruleanCity_Gym_EventScript_GymStatue_4
# 67 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_EventScript_GymStatue_Text_0
# 70 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
	end

CeruleanCity_Gym_EventScript_GymStatue_2:
# 59 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GymStatuePostVictory
	goto CeruleanCity_Gym_EventScript_GymStatue_1

CeruleanCity_Gym_EventScript_GymStatue_4:
# 64 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto Gym_Candies
	return


CeruleanCity_Gym_Frlg_Boss_Start::
# 76 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_MistyPrePos
# 77 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	waitmessage
# 78 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Gym_Frlg_PlayerBossPos
# 79 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_MISTY, CeruleanCity_Gym_Frlg_MistyBossPos
# 80 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	waitmovement
	return


# 85 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 86 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Misty::
# 87 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    clearflag FLAG_SYS_GYM_MODE
# 88 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    call remove_gym_candies
# 89 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    applymovement LOCALID_GYM_GUY_CERULEAN, Movement_CeruleanCity_GymGuyStart
# 90 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    setobjectxyperm LOCALID_GYM_GUY_CERULEAN, 8, 23
# 91 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_Script_MistyPostBattle
# 92 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    call CeruleanCity_Gym_Frlg_Boss_Start
# 93 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 94 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 95 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_GiveTM03
# 96 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 97 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 98 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 99 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 100 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_MistyDefeated::
# 101 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 1
# 102 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_MISTY
# 103 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE02_GET
# 104 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
# 105 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 2
# 106 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
# 107 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 108 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 109 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GiveTM03::
# 110 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
# 111 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM03
# 112 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_Gym_EventScript_NoRoomForTM03
# 113 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
# 114 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM03_FROM_MISTY
# 115 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 116 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 117 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 118 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 119 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_NoRoomForTM03::
# 120 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
# 121 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 122 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 123 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 124 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Diana::
# 125 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
# 126 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 127 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 128 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 129 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_Luis::
# 130 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
# 131 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_MISTY, 2
# 132 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 134 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 135 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanGym_EventScript_Mark::
# 136 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_POKEMANIAC_MARK_2, CeruleanGym_Text_MarkIntro, CeruleanGym_Text_MarkDefeat
# 137 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanGym_Text_MarkPostBattle, MSGBOX_AUTOCLOSE
# 138 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 139 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 140 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuy::
# 141 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	lock
# 142 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	faceplayer
# 143 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuyPostVictory
# 144 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymGuyAdvice
# 145 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 146 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 147 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 148 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuyPostVictory::
# 149 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
# 150 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	release
# 151 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 152 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 153 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatuePostVictory::
# 154 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
# 155 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
# 156 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 157 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 158 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Script_MistyPostBattle::
# 159 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    msgbox CeruleanCity_Gym_Text_ExplainTM03
# 160 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	releaseall
# 161 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	end
# 162 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 163 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_MistyPrePos::
# 164 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "{PLAYER}, is it?\p"
# 165 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Your brother told me you might\n"
# 166 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "be coming this way. If you're\p"
# 167 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "as strong as he is, this will be\n"
# 168 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "very fun!\p"
# 169 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Well, lets get started!$"
# 170 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 171 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 172 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_MistyIntro::
# 173 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Your second badge won't be easy!\p"
# 174 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "My policy is an all-out offensive\n"
# 175 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "with WATER-type POKéMON!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 176 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 177 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ExplainTM03::
# 178 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "TM03 teaches WATER PULSE.\p"
# 179 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Use it on an aquatic POKéMON!$"
# 180 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 181 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ExplainCascadeBadge::
# 182 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "The CASCADEBADGE will now\n"
# 183 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "let your POKéMON reach level 29.\p"
# 184 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "It also lets all POKéMON\n"
# 185 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Cut small trees!\p"
# 186 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You just need to have the HM\n"
# 187 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "in your inventory!\p"
# 188 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can also have my favorite TM.$"
# 189 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 190 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_ReceivedTM03FromMisty::
# 191 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM03\n"
# 192 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "from MISTY.$"
# 193 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 194 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_BetterMakeRoomForThis::
# 195 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You better make room for this!$"
# 196 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 197 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_MistyDefeat::
# 198 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Wow!\n"
# 199 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You're too much!\p"
# 200 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "All right!\p"
# 201 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can have the CASCADEBADGE to\n"
# 202 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "show you beat me.$"
# 203 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 204 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanGym_Text_MarkIntro::
# 205 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "You made it all the way here?\n"
# 206 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Well, let's see what you've got!\p"
# 207 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "MISTY won't be waiting around forever.$"
# 208 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 209 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanGym_Text_MarkDefeat::
# 210 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "What?! I lost?!\n"
# 211 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Guess I wasn't ready for you.$"
# 212 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 213 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanGym_Text_MarkPostBattle::
# 214 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "You really are something!\n"
# 215 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Now go show MISTY what you can do!$"
# 216 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 217 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaIntro::
# 218 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "What? You?\n"
# 219 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "I'm more than good enough for you!\p"
# 220 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "MISTY won't have to be bothered.$"
# 221 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 222 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaDefeat::
# 223 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You overwhelmed me!$"
# 224 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 225 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_DianaPostBattle::
# 226 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You have to face other TRAINERS\n"
# 227 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "to see how good you really are.$"
# 228 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 229 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisIntro::
# 230 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Splash!\p"
# 231 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "I'm first up!\n"
# 232 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Let's do it!$"
# 233 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 234 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisDefeat::
# 235 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "That can't be!$"
# 236 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 237 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_LuisPostBattle::
# 238 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "MISTY is a TRAINER who's going to\n"
# 239 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "keep improving.\p"
# 240 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "She won't lose to someone like you!$"
# 241 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 242 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymGuyAdvice::
# 243 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Yo!\n"
# 244 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Champ in the making!\p"
# 245 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Let me give you some advice!\p"
# 246 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "The LEADER, MISTY, is a pro who\n"
# 247 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "uses WATER-type POKéMON.\p"
# 248 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You can drain all their water with\n"
# 249 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "GRASS-type POKéMON.\p"
# 250 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Or, you might use ELECTRIC-type\n"
# 251 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "POKéMON and zap them!$"
# 252 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 253 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_WeMakePrettyGoodTeam::
# 254 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You beat MISTY!\n"
# 255 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "See, what'd I tell ya?\p"
# 256 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "You and me, we make a pretty\n"
# 257 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "darn-good team!$"
# 258 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 259 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymStatue::
# 260 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
    .string "Gym Candy Dispenser.\n"
# 261 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Would you like to raise your\p"
# 262 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Pokémon's levels to the cap?$"
# 263 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"

# 264 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
CeruleanCity_Gym_Text_GymStatuePlayerWon::
# 265 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "CERULEAN POKéMON GYM\n"
# 266 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "LEADER: MISTY\p"
# 267 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 268 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"

CeruleanCity_Gym_EventScript_GymStatue_Text_0:
# 67 "data/maps/CeruleanCity_Gym_Frlg/scripts.pory"
	.string "Should your Pokémon suffer\n"
	.string "career ending injuries,\p"
	.string "do come back!$"
