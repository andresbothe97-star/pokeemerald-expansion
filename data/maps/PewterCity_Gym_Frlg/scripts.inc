PewterCity_Gym_Frlg_MapScripts::
# 2 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_Gym_Frlg_Gauntlet_OnTransition
# 3 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PewterCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PewterCity_Gym_Frlg_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 4 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	map_script_2 VAR_GYM_BLOCK_AND_SAVE, 0, PewterCity_Gym_Block_And_Save
	.2byte 0


PewterCity_Gym_Frlg_Gauntlet_OnTransition::
# 9 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, PewterCity_Gym_Frlg_Gauntlet_OnTransition_1
# 16 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setvar VAR_GYM_BLOCK_AND_SAVE, 1
	return

PewterCity_Gym_Frlg_Gauntlet_OnTransition_1:
# 10 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_SYS_GYM_MODE
# 11 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	clear_gym_trainers_frlg 1
# 12 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setvar VAR_GYM_BLOCK_AND_SAVE, 0
	return


PewterCity_Gym_Block_And_Save::
# 21 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	lockall
# 22 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setvar VAR_GYM_BLOCK_AND_SAVE, 1
# 23 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_PewterCity_Gym_PlayerStart
# 24 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	waitmovement
# 25 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_GYM_GUY_PEWTER, Movement_PewterCity_GymGuyStart
# 26 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	waitmovement
# 27 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	forcesave
# 28 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
	return


PewterCity_Gym_Frlg_Boss_Start::
# 32 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPrePos
# 33 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	waitmessage
# 34 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Gym_Frlg_PlayerBossPos
# 35 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_BROCK, PewterCity_Gym_Frlg_BrockBossPos
# 36 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	waitmovement
	return


# 40 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Frlg_PlayerBossPos:
# 41 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_up
# 41 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_up
# 42 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	face_up
	step_end

# 45 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Frlg_BrockBossPos:
# 46 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_up
# 46 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_up
# 46 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_up
# 46 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_up
# 46 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_up
# 47 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	face_down
	step_end

# 50 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
Movement_PewterCity_Gym_PlayerStart:
# 51 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_up
	step_end

# 54 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
Movement_PewterCity_GymGuyStart:
# 55 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_right
# 55 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_right
# 55 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_right
# 56 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	face_up
	step_end

# 59 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
Movement_PewterCity_GymGuyEnd:
# 60 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_left
# 60 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_left
# 60 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	face_right
	step_end

PewterCity_Gym_EventScript_GymStatue::
# 65 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	lockall
# 66 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatue_2
PewterCity_Gym_EventScript_GymStatue_1:
# 69 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatue, MSGBOX_YESNO
# 70 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	waitmessage
# 71 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq PewterCity_Gym_EventScript_GymStatue_4
# 75 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_EventScript_GymStatue_Text_0
# 78 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
	end

PewterCity_Gym_EventScript_GymStatue_2:
# 67 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymStatuePostVictory
	goto PewterCity_Gym_EventScript_GymStatue_1

PewterCity_Gym_EventScript_GymStatue_4:
# 72 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto Gym_Candies
	return


Gym_Candies::
# 84 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	removeallitem ITEM_GYM_CANDY
# 85 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	giveitem ITEM_GYM_CANDY, 600
# 86 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox Gym_Candies_Text_0
# 88 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
	end


remove_gym_candies::
# 93 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	removeallitem ITEM_GYM_CANDY
	return


