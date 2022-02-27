#pragma once

#include "windows.h"
#include <string>
#include <vector>

#include "../Log.hpp"
#include "../Structs.hpp"
#include "../Wwise/SoundEngine.hpp"

namespace VoiceOverControl {
	void PlayVoiceOver(VoiceOver voiceOver);
	void PlayVoiceOver(std::string voiceOver);

	inline std::vector<VoiceOver> VO_ResultsScreens{
		VoiceOver("play_VO_RESULTSSCREEN_001_07NARRATOR_DRY_26331", "Adequate Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_04NARRATOR_DRY_26328", "Alright Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_29NARRATOR_DRY_26351", "Amazing Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_05NARRATOR_DRY_26329", "Average Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_10NARRATOR_DRY_26334", "Awesome Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_15NARRATOR_DRY_26312", "Bad Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_15NARRATOR_DRY_26284", "Brilliant Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_23NARRATOR_DRY_26320", "Can Do Better"),
		VoiceOver("play_VO_RESULTSSCREEN_001_29NARRATOR_DRY_26286", "Comin' Along Nicely"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_22NARRATOR_DRY_26319", "Could Be Better"),
		VoiceOver("play_VO_RESULTSSCREEN_001_36NARRATOR_DRY_26293", "Could Be Worse"),
		VoiceOver("play_VO_RESULTSSCREEN_001_13NARRATOR_DRY_26337", "Dazzling Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_31NARRATOR_DRY_26288", "Decent Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_13NARRATOR_DRY_26310", "Disappointing Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_38NARRATOR_DRY_26295", "Don't Quit Your Day Job"),
		VoiceOver("play_VO_RESULTSSCREEN_001_22NARRATOR_DRY_26344", "Excellent Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_09NARRATOR_DRY_26306", "Excellent Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_23NARRATOR_DRY_26345", "Exceptional Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_26NARRATOR_DRY_26348", "Exemplary Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_11NARRATOR_DRY_26308", "Fantastic Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_17NARRATOR_DRY_26339", "Fantastic Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_14NARRATOR_DRY_26311", "Feeble Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_08NARRATOR_DRY_26332", "Fine Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_16NARRATOR_DRY_26338", "First Rate Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_12NARRATOR_DRY_26336", "Flawless Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_18NARRATOR_DRY_26315", "Getting Better"),
		VoiceOver("play_VO_RESULTSSCREEN_001_33NARRATOR_DRY_26290", "Getting Better"),
		VoiceOver("play_VO_RESULTSSCREEN_001_09NARRATOR_DRY_26333", "Good Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_03NARRATOR_DRY_26300", "Good Try"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_19NARRATOR_DRY_26316", "Good Work"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_06NARRATOR_DRY_26303", "Great Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_01NARRATOR_DRY_26325", "Great Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_37NARRATOR_DRY_26294", "Keep Practicing"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_27NARRATOR_DRY_26324", "Masterful Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_20NARRATOR_DRY_26342", "Masterful Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_28NARRATOR_DRY_26350", "Mindblowing Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_08NARRATOR_DRY_26305", "Must Try Harder"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_01NARRATOR_DRY_26298", "Need More Practice"),
		VoiceOver("play_VO_RESULTSSCREEN_001_32NARRATOR_DRY_26289", "Needs Some More Practice"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_21NARRATOR_DRY_26318", "Needs More Practice"),
		VoiceOver("play_VO_RESULTSSCREEN_001_28NARRATOR_DRY_26285", "Needs Some Work"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_20NARRATOR_DRY_26317", "Needs Some Work"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_31NARRATOR_DRY_26353", "Nice Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_30NARRATOR_DRY_26287", "Nice Playing"),
		VoiceOver("play_VO_RESULTSSCREEN_001_03NARRATOR_DRY_26327", "Not Bad Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_35NARRATOR_DRY_26292", "Not Too Bad"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_02NARRATOR_DRY_26299", "Not Too Bad"),
		VoiceOver("play_VO_RESULTSSCREEN_001_02NARRATOR_DRY_26326", "Okay Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_04NARRATOR_DRY_26301", "Okay Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_18NARRATOR_DRY_26340", "Outstanding Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_27NARRATOR_DRY_26349", "Passable Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_25NARRATOR_DRY_26321", "Perfect Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_11NARRATOR_DRY_26335", "Perfect Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_07NARRATOR_DRY_26304", "Poor Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_34NARRATOR_DRY_26291", "Pretty Good Playin'"),
		VoiceOver("play_VO_RESULTSSCREEN_001_21NARRATOR_DRY_26343", "Rockstar Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_16NARRATOR_DRY_26313", "Rough Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_06NARRATOR_DRY_26330", "Satisfactory Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_24NARRATOR_DRY_26346", "Spectacular Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_17NARRATOR_DRY_26314", "Subpar Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_30NARRATOR_DRY_26352", "Superb Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_10NARRATOR_DRY_26307", "Superb Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_14NARRATOR_DRY_26283", "Superb Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_24NARRATOR_DRY_26322", "Top Notch Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_26NARRATOR_DRY_26323", "True Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_25NARRATOR_DRY_26347", "Unparallel Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_05NARRATOR_DRY_26302", "Very Good Performance"),
		VoiceOver("play_VO_RESULTSSCREEN2_001_12NARRATOR_DRY_26309", "Weak Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_19NARRATOR_DRY_26341", "Wonderful Performance"),
		VoiceOver("play_VO_RESULTSSCREEN_001_39NARRATOR_DRY_26296", "You're Gonna Be A Superstar"),
	};
	inline std::vector<VoiceOver> VO_FirstEncounter{
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_004_16NARRATOR_DRY_23529", "Alright, Now You're Ready To Take On Rocksmith"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_11NARRATOR_DRY_23512", "Alright, Sounds Great"),
		VoiceOver("Play_CI_FIRSTENCOUNTER_BASSBEGINNERCOPY_003_04NARRATOR_DRY_12958", "And Finally The G String In Orange (Bass)"),
		VoiceOver("Play_CI_FIRSTENCOUNTER_LEADBEGINNERCOPY_003_06NARRATOR_DRY_13308", "And Finally The High E String In Purple (Guitar)"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_08NARRATOR_DRY_23509", "And It'll Show You Have Sharp Or Flat You Are"),
		VoiceOver("play_VO_GLOBAL_007_13NARRATOR_DRY_13421", "Be Sure Not To Hit The Other Strings When You Try"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAB_002_01NARRATOR_DRY_24060", "First, The Screen Shows The Strings As If You're Looking Through The Back Of The Bass"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_02NARRATOR_DRY_23503", "First, The Screen Shows The Strings As If You're Looking Through The Back Of The Guitar"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_04NARRATOR_DRY_23533", "If You'd Rather Have The Low E On The Bottom, You Can Flip The Display In The Options Menu"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_06NARRATOR_DRY_23507", "It Pops Up Over The String You're Tuning"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_09NARRATOR_DRY_23510", "Now, Go Ahead And Tune"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_12NARRATOR_DRY_23767", "Now Let's Play Each String One More Time, Just To Double Check That You're Good To Go"),
		VoiceOver("Play_CI_FIRSTENCOUNTER_BASSBEGINNERCOPY_003_01NARRATOR_DRY_12954", "Now Let's Tune The Other Strings (Bass)"),
		VoiceOver("Play_CI_FIRSTENCOUNTER_LEADBEGINNERCOPY_003_01NARRATOR_DRY_13197", "Now Let's Tune The Other Strings (Guitar)"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERBL_002_03NARRATOR_DRY_24013", "Now The G String In Orange (Guitar)"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_07NARRATOR_DRY_23508", "Play The String"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_01NARRATOR_DRY_23502", "Rocksmith Does A Few Things Differently From What You Might Be Used To"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAB_002_02NARRATOR_DRY_24062", "So The E's On Top"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_03NARRATOR_DRY_23505", "So The Low E String's On Top"),
		VoiceOver("Play_CI_FIRSTENCOUNTER_LEADBEGINNERCOPY_003_03NARRATOR_DRY_13200", "The Next One After That Is The D String. It's Blue (Guitar)"),
		VoiceOver("Play_CI_FIRSTENCOUNTER_BASSBEGINNERCOPY_003_02NARRATOR_DRY_12956", "The Next One Down Is The A String. It's Highlighted In Yellow (Bass)"),
		VoiceOver("Play_CI_FIRSTENCOUNTER_LEADBEGINNERCOPY_003_02NARRATOR_DRY_13199", "The Next One Down Is The A String. It's Highlighted In Yellow (Guitar)"),
		VoiceOver("Play_CI_FIRSTENCOUNTER_LEADBEGINNERCOPY_003_05NARRATOR_DRY_13307", "The Next To Last String Is The B String. It's Green (Guitar)"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_05NARRATOR_DRY_23506", "The Tuner's A Little Different Too"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERBB_002_01NARRATOR_DRY_24038", "This One Here Is The D String. It's Blue."),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERBL_002_02NARRATOR_DRY_24012", "Watch Out For This Next Peg. It's The One Furthest Away From You."),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERAD_003_10NARRATOR_DRY_23511", "While You Tune, Pay Attention To The Color That Goes With Each String, That's Gonna Be Important"),
		VoiceOver("play_VO_GLOBAL_011_01NARRATOR_DRY_35993", "You Wanna Be On The E String (Bass)"),
		VoiceOver("play_VO_GLOBAL_011_02NARRATOR_DRY_35994", "You Wanna Be On The A String (Bass)"),
		VoiceOver("play_VO_GLOBAL_011_03NARRATOR_DRY_35995", "You Wanna Be On The D String (Bass)"),
		VoiceOver("play_VO_GLOBAL_011_04NARRATOR_DRY_35996", "You Wanna Be On The G String (Bass)"),
		VoiceOver("play_VO_GLOBAL_007_04NARRATOR_DRY_13162", "You Wanna Be On The Low E String (Guitar)"),
		VoiceOver("play_VO_GLOBAL_007_06NARRATOR_DRY_13164", "You Wanna Be On The A String (Guitar)"),
		VoiceOver("play_VO_GLOBAL_007_07NARRATOR_DRY_13165", "You Wanna Be On The D String (Guitar)"),
		VoiceOver("play_VO_GLOBAL_007_08NARRATOR_DRY_13166", "You Wanna Be On The G String (Guitar)"),
		VoiceOver("play_VO_GLOBAL_007_09NARRATOR_DRY_13167", "You Wanna Be On The B String (Guitar)"),
		VoiceOver("play_VO_GLOBAL_007_10NARRATOR_DRY_13168", "You Wanna Be On The High E String (Guitar)"),


		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERBL_001_01NARRATOR_DRY_24003", "Get Ready"),
		VoiceOver("play_VO_GLOBAL_001_07NARRATOR_DRY_12918", "Awesome"),
		VoiceOver("Play_VO_ONLYRECORD_GLOBA1_003_06NARRATOR_DRY_27911", "Let's Move On"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERBL_001_02NARRATOR_DRY_24004", "Now Make Some Noise"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERBL_001_03NARRATOR_DRY_24005", "Remember, Keep Strumming HARDER Until You Hit The Target Bar On The Calibration Meter At The Top Of The Screen"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERER_001_01NARRATOR_DRY_23763", "If You're Having Trouble With Anything, Or Just Wanna Go More In-Depth, Check Out The Help Topics"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERER_001_02NARRATOR_DRY_23764", "There You'll Find Videos, Diagrams, And Tips On Pretty Much Everything You Need To Know To Get Started"),
		VoiceOver("Play_VO_FIRSTENCOUNTER_FIRSTENCOUNTERBL_001_05NARRATOR_DRY_24007", "Great Job"),
		VoiceOver("Play_VO_STARTUPFLOW_002_01NARRATOR_DRY_24071", "Well Then, Welcome Aboard. Now, How Experienced Would You Say You Are At Playing Guitar Or Bass"),
		VoiceOver("play_VO_STARTUPFLOW_002_03NARRATOR_DRY_24072", "Think Mostly About The One You Want To Play First, Today"),
		VoiceOver("Play_VO_GLOBAL_006_48NARRATOR_DRY_26277", "You're Ready For The Practice Track Now. Here It Goes"),
		VoiceOver("Play_VO_GLOBAL_006_50NARRATOR_DRY_26279", "You're Ready To Apply This To A Practice Track Now. Here It Goes"),
		VoiceOver("Play_VO_GLOBAL_006_52NARRATOR_DRY_26281", "Okay, Now Let's Put It All Together In A Song. Here It Goes"),
		VoiceOver("Play_VO_STARTUPFLOW_007_01NARRATOR_DRY_24098", "Do You Plan On Playing Right Handed Or Left Handed"),
		VoiceOver("Play_VO_STARTUPFLOW_008_01NARRATOR_DRY_24104", "Do You Plan On Playing Right Handed Or Left Handed"),
		VoiceOver("Play_VO_STARTUPFLOW_009_01NARRATOR_DRY_24107", "Do You Plan On Playing Righty Or Lefty"),
		VoiceOver("Play_VO_STARTUPFLOW_010_01NARRATOR_DRY_24111", "Do You Plan On Playing Righty Or Lefty"),
		VoiceOver("Play_VO_STARTUPFLOW_007_02NARRATOR_DRY_24099", "If You Want To Hold The Pick And Strum With Your Right Hand, Choose Right Handed"),
		VoiceOver("Play_VO_STARTUPFLOW_007_03NARRATOR_DRY_24100", "If You Want To Hold The Pick And Strum With Your Left Hand, Choose Left Handed"),
		VoiceOver("Play_VO_STARTUPFLOW_008_02NARRATOR_DRY_24102", "If You Want To Hold The Neck Of The Bass With Your Left Hand, And Play The String With Your Right, Then Choose Right Handed"),
		VoiceOver("Play_VO_STARTUPFLOW_008_03NARRATOR_DRY_24103", "If You Want To Hold The Neck Of The Bass With Your Right Hand, And Play The String With Your Left, Then Choose Left Handed"),
		VoiceOver("Play_VO_STARTUPFLOW_009_02NARRATOR_DRY_24108", "If You Want To Hold The Pick And Strum With Your Right Hand, Choose Righty"),
		VoiceOver("Play_VO_STARTUPFLOW_009_03NARRATOR_DRY_24109", "If You Want To Hold The Pick And Strum With Your Left Hand, Choose Lefty"),
		VoiceOver("Play_VO_STARTUPFLOW_010_02NARRATOR_DRY_24112", "If You Want To Hold The Neck Of The Bass With Your Left Hand, And Play The String With Your Right, Then Choose Righty"),
		VoiceOver("Play_VO_STARTUPFLOW_010_03NARRATOR_DRY_24113", "If You Want To Hold The Neck Of The Bass With Your Right Hand, And Play The String With Your Left, Then Choose Lefty"),
		VoiceOver("Play_VO_MENUMISC_004_14NARRATOR_DRY_26583", "Give This One A Shot"),
	};

	inline std::vector<VoiceOver> VO_SFX{
		VoiceOver("Play_InGame_Click", "Drummer Count-in"),
		VoiceOver("Play_InGame_Click_Accent", "Accented Drummer Count-in"),

		VoiceOver("RR_RewindStart", "Riff Repeater Rewind (Infinite)"),
		VoiceOver("RR_RewindStop", "Riff Repeater Rewind Stop"),

		VoiceOver("RR_AutoContinue", "Riff Repeater Auto-Continue"),
		VoiceOver("RR_Select_FromSong", "Riff Repeater Select"),

		VoiceOver("Play_Select", "Select Song"),
		VoiceOver("Play_SongDeSelect", "Deselect Song"),

		VoiceOver("Nav_Up", "Up"),
		VoiceOver("Nav_Down", "Down"),
		VoiceOver("Nav_Mouse_Focus", "Highlight"),
		VoiceOver("Nav_Select", "Select"),

		VoiceOver("Gcade_Nav_Up", "Up (Guitarcade)"),
		VoiceOver("Gcade_Nav_Down", "Down(Guitarcade)"),
		VoiceOver("Gcade_Nav_Mouse_Focus", "Highlight (Guitarcade)"),
		VoiceOver("Gcade_Nav_Select", "Select (Guitarcade)"),

		VoiceOver("Play_mg_UI_SA_GameOver", "Score Attack Game Over"),
		VoiceOver("Play_mg_UI_SA_Cheer_Platinum", "Score Attack Platinum"),
		VoiceOver("Play_mg_UI_SA_Cheer_Strikes_0", "Score Attack Zero Strikes"),
		VoiceOver("Play_mg_UI_SA_Cheer_Strikes_1", "Score Attack One Strike"),
		VoiceOver("Play_mg_UI_SA_Cheer_Strikes_2", "Score Attack Two Strikes"),

		VoiceOver("LSN_Nav_Select", "Lesson Mode Select"),
		VoiceOver("LSN_Nav_Left", "Lesson Mode Left"),
		VoiceOver("LSN_Nav_Right", "Lesson Mode Right"),

		VoiceOver("Slider_Nav_Left", "Slider Left"),
		VoiceOver("Slider_Nav_Right", "Slider Right"),
		VoiceOver("Slider_Mouse_Move", "Slider Move"),
		VoiceOver("Slider_Mouse_Select", "Slider Select"),

		VoiceOver("GearChangeStarted", "Gear Change Start"),
		VoiceOver("GearChangeComplete", "Gear Change End"),

		VoiceOver("Dialog_TransitionIn", "Dialog Opening"),
		VoiceOver("Enter_Dialog_MissionComp", "Mission Complete"),
		VoiceOver("Enter_Dialog_RewardUnlock", "Unlock Reward"),
		VoiceOver("Enter_Dialog_NewMission", "New Mission"),
	};

	inline std::vector<VoiceOver> VO_Crowd{
		VoiceOver("Play_Crowd", "Play_Crowd"),
		VoiceOver("Stop_Crowd", "Stop_Crowd"),

		VoiceOver("Play_CrowdBookEnds_Start_0", "Play_CrowdBookEnds_Start_0"),
		VoiceOver("Play_CrowdBookEnds_Start_1", "Play_CrowdBookEnds_Start_1"),
		VoiceOver("Play_CrowdBookEnds_Start_2", "Play_CrowdBookEnds_Start_2"),
		VoiceOver("Play_CrowdBookEnds_Start_3", "Play_CrowdBookEnds_Start_3"),
		VoiceOver("Play_CrowdBookEnds_Stop", "Play_CrowdBookEnds_Stop"),

		VoiceOver("Play_VR_Start_0", "Play_VR_Start_0"),
		VoiceOver("Play_VR_Start_1", "Play_VR_Start_1"),
		VoiceOver("Play_VR_Start_2", "Play_VR_Start_2"),
		VoiceOver("Play_VR_Start_3", "Play_VR_Start_3"),
		VoiceOver("Stop_VR", "Stop_VR"),

		VoiceOver("Play_GenericCheer_0", "Play_GenericCheer_0"),
		VoiceOver("Play_GenericCheer_1", "Play_GenericCheer_1"),
		VoiceOver("Play_GenericCheer_2", "Play_GenericCheer_2"),
		VoiceOver("Play_GenericCheer_3", "Play_GenericCheer_3"),

		VoiceOver("Play_ShoutOut_0", "Play_ShoutOut_0"),
		VoiceOver("Play_ShoutOut_1", "Play_ShoutOut_1"),
		VoiceOver("Play_ShoutOut_2", "Play_ShoutOut_2"),
		VoiceOver("Play_ShoutOut_3", "Play_ShoutOut_3"),

		VoiceOver("Play_Ambience_0", "Play_Ambience_0"),
		VoiceOver("Play_Ambience_1", "Play_Ambience_1"),
		VoiceOver("Play_Ambience_2", "Play_Ambience_2"),
		VoiceOver("Play_Ambience_3", "Play_Ambience_3"),
		VoiceOver("Stop_Ambience_CT", "Stop_Ambience_CT"),

		VoiceOver("Play_Misc1_0", "Play_Misc1_0"),
		VoiceOver("Play_Misc1_1", "Play_Misc1_1"),
		VoiceOver("Play_Misc1_2", "Play_Misc1_2"),
		VoiceOver("Play_Misc1_3", "Play_Misc1_3"),
		VoiceOver("Play_Misc2_0", "Play_Misc2_0"),
		VoiceOver("Play_Misc2_1", "Play_Misc2_1"),
		VoiceOver("Play_Misc2_2", "Play_Misc2_2"),
		VoiceOver("Play_Misc2_3", "Play_Misc2_3"),
		VoiceOver("Play_Misc3_0", "Play_Misc3_0"),
		VoiceOver("Play_Misc3_1", "Play_Misc3_1"),
		VoiceOver("Play_Misc3_2", "Play_Misc3_2"),
		VoiceOver("Play_Misc3_3", "Play_Misc3_3"),
		VoiceOver("Play_Misc4_0", "Play_Misc4_0"),
		VoiceOver("Play_Misc4_1", "Play_Misc4_1"),
		VoiceOver("Play_Misc4_2", "Play_Misc4_2"),
		VoiceOver("Play_Misc4_3", "Play_Misc4_3"),
	};

	inline VoiceOver selectedVoiceOver;
}