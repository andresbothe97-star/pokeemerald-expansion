DiglettsCave_B1F_Frlg_MapScripts::
# 2 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DiglettsCave_B1F_OnTransition
	.byte 0


DiglettsCave_B1F_OnTransition::
# 6 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_DIGLETTS_CAVE_B1F
	return


DiglettsCave_B1F_Archeologist::
# 10 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	lockall
# 11 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	faceplayer
# 12 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	msgbox DiglettsCave_B1F_Text_WeAreExcavatingRuins
# 13 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	waitmessage
# 14 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	applymovement LOCALID_DIGLETTSCAVE_B1F_ARCHEOLOGIST, Common_Movement_FaceOriginalDirection
# 15 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	waitmovement
# 16 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	releaseall
	end


DiglettsCave_B1F_Scientist::
# 21 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	lockall
# 22 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	faceplayer
# 23 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	msgbox DiglettsCave_B1F_Text_TooHeavyForMe
# 24 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	waitmessage
# 25 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	applymovement LOCALID_DIGLETTSCAVE_B1F_SCIENTIST, Common_Movement_FaceOriginalDirection
# 26 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	waitmovement
# 27 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	releaseall
	end


DiglettsCave_B1F_Bag::
# 32 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	lockall
# 33 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	msgbox DiglettsCave_B1F_Bag_Text_0
# 35 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	releaseall
	return


# 39 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"

# 40 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"

# 41 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
DiglettsCave_B1F_Text_WeAreExcavatingRuins::
# 42 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
    .string "Watch out Lad!\p"
# 43 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
    .string "Can't you see you're in\n"
# 44 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
    .string "an archeologic dig site!$"
# 45 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	
# 46 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
DiglettsCave_B1F_Text_TooHeavyForMe::
# 47 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
    .string "HUUUURRRMMMPPHHH\p"
# 48 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
    .string "This rock is way too heavy.\n"
# 49 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
    .string "Might need to borrow a Machop.$"

DiglettsCave_B1F_Bag_Text_0:
# 33 "data/maps/DiglettsCave_B1F_Frlg/scripts.pory"
	.string "A bag filled with trowels.\n"
	.string "Must be for digging.$"