# 97 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 98 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Brock::
# 99 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    clearflag FLAG_SYS_GYM_MODE
# 100 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	call remove_gym_candies
# 101 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_Script_BrockPostBattle
# 102 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	call PewterCity_Gym_Frlg_Boss_Start
# 103 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 104 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
# 105 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
# 106 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostBattle
# 107 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 108 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 109 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 110 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_DefeatedBrock::
# 111 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 1
# 112 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	applymovement LOCALID_GYM_GUY_PEWTER, Movement_PewterCity_GymGuyEnd
# 113 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BROCK
# 114 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE01_GET
# 115 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 116 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 117 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
# 118 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 1
# 119 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GiveTM39
# 120 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 121 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 122 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GiveTM39::
# 123 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_TakeThisWithYou
# 124 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM39
# 125 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_EventScript_NoRoomForTM39
# 126 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
# 127 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM39_FROM_BROCK
# 128 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_ExplainTM39
# 129 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 130 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 131 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 132 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_NoRoomForTM39::
# 133 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
# 134 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 135 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 136 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 137 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Liam::
# 138 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
# 139 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
# 140 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 141 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 142 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Franklin::
# 143 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_FRANKLIN_2, PewterCity_Gym_Text_FranklinIntro, PewterCity_Gym_Text_FranklinDefeat
# 144 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
# 145 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 146 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 147 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy::
# 148 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	lock
# 149 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	faceplayer
# 150 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
# 151 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
# 152 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Gym_EventScript_GymGuyTakeMeToTop
# 153 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
# 154 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 155 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 156 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyPostVictory::
# 157 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_YoureChampMaterial
# 158 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 159 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 160 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 161 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
# 162 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LetsGetHappening
# 163 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 164 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 165 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 166 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
# 167 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
# 168 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 169 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 170 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 171 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyAdvice::
# 172 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
# 173 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 174 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 175 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 176 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatuePostVictory::
# 177 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
# 178 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
# 179 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 180 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 181 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Script_BrockPostBattle::
# 182 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostBattle
# 183 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
# 184 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 185 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 186 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockPrePos::
# 187 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So, you managed to get past my trainers.\n"
# 188 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Impressive!\p"
# 189 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "My name is Brock, Pewter's Gym Leader.\n"
# 190 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get this battle started.$"
# 191 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 192 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockIntro::
# 193 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Fuhaha! You're going to challenge\n"
# 194 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "me knowing that you'll lose?\p"
# 195 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "That's the TRAINER's honor that\n"
# 196 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "compels you to challenge me.\p"
# 197 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Fine, then!\n"
# 198 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Show me your best!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 199 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 200 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockDefeat::
# 201 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I took you for granted, and so\n"
# 202 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I lost.\p"
# 203 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "As proof of your victory, I confer\n"
# 204 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "on you this…the official POKéMON\l"
# 205 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEAGUE BOULDERBADGE.\p"
# 206 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} received the BOULDERBADGE\n"
# 207 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
# 208 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{FONT_MALE}Just having the BOULDERBADGE makes\n"
# 209 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "your POKéMON more powerful.\p"
# 210 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It also enables the use of the\n"
# 211 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "move FLASH outside of battle.\p"
# 212 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Of course, a POKéMON must know the\n"
# 213 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "move FLASH to use it.$"
# 214 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 215 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_TakeThisWithYou::
# 216 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Wait!\n"
# 217 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Take this with you.$"
# 218 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 219 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ReceivedTM39FromBrock::
# 220 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM39\n"
# 221 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from BROCK.$"
# 222 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 223 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ExplainTM39::
# 224 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "A TM, Technical Machine, contains a\n"
# 225 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "technique for POKéMON.\p"
# 226 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Using a TM teaches the move it\n"
# 227 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "contains to a POKéMON.\p"
# 228 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "A TM is good for only one use.\p"
# 229 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So, when you use one, pick the\n"
# 230 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "POKéMON carefully.\p"
# 231 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Anyways…\n"
# 232 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "TM39 contains ROCK TOMB.\p"
# 233 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It hurls boulders at the foe and\n"
# 234 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "lowers its SPEED.$"
# 235 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 236 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockPostBattle::
# 237 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "There are all kinds of TRAINERS in\n"
# 238 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "this huge world of ours.\p"
# 239 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You appear to be very gifted as a\n"
# 240 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "POKéMON TRAINER.\p"
# 241 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So let me make a suggestion.\p"
# 242 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Go to the GYM in CERULEAN and test\n"
# 243 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "your abilities.$"
# 244 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 245 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_DontHaveRoomForThis::
# 246 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You don't have room for this.$"
# 247 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 248 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamIntro::
# 249 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Stop right there, kid!\p"
# 250 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're ten thousand light-years \n"
# 251 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from facing BROCK!$"
# 252 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 253 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamDefeat::
# 254 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Darn!\p"
# 255 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Light-years isn't time…\n"
# 256 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It measures distance!$"
# 257 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 258 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamPostBattle::
# 259 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're pretty hot.\n"
# 260 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "…But not as hot as BROCK!$"
# 261 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 262 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_FranklinIntro::
# 263 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I was just training at Mt. Moon!\n"
# 264 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're no match for my team!$"
# 265 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 266 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_FranklinDefeat::
# 267 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "No!\n"
# 268 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I don't have good insurance!$"
# 269 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 270 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_FranklinPostBattle::
# 271 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I'll have to build a team\n"
# 272 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from scratch again...$"
# 273 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 274 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LetMeTakeYouToTheTop::
# 275 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Hiya!\n"
# 276 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Do you want to dream big?\p"
# 277 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Do you dare to dream of becoming\n"
# 278 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "the POKéMON champ?\p"
# 279 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "The Gyms here can be a bit tricky\n"
# 280 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "and very punishing.\p"
# 281 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Want to know how they work?$"
# 282 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 283 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LetsGetHappening::
# 284 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "All right!\n"
# 285 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get happening!$"
# 286 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 287 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_TryDifferentPartyOrders::
# 288 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "The statue up ahead dispenses candies\n"
# 289 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "but if you wipe OR win they will.\p"
# 290 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "be removed from your bag.\n"
# 291 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "If you wipe you are welcome to try\p"
# 292 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "again, but the trainers will be reset.\n"
# 293 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Hey! This game is for adults!$"
# 294 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 295 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ItsFreeLetsGetHappening::
# 296 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It's a free service!\n"
# 297 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get happening!$"
# 298 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 299 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_YoureChampMaterial::
# 300 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Just as I thought!\n"
# 301 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're POKéMON champ material!$"
# 302 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 303 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_GymStatue::
# 304 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Gym Candy Dispenser.\n"
# 305 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Would you like to raise your\p"
# 306 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Pokémon's levels to the cap?$"
# 307 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 308 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_GymStatuePlayerWon::
# 309 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
# 310 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEADER: BROCK\p"
# 311 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 312 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"

PewterCity_Gym_EventScript_GymStatue_Text_0:
# 75 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Should your Pokémon suffer\n"
	.string "career ending injuries,\p"
	.string "do come back!$"

Gym_Candies_Text_0:
# 86 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Remember, should you win or whiteout\n"
	.string "all Gym Candies will be removed!$"
