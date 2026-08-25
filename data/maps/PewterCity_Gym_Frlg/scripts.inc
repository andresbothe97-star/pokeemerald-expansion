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

# 60 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Brock::
# 61 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
    clearflag FLAG_SYS_GYM_MODE
# 62 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	call PewterCity_Gym_Frlg_Boss_Start
# 63 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 64 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BROCK, PewterCity_Gym_Text_BrockIntro, PewterCity_Gym_Text_BrockDefeat, PewterCity_Gym_EventScript_DefeatedBrock, NO_MUSIC
# 65 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_unset FLAG_GOT_TM39_FROM_BROCK, PewterCity_Gym_EventScript_GiveTM39
# 66 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_BrockPostBattle
# 67 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 68 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 69 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 70 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_DefeatedBrock::
# 71 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	famechecker FAMECHECKER_BROCK, 1
# 72 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_DEFEATED_BROCK
# 73 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_BADGE01_GET
# 74 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 75 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 76 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_RUNNING_SHOES_GUY
# 77 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	set_gym_trainers_frlg 1
# 78 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GiveTM39
# 79 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 80 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 81 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GiveTM39::
# 82 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_TakeThisWithYou
# 83 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	checkitemspace ITEM_TM39
# 84 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PewterCity_Gym_EventScript_NoRoomForTM39
# 85 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	giveitem_msg PewterCity_Gym_Text_ReceivedTM39FromBrock, ITEM_TM39
# 86 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	setflag FLAG_GOT_TM39_FROM_BROCK
# 87 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_ExplainTM39
# 88 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 89 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 90 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 91 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_NoRoomForTM39::
# 92 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_DontHaveRoomForThis
# 93 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 94 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 95 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 96 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Liam::
# 97 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_LIAM, PewterCity_Gym_Text_LiamIntro, PewterCity_Gym_Text_LiamDefeat
# 98 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LiamPostBattle, MSGBOX_AUTOCLOSE
# 99 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 100 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 101 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_Franklin::
# 102 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	trainerbattle_single TRAINER_HIKER_FRANKLIN_2, PewterCity_Gym_Text_FranklinIntro, PewterCity_Gym_Text_FranklinDefeat
# 103 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
# 104 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 105 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 106 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuy::
# 107 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	lock
# 108 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	faceplayer
# 109 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_DEFEATED_BROCK, PewterCity_Gym_EventScript_GymGuyPostVictory
# 110 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LetMeTakeYouToTheTop, MSGBOX_YESNO
# 111 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_Gym_EventScript_GymGuyTakeMeToTop
# 112 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop
# 113 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 114 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 115 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyPostVictory::
# 116 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_YoureChampMaterial
# 117 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 118 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 119 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 120 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyTakeMeToTop::
# 121 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_LetsGetHappening
# 122 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 123 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 124 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 125 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyDontTakeMeToTop::
# 126 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_ItsFreeLetsGetHappening
# 127 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto PewterCity_Gym_EventScript_GymGuyAdvice
# 128 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 129 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 130 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymGuyAdvice::
# 131 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_TryDifferentPartyOrders
# 132 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	release
# 133 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 134 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 135 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatue::
# 136 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	lockall
# 137 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PewterCity_Gym_EventScript_GymStatuePostVictory
# 138 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatue
# 139 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
# 140 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 141 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 142 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_EventScript_GymStatuePostVictory::
# 143 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	msgbox PewterCity_Gym_Text_GymStatuePlayerWon
# 144 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	releaseall
# 145 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	end
# 146 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 147 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockPrePos::
# 148 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So, you managed to get past my trianers.\n"
# 149 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Impressive!\p"
# 150 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "My name is Brock, Pewter's Gym Leader.\n"
# 151 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get this battle started.$"
# 152 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 153 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockIntro::
# 154 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Fuhaha! You're going to challenge\n"
# 155 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "me knowing that you'll lose?\p"
# 156 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "That's the TRAINER's honor that\n"
# 157 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "compels you to challenge me.\p"
# 158 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Fine, then!\n"
# 159 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Show me your best!{PLAY_BGM}{MUS_RG_ENCOUNTER_GYM_LEADER}$"
# 160 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 161 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockDefeat::
# 162 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I took you for granted, and so\n"
# 163 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I lost.\p"
# 164 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "As proof of your victory, I confer\n"
# 165 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "on you this…the official POKéMON\l"
# 166 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEAGUE BOULDERBADGE.\p"
# 167 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{FONT_NORMAL}{PLAYER} received the BOULDERBADGE\n"
# 168 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from BROCK!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}\p"
# 169 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{FONT_MALE}Just having the BOULDERBADGE makes\n"
# 170 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "your POKéMON more powerful.\p"
# 171 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It also enables the use of the\n"
# 172 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "move FLASH outside of battle.\p"
# 173 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Of course, a POKéMON must know the\n"
# 174 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "move FLASH to use it.$"
# 175 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 176 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_TakeThisWithYou::
# 177 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Wait!\n"
# 178 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Take this with you.$"
# 179 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 180 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ReceivedTM39FromBrock::
# 181 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{PLAYER} received TM39\n"
# 182 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from BROCK.$"
# 183 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 184 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ExplainTM39::
# 185 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "A TM, Technical Machine, contains a\n"
# 186 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "technique for POKéMON.\p"
# 187 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Using a TM teaches the move it\n"
# 188 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "contains to a POKéMON.\p"
# 189 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "A TM is good for only one use.\p"
# 190 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So, when you use one, pick the\n"
# 191 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "POKéMON carefully.\p"
# 192 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Anyways…\n"
# 193 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "TM39 contains ROCK TOMB.\p"
# 194 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It hurls boulders at the foe and\n"
# 195 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "lowers its SPEED.$"
# 196 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 197 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_BrockPostBattle::
# 198 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "There are all kinds of TRAINERS in\n"
# 199 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "this huge world of ours.\p"
# 200 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You appear to be very gifted as a\n"
# 201 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "POKéMON TRAINER.\p"
# 202 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "So let me make a suggestion.\p"
# 203 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Go to the GYM in CERULEAN and test\n"
# 204 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "your abilities.$"
# 205 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 206 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_DontHaveRoomForThis::
# 207 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You don't have room for this.$"
# 208 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 209 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamIntro::
# 210 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Stop right there, kid!\p"
# 211 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're ten thousand light-years \n"
# 212 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from facing BROCK!$"
# 213 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 214 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamDefeat::
# 215 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Darn!\p"
# 216 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Light-years isn't time…\n"
# 217 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It measures distance!$"
# 218 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 219 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LiamPostBattle::
# 220 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're pretty hot.\n"
# 221 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "…But not as hot as BROCK!$"
# 222 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 223 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_FranklinIntro::
# 224 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I was just training at Mt. Moon!\n"
# 225 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're no match for my team!$"
# 226 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 227 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_FranklinDefeat::
# 228 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "No!\n"
# 229 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I don't have good insurance!$"
# 230 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 231 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_FranklinPostBattle::
# 232 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I'll have to build a team\n"
# 233 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "from scratch again...$"
# 234 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 235 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LetMeTakeYouToTheTop::
# 236 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Hiya!\n"
# 237 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Do you want to dream big?\p"
# 238 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Do you dare to dream of becoming\n"
# 239 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "the POKéMON champ?\p"
# 240 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "I'm no TRAINER, but I can advise\n"
# 241 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "you on how to win.\p"
# 242 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let me take you to the top!$"
# 243 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 244 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_LetsGetHappening::
# 245 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "All right!\n"
# 246 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get happening!$"
# 247 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 248 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_TryDifferentPartyOrders::
# 249 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "The first POKéMON out in a match is\n"
# 250 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "at the left of the POKéMON LIST.\p"
# 251 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "By changing the order of POKéMON,\n"
# 252 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "you may gain an advantage.\p"
# 253 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Try different orders to suit your\n"
# 254 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "opponent's party.$"
# 255 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 256 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_ItsFreeLetsGetHappening::
# 257 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "It's a free service!\n"
# 258 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Let's get happening!$"
# 259 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 260 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_YoureChampMaterial::
# 261 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "Just as I thought!\n"
# 262 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "You're POKéMON champ material!$"
# 263 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 264 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_GymStatue::
# 265 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
# 266 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEADER: BROCK\p"
# 267 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 268 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}$"
# 269 "data/maps/PewterCity_Gym_Frlg/scripts.pory"

# 270 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
PewterCity_Gym_Text_GymStatuePlayerWon::
# 271 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "PEWTER POKéMON GYM\n"
# 272 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "LEADER: BROCK\p"
# 273 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "WINNING TRAINERS:\n"
# 274 "data/maps/PewterCity_Gym_Frlg/scripts.pory"
	.string "{RIVAL}, {PLAYER}$"
