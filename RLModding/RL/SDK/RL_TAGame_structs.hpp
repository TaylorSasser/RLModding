#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_UnrealUnitsPerMeter                                100
#define CONST_MaxLoadoutSets                                     50
#define CONST_BoostLevel_Activated                               0.0f
#define CONST_MeshRadius                                         15.0f
#define CONST_MeshWidth                                          15.0f
#define CONST_MAX_REPLICATED_VOTERS                              8
#define CONST_PlayerCountIrrelevant                              "NO_COUNT"
#define CONST_BoostLevel_Active                                  1.0f
#define CONST_BoostLevel_Inactive                                -1.0f
#define CONST_MAX_NAMEPLATES                                     8

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TAGame._AITypes_TA.EAITraitValue
enum class EAITraitValue
{
	AITraitValue_Low               = 0,
	AITraitValue_Medium            = 1,
	AITraitValue_High              = 2,
	AITraitValue_MAX               = 3
};


// Enum TAGame._AITypes_TA.EBTStatus
enum class EBTStatus
{
	BTStatus_Fail                  = 0,
	BTStatus_Success               = 1,
	BTStatus_Running               = 2,
	BTStatus_MAX                   = 3
};


// Enum TAGame._AITypes_TA.EAITeam
enum class EAITeam
{
	AITeam_Self                    = 0,
	AITeam_Enemy                   = 1,
	AITeam_Any                     = 2,
	AITeam_MAX                     = 3
};


// Enum TAGame._Types_TA.EExperimentalMapStatus
enum class EExperimentalMapStatus
{
	EMS_Default                    = 0,
	EMS_OnlyExperimentalPlaylist   = 1,
	EMS_Any                        = 2,
	EMS_MAX                        = 3
};


// Enum TAGame._Types_TA.EMirrorFieldType
enum class EMirrorFieldType
{
	MFT_None                       = 0,
	MFT_X                          = 1,
	MFT_Y                          = 2,
	MFT_XY                         = 3,
	MFT_TeamIndex                  = 4,
	MFT_MAX                        = 5
};


// Enum TAGame._Types_TA.EUIMenuState
enum class EUIMenuState
{
	UIMS_StartMenu                 = 0,
	UIMS_MainMenu                  = 1,
	UIMS_MAX                       = 2
};


// Enum TAGame._Types_TA.EChatChannel
enum class EChatChannel
{
	EChatChannel_Match             = 0,
	EChatChannel_Team              = 1,
	EChatChannel_Party             = 2,
	EChatChannel_MAX               = 3
};


// Enum TAGame._Types_TA.ESkinType
enum class ESkinType
{
	EST_Default                    = 0,
	EST_Animated                   = 1,
	EST_AnimatedPrimaryOnly        = 2,
	EST_MAX                        = 3
};


// Enum TAGame._Types_TA.EKeySelection
enum class EKeySelection
{
	KS_Oldest                      = 0,
	KS_Newest                      = 1,
	KS_ShowKeyPicker               = 2,
	KS_MAX                         = 3
};


// Enum TAGame._Types_TA.EProductQuality
enum class EProductQuality
{
	EPQ_Common                     = 0,
	EPQ_Uncommon                   = 1,
	EPQ_Rare                       = 2,
	EPQ_VeryRare                   = 3,
	EPQ_Import                     = 4,
	EPQ_Exotic                     = 5,
	EPQ_BlackMarket                = 6,
	EPQ_Premium                    = 7,
	EPQ_Limited                    = 8,
	EPQ_MAX                        = 9
};


// Enum TAGame._Types_TA.EUnlockMethod
enum class EUnlockMethod
{
	UnlockMethod_Default           = 0,
	UnlockMethod_Drop              = 1,
	UnlockMethod_Special           = 2,
	UnlockMethod_Reward            = 3,
	UnlockMethod_DLC               = 4,
	UnlockMethod_Never             = 5,
	UnlockMethod_MAX               = 6
};


// Enum TAGame._Types_TA.EPaintFinishType
enum class EPaintFinishType
{
	PaintFinishType_Standard       = 0,
	PaintFinishType_Metallic       = 1,
	PaintFinishType_MAX            = 2
};


// Enum TAGame._Types_TA.EPaintColorVariant
enum class EPaintColorVariant
{
	PaintColorVariant_Primary      = 0,
	PaintColorVariant_LightAccent  = 1,
	PaintColorVariant_DarkAccent   = 2,
	PaintColorVariant_Emissive     = 3,
	PaintColorVariant_MAX          = 4
};


// Enum TAGame._Types_TA.EChallengeState
enum class EChallengeState
{
	ChallengeState_None            = 0,
	ChallengeState_Active          = 1,
	ChallengeState_Unlocked        = 2,
	ChallengeState_MAX             = 3
};


// Enum TAGame._Types_TA.ECustomMatchSettingsType
enum class ECustomMatchSettingsType
{
	CustomMatchSettingsType_PrivateMatch = 0,
	CustomMatchSettingsType_LocalMatch = 1,
	CustomMatchSettingsType_TourCreate = 2,
	CustomMatchSettingsType_MAX    = 3
};


// Enum TAGame._Types_TA.EReportPlayerReason
enum class EReportPlayerReason
{
	ReportPlayerReason_Harrassment = 0,
	ReportPlayerReason_UnsportsmanlikeConduct = 1,
	ReportPlayerReason_Cheating    = 2,
	ReportPlayerReason_MAX         = 3
};


// Enum TAGame._Types_TA.EEditingType
enum class EEditingType
{
	ET_FreeCam                     = 0,
	ET_Ball                        = 1,
	ET_Car                         = 2,
	ET_MAX                         = 3
};


// Enum TAGame._Types_TA.EEquippableProductSlot
enum class EEquippableProductSlot
{
	EPS_Skin                       = 0,
	EPS_Wheels                     = 1,
	EPS_Boost                      = 2,
	EPS_Hat                        = 3,
	EPS_Antenna                    = 4,
	EPS_MAX                        = 5
};


// Enum TAGame._Types_TA.EEquipAction
enum class EEquipAction
{
	EquipAction_Both               = 0,
	EquipAction_Team0              = 1,
	EquipAction_Team1              = 2,
	EquipAction_MAX                = 3
};


// Enum TAGame._Types_TA.EHistory
enum class EHistory
{
	H_None                         = 0,
	H_Add                          = 1,
	H_Remove                       = 2,
	H_MAX                          = 3
};


// Enum TAGame._Types_TA.EHistoryType
enum class EHistoryType
{
	HT_None                        = 0,
	HT_Undo                        = 1,
	HT_Redo                        = 2,
	HT_MAX                         = 3
};


// Enum TAGame._Types_TA.EPawnType
enum class EPawnType
{
	PT_Player                      = 0,
	PT_Spectator                   = 1,
	PT_Editor                      = 2,
	PT_MAX                         = 3
};


// Enum TAGame._Types_TA.ESaveGameResult
enum class ESaveGameResult
{
	SaveGameResult_Pending         = 0,
	SaveGameResult_Success         = 1,
	SaveGameResult_UserNotSignedIn = 2,
	SaveGameResult_Error           = 3,
	SaveGameResult_NoSpace         = 4,
	SaveGameResult_MAX             = 5
};


// Enum TAGame._Types_TA.EProductThumbnailSize
enum class EProductThumbnailSize
{
	PTS_Garage                     = 0,
	PTS_Drop                       = 1,
	PTS_Preview                    = 2,
	PTS_MAX                        = 3
};


// Enum TAGame._Types_TA.EPartyChatCommands
enum class EPartyChatCommands
{
	EPartyChat_Message             = 0,
	EPartyChat_Clear               = 1,
	EPartyChat_Repopulated         = 2,
	EPartyChat_MAX                 = 3
};


// Enum TAGame._Types_TA.EProductAttachmentSocket
enum class EProductAttachmentSocket
{
	PAS_Hat                        = 0,
	PAS_Front                      = 1,
	PAS_Antenna                    = 2,
	PAS_UnderGlow                  = 3,
	PAS_Root                       = 4,
	PAS_MAX                        = 5
};


// Enum TAGame._Types_TA.ETAStatType
enum class ETAStatType
{
	StatType_Private               = 0,
	StatType_Unranked              = 1,
	StatType_Ranked                = 2,
	StatType_MAX                   = 3
};


// Enum TAGame._Types_TA.EBallHitType
enum class EBallHitType
{
	HitType_Item0                  = 0,
	HitType_Item1                  = 1,
	HitType_Item2                  = 2,
	HitType_Car                    = 3,
	HitType_MAX                    = 4
};


// Enum TAGame._Types_TA.EVoteStatus
enum class EVoteStatus
{
	VOTE_Pending                   = 0,
	VOTE_Yes                       = 1,
	VOTE_No                        = 2,
	VOTE_MAX                       = 3
};


// Enum TAGame._Types_TA.ETrainingTag
enum class ETrainingTag
{
	Tag_Aerials                    = 0,
	Tag_Bounces                    = 1,
	Tag_Shots                      = 2,
	Tag_Saves                      = 3,
	Tag_Clears                     = 4,
	Tag_Rebounds                   = 5,
	Tag_Redirects                  = 6,
	Tag_Freestyles                 = 7,
	Tag_Dribbles                   = 8,
	Tag_AirDribbles                = 9,
	Tag_Kickoffs                   = 10,
	Tag_WallShots                  = 11,
	Tag_LongShots                  = 12,
	Tag_CloseShots                 = 13,
	Tag_AngleShots                 = 14,
	Tag_BackwardsShots             = 15,
	Tag_Offense                    = 16,
	Tag_Defense                    = 17,
	Tag_PinchShots                 = 18,
	Tag_MAX                        = 19
};


// Enum TAGame._Types_TA.EDifficulty
enum class EDifficulty
{
	D_Easy                         = 0,
	D_Medium                       = 1,
	D_Hard                         = 2,
	D_MAX                          = 3
};


// Enum TAGame._Types_TA.ETrainingType
enum class ETrainingType
{
	Training_None                  = 0,
	Training_Aerial                = 1,
	Training_Goalie                = 2,
	Training_Striker               = 3,
	Training_MAX                   = 4
};


// Enum TAGame._Types_TA.EDemolishSpeed
enum class EDemolishSpeed
{
	DemolishSpeed_Supersonic       = 0,
	DemolishSpeed_None             = 1,
	DemolishSpeed_MAX              = 2
};


// Enum TAGame._Types_TA.EDemolishTarget
enum class EDemolishTarget
{
	DemolishTarget_OtherTeam       = 0,
	DemolishTarget_Everyone        = 1,
	DemolishTarget_None            = 2,
	DemolishTarget_MAX             = 3
};


// Enum TAGame._Types_TA.EProductFilterLogLevel
enum class EProductFilterLogLevel
{
	ProductFilterLogLevel_Filtered = 0,
	ProductFilterLogLevel_UnFiltered = 1,
	ProductFilterLogLevel_MAX      = 2
};


// Enum TAGame._Types_TA.EProductTradeRestriction
enum class EProductTradeRestriction
{
	ProductTradeRestriction_P2P    = 0,
	ProductTradeRestriction_TradeIn = 1,
	ProductTradeRestriction_MAX    = 2
};


// Enum TAGame._Types_TA.EControllerSoundMode
enum class EControllerSoundMode
{
	CSM_Multiplayer                = 0,
	CSM_On                         = 1,
	CSM_Off                        = 2,
	CSM_MAX                        = 3
};


// Enum TAGame._Types_TA.EVoiceFilter
enum class EVoiceFilter
{
	VoiceFilter_All                = 0,
	VoiceFilter_Preset             = 1,
	VoiceFilter_Team               = 2,
	VoiceFilter_Friends            = 3,
	VoiceFilter_None               = 4,
	VoiceFilter_MAX                = 5
};


// Enum TAGame._Types_TA.EPaintTeam
enum class EPaintTeam
{
	PaintTeam_Blue                 = 0,
	PaintTeam_Orange               = 1,
	PaintTeam_None                 = 2,
	PaintTeam_MAX                  = 3
};


// Enum TAGame._Types_TA.SearchStatusOwner
enum class ESearchStatusOwner
{
	StatusOwner_None               = 0,
	StatusOwner_Matchmaking        = 1,
	StatusOwner_PrivateMatch       = 2,
	StatusOwner_Lan                = 3,
	StatusOwner_Tournaments        = 4,
	StatusOwner_MAX                = 5
};


// Enum TAGame._Types_TA.EMatchmakingViewTab
enum class EMatchmakingViewTab
{
	MatchmakingViewTab_Unranked    = 0,
	MatchmakingViewTab_Ranked      = 1,
	MatchmakingViewTab_MAX         = 2
};


// Enum TAGame._Types_TA.EWheelPosition
enum class EWheelPosition
{
	WP_FrontLeft                   = 0,
	WP_FrontRight                  = 1,
	WP_BackLeft                    = 2,
	WP_BackRight                   = 3,
	WP_MAX                         = 4
};


// Enum TAGame.AchievementManager_TA.EAchievementType
enum class EAchievementType
{
	AT_Game                        = 0,
	AT_EXP0                        = 1,
	AT_DLC0                        = 2,
	AT_DLC1                        = 3,
	AT_DLC2                        = 4,
	AT_XBO0                        = 5,
	AT_DLC3                        = 6,
	AT_DLC4                        = 7,
	AT_DLC5                        = 8,
	AT_DLC6                        = 9,
	AT_MAX                         = 10
};


// Enum TAGame.AchievementManager_TA.EAchievementGame
enum class EAchievementGame
{
	AG_Virtuoso                    = 0,
	AG_Stocked                     = 1,
	AG_FarFarAway                  = 2,
	AG_SuperVictorious             = 3,
	AG_Champion                    = 4,
	AG_TheStreak                   = 5,
	AG_HelensPride                 = 6,
	AG_BattleCarCollector          = 7,
	AG_DropsintheBucket            = 8,
	AG_Rocketeer                   = 9,
	AG_GreaseMonkey                = 10,
	AG_PitchVeteran                = 11,
	AG_RidersBlock                 = 12,
	AG_BreakShot                   = 13,
	AG_Turbocharger                = 14,
	AG_DrillSergeant               = 15,
	AG_MinutetoWinit               = 16,
	AG_SpeedDemon                  = 17,
	AG_PickMeUp                    = 18,
	AG_WallCrawler                 = 19,
	AG_TeamPlayer                  = 20,
	AG_SARPBCForever               = 21,
	AG_FeatherinYourRecap          = 22,
	AG_Winner                      = 23,
	AG_CleanSheet                  = 24,
	AG_TripleThreat                = 25,
	AG_DoubleUp                    = 26,
	AG_SinglesClub                 = 27,
	AG_PerfectStart                = 28,
	AG_StillAShowOff               = 29,
	AG_KnowTheDrill                = 30,
	AG_Traveler                    = 31,
	AG_Tinkerer                    = 32,
	AG_FirstTimer                  = 33,
	AG_BarrasBravas                = 34,
	AG_Friendly                    = 35,
	AG_MAX                         = 36
};


// Enum TAGame.AchievementManager_TA.EAchievementEXP0
enum class EAchievementEXP0
{
	AEXP0_SkyHigh                  = 0,
	AEXP0_AllFours                 = 1,
	AEXP0_Gladiator                = 2,
	AEXP0_MAX                      = 3
};


// Enum TAGame.AchievementManager_TA.EAchievementDLC0
enum class EAchievementDLC0
{
	ADLC0_WinningIsWinning         = 0,
	ADLC0_AnInchAnd62Miles         = 1,
	ADLC0_RideOrDie                = 2,
	ADLC0_DontLookBack             = 3,
	ADLC0_FamilyNotFriends         = 4,
	ADLC0_DriftKing                = 5,
	ADLC0_MAX                      = 6
};


// Enum TAGame.AchievementManager_TA.EAchievementDLC1
enum class EAchievementDLC1
{
	ADLC1_SurvivalOfTheFittest     = 0,
	ADLC1_Heartbreaker             = 1,
	ADLC1_NaturalProgression       = 2,
	ADLC1_Throwback                = 3,
	ADLC1_HotShotPartTwo           = 4,
	ADLC1_MAX                      = 5
};


// Enum TAGame.AchievementManager_TA.EAchievementDLC2
enum class EAchievementDLC2
{
	ADLC2_MyWorldIsFire            = 0,
	ADLC2_Spectacular              = 1,
	ADLC2_Savage                   = 2,
	ADLC2_Ruthless                 = 3,
	ADLC2_PsychoMasterExploder     = 4,
	ADLC2_MAX                      = 5
};


// Enum TAGame.AchievementManager_TA.EAchievementXBO0
enum class EAchievementXBO0
{
	AXBO0_NiceHat                  = 0,
	AXBO0_MarcusVMasterChief       = 1,
	AXBO0_MAX                      = 2
};


// Enum TAGame.AchievementManager_TA.EAchievementDLC6
enum class EAchievementDLC6
{
	ADLC6_StormTrooper             = 0,
	ADLC6_GoodTimes                = 1,
	ADLC6_SwapMeet                 = 2,
	ADLC6_TradeSecret              = 3,
	ADLC6_RankUp                   = 4,
	ADLC6_ComingOnStrong           = 5,
	ADLC6_MAX                      = 6
};


// Enum TAGame.AchievementManager_TA.EAchievementDLC5
enum class EAchievementDLC5
{
	ADLC5_RegisteredVoter          = 0,
	ADLC5_Metaverse                = 1,
	ADLC5_BraveTheElements         = 2,
	ADLC5_DamageControl            = 3,
	ADLC5_FullCourse               = 4,
	ADLC5_BuckminsterX10           = 5,
	ADLC5_MAX                      = 6
};


// Enum TAGame.AchievementManager_TA.EAchievementDLC4
enum class EAchievementDLC4
{
	ADLC4_GG                       = 0,
	ADLC4_Trifecta                 = 1,
	ADLC4_InfinitePower            = 2,
	ADLC4_StoppedCold              = 3,
	ADLC4_SeaTurtle                = 4,
	ADLC4_GetUpMrBubbles           = 5,
	ADLC4_RocketGenocider          = 6,
	ADLC4_MAX                      = 7
};


// Enum TAGame.AchievementManager_TA.EAchievementDLC3
enum class EAchievementDLC3
{
	ADLC3_MadScientist             = 0,
	ADLC3_IcingTheCake             = 1,
	ADLC3_LeftWingRightWing        = 2,
	ADLC3_FastBreak                = 3,
	ADLC3_BuzzerBeater             = 4,
	ADLC3_BuddingArtist            = 5,
	ADLC3_OneBetter                = 6,
	ADLC3_Certifiable              = 7,
	ADLC3_MAX                      = 8
};


// Enum TAGame.ActivityFeedManager_TA.EActivityFeedType
enum class EActivityFeedType
{
	AF_UnlockedBody                = 0,
	AF_DrivenDistance              = 1,
	AF_ScoredGoal                  = 2,
	AF_BlockedShot                 = 3,
	AF_WonGame                     = 4,
	AF_MVPScore                    = 5,
	AF_DefeatedFriend              = 6,
	AF_CompletedRegularSeason      = 7,
	AF_WonChampionship             = 8,
	AF_UnlockedItem                = 9,
	AF_UnlockedSweetTooth          = 10,
	AF_MAX                         = 11
};


// Enum TAGame.PitchTekDrawingComponent_TA.EPitchTekDecalType
enum class EPitchTekDecalType
{
	PTDT_Ball                      = 0,
	PTDT_Car                       = 1,
	PTDT_MAX                       = 2
};


// Enum TAGame.BTLock.ELockScope
enum class ELockScope
{
	LockScope_Local                = 0,
	LockScope_Global               = 1,
	LockScope_MAX                  = 2
};


// Enum TAGame.CameraState_ReplayAutoCam_TA.ECountDownFocus
enum class ECountDownFocus
{
	CDF_None                       = 0,
	CDF_Pan                        = 1,
	CDF_Rotate                     = 2,
	CDF_MAX                        = 3
};


// Enum TAGame.GFxData_LocalPlayer_TA.ESplitScreenPosition
enum class ESplitScreenPosition
{
	SSP_Center                     = 0,
	SSP_Left                       = 1,
	SSP_Right                      = 2,
	SSP_Top                        = 3,
	SSP_Bottom                     = 4,
	SSP_TopLeft                    = 5,
	SSP_TopRight                   = 6,
	SSP_BottomLeft                 = 7,
	SSP_BottomRight                = 8,
	SSP_MAX                        = 9
};


// Enum TAGame.ProductAsset_Body_TA.EForceProductsBehavior
enum class EForceProductsBehavior
{
	FPB_Licensed                   = 0,
	FPB_All                        = 1,
	FPB_MAX                        = 2
};


// Enum TAGame.GameEvent_Tutorial_TA.ERotationType
enum class ERotationType
{
	Rot_Auto                       = 0,
	Rot_AutoAim                    = 1,
	Rot_AutoForward                = 2,
	Rot_AutoArch                   = 3,
	Rot_World                      = 4,
	Rot_MapCenter                  = 5,
	Rot_MAX                        = 6
};


// Enum TAGame.GFxData_OnlineMatchStatus_TA.SearchMessageType
enum class ESearchMessageType
{
	MessageType_Status             = 0,
	MessageType_Warning            = 1,
	MessageType_MAX                = 2
};


// Enum TAGame.GFxData_UserSetting_TA.EUserSettingType
enum class EUserSettingType
{
	UserSettingType_List           = 0,
	UserSettingType_Boolean        = 1,
	UserSettingType_Scalar         = 2,
	UserSettingType_MAX            = 3
};


// Enum TAGame.GFxData_Training_TA.EV2TutorialType
enum class EV2TutorialType
{
	V2T_Basic                      = 0,
	V2T_Advanced                   = 1,
	V2T_BasicTeam                  = 2,
	V2T_AdvancedTeam               = 3,
	V2T_MAX                        = 4
};


// Enum TAGame.GFxEngine_TA.ESoundStatePriority
enum class ESoundStatePriority
{
	SSP_None                       = 0,
	SSP_Scoreboard                 = 1,
	SSP_Replay                     = 2,
	SSP_Pause                      = 3,
	SSP_BeginRound                 = 4,
	SSP_EndRound                   = 5,
	SSP_WinnerMenu                 = 6,
	SSP_MAX                        = 7
};


// Enum TAGame.ProductAsset_Wheel_TA.EMeshMirrorMode
enum class EMeshMirrorMode
{
	MeshMirrorMode_Mirror          = 0,
	MeshMirrorMode_Rotate          = 1,
	MeshMirrorMode_MAX             = 2
};


// Enum TAGame.Profile_TA.EProfileVersion
enum class EProfileVersion
{
	ProfileVersion_Initial         = 0,
	ProfileVersion_LoadoutPlayerTitle = 1,
	ProfileVersion_SaveReplayInput = 2,
	ProfileVersion_SaveReplayInput2 = 3,
	ProfileVersion_ChatRebind      = 4,
	ProfileVersion_SaveReplayInput3 = 5,
	ProfileVersion_DingoChatFix    = 6,
	ProfileVersion_CustomMatchSettings = 7,
	ProfileVersion_ChatSettings    = 8,
	ProfileVersion_TeamLoadouts    = 9,
	ProfileVersion_CarColors       = 10,
	ProfileVersion_ChatGamepadBindingConsoleOnly = 11,
	ProfileVersion_PaintFinishInLoadouts = 12,
	ProfileVersion_MusicPlaylistSelector = 13,
	ProfileVersion_MAX             = 14
};


// Enum TAGame.Replay_TA.EReplayVersion
enum class EReplayVersion
{
	ReplayVersion_Base             = 0,
	ReplayVersion_OnlineLoadout    = 1,
	ReplayVersion_CameraSettings   = 2,
	ReplayVersion_TeamLoadouts     = 3,
	ReplayVersion_MatchType        = 4,
	ReplayVersion_ActorName        = 5,
	ReplayVersion_MAX              = 6
};


// Enum TAGame.Replay_TA.EReplayState
enum class EReplayState
{
	ReplayState_Idle               = 0,
	ReplayState_Recording          = 1,
	ReplayState_Playing            = 2,
	ReplayState_MAX                = 3
};


// Enum TAGame.SaveData_TA.ESaveDataVersion
enum class ESaveDataVersion
{
	SaveDataVersion_Initial        = 0,
	SaveDataVersion_LightShafts    = 1,
	SaveDataVersion_NewOnlineProductsRemoved = 2,
	SaveDataVersion_MAX            = 3
};


// Enum TAGame.SkelControlSingleBoneCopy_TA.ECopyAxis
enum class ECopyAxis
{
	CopyAxis_X                     = 0,
	CopyAxis_Y                     = 1,
	CopyAxis_Z                     = 2,
	CopyAxis_Pitch                 = 3,
	CopyAxis_Yaw                   = 4,
	CopyAxis_Roll                  = 5,
	CopyAxis_MAX                   = 6
};


// Enum TAGame.Tutorial_TA.ETutorialOutput
enum class ETutorialOutput
{
	TutorialOutput_Ended           = 0,
	TutorialOutput_Completed       = 1,
	TutorialOutput_Failed          = 2,
	TutorialOutput_ScreenFadedIn   = 3,
	TutorialOutput_ScreenFadedOut  = 4,
	TutorialOutput_AllMessagesDisplayed = 5,
	TutorialOutput_Started         = 6,
	TutorialOutput_MAX             = 7
};


// Enum TAGame.Tutorial_TA.ETutorialStatus
enum class ETutorialStatus
{
	TutorialStatus_None            = 0,
	TutorialStatus_Failed          = 1,
	TutorialStatus_Completed       = 2,
	TutorialStatus_MAX             = 3
};


// Enum TAGame.Tutorial_TA.EPlayerDriveType
enum class EPlayerDriveType
{
	PlayerDriveType_All            = 0,
	PlayerDriveType_Player         = 1,
	PlayerDriveType_Bot            = 2,
	PlayerDriveType_MAX            = 3
};


// Enum TAGame.BreakOutActor_Platform_TA.EBreakoutDamageState
enum class EBreakoutDamageState
{
	DamageState_Start              = 0,
	DamageState_Damaged            = 1,
	DamageState_Broken             = 2,
	DamageState_MAX                = 3
};


// Enum TAGame.DistributionFloatSpeed_TA.ESpeedDistributionSpace
enum class ESpeedDistributionSpace
{
	SDD_Forward                    = 0,
	SDD_Side                       = 1,
	SDD_Up                         = 2,
	SDD_World                      = 3,
	SDD_MAX                        = 4
};


// Enum TAGame.ForceVolume_TA.EForceDirection
enum class EForceDirection
{
	EFD_VolumeRotation             = 0,
	EFD_ActorVelocity              = 1,
	EFD_Custom                     = 2,
	EFD_MAX                        = 3
};


// Enum TAGame.InterpTrackSkelControlRotation_TA.ERotationAxis
enum class ERotationAxis
{
	ROTAXIS_Yaw                    = 0,
	ROTAXIS_Pitch                  = 1,
	ROTAXIS_Roll                   = 2,
	ROTAXIS_MAX                    = 3
};


// Enum TAGame.ProductAttribute_Trademark_TA.ETrademarkGlyph
enum class ETrademarkGlyph
{
	TrademarkGlyph_TradeMark       = 0,
	TrademarkGlyph_Registered      = 1,
	TrademarkGlyph_Copyright       = 2,
	TrademarkGlyph_MAX             = 3
};


// Enum TAGame.GameEditor_Ring_TA.EDetectionType
enum class EDetectionType
{
	DT_Ball                        = 0,
	DT_Player                      = 1,
	DT_MAX                         = 2
};


// Enum TAGame.GameEvent_TrainingEditor_TA.EPlayTestType
enum class EPlayTestType
{
	PlayTest_LoopRound             = 0,
	PlayTest_IncrementRound        = 1,
	PlayTest_IncrementRoundLoop    = 2,
	PlayTest_MAX                   = 3
};


// Enum TAGame.SaveData_GameEditor_Training_TA.ETrainingSaveType
enum class ETrainingSaveType
{
	ETS_MyTraining                 = 0,
	ETS_Favorited                  = 1,
	ETS_Downloaded                 = 2,
	ETS_MAX                        = 3
};


// Enum TAGame.MenuSequencer_TA.ESequenceStatus
enum class ESequenceStatus
{
	SS_Idle                        = 0,
	SS_Entering                    = 1,
	SS_Leaving                     = 2,
	SS_Pending                     = 3,
	SS_MAX                         = 4
};


// Enum TAGame.CameraStateSelector_Priority_TA.EStatePriority
enum class EStatePriority
{
	SP_Default                     = 0,
	SP_OverrideAny                 = 1,
	SP_OverrideLower               = 2,
	SP_MAX                         = 3
};


// Enum TAGame.GFxData_MapPrefs_TA.EMapPrefType
enum class EMapPrefType
{
	MapPrefType_None               = 0,
	MapPrefType_Like               = 1,
	MapPrefType_Dislike            = 2,
	MapPrefType_MAX                = 3
};


// Enum TAGame.GFxData_ProductFilter_TA.EProductFilterType
enum class EProductFilterType
{
	ProductFilterType_TradeIn      = 0,
	ProductFilterType_P2P          = 1,
	ProductFilterType_MAX          = 2
};


// Enum TAGame.GFxData_TrainingModeBrowser_TA.ETrainingModeSearchTypes
enum class ETrainingModeSearchTypes
{
	TMST_AllPublic                 = 0,
	TMST_FeaturedOnly              = 1,
	TMST_MAX                       = 2
};


// Enum TAGame.SpecialPickup_Spring_TA.ESpringState
enum class ESpringState
{
	SpringState_Traveling          = 0,
	SpringState_PostHit            = 1,
	SpringState_MAX                = 2
};


// Enum TAGame.SpecialPickup_BallFreeze_TA.BallFreezeState
enum class EBallFreezeState
{
	STATE_Freezing                 = 0,
	STATE_Frozen                   = 1,
	STATE_MAX                      = 2
};


// Enum TAGame.SpecialPickup_GrapplingHook_TA.ERopeState
enum class ERopeState
{
	RopeState_Traveling            = 0,
	RopeState_Attached             = 1,
	RopeState_MAX                  = 2
};


// Enum TAGame.StaticMeshRBActor_TA.EApplyForceTo
enum class EApplyForceTo
{
	EAF_None                       = 0,
	EAF_Any                        = 1,
	EAF_CarOnly                    = 2,
	EAF_BallOnly                   = 3,
	EAF_MAX                        = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TAGame.AIController_TA.SkillRange
// 0x000C
struct FSkillRange
{
	float                                              Easy;                                                     // 0x0000(0x0004) (CPF_Edit)
	float                                              Hard;                                                     // 0x0004(0x0004) (CPF_Edit)
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_Transient)
};

// ScriptStruct TAGame._AITypes_TA.NamedEvent
// 0x0010
struct FNamedEvent
{
	struct FName                                       EventName;                                                // 0x0000(0x0008)
	class AActor*                                      Sender;                                                   // 0x0008(0x0004)
	float                                              RadiusSq;                                                 // 0x000C(0x0004)
};

// ScriptStruct TAGame._Types_TA.VehicleInputs
// 0x0020
struct FVehicleInputs
{
	float                                              Throttle;                                                 // 0x0000(0x0004) (CPF_Edit)
	float                                              Steer;                                                    // 0x0004(0x0004) (CPF_Edit)
	float                                              Pitch;                                                    // 0x0008(0x0004) (CPF_Edit)
	float                                              Yaw;                                                      // 0x000C(0x0004) (CPF_Edit)
	float                                              Roll;                                                     // 0x0010(0x0004) (CPF_Edit)
	float                                              DodgeForward;                                             // 0x0014(0x0004) (CPF_Edit)
	float                                              DodgeStrafe;                                              // 0x0018(0x0004) (CPF_Edit)
	unsigned long                                      bJump : 1;                                                // 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bActivateBoost : 1;                                       // 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bHoldingBoost : 1;                                        // 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bHandbrake : 1;                                           // 0x001C(0x0004) (CPF_Edit)
	unsigned long                                      bJumped : 1;                                              // 0x001C(0x0004)
};

// ScriptStruct TAGame._AITypes_TA.BTProxyData
// 0x0040
struct FBTProxyData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C)
	struct FVector                                     Gravity;                                                  // 0x0018(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0024(0x000C)
	float                                              Radius;                                                   // 0x0030(0x0004)
	float                                              Bounce;                                                   // 0x0034(0x0004)
	class AActor*                                      Actor;                                                    // 0x0038(0x0004)
	class AVehicle_TA*                                 Vehicle;                                                  // 0x003C(0x0004)
};

// ScriptStruct TAGame.AIController_TA.CachedProxyData
// 0x004C
struct FCachedProxyData
{
	class UBTProxyType*                                Type;                                                     // 0x0000(0x0004)
	int                                                Index;                                                    // 0x0004(0x0004)
	struct FBTProxyData                                Data;                                                     // 0x0008(0x0040)
	float                                              CacheTime;                                                // 0x0048(0x0004)
};

// ScriptStruct TAGame.AIController_TA.CachedTargetData
// 0x004C
struct FCachedTargetData
{
	class UBTTarget*                                   Target;                                                   // 0x0000(0x0004)
	int                                                Index;                                                    // 0x0004(0x0004)
	struct FBTProxyData                                Data;                                                     // 0x0008(0x0040)
	float                                              CacheTime;                                                // 0x0048(0x0004)
};

// ScriptStruct TAGame.AIController_TA.CachedObstaclePoly
// 0x0020
struct FCachedObstaclePoly
{
	struct FPointer                                    Poly;                                                     // 0x0000(0x0004) (CPF_Native)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FPlane                                      Plane;                                                    // 0x0010(0x0010)
};

// ScriptStruct TAGame.AIController_TA.CachedObstaclesData
// 0x0024
struct FCachedObstaclesData
{
	struct FVector                                     CarLocation;                                              // 0x0000(0x000C)
	struct FVector                                     CarNavMeshLocation;                                       // 0x000C(0x000C)
	TArray<struct FCachedObstaclePoly>                 Polys;                                                    // 0x0018(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._AITypes_TA.AITraits
// 0x0007
struct FAITraits
{
	class UAIRole_TA*                                  Role;                                                     // 0x0000(0x0004) (CPF_Edit)
	TEnumAsByte<EAITraitValue>                         Aggression;                                               // 0x0004(0x0001) (CPF_Edit)
	TEnumAsByte<EAITraitValue>                         Hostility;                                                // 0x0005(0x0001) (CPF_Edit)
	TEnumAsByte<EAITraitValue>                         Airplay;                                                  // 0x0006(0x0001) (CPF_Edit)
};

// ScriptStruct TAGame.AIManager_TA.CachedNavMeshLocation
// 0x001C
struct FCachedNavMeshLocation
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0004)
	struct FVector                                     NavMeshLocation;                                          // 0x0004(0x000C)
	struct FVector                                     OldActorLocation;                                         // 0x0010(0x000C)
};

// ScriptStruct TAGame.AssetProfiler_TA.AssetProfile
// 0x0040
struct FAssetProfile
{
	class UProductAsset_TA*                            Asset;                                                    // 0x0000(0x0004)
	struct FRenderProfile                              RenderTimeTotal;                                          // 0x0004(0x001C)
	struct FRenderProfile                              RenderTimePerAsset;                                       // 0x0020(0x001C)
	int                                                AssetCount;                                               // 0x003C(0x0004)
};

// ScriptStruct TAGame.RBActor_TA.NetworkSyncSettingsData
// 0x001C
struct FNetworkSyncSettingsData
{
	float                                              LocationFixRate;                                          // 0x0000(0x0004) (CPF_Edit)
	float                                              AngularFixRate;                                           // 0x0004(0x0004) (CPF_Edit)
	float                                              MinDeltaLocation;                                         // 0x0008(0x0004) (CPF_Edit)
	int                                                MinDeltaRotation;                                         // 0x000C(0x0004) (CPF_Edit, CPF_Const)
	float                                              MinDeltaLinearVelocity;                                   // 0x0010(0x0004) (CPF_Edit)
	float                                              ForceReplicationDelay;                                    // 0x0014(0x0004) (CPF_Edit)
	unsigned long                                      bDebug : 1;                                               // 0x0018(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.RBActor_TA.WorldContactData
// 0x0028
struct FWorldContactData
{
	unsigned long                                      bHasContact : 1;                                          // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0010(0x000C)
	struct FVector                                     Normal;                                                   // 0x001C(0x000C)
};

// ScriptStruct TAGame._Types_TA.AccumulatedRigidBodyCollision
// 0x0074
struct FAccumulatedRigidBodyCollision
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0004)
	class UPrimitiveComponent*                         Component;                                                // 0x0004(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UPhysicalMaterial*                           PhysMat;                                                  // 0x0008(0x0004)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C)
	struct FVector                                     OtherVelocity;                                            // 0x0018(0x000C)
	struct FVector                                     Location;                                                 // 0x0024(0x000C)
	struct FVector                                     Normal;                                                   // 0x0030(0x000C)
	struct FVector                                     NormalForce;                                              // 0x003C(0x000C)
	struct FVector                                     FrictionForce;                                            // 0x0048(0x000C)
	struct FVector                                     NormalVelocity;                                           // 0x0054(0x000C)
	struct FVector                                     FrictionVelocity;                                         // 0x0060(0x000C)
	int                                                NumCollisions;                                            // 0x006C(0x0004)
	int                                                NumContacts;                                              // 0x0070(0x0004)
};

// ScriptStruct TAGame._Types_TA.WeldingInfo
// 0x0020
struct FWeldingInfo
{
	class ARBActor_TA*                                 RBActor;                                                  // 0x0000(0x0004)
	struct FVector                                     Offset;                                                   // 0x0004(0x000C)
	float                                              Mass;                                                     // 0x0010(0x0004)
	struct FRotator                                    Rotation;                                                 // 0x0014(0x000C)
};

// ScriptStruct TAGame._Types_TA.BallHitInfo
// 0x00E1
struct FBallHitInfo
{
	class APRI_TA*                                     PRI;                                                      // 0x0000(0x0004)
	class APRI_TA*                                     AttackerPRI;                                              // 0x0004(0x0004)
	struct FName                                       CarName;                                                  // 0x0008(0x0008)
	int                                                TeamNum;                                                  // 0x0010(0x0004)
	struct FReplicatedRBState                          PreHitCarPhysics;                                         // 0x0014(0x0038)
	struct FReplicatedRBState                          PreHitBallPhysics;                                        // 0x004C(0x0038)
	struct FReplicatedRBState                          PostHitBallPhysics;                                       // 0x0084(0x0038)
	float                                              Distance;                                                 // 0x00BC(0x0004)
	float                                              Time;                                                     // 0x00C0(0x0004)
	struct FVector                                     HitLocation;                                              // 0x00C4(0x000C)
	struct FVector                                     HitNormal;                                                // 0x00D0(0x000C)
	unsigned long                                      bDodging : 1;                                             // 0x00DC(0x0004)
	unsigned long                                      bWheelsTouching : 1;                                      // 0x00DC(0x0004)
	unsigned long                                      bWorldTouching : 1;                                       // 0x00DC(0x0004)
	TEnumAsByte<EBallHitType>                          HitType;                                                  // 0x00E0(0x0001)
};

// ScriptStruct TAGame.Ball_TA.ExplosionData
// 0x0010
struct FExplosionData
{
	class UGoal_TA*                                    Goal;                                                     // 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
};

// ScriptStruct TAGame.Ball_TA.ExplosionDataExtended
// 0x0014
struct FExplosionDataExtended
{
	class UGoal_TA*                                    Goal;                                                     // 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	class APRI_TA*                                     Scorer;                                                   // 0x0010(0x0004)
};

// ScriptStruct TAGame.Ball_TA.PredictedPosition
// 0x0018
struct FPredictedPosition
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FVector                                     Velocity;                                                 // 0x000C(0x000C)
};

// ScriptStruct TAGame.Ball_TA.GoalPenetrationData
// 0x0020
struct FGoalPenetrationData
{
	class UGoal_TA*                                    Goal;                                                     // 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FVector                                     PlaneLocation;                                            // 0x0004(0x000C)
	struct FVector                                     PlaneNormal;                                              // 0x0010(0x000C)
	float                                              PenetrationDistance;                                      // 0x001C(0x0004)
};

// ScriptStruct TAGame.BallTrajectoryComponent_TA.TrajectorySetup
// 0x0014
struct FTrajectorySetup
{
	float                                              TotalSimulateTime;                                        // 0x0000(0x0004)
	unsigned long                                      bAlwaysEnabled : 1;                                       // 0x0004(0x0004)
	unsigned long                                      bUpdatePathEveryFrame : 1;                                // 0x0004(0x0004)
	int                                                TotalPoints;                                              // 0x0008(0x0004)
	int                                                MaxStepsPerFrame;                                         // 0x000C(0x0004)
	int                                                QuickTrajectorySteps;                                     // 0x0010(0x0004)
};

// ScriptStruct TAGame.BallTrajectoryComponent_Beam_TA.TrajectoryFX
// 0x0004
struct FTrajectoryFX
{
	class UParticleSystemComponent*                    Particle;                                                 // 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
};

// ScriptStruct TAGame.BallTrajectoryComponent_Spline_TA.TrajectorySplineFX
// 0x0004
struct FTrajectorySplineFX
{
	class ASplineLoftActorMovable*                     Spline;                                                   // 0x0000(0x0004)
};

// ScriptStruct TAGame.BallTrajectoryComponent_Mesh_TA.MeshInfo
// 0x0034
struct FMeshInfo
{
	class UStaticMeshComponent*                        Meshes;                                                   // 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C)
	int                                                PointIndex;                                               // 0x001C(0x0004)
	struct FVector                                     MoveDirection;                                            // 0x0020(0x000C)
	float                                              DistanceAlongPath;                                        // 0x002C(0x0004)
	unsigned long                                      bCrossedZero : 1;                                         // 0x0030(0x0004)
};

// ScriptStruct TAGame._Types_TA.RandomRange
// 0x0008
struct FRandomRange
{
	float                                              Min;                                                      // 0x0000(0x0004) (CPF_Edit)
	float                                              Max;                                                      // 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.BoostMesh_TA.BoostMeshOverride
// 0x0008
struct FBoostMeshOverride
{
	class UActorComponent*                             Mesh;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	class AFXActor_X*                                  CarType;                                                  // 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParam
// 0x0008
struct FAnimatedMaterialParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (CPF_Edit)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamFloat
// 0x0004 (0x000C - 0x0008)
struct FAnimatedMaterialParamFloat : public FAnimatedMaterialParam
{
	class UDistributionFloat*                          Value;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamVector
// 0x0004 (0x000C - 0x0008)
struct FAnimatedMaterialParamVector : public FAnimatedMaterialParam
{
	class UDistributionVector*                         Value;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialParamColor
// 0x0004 (0x0010 - 0x000C)
struct FAnimatedMaterialParamColor : public FAnimatedMaterialParamVector
{
	class UDistributionFloat*                          AlphaValue;                                               // 0x000C(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
};

// ScriptStruct TAGame.BoostMesh_TA.AnimatedMaterialMesh
// 0x0048
struct FAnimatedMaterialMesh
{
	struct FName                                       MeshAttachmentName;                                       // 0x0000(0x0008) (CPF_Edit)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0004) (CPF_Edit)
	int                                                MaterialIndex;                                            // 0x000C(0x0004) (CPF_Edit)
	TArray<struct FBoostMeshOverride>                  MeshOverrides;                                            // 0x0010(0x000C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	TArray<struct FAnimatedMaterialParamFloat>         FloatParams;                                              // 0x001C(0x000C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	TArray<struct FAnimatedMaterialParamVector>        VectorParams;                                             // 0x0028(0x000C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	TArray<struct FAnimatedMaterialParamColor>         ColorParams;                                              // 0x0034(0x000C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
	class UActorComponent*                             Mesh;                                                     // 0x0040(0x0004) (CPF_ExportObject, CPF_Transient, CPF_Component, CPF_EditInline)
	float                                              ElapsedTime;                                              // 0x0044(0x0004) (CPF_Transient)
};

// ScriptStruct TAGame.BreakOutActor_Platform_TA.BreakoutDamageState
// 0x0018
struct FBreakoutDamageState
{
	unsigned char                                      State;                                                    // 0x0000(0x0001)
	class APRI_TA*                                     Causer;                                                   // 0x0004(0x0004)
	struct FVector                                     DamageLocation;                                           // 0x0008(0x000C)
	unsigned long                                      bDirectDamage : 1;                                        // 0x0014(0x0004)
	unsigned long                                      bImmediate : 1;                                           // 0x0014(0x0004)
};

// ScriptStruct TAGame.BTComponent.BTStatusLog
// 0x0020
struct FBTStatusLog
{
	class UBTNode*                                     Node;                                                     // 0x0000(0x0004)
	int                                                Depth;                                                    // 0x0004(0x0004)
	TEnumAsByte<EBTStatus>                             Status;                                                   // 0x0008(0x0001)
	struct FString                                     Message;                                                  // 0x000C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bSetMessage : 1;                                          // 0x0018(0x0004)
	unsigned long                                      bCondition : 1;                                           // 0x0018(0x0004)
	float                                              LastEvalTime;                                             // 0x001C(0x0004)
};

// ScriptStruct TAGame._AITypes_TA.BTDynamicLinkData
// 0x000C
struct FBTDynamicLinkData
{
	struct FName                                       LinkName;                                                 // 0x0000(0x0008) (CPF_Edit)
	class UBTNode*                                     Node;                                                     // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.BTLockCollection.TimedLock
// 0x0010
struct FTimedLock
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	float                                              ReleaseTime;                                              // 0x0008(0x0004)
	unsigned long                                      bLockedOneFrame : 1;                                      // 0x000C(0x0004)
};

// ScriptStruct TAGame.CrowdActorSettings_TA.StatCrowdNoise
// 0x0008
struct FStatCrowdNoise
{
	class UStatEvent_TA*                               StatEvent;                                                // 0x0000(0x0004) (CPF_Edit, CPF_EditConst)
	class UCrowdNoiseModifier_TA*                      Noise;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_EditInline)
};

// ScriptStruct TAGame.CrowdActorSettings_TA.BallHitCrowdNoise
// 0x0008
struct FBallHitCrowdNoise
{
	float                                              RelativeSpeed;                                            // 0x0000(0x0004) (CPF_Edit)
	class UCrowdNoiseModifier_TA*                      Noise;                                                    // 0x0004(0x0004) (CPF_Edit, CPF_EditInline)
};

// ScriptStruct TAGame.CrowdActorSettings_TA.CrowdDefenseSettings
// 0x0010
struct FCrowdDefenseSettings
{
	float                                              DefenseZoneTime;                                          // 0x0000(0x0004) (CPF_Edit)
	float                                              DefenseZoneDistance;                                      // 0x0004(0x0004) (CPF_Edit)
	class UAkSoundCue*                                 Sound;                                                    // 0x0008(0x0004) (CPF_Edit)
	float                                              ReplayDelay;                                              // 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.EngineAudioComponent_TA.CarStateData
// 0x0010
struct FCarStateData
{
	float                                              Throttle;                                                 // 0x0000(0x0004) (CPF_Transient)
	float                                              WheelSpeed;                                               // 0x0004(0x0004) (CPF_Transient)
	float                                              EngineRPM;                                                // 0x0008(0x0004) (CPF_Transient)
	float                                              EngineLoad;                                               // 0x000C(0x0004) (CPF_Transient)
};

// ScriptStruct TAGame.EngineAudioProfile_TA.AudioMinMax
// 0x0008
struct FAudioMinMax
{
	float                                              Min;                                                      // 0x0000(0x0004) (CPF_Edit)
	float                                              RandRange;                                                // 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.EngineAudioProfile_TA.AudioGear
// 0x0010
struct FAudioGear
{
	struct FAudioMinMax                                RPMShiftDownRange;                                        // 0x0000(0x0008) (CPF_Edit)
	struct FAudioMinMax                                RPMShiftUpRange;                                          // 0x0008(0x0008) (CPF_Edit)
};

// ScriptStruct TAGame.FlockActor_TA.FlockAgent
// 0x0034
struct FFlockAgent
{
	unsigned long                                      bWaitingForOtherAgents : 1;                               // 0x0000(0x0004)
	float                                              DistanceAlongSpline;                                      // 0x0004(0x0004)
	float                                              Scale;                                                    // 0x0008(0x0004)
	struct FVector                                     Position;                                                 // 0x000C(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C)
	struct FVector                                     NormalizedSplineOffset;                                   // 0x0024(0x000C)
	class ASplineActor*                                CurrentSplineActor;                                       // 0x0030(0x0004)
};

// ScriptStruct TAGame.FpsBucketRecorder_TA.FpsBucketData
// 0x0014
struct FFpsBucketData
{
	int                                                FPS;                                                      // 0x0000(0x0004) (CPF_Edit)
	float                                              GameThreadTime;                                           // 0x0004(0x0004)
	float                                              RenderThreadTime;                                         // 0x0008(0x0004)
	float                                              GPUFrameTime;                                             // 0x000C(0x0004)
	int                                                Count;                                                    // 0x0010(0x0004)
};

// ScriptStruct TAGame.FXActor_Boost_TA.ParticleParameterSet
// 0x0018
struct FParticleParameterSet
{
	TArray<struct FParticleSysParam>                   Parameters;                                               // 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FParticleSysParam>                   DrivingParameters;                                        // 0x000C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Boost_TA.ParticleBodyParameterSet
// 0x0014
struct FParticleBodyParameterSet
{
	struct FName                                       AttachmentName;                                           // 0x0000(0x0008) (CPF_Edit)
	TArray<struct FParticleSysParam>                   Parameters;                                               // 0x0008(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Boost_TA.BoostMeshMaterialOverride
// 0x0010
struct FBoostMeshMaterialOverride
{
	class UMaterialInterface*                          Material;                                                 // 0x0000(0x0004) (CPF_Edit)
	TArray<int>                                        Index;                                                    // 0x0004(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.FXActor_Boost_TA.PreviewParticleOverride
// 0x000C
struct FPreviewParticleOverride
{
	class UParticleSystem*                             Template;                                                 // 0x0000(0x0004) (CPF_Edit)
	struct FName                                       FXAttachmentName;                                         // 0x0004(0x0008) (CPF_Edit)
};

// ScriptStruct TAGame.FXActor_Car_TA.WheelFX
// 0x002C
struct FWheelFX
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FVector                                     Velocity;                                                 // 0x0004(0x000C)
	unsigned long                                      bHasContact : 1;                                          // 0x0010(0x0004)
	class AFXActor_X*                                  SupersonicFXActor;                                        // 0x0014(0x0004)
	struct FName                                       BoneName;                                                 // 0x0018(0x0008)
	struct FVector                                     BoneOffset;                                               // 0x0020(0x000C)
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutData
// 0x000C
struct FClientLoadoutData
{
	TArray<int>                                        Products;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.LoadoutTeamColor
// 0x0008
struct FLoadoutTeamColor
{
	unsigned char                                      Team;                                                     // 0x0000(0x0001)
	unsigned char                                      TeamColorID;                                              // 0x0001(0x0001)
	unsigned char                                      CustomColorID;                                            // 0x0002(0x0001)
	unsigned long                                      bSet : 1;                                                 // 0x0004(0x0004)
};

// ScriptStruct TAGame._Types_TA.LoadoutTeamPaint
// 0x0008 (0x0010 - 0x0008)
struct FLoadoutTeamPaint : public FLoadoutTeamColor
{
	int                                                TeamFinishID;                                             // 0x0008(0x0004)
	int                                                CustomFinishID;                                           // 0x000C(0x0004)
};

// ScriptStruct TAGame._Types_TA.LoadoutData
// 0x0028 (0x0034 - 0x000C)
struct FLoadoutData : public FClientLoadoutData
{
	struct FLoadoutTeamPaint                           TeamPaint;                                                // 0x000C(0x0010)
	struct FName                                       Title;                                                    // 0x001C(0x0008)
	int                                                TeamIndex;                                                // 0x0024(0x0004)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0028(0x000C) UNKNOWN PROPERTY: ArrayProperty TAGame._Types_TA.LoadoutData.OnlineProducts
};

// ScriptStruct TAGame.GameEvent_TA.PlayerRespawnTime
// 0x0008
struct FPlayerRespawnTime
{
	class AController*                                 Controller;                                               // 0x0000(0x0004)
	float                                              RemainingTime;                                            // 0x0004(0x0004)
};

// ScriptStruct TAGame._Types_TA.PlayerChatMessage
// 0x0048
struct FPlayerChatMessage
{
	float                                              MessageTimeStamp;                                         // 0x0000(0x0004)
	struct FUniqueNetId                                PlayerID;                                                 // 0x0004(0x0030)
	TEnumAsByte<EChatChannel>                          ChatChannel;                                              // 0x0034(0x0001)
	int                                                Team;                                                     // 0x0038(0x0004)
	struct FString                                     Message;                                                  // 0x003C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ReportPlayerData
// 0x003C
struct FReportPlayerData
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	struct FString                                     PlayerName;                                               // 0x0030(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ReportedPlayerInfo
// 0x0088
struct FReportedPlayerInfo
{
	struct FReportPlayerData                           Reporter;                                                 // 0x0000(0x003C) (CPF_NeedCtorLink)
	struct FReportPlayerData                           Offender;                                                 // 0x003C(0x003C) (CPF_NeedCtorLink)
	struct FString                                     Reason;                                                   // 0x0078(0x000C) (CPF_NeedCtorLink)
	float                                              ReportTimeStamp;                                          // 0x0084(0x0004)
};

// ScriptStruct TAGame.GFxEngine_TA.SoundStateItem
// 0x000D
struct FSoundStateItem
{
	struct FName                                       StateName;                                                // 0x0000(0x0008)
	class UGFxShell_X*                                 Shell;                                                    // 0x0008(0x0004)
	TEnumAsByte<ESoundStatePriority>                   Priority;                                                 // 0x000C(0x0001)
};

// ScriptStruct TAGame.GlobalLookupTexture_TA.IntVector
// 0x0008
struct FIntVector
{
	int                                                X;                                                        // 0x0000(0x0004) (CPF_Edit)
	int                                                Y;                                                        // 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.HandlingPreset_TA.VehicleAxleData
// 0x0014
struct FVehicleAxleData
{
	float                                              WheelRadius;                                              // 0x0000(0x0004) (CPF_Edit)
	float                                              WheelWidth;                                               // 0x0004(0x0004) (CPF_Edit)
	struct FVector                                     LocalRestPosition;                                        // 0x0008(0x000C) (CPF_Edit)
};

// ScriptStruct TAGame.ImpactEffectsComponent_TA.CollisionEffectData
// 0x0044
struct FCollisionEffectData
{
	class UPhysicalMaterial*                           PhysMat;                                                  // 0x0000(0x0004)
	class UPhysicalMaterialProperty_TA*                PhysMatProp;                                              // 0x0004(0x0004)
	struct FEffectsMapping                             ImpactEffects;                                            // 0x0008(0x0008)
	struct FVector                                     HitLocation;                                              // 0x0010(0x000C)
	struct FVector                                     HitNormal;                                                // 0x001C(0x000C)
	struct FVector                                     Momentum;                                                 // 0x0028(0x000C)
	float                                              ImpactMomentum;                                           // 0x0034(0x0004)
	float                                              SlideMomentum;                                            // 0x0038(0x0004)
	int                                                PhysicsFrame;                                             // 0x003C(0x0004)
	class AActor*                                      HitActor;                                                 // 0x0040(0x0004)
};

// ScriptStruct TAGame._Types_TA.MapGroup
// 0x000C
struct FMapGroup
{
	TArray<class UMapData_TA*>                         Maps;                                                     // 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.MaterialTextureParam
// 0x000C
struct FMaterialTextureParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit)
	class UTexture*                                    Value;                                                    // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame._Types_TA.MaterialVectorParam
// 0x0018
struct FMaterialVectorParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit)
	struct FLinearColor                                Value;                                                    // 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct TAGame._Types_TA.MaterialScalarParam
// 0x000C
struct FMaterialScalarParam
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit)
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.MatineeExporter_TA.ActorTransform
// 0x001C
struct FActorTransform
{
	float                                              Time;                                                     // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C)
};

// ScriptStruct TAGame.MatineeExporter_TA.ActorHistory
// 0x0014
struct AMatineeExporter_TA_FActorHistory
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0004)
	TArray<struct FActorTransform>                     Transforms;                                               // 0x0004(0x000C) (CPF_NeedCtorLink)
	class AActor*                                      ExportActor;                                              // 0x0010(0x0004)
};

// ScriptStruct TAGame.MaxActorsGroup_TA.MaxActorCallback
// 0x0024
struct FMaxActorCallback
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0004)
	TArray<struct FScriptDelegate>                     EnabledDelegates;                                         // 0x0004(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     DisabledDelegates;                                        // 0x0010(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                             // 0x001C(0x0004)
	float                                              Distance;                                                 // 0x0020(0x0004)
};

// ScriptStruct TAGame._Types_TA.MessageValue
// 0x0020
struct FMessageValue
{
	struct FString                                     StringValue;                                              // 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                IntValue;                                                 // 0x000C(0x0004)
	class UObject*                                     ObjectValue;                                              // 0x0010(0x0004)
	struct FName                                       NameValue;                                                // 0x0014(0x0008)
	int                                                ValueType;                                                // 0x001C(0x0004)
};

// ScriptStruct TAGame._Types_TA.MessagePacket
// 0x0010
struct FMessagePacket
{
	class UMessage_TA*                                 Message;                                                  // 0x0000(0x0004) (CPF_Const)
	TArray<struct FMessageValue>                       Values;                                                   // 0x0004(0x000C) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.WheelContactData
// 0x0044
struct FWheelContactData
{
	unsigned long                                      bHasContact : 1;                                          // 0x0000(0x0004)
	unsigned long                                      bHasContactWithWorldGeometry : 1;                         // 0x0000(0x0004)
	float                                              HasContactChangeTime;                                     // 0x0004(0x0004)
	class AActor*                                      Actor;                                                    // 0x0008(0x0004)
	class UPrimitiveComponent*                         Component;                                                // 0x000C(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FVector                                     Location;                                                 // 0x0010(0x000C)
	struct FVector                                     Normal;                                                   // 0x001C(0x000C)
	struct FVector                                     LatDirection;                                             // 0x0028(0x000C)
	struct FVector                                     LongDirection;                                            // 0x0034(0x000C)
	class UPhysicalMaterialProperty_TA*                PhysMatProp;                                              // 0x0040(0x0004)
};

// ScriptStruct TAGame.PitchTekDrawingComponent_TA.PitchTekCarBodyContactData
// 0x0010
struct FPitchTekCarBodyContactData
{
	unsigned long                                      bHasContact : 1;                                          // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
};

// ScriptStruct TAGame._Types_TA.ClientFrameData
// 0x0028
struct FClientFrameData
{
	struct FVehicleInputs                              VehicleInput;                                             // 0x0000(0x0020)
	int                                                frame;                                                    // 0x0020(0x0004)
	float                                              TimeStamp;                                                // 0x0024(0x0004)
};

// ScriptStruct TAGame.PlayerController_TA.ClientData
// 0x002C
struct FClientData
{
	TArray<struct FClientFrameData>                    InputFrames;                                              // 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                LastProcessedFrame;                                       // 0x000C(0x0004)
	int                                                LastProcessedReceivedFrame;                               // 0x0010(0x0004)
	float                                              LastInputTime;                                            // 0x0014(0x0004)
	float                                              InputTimeMu;                                              // 0x0018(0x0004)
	float                                              InputTimeVariance;                                        // 0x001C(0x0004)
	int                                                InputBufferSize;                                          // 0x0020(0x0004)
	float                                              InputBufferTime;                                          // 0x0024(0x0004)
	unsigned long                                      bFillingBuffer : 1;                                       // 0x0028(0x0004)
};

// ScriptStruct TAGame.PlayerController_TA.ClientStatsData
// 0x000C
struct FClientStatsData
{
	int                                                OverBufferFrames;                                         // 0x0000(0x0004)
	int                                                UnderBufferFrames;                                        // 0x0004(0x0004)
	int                                                TotalFrames;                                              // 0x0008(0x0004)
};

// ScriptStruct TAGame.PlayerController_TA.ChatSpamData
// 0x0018
struct FChatSpamData
{
	float                                              RiseAmount;                                               // 0x0000(0x0004) (CPF_Edit)
	float                                              RiseMultiplier;                                           // 0x0004(0x0004) (CPF_Edit)
	float                                              DecayRate;                                                // 0x0008(0x0004) (CPF_Edit)
	float                                              MaxValue;                                                 // 0x000C(0x0004) (CPF_Edit)
	float                                              Value;                                                    // 0x0010(0x0004)
	float                                              LastChatTime;                                             // 0x0014(0x0004)
};

// ScriptStruct TAGame.PlayerController_TA.CrosshairExtentInfo
// 0x0010
struct FCrosshairExtentInfo
{
	struct FVector                                     Extent;                                                   // 0x0000(0x000C)
	float                                              minDot;                                                   // 0x000C(0x0004)
};

// ScriptStruct TAGame._Types_TA.MaterialParams
// 0x0024
struct FMaterialParams
{
	TArray<struct FMaterialTextureParam>               TextureParameters;                                        // 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FMaterialVectorParam>                VectorParameters;                                         // 0x000C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<struct FMaterialScalarParam>                ScalarParameters;                                         // 0x0018(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PremiumSkinSet_TA.PremiumSkinSetItem
// 0x0005
struct FPremiumSkinSetItem
{
	class UPremiumSkin_TA*                             PremiumSkin;                                              // 0x0000(0x0004) (CPF_Edit)
	TEnumAsByte<EGameVersion>                          GameVersion;                                              // 0x0004(0x0001) (CPF_Edit)
};

// ScriptStruct TAGame.ProductAsset_Body_TA.VehicleWheelSettings
// 0x0008
struct FVehicleWheelSettings
{
	struct FName                                       BoneName;                                                 // 0x0000(0x0008) (CPF_Edit)
};

// ScriptStruct TAGame.ProductAsset_Body_TA.VehicleAxleSettings
// 0x0028
struct FVehicleAxleSettings
{
	float                                              WheelMeshRadius;                                          // 0x0000(0x0004) (CPF_Edit)
	float                                              WheelWidth;                                               // 0x0004(0x0004) (CPF_Edit)
	float                                              WheelMeshOffsetSide;                                      // 0x0008(0x0004) (CPF_Edit)
	struct FVehicleWheelSettings                       LeftWheel;                                                // 0x000C(0x0008) (CPF_Edit)
	struct FVehicleWheelSettings                       RightWheel;                                               // 0x0014(0x0008) (CPF_Edit)
	float                                              WheelRadius;                                              // 0x001C(0x0004) (CPF_Edit, CPF_EditConst)
	float                                              WheelOffsetForward;                                       // 0x0020(0x0004) (CPF_Edit, CPF_EditConst)
	float                                              WheelOffsetSide;                                          // 0x0024(0x0004) (CPF_Edit, CPF_EditConst)
};

// ScriptStruct TAGame._Types_TA.SimpleSpringSettings
// 0x0050
struct FSimpleSpringSettings
{
	struct FVector                                     Strength;                                                 // 0x0000(0x000C) (CPF_Edit)
	struct FVector                                     Damping;                                                  // 0x000C(0x000C) (CPF_Edit)
	struct FVector                                     MaxDisplacement;                                          // 0x0018(0x000C) (CPF_Edit)
	unsigned long                                      bUseMinDisplacement : 1;                                  // 0x0024(0x0004) (CPF_Edit)
	struct FVector                                     MinDisplacement;                                          // 0x0028(0x000C) (CPF_Edit)
	float                                              Mass;                                                     // 0x0034(0x0004) (CPF_Edit)
	struct FVector                                     MassOffset;                                               // 0x0038(0x000C) (CPF_Edit)
	float                                              MaxSpeed;                                                 // 0x0044(0x0004) (CPF_Edit)
	unsigned long                                      bDebug : 1;                                               // 0x0048(0x0004) (CPF_Edit)
	float                                              DrawDebugOffset;                                          // 0x004C(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.ProductAsset_Body_TA.TeamPaintFinish
// 0x0008
struct FTeamPaintFinish
{
	class UProductAsset_PaintFinish_TA*                TeamFinish;                                               // 0x0000(0x0004) (CPF_Edit)
	class UProductAsset_PaintFinish_TA*                CustomFinish;                                             // 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame._Types_TA.ProductAttachment
// 0x0048
struct FProductAttachment
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0004) (CPF_Edit)
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0004(0x0004) (CPF_Edit)
	class UParticleSystem*                             ParticleSystem;                                           // 0x0008(0x0004) (CPF_Edit)
	class UMaterialInterface*                          Material;                                                 // 0x000C(0x0004) (CPF_Edit)
	float                                              Scale;                                                    // 0x0010(0x0004) (CPF_Edit)
	struct FVector                                     Translation;                                              // 0x0014(0x000C) (CPF_Edit)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x000C) (CPF_Edit)
	TEnumAsByte<EProductAttachmentSocket>              Socket;                                                   // 0x002C(0x0001) (CPF_Edit)
	class UAntennaComponent_TA*                        Antenna;                                                  // 0x0030(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	TArray<class UAttachmentBehavior_TA*>              Behaviors;                                                // 0x0034(0x000C) (CPF_Edit, CPF_NeedCtorLink, CPF_EditInline)
	class UPrimitiveComponent*                         Component;                                                // 0x0040(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	class AFXActor_X*                                  FXActor;                                                  // 0x0044(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame._Types_TA.WheelAttachment
// 0x0018
struct FWheelAttachment
{
	class UPrimitiveComponent*                         Component;                                                // 0x0000(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	TArray<class UAttachmentBehavior_TA*>              Behaviors;                                                // 0x0004(0x000C) (CPF_Edit, CPF_NeedCtorLink, CPF_EditInline)
	struct FName                                       Socket;                                                   // 0x0010(0x0008) (CPF_Edit)
};

// ScriptStruct TAGame.ProductAttribute_PaintSettings_TA.PaintMaterialGroup
// 0x000C
struct FPaintMaterialGroup
{
	TArray<class UMaterialInterface*>                  Materials;                                                // 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.PaintAttributeParameter
// 0x0010
struct FPaintAttributeParameter
{
	TEnumAsByte<EPaintColorVariant>                    PaintVariant;                                             // 0x0000(0x0001) (CPF_Edit)
	struct FName                                       ParameterName;                                            // 0x0004(0x0008) (CPF_Edit)
	unsigned long                                      bEnabled : 1;                                             // 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame._Types_TA.BodyToEngineAudioPair
// 0x0008
struct FBodyToEngineAudioPair
{
	class UProduct_TA*                                 Body;                                                     // 0x0000(0x0004)
	class UProduct_TA*                                 EngineAudio;                                              // 0x0004(0x0004)
};

// ScriptStruct TAGame._Types_TA.AssetLoadResult
// 0x0010
struct FAssetLoadResult
{
	int                                                ProductID;                                                // 0x0000(0x0004)
	struct FName                                       AssetName;                                                // 0x0004(0x0008)
	class UProductAsset_TA*                            Asset;                                                    // 0x000C(0x0004)
};

// ScriptStruct TAGame.ProductDatabase_TA.AssetLoadRequest
// 0x0024
struct FAssetLoadRequest
{
	struct FAssetLoadResult                            Result;                                                   // 0x0000(0x0010)
	unsigned long                                      bLoaded : 1;                                              // 0x0010(0x0004)
	struct FScriptDelegate                             OnLoadedCallback;                                         // 0x0014(0x0010) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductDatabase_TA.TemporaryProduct
// 0x0014
struct FTemporaryProduct
{
	struct FString                                     AssetPath;                                                // 0x0000(0x000C) (CPF_Config, CPF_NeedCtorLink)
	struct FName                                       SlotName;                                                 // 0x000C(0x0008) (CPF_Config)
};

// ScriptStruct TAGame.ProductTemplate_TA.ProductReplacement2
// 0x0010
struct FProductReplacement2
{
	TArray<TEnumAsByte<EConsoleType>>                  Platforms;                                                // 0x0000(0x000C) (CPF_NeedCtorLink)
	class UProduct_TA*                                 Replacement;                                              // 0x000C(0x0004)
};

// ScriptStruct TAGame.ProductThumbnailQueue_TA.RenderThumbnailScene
// 0x0020
struct FRenderThumbnailScene
{
	class UProductThumbnail_TA*                        Thumbnail;                                                // 0x0000(0x0004) (CPF_Const)
	class UProductAsset_TA*                            Asset;                                                    // 0x0004(0x0004) (CPF_Const)
	class UOnlineProduct_TA*                           OnlineProduct;                                            // 0x0008(0x0004) (CPF_Const)
	class UThumbnailScene_TA*                          Scene;                                                    // 0x000C(0x0004) (CPF_Const)
	int                                                TextureWidth;                                             // 0x0010(0x0004) (CPF_Const)
	int                                                TextureHeight;                                            // 0x0014(0x0004) (CPF_Const)
	float                                              NextRenderTime;                                           // 0x0018(0x0004) (CPF_Const)
	unsigned long                                      bBeingRendered : 1;                                       // 0x001C(0x0004) (CPF_Const)
};

// ScriptStruct TAGame._Types_TA.ProductThumbnailResult
// 0x000C
struct FProductThumbnailResult
{
	class UProductAsset_TA*                            Asset;                                                    // 0x0000(0x0004)
	class UOnlineProduct_TA*                           OnlineProduct;                                            // 0x0004(0x0004)
	class UProductThumbnail_TA*                        Thumbnail;                                                // 0x0008(0x0004)
};

// ScriptStruct TAGame.ProductThumbnailQueue_TA.RenderThumbnailRequest
// 0x001C
struct FRenderThumbnailRequest
{
	struct FProductThumbnailResult                     Result;                                                   // 0x0000(0x000C) (CPF_Const)
	struct FScriptDelegate                             Callback;                                                 // 0x000C(0x0010) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Ball_Breakout_TA.BreakoutDamage
// 0x0008
struct FBreakoutDamage
{
	float                                              Time;                                                     // 0x0000(0x0004)
	int                                                Damage;                                                   // 0x0004(0x0004)
};

// ScriptStruct TAGame._Types_TA.AppliedBreakoutDamage
// 0x0018
struct FAppliedBreakoutDamage
{
	unsigned char                                      Id;                                                       // 0x0000(0x0001)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	int                                                DamageIndex;                                              // 0x0010(0x0004)
	int                                                TotalDamage;                                              // 0x0014(0x0004)
};

// ScriptStruct TAGame.Vehicle_TA.SuperSonicData
// 0x0010
struct FSuperSonicData
{
	float                                              Speed;                                                    // 0x0000(0x0004)
	float                                              TurnoffSpeedBuffer;                                       // 0x0004(0x0004)
	float                                              TurnoffTime;                                              // 0x0008(0x0004)
	float                                              TimeBelowSpeed;                                           // 0x000C(0x0004) (CPF_Transient)
};

// ScriptStruct TAGame.Vehicle_TA.BallInteractionSettings
// 0x002C
struct FBallInteractionSettings
{
	unsigned long                                      bSkipScriptForces : 1;                                    // 0x0000(0x0004) (CPF_Edit)
	struct FInterpCurveFloat                           PushFactorCurve;                                          // 0x0004(0x0010) (CPF_Edit, CPF_NeedCtorLink)
	float                                              PushZScale;                                               // 0x0014(0x0004) (CPF_Edit)
	float                                              PushForwardScale;                                         // 0x0018(0x0004) (CPF_Edit)
	float                                              MaxRelativeSpeed;                                         // 0x001C(0x0004) (CPF_Edit)
	float                                              DampingAmount;                                            // 0x0020(0x0004) (CPF_Edit)
	float                                              Restitution;                                              // 0x0024(0x0004) (CPF_Edit)
	float                                              Friction;                                                 // 0x0028(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.Vehicle_TA.CarInteractionSettings
// 0x001C
struct FCarInteractionSettings
{
	float                                              PushFactor;                                               // 0x0000(0x0004) (CPF_Edit)
	float                                              BumperPushFactor;                                         // 0x0004(0x0004) (CPF_Edit)
	float                                              ZPushFactor;                                              // 0x0008(0x0004) (CPF_Edit)
	float                                              BumpInterval;                                             // 0x000C(0x0004) (CPF_Edit)
	float                                              BumperHitAngle;                                           // 0x0010(0x0004) (CPF_Edit)
	class AVehicle_TA*                                 LastHitCar;                                               // 0x0014(0x0004) (CPF_Transient)
	float                                              LastHitTime;                                              // 0x0018(0x0004) (CPF_Transient)
};

// ScriptStruct TAGame.RBHistory_TA.RBPhysicsSnapshot
// 0x0064
struct FRBPhysicsSnapshot
{
	struct FReplicatedRBState                          RBState;                                                  // 0x0000(0x0038)
	struct FWorldContactData                           WorldContact;                                             // 0x0038(0x0028)
	class APhysicsVolume*                              PhysicsVolume;                                            // 0x0060(0x0004)
};

// ScriptStruct TAGame.RBVehicleHistory_TA.RBVehicleSnapshot
// 0x0154
struct FRBVehicleSnapshot
{
	struct FVehicleInputs                              Input;                                                    // 0x0000(0x0020)
	struct FWheelContactData                           WheelContact0;                                            // 0x0020(0x0044) (CPF_Component)
	struct FWheelContactData                           WheelContact1;                                            // 0x0064(0x0044) (CPF_Component)
	struct FWheelContactData                           WheelContact2;                                            // 0x00A8(0x0044) (CPF_Component)
	struct FWheelContactData                           WheelContact3;                                            // 0x00EC(0x0044) (CPF_Component)
	struct FCarInteractionSettings                     CarInteraction;                                           // 0x0130(0x001C)
	float                                              OutputHandbrake;                                          // 0x014C(0x0004)
	int                                                LastHitBallFrame;                                         // 0x0150(0x0004)
};

// ScriptStruct TAGame.RBVehicleHistory_TA.CarComponentSnapshot
// 0x0009
struct FCarComponentSnapshot
{
	unsigned long                                      bActive : 1;                                              // 0x0000(0x0004)
	float                                              ActivityTime;                                             // 0x0004(0x0004)
	unsigned char                                      ComponentData;                                            // 0x0008(0x0001)
};

// ScriptStruct TAGame.RBVehicleHistory_TA.CarComponentHistory
// 0x001C
struct FCarComponentHistory
{
	class ACarComponent_TA*                            CarComponent;                                             // 0x0000(0x0004)
	TArray<struct FCarComponentSnapshot>               Snapshots;                                                // 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FCarComponentSnapshot                       BackupSnapshot;                                           // 0x0010(0x000C)
};

// ScriptStruct TAGame.Replay_TA.ReplayKeyframe
// 0x000C
struct FReplayKeyframe
{
	float                                              Time;                                                     // 0x0000(0x0004)
	int                                                frame;                                                    // 0x0004(0x0004)
	int                                                Position;                                                 // 0x0008(0x0004)
};

// ScriptStruct TAGame.Replay_TA.ReplayActorChannel
// 0x002C
struct FReplayActorChannel
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0004)
	struct FName                                       actorName;                                                // 0x0004(0x0008)
	TArray<unsigned char>                              Recent;                                                   // 0x000C(0x000C) (CPF_NeedCtorLink)
	TArray<int>                                        StillDirty;                                               // 0x0018(0x000C) (CPF_NeedCtorLink)
	float                                              CloseTime;                                                // 0x0024(0x0004)
	unsigned long                                      bNetInitial : 1;                                          // 0x0028(0x0004)
	unsigned long                                      bPlaybackPersistent : 1;                                  // 0x0028(0x0004)
};

// ScriptStruct TAGame.Replay_TA.ReplayLogItem
// 0x001C
struct FReplayLogItem
{
	int                                                frame;                                                    // 0x0000(0x0004)
	struct FString                                     PlayerName;                                               // 0x0004(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     Text;                                                     // 0x0010(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Replay_TA.TimelineKeyframe
// 0x000C
struct FTimelineKeyframe
{
	struct FName                                       Type;                                                     // 0x0000(0x0008) (CPF_DataBinding)
	int                                                frame;                                                    // 0x0008(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayExportCallbackData
// 0x0014
struct FReplayExportCallbackData
{
	struct FPointer                                    Task;                                                     // 0x0000(0x0004) (CPF_Const, CPF_Native)
	struct FScriptDelegate                             Callback;                                                 // 0x0004(0x0010) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayImportCallbackData
// 0x0014
struct FReplayImportCallbackData
{
	struct FPointer                                    Task;                                                     // 0x0000(0x0004) (CPF_Const, CPF_Native)
	struct FScriptDelegate                             Callback;                                                 // 0x0004(0x0010) (CPF_Const, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SkelControlSingleBoneCopy_TA.AxisConversion
// 0x000C
struct FAxisConversion
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004) (CPF_Edit)
	TEnumAsByte<ECopyAxis>                             Source;                                                   // 0x0004(0x0001) (CPF_Edit)
	float                                              Scale;                                                    // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutOnlineProduct
// 0x000C
struct FClientLoadoutOnlineProduct
{
	TArray<class UProductAttribute_TA*>                Attributes;                                               // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ClientLoadoutOnlineData
// 0x000C
struct FClientLoadoutOnlineData
{
	TArray<struct FClientLoadoutOnlineProduct>         Products;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.CarMeshComponent_TA.WheelSkelControlSet
// 0x0010
struct FWheelSkelControlSet
{
	class UWheel_TA*                                   Wheel;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	class USkelControlSingleBone*                      TranslationControl;                                       // 0x0004(0x0004) (CPF_Edit)
	class USkelControlSingleBone*                      SteerControl;                                             // 0x0008(0x0004) (CPF_Edit)
	class USkelControlSingleBone*                      RollControl;                                              // 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.Team_TA.ReplicatedLogoData
// 0x0008
struct FReplicatedLogoData
{
	int                                                LogoID;                                                   // 0x0000(0x0004)
	unsigned long                                      bSwapColors : 1;                                          // 0x0004(0x0004)
};

// ScriptStruct TAGame.Team_TA.TemporarySpawnSpot
// 0x0028
struct FTemporarySpawnSpot
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C)
	float                                              Time;                                                     // 0x0024(0x0004)
};

// ScriptStruct TAGame._Types_TA.ThumbnailComponent
// 0x0058
struct FThumbnailComponent
{
	class UActorComponent*                             Component;                                                // 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) MISSED OFFSET
	struct FMatrix                                     BaseTransform;                                            // 0x0010(0x0040)
	struct FName                                       Tag;                                                      // 0x0050(0x0008)
};

// ScriptStruct TAGame.VehiclePickup_TA.PickupData
// 0x0008
struct FPickupData
{
	class ACar_TA*                                     Instigator;                                               // 0x0000(0x0004)
	unsigned long                                      bPickedUp : 1;                                            // 0x0004(0x0004)
};

// ScriptStruct TAGame._Types_TA.InputRate
// 0x0008
struct FInputRate
{
	float                                              RiseRate;                                                 // 0x0000(0x0004) (CPF_Edit)
	float                                              FallRate;                                                 // 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.VoteActor_TA.Voter
// 0x0005
struct FVoter
{
	class APRI_TA*                                     PRI;                                                      // 0x0000(0x0004)
	TEnumAsByte<EVoteStatus>                           Status;                                                   // 0x0004(0x0001)
};

// ScriptStruct TAGame._AITypes_TA.AICachedGoalInfo
// 0x0010
struct FAICachedGoalInfo
{
	class UGoal_TA*                                    Goal;                                                     // 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	struct FVector                                     FieldSize;                                                // 0x0004(0x000C)
};

// ScriptStruct TAGame._Types_TA.SimilarLogoGroup
// 0x000C
struct FSimilarLogoGroup
{
	TArray<class UProductAsset_Logo_TA*>               SimilarLogoColorAssets;                                   // 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.GameModeData
// 0x0010
struct FGameModeData
{
	int                                                GameMode;                                                 // 0x0000(0x0004) (CPF_DataBinding)
	struct FString                                     LocalizedName;                                            // 0x0004(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.CycleButtonItem
// 0x0018
struct FCycleButtonItem
{
	struct FString                                     Label;                                                    // 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // 0x000C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.GFxTeamColor
// 0x0010
struct FGFxTeamColor
{
	int                                                Value;                                                    // 0x0000(0x0004) (CPF_DataBinding)
	int                                                ColorID;                                                  // 0x0004(0x0004) (CPF_DataBinding)
	int                                                X;                                                        // 0x0008(0x0004) (CPF_DataBinding)
	int                                                Y;                                                        // 0x000C(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.MapImageLoadResult
// 0x000C
struct FMapImageLoadResult
{
	class UTexture2D*                                  Image;                                                    // 0x0000(0x0004)
	struct FName                                       MapName;                                                  // 0x0004(0x0008)
};

// ScriptStruct TAGame._Types_TA.RandomWeight
// 0x000C
struct FRandomWeight
{
	class UObject*                                     Obj;                                                      // 0x0000(0x0004)
	float                                              Weight;                                                   // 0x0004(0x0004)
	float                                              OrigWeight;                                               // 0x0008(0x0004)
};

// ScriptStruct TAGame._Types_TA.OnlineProductArray
// 0x000C
struct FOnlineProductArray
{
	TArray<class UOnlineProduct_TA*>                   Products;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ProductLevelData
// 0x0010
struct FProductLevelData
{
	int                                                Level;                                                    // 0x0000(0x0004) (CPF_Edit, CPF_DataBinding)
	int                                                SoftCurrency;                                             // 0x0004(0x0004) (CPF_Edit, CPF_DataBinding)
	int                                                HardCurrency;                                             // 0x0008(0x0004) (CPF_Edit, CPF_DataBinding)
	float                                              UnlockWeight;                                             // 0x000C(0x0004) (CPF_Edit, CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.BallPredictionInfo
// 0x003C
struct FBallPredictionInfo
{
	float                                              Time;                                                     // 0x0000(0x0004)
	float                                              ArchTopTime;                                              // 0x0004(0x0004)
	struct FVector                                     Location;                                                 // 0x0008(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0014(0x000C)
	struct FVector                                     ArchTop;                                                  // 0x0020(0x000C)
	struct FVector                                     ArchTopVelocity;                                          // 0x002C(0x000C)
	unsigned long                                      bHitWall : 1;                                             // 0x0038(0x0004)
	unsigned long                                      bHitGround : 1;                                           // 0x0038(0x0004)
};

// ScriptStruct TAGame._Types_TA.AimAssistSettings
// 0x0034
struct FAimAssistSettings
{
	unsigned long                                      bOverride : 1;                                            // 0x0000(0x0004)
	float                                              ControlAlpha;                                             // 0x0004(0x0004)
	float                                              MinSteerDot;                                              // 0x0008(0x0004)
	float                                              MaxSteerDot;                                              // 0x000C(0x0004)
	float                                              MinVelocity;                                              // 0x0010(0x0004)
	float                                              MaxVelocity;                                              // 0x0014(0x0004)
	float                                              MinPlayerInputDrive;                                      // 0x0018(0x0004)
	float                                              MinDistanceToBallXY;                                      // 0x001C(0x0004)
	float                                              MaxDistanceToBallXY;                                      // 0x0020(0x0004)
	float                                              MinDistanceToBallZ;                                       // 0x0024(0x0004)
	float                                              MaxDistanceToBallZ;                                       // 0x0028(0x0004)
	float                                              MinDotAngleFromBall;                                      // 0x002C(0x0004)
	float                                              MaxDotAngleFromBall;                                      // 0x0030(0x0004)
};

// ScriptStruct TAGame._Types_TA.OnlineProductAttribute
// 0x0014
struct FOnlineProductAttribute
{
	struct FName                                       Key;                                                      // 0x0000(0x0008)
	struct FString                                     Value;                                                    // 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.OnlineProductData
// 0x0020
struct FOnlineProductData
{
	int                                                ProductID;                                                // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.OnlineProductData.InstanceID
	int                                                SeriesID;                                                 // 0x000C(0x0004)
	TArray<struct FOnlineProductAttribute>             Attributes;                                               // 0x0010(0x000C) (CPF_NeedCtorLink)
	int                                                TradeHold;                                                // 0x001C(0x0004)
};

// ScriptStruct TAGame._Types_TA.OnlinePlayerMatchData
// 0x0048
struct FOnlinePlayerMatchData
{
	class APRI_TA*                                     PRI;                                                      // 0x0000(0x0004) (CPF_Transient)
	struct FUniqueNetId                                PlayerID;                                                 // 0x0004(0x0030)
	int                                                GameSecondsPlayed;                                        // 0x0034(0x0004)
	TArray<struct FOnlineProductData>                  Loadout;                                                  // 0x0038(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bCompletedMatch : 1;                                      // 0x0044(0x0004)
};

// ScriptStruct TAGame.PRI_TA.ClientLoadoutDatas
// 0x0018
struct FClientLoadoutDatas
{
	struct FClientLoadoutData                          Loadouts[0x2];                                            // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PRI_TA.ClientLoadoutOnlineDatas
// 0x001C
struct FClientLoadoutOnlineDatas
{
	struct FClientLoadoutOnlineData                    Loadouts[0x2];                                            // 0x0000(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bLoadoutSet : 1;                                          // 0x0018(0x0004)
	unsigned long                                      bDeprecated : 1;                                          // 0x0018(0x0004)
};

// ScriptStruct TAGame.PRI_TA.OnlineProductStat
// 0x0008
struct FOnlineProductStat
{
	class UOnlineProduct_TA*                           OnlineProduct;                                            // 0x0000(0x0004)
	class UProductStat_TA*                             ProductStat;                                              // 0x0004(0x0004)
};

// ScriptStruct TAGame._Types_TA.TAPlayerStat
// 0x0008
struct FTAPlayerStat
{
	class UStatEvent_TA*                               StatEvent;                                                // 0x0000(0x0004)
	int                                                Count;                                                    // 0x0004(0x0004)
};

// ScriptStruct TAGame._Types_TA.ProfileCameraSettings
// 0x0018
struct FProfileCameraSettings
{
	float                                              FOV;                                                      // 0x0000(0x0004)
	float                                              Height;                                                   // 0x0004(0x0004)
	float                                              Pitch;                                                    // 0x0008(0x0004)
	float                                              Distance;                                                 // 0x000C(0x0004)
	float                                              Stiffness;                                                // 0x0010(0x0004)
	float                                              SwivelSpeed;                                              // 0x0014(0x0004)
};

// ScriptStruct TAGame._Types_TA.ProductStat
// 0x0008
struct FProductStat
{
	int                                                ProductID;                                                // 0x0000(0x0004)
	int                                                Value;                                                    // 0x0004(0x0004)
};

// ScriptStruct TAGame.PRI_TA.SkillTierData
// 0x0008
struct FSkillTierData
{
	unsigned char                                      Tier;                                                     // 0x0000(0x0001)
	unsigned long                                      bReplicated : 1;                                          // 0x0004(0x0004)
};

// ScriptStruct TAGame.PRI_TA.ReplicatedStatTitleInfo
// 0x0014
struct FReplicatedStatTitleInfo
{
	struct FString                                     RepTitle;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink)
	class UStatEvent_TA*                               RepTitleStatEvent;                                        // 0x000C(0x0004)
	int                                                RepStat;                                                  // 0x0010(0x0004)
};

// ScriptStruct TAGame._Types_TA.ActorHistory
// 0x0018
struct U_Types_TA_FActorHistory
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	TEnumAsByte<EHistory>                              Type;                                                     // 0x0008(0x0001)
	struct FString                                     SerializedHistory;                                        // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.SortedProductData
// 0x0020
struct FSortedProductData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.SortedProductData.Id
	unsigned long                                      bUnlocked : 1;                                            // 0x0008(0x0004)
	struct FString                                     Name;                                                     // 0x000C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bIsPack : 1;                                              // 0x0018(0x0004)
	int                                                SortPriority;                                             // 0x001C(0x0004)
};

// ScriptStruct TAGame._Types_TA.EditorRoundData
// 0x0010
struct FEditorRoundData
{
	float                                              TimeLimit;                                                // 0x0000(0x0004) (CPF_DataBinding)
	TArray<struct FString>                             SerializedArchetypes;                                     // 0x0004(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.ProductSkinOverride
// 0x000C
struct FProductSkinOverride
{
	struct FName                                       SkinName;                                                 // 0x0000(0x0008) (CPF_Edit)
	class UMaterialInterface*                          Material;                                                 // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame._Types_TA.UniqueNetIdGroup4
// 0x00C0
struct FUniqueNetIdGroup4
{
	struct FUniqueNetId                                PlayerIDs[0x4];                                           // 0x0000(0x0030)
};

// ScriptStruct TAGame._Types_TA.UIProductSlotData
// 0x000C
struct FUIProductSlotData
{
	class UProductSlot_TA*                             Slot;                                                     // 0x0000(0x0004) (CPF_Edit)
	class UTexture2D*                                  Texture;                                                  // 0x0004(0x0004) (CPF_Edit)
	class UAkSoundCue*                                 Sound;                                                    // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame._Types_TA.StatValue
// 0x0014
struct FStatValue
{
	struct FName                                       Id;                                                       // 0x0000(0x0008)
	int                                                Values[0x3];                                              // 0x0008(0x0004)
};

// ScriptStruct TAGame._Types_TA.LoadoutProductData
// 0x000C
struct FLoadoutProductData
{
	int                                                SlotIndex;                                                // 0x0000(0x0004)
	int                                                ProductID;                                                // 0x0004(0x0004)
	class UOnlineProduct_TA*                           OnlineProduct;                                            // 0x0008(0x0004)
};

// ScriptStruct TAGame._Types_TA.ServerSetLoadoutTeam
// 0x001C
struct FServerSetLoadoutTeam
{
	TArray<struct FLoadoutProductData>                 Products;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FLoadoutTeamPaint                           TeamPaint;                                                // 0x000C(0x0010)
};

// ScriptStruct TAGame._Types_TA.ServerSetLoadoutParams
// 0x0040
struct FServerSetLoadoutParams
{
	struct FName                                       Title;                                                    // 0x0000(0x0008)
	struct FServerSetLoadoutTeam                       Loadouts[0x2];                                            // 0x0008(0x001C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame._Types_TA.LoadoutTeam
// 0x0014
struct FLoadoutTeam
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) UNKNOWN PROPERTY: ArrayProperty TAGame._Types_TA.LoadoutTeam.Products
	struct FLoadoutTeamColor                           TeamColor;                                                // 0x000C(0x0008)
};

// ScriptStruct TAGame._Types_TA.SchematicResourceData
// 0x000C
struct FSchematicResourceData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame._Types_TA.SchematicResourceData.InstanceID
	int                                                Resources;                                                // 0x0008(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.ProductFilter
// 0x008D
struct FProductFilter
{
	TArray<class UOnlineProduct_TA*>                   OnlineProducts;                                           // 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<class UProduct_TA*>                         Products;                                                 // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Label;                                                    // 0x0018(0x000C) (CPF_NeedCtorLink)
	TArray<int>                                        Slots;                                                    // 0x0024(0x000C) (CPF_NeedCtorLink)
	TArray<TEnumAsByte<EProductQuality>>               Qualities;                                                // 0x0030(0x000C) (CPF_NeedCtorLink)
	TArray<TEnumAsByte<EUnlockMethod>>                 UnlockMethods;                                            // 0x003C(0x000C) (CPF_NeedCtorLink)
	TArray<TEnumAsByte<EProductTradeRestriction>>      TradeRestrictions;                                        // 0x0048(0x000C) (CPF_NeedCtorLink)
	TArray<class UClass*>                              ExclusiveAttributes;                                      // 0x0054(0x000C) (CPF_NeedCtorLink)
	TArray<class UClass*>                              ProhibitedAttributes;                                     // 0x0060(0x000C) (CPF_NeedCtorLink)
	TArray<int>                                        SeriesIDs;                                                // 0x006C(0x000C) (CPF_NeedCtorLink)
	int                                                PackID;                                                   // 0x0078(0x0004)
	unsigned long                                      bExcludePacks : 1;                                        // 0x007C(0x0004)
	unsigned long                                      bIgnoreLicensedCars : 1;                                  // 0x007C(0x0004)
	TArray<int>                                        Loadout;                                                  // 0x0080(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      LogLevel;                                                 // 0x008C(0x0001)
};

// ScriptStruct TAGame._Types_TA.TurningCircle
// 0x0010
struct FTurningCircle
{
	struct FVector                                     Center;                                                   // 0x0000(0x000C)
	float                                              Radius;                                                   // 0x000C(0x0004)
};

// ScriptStruct TAGame._Types_TA.SeasonMatch
// 0x001C
struct FSeasonMatch
{
	int                                                Week;                                                     // 0x0000(0x0004) (CPF_DataBinding)
	int                                                Team0;                                                    // 0x0004(0x0004) (CPF_DataBinding)
	int                                                Team1;                                                    // 0x0008(0x0004) (CPF_DataBinding)
	int                                                Score0;                                                   // 0x000C(0x0004) (CPF_DataBinding)
	int                                                Score1;                                                   // 0x0010(0x0004) (CPF_DataBinding)
	int                                                Winner;                                                   // 0x0014(0x0004) (CPF_DataBinding)
	unsigned long                                      bBye : 1;                                                 // 0x0018(0x0004)
};

// ScriptStruct TAGame._Types_TA.SeasonTeam
// 0x0018
struct FSeasonTeam
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FName                                       LogoAsset;                                                // 0x000C(0x0008) (CPF_DataBinding)
	int                                                EliminationWeek;                                          // 0x0014(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.SeasonPlayerStat
// 0x0014
struct FSeasonPlayerStat
{
	int                                                PlayerIndex;                                              // 0x0000(0x0004) (CPF_DataBinding)
	struct FString                                     StatName;                                                 // 0x0004(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	int                                                StatValue;                                                // 0x0010(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.SeasonPlayer
// 0x0020
struct FSeasonPlayer
{
	int                                                Team;                                                     // 0x0000(0x0004) (CPF_DataBinding)
	struct FString                                     Name;                                                     // 0x0004(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Id;                                                       // 0x0010(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bBot : 1;                                                 // 0x001C(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.SeasonTeamRank
// 0x001C
struct FSeasonTeamRank
{
	int                                                Team;                                                     // 0x0000(0x0004) (CPF_DataBinding)
	int                                                Wins;                                                     // 0x0004(0x0004) (CPF_DataBinding)
	int                                                Losses;                                                   // 0x0008(0x0004) (CPF_DataBinding)
	int                                                PointsFor;                                                // 0x000C(0x0004) (CPF_DataBinding)
	int                                                PointsAgainst;                                            // 0x0010(0x0004) (CPF_DataBinding)
	int                                                PointsDifferential;                                       // 0x0014(0x0004) (CPF_DataBinding)
	int                                                EliminationWeek;                                          // 0x0018(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.ReplayHeaderLoadResult
// 0x0008
struct FReplayHeaderLoadResult
{
	class UReplay_TA*                                  Header;                                                   // 0x0000(0x0004)
	class UError*                                      Error;                                                    // 0x0004(0x0004)
};

// ScriptStruct TAGame._Types_TA.ProfileAutoCamSettings
// 0x0028
struct FProfileAutoCamSettings
{
	float                                              FOV;                                                      // 0x0000(0x0004)
	float                                              Height;                                                   // 0x0004(0x0004)
	float                                              Distance;                                                 // 0x0008(0x0004)
	float                                              MoveSpeed;                                                // 0x000C(0x0004)
	float                                              MoveSpeedZ;                                               // 0x0010(0x0004)
	float                                              RotateSpeed;                                              // 0x0014(0x0004)
	float                                              AerialDistance;                                           // 0x0018(0x0004)
	float                                              FocusBlendSpeed;                                          // 0x001C(0x0004)
	float                                              AerialPrediction;                                         // 0x0020(0x0004)
	unsigned long                                      bUseReplayCamera : 1;                                     // 0x0024(0x0004)
	unsigned long                                      bFocusOnGoals : 1;                                        // 0x0024(0x0004)
};

// ScriptStruct TAGame._Types_TA.DemolishData
// 0x0020
struct FDemolishData
{
	class ARBActor_TA*                                 Attacker;                                                 // 0x0000(0x0004)
	class ACar_TA*                                     Victim;                                                   // 0x0004(0x0004)
	struct FVector                                     AttackerVelocity;                                         // 0x0008(0x000C)
	struct FVector                                     VictimVelocity;                                           // 0x0014(0x000C)
};

// ScriptStruct TAGame._Types_TA.UISavedKeyValue
// 0x0014
struct FUISavedKeyValue
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (CPF_DataBinding)
	struct FString                                     Value;                                                    // 0x0008(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame._Types_TA.PlaylistMapPrefs
// 0x000C (0x0024 - 0x0018)
struct FPlaylistMapPrefs : public U_Types_X_FMapPrefs
{
	struct FName                                       Playlist;                                                 // 0x0018(0x0008)
	unsigned long                                      bOverrideGlobal : 1;                                      // 0x0020(0x0004)
};

// ScriptStruct TAGame._Types_TA.FPSBucketMetrics
// 0x0008
struct FFPSBucketMetrics
{
	int                                                FPS;                                                      // 0x0000(0x0004) (CPF_Edit)
	int                                                FrameCount;                                               // 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.AchievementManager_TA.AchievementInfo
// 0x0004
struct FAchievementInfo
{
	unsigned long                                      bUnlocked : 1;                                            // 0x0000(0x0004)
	unsigned long                                      bOnlineUnlockAuthority : 1;                               // 0x0000(0x0004)
};

// ScriptStruct TAGame.GameEvent_Soccar_TA.ReplicatedStingerData
// 0x0005
struct FReplicatedStingerData
{
	class UAkSoundCue*                                 Stinger;                                                  // 0x0000(0x0004)
	unsigned char                                      Trigger;                                                  // 0x0004(0x0001)
};

// ScriptStruct TAGame.SpecialPickup_TA.PickupReplacement
// 0x0008
struct FPickupReplacement
{
	class UProduct_TA*                                 Body;                                                     // 0x0000(0x0004)
	class ASpecialPickup_TA*                           Pickup;                                                   // 0x0004(0x0004)
};

// ScriptStruct TAGame.GameInfo_TA.GameEventData
// 0x0014
struct FGameEventData
{
	class AGameEvent_TA*                               Archetype;                                                // 0x0000(0x0004) (CPF_Edit)
	struct FString                                     LaunchOption;                                             // 0x0004(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bDestroyCurrentGame : 1;                                  // 0x0010(0x0004) (CPF_Edit)
	unsigned long                                      bAddAllPlayers : 1;                                       // 0x0010(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.SaveData_TA.OptionsValue
// 0x0014
struct FOptionsValue
{
	struct FName                                       Id;                                                       // 0x0000(0x0008)
	struct FString                                     Value;                                                    // 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Camera_TA.SwivelExtent
// 0x000C
struct FSwivelExtent
{
	int                                                PitchMin;                                                 // 0x0000(0x0004)
	int                                                PitchMax;                                                 // 0x0004(0x0004)
	int                                                YawMax;                                                   // 0x0008(0x0004)
};

// ScriptStruct TAGame.Camera_TA.ProfileSliderLimits
// 0x000C
struct FProfileSliderLimits
{
	float                                              Min;                                                      // 0x0000(0x0004)
	float                                              Max;                                                      // 0x0004(0x0004)
	float                                              interval;                                                 // 0x0008(0x0004)
};

// ScriptStruct TAGame.SaveData_TA.TrialSaveData
// 0x0010
struct FTrialSaveData
{
	unsigned long                                      bInitialized : 1;                                         // 0x0000(0x0004)
	int                                                MinutesRemaining;                                         // 0x0004(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveData_TA.TrialSaveData.LastPlayedTime
};

// ScriptStruct TAGame.SaveData_TA.CachedStaticText
// 0x0018
struct FCachedStaticText
{
	struct FString                                     Text;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Language;                                                 // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SaveData_TA.PlaylistSkillData
// 0x000C
struct FPlaylistSkillData
{
	int                                                Playlist;                                                 // 0x0000(0x0004)
	int                                                Tier;                                                     // 0x0004(0x0004)
	int                                                MatchesPlayed;                                            // 0x0008(0x0004)
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSpawnInfo
// 0x003C
struct FFieldSpawnInfo
{
	struct FVector                                     ExtentLoc;                                                // 0x0000(0x000C)
	struct FVector                                     Extent;                                                   // 0x000C(0x000C)
	float                                              Speed;                                                    // 0x0018(0x0004)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C)
	TEnumAsByte<ERotationType>                         RotationType;                                             // 0x0028(0x0001)
	struct FVector                                     MaxFieldExtentScale;                                      // 0x002C(0x000C)
	unsigned long                                      bSpawnCannon : 1;                                         // 0x0038(0x0004)
	unsigned long                                      bDrawDebug : 1;                                           // 0x0038(0x0004)
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSpawnInfoPair
// 0x0078
struct FFieldSpawnInfoPair
{
	struct FFieldSpawnInfo                             PlayerSpawn;                                              // 0x0000(0x003C)
	struct FFieldSpawnInfo                             BallSpawn;                                                // 0x003C(0x003C)
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.FieldSetupWave
// 0x0010
struct FFieldSetupWave
{
	TArray<struct FFieldSpawnInfoPair>                 SpawnList;                                                // 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                MaxWaveLoops;                                             // 0x000C(0x0004)
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.DifficultyInfo
// 0x0024
struct FDifficultyInfo
{
	TArray<struct FFieldSetupWave>                     FieldSetupList;                                           // 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                TotalGameEventRounds;                                     // 0x000C(0x0004)
	int                                                TotalGameEventRoundsToWin;                                // 0x0010(0x0004)
	float                                              ResetCheckTime;                                           // 0x0014(0x0004)
	float                                              ResetCheckTimeAfterBallTouch;                             // 0x0018(0x0004)
	float                                              MinBallVelocityForDestroy;                                // 0x001C(0x0004)
	float                                              BallStartTime;                                            // 0x0020(0x0004)
};

// ScriptStruct TAGame.GameEvent_Tutorial_TA.CarSpawnData
// 0x001C
struct FCarSpawnData
{
	class AController*                                 Controller;                                               // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C)
};

// ScriptStruct TAGame.GFxData_ProductTradeIn_TA.TradeInDrop
// 0x0008
struct FTradeInDrop
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_ProductTradeIn_TA.TradeInDrop.ProductID
};

// ScriptStruct TAGame.GFxData_ProductTradeIn_TA.TradeInDropTable
// 0x0014
struct FTradeInDropTable
{
	TEnumAsByte<EProductQuality>                       Quality;                                                  // 0x0000(0x0001) (CPF_DataBinding)
	int                                                SeriesID;                                                 // 0x0004(0x0004) (CPF_DataBinding)
	TArray<struct FTradeInDrop>                        Drops;                                                    // 0x0008(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.OnlineGameParty_TA.PartyMemberLoadout
// 0x007C
struct FPartyMemberLoadout
{
	struct FUniqueNetId                                UniqueId;                                                 // 0x0000(0x0030)
	struct FLoadoutData                                Loadout;                                                  // 0x0030(0x0034) (CPF_NeedCtorLink)
	TArray<struct FOnlineProductData>                  OnlineLoadoutData;                                        // 0x0064(0x000C) (CPF_NeedCtorLink)
	int                                                GaragePreviewTeam;                                        // 0x0070(0x0004)
	class ULocalPlayer*                                LocalPlayer;                                              // 0x0074(0x0004) (CPF_Transient)
	class UOnlineProductStoreSet_TA*                   ProductSet;                                               // 0x0078(0x0004)
};

// ScriptStruct TAGame.OnlineGameParty_TA.StoredPartyMessage
// 0x001C
struct FStoredPartyMessage
{
	struct FString                                     PartyMessage;                                             // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     MemberName;                                               // 0x000C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bIsLocal : 1;                                             // 0x0018(0x0004)
};

// ScriptStruct TAGame.XPManager_TA.TitleInfo
// 0x000C
struct FTitleInfo
{
	struct FName                                       Title;                                                    // 0x0000(0x0008) (CPF_Edit, CPF_Const)
	int                                                TitleCap;                                                 // 0x0008(0x0004) (CPF_Edit, CPF_Const)
};

// ScriptStruct TAGame.OnlineSaveData_TA.SaveDataSetProperties
// 0x000C
struct FSaveDataSetProperties
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.OnlineSaveData_TA.SaveDataSetProperties.LastUnlockDisplayId
	class UAchievementSave_TA*                         AchievementData;                                          // 0x0008(0x0004)
};

// ScriptStruct TAGame.AdManager_TA.CachedAdImageData
// 0x0018
struct FCachedAdImageData
{
	struct FString                                     ImageURL;                                                 // 0x0000(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.AdManager_TA.CachedAdImageData.CacheEndTime
	class UTexture2DDynamic*                           ImageTexture;                                             // 0x0014(0x0004) (CPF_Transient)
};

// ScriptStruct TAGame.AdManager_TA.BillboardData
// 0x0010
struct FBillboardData
{
	struct FString                                     MaterialName;                                             // 0x0000(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	int                                                ZoneID;                                                   // 0x000C(0x0004) (CPF_Transient)
};

// ScriptStruct TAGame.AdManager_TA.BillboardUpdateRequestData
// 0x0018
struct FBillboardUpdateRequestData
{
	int                                                ZoneID;                                                   // 0x0000(0x0004) (CPF_Transient)
	int                                                MaterialIndex;                                            // 0x0004(0x0004) (CPF_Transient)
	struct FString                                     MaterialName;                                             // 0x0008(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0014(0x0004) (CPF_ExportObject, CPF_Transient, CPF_Component, CPF_EditInline)
};

// ScriptStruct TAGame.RPC_AdsGet_TA.AdInfo
// 0x0018
struct FAdInfo
{
	struct FString                                     URL;                                                      // 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                ZoneID;                                                   // 0x000C(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_AdsGet_TA.AdInfo.UTCEndTime
};

// ScriptStruct TAGame.ReplayDirector_TA.ReplayFocusCar
// 0x0014
struct FReplayFocusCar
{
	float                                              Time;                                                     // 0x0000(0x0004)
	float                                              Duration;                                                 // 0x0004(0x0004)
	struct FName                                       CarName;                                                  // 0x0008(0x0008)
	int                                                BallHitIndex;                                             // 0x0010(0x0004)
};

// ScriptStruct TAGame.ReplayDirector_TA.ReplayScoreData
// 0x0010
struct FReplayScoreData
{
	class APRI_TA*                                     ScoredBy;                                                 // 0x0000(0x0004)
	class APRI_TA*                                     AssistedBy;                                               // 0x0004(0x0004)
	float                                              Speed;                                                    // 0x0008(0x0004)
	float                                              Time;                                                     // 0x000C(0x0004)
};

// ScriptStruct TAGame.CameraState_Car_TA.InterpVector
// 0x0024
struct UCameraState_Car_TA_FInterpVector
{
	float                                              Rate;                                                     // 0x0000(0x0004) (CPF_Edit)
	float                                              MaxDistance;                                              // 0x0004(0x0004) (CPF_Edit)
	struct FVector                                     Location;                                                 // 0x0008(0x000C)
	struct FVector                                     Velocity;                                                 // 0x0014(0x000C)
	unsigned long                                      bInitialized : 1;                                         // 0x0020(0x0004)
};

// ScriptStruct TAGame.CameraState_BallCam_TA.PlaneSelectData
// 0x000C
struct FPlaneSelectData
{
	float                                              YExtent;                                                  // 0x0000(0x0004)
	float                                              ZExtent;                                                  // 0x0004(0x0004)
	float                                              MaxDistance;                                              // 0x0008(0x0004)
};

// ScriptStruct TAGame.CameraState_BallCam_TA.AngleSelectData
// 0x0008
struct FAngleSelectData
{
	float                                              MinAngle;                                                 // 0x0000(0x0004)
	float                                              MaxDistance;                                              // 0x0004(0x0004)
};

// ScriptStruct TAGame.MapInfo_TA.WorldColorData
// 0x0040
struct FWorldColorData
{
	struct FLinearColor                                EnvironmentA;                                             // 0x0000(0x0010) (CPF_Edit)
	struct FLinearColor                                EnvironmentB;                                             // 0x0010(0x0010) (CPF_Edit)
	struct FLinearColor                                SunLight;                                                 // 0x0020(0x0010) (CPF_Edit)
	struct FLinearColor                                WorldLight;                                               // 0x0030(0x0010) (CPF_Edit)
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState
// 0x002C
struct FEngineAudioNativeState
{
	class UEngineAudioComponent_TA*                    Component;                                                // 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UEngineAudioProfile_TA*                      Profile;                                                  // 0x0004(0x0004)
	class AVehicle_TA*                                 Car;                                                      // 0x0008(0x0004)
	struct FCarStateData                               OldCarState;                                              // 0x000C(0x0010)
	struct FCarStateData                               CarState;                                                 // 0x001C(0x0010)
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_Clutched
// 0x0004 (0x0030 - 0x002C)
struct FEngineAudioNativeState_Clutched : public FEngineAudioNativeState
{
	unsigned long                                      bUsingRevLimiter : 1;                                     // 0x002C(0x0004)
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_OnGround
// 0x0010 (0x003C - 0x002C)
struct FEngineAudioNativeState_OnGround : public FEngineAudioNativeState
{
	float                                              GearSwitchTimeRemaining;                                  // 0x002C(0x0004)
	float                                              RPMShiftUp;                                               // 0x0030(0x0004)
	float                                              RPMShiftDown;                                             // 0x0034(0x0004)
	int                                                Gear;                                                     // 0x0038(0x0004)
};

// ScriptStruct TAGame.EngineAudioComponent_TA.EngineAudioNativeState_InAir
// 0x0004 (0x0034 - 0x0030)
struct FEngineAudioNativeState_InAir : public FEngineAudioNativeState_Clutched
{
	float                                              TimeInAir;                                                // 0x0030(0x0004)
};

// ScriptStruct TAGame.TeamIndicator_TA.TeamVehicleIndicator
// 0x000C
struct FTeamVehicleIndicator
{
	class UParticleSystemComponent*                    PSC;                                                      // 0x0000(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class ACar_TA*                                     Car;                                                      // 0x0004(0x0004)
	float                                              LastUpdateTime;                                           // 0x0008(0x0004)
};

// ScriptStruct TAGame.CarPreviewAnim_TA.PreviewAnimKeyframe
// 0x0038
struct FPreviewAnimKeyframe
{
	struct FRotator                                    Rotation;                                                 // 0x0000(0x000C) (CPF_Edit)
	struct FVector                                     Translation;                                              // 0x000C(0x000C) (CPF_Edit)
	struct FViewTargetTransitionParams                 BlendParams;                                              // 0x0018(0x0010) (CPF_Edit)
	struct FVector                                     BouncyChassisForce;                                       // 0x0028(0x000C) (CPF_Edit)
	unsigned long                                      bAddRotation : 1;                                         // 0x0034(0x0004) (CPF_Edit)
	unsigned long                                      bAddTranslation : 1;                                      // 0x0034(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.CheatManagerBase_TA.ReplayDuplicationParams
// 0x0008
struct FReplayDuplicationParams
{
	int                                                Count;                                                    // 0x0000(0x0004) (CPF_Transient)
	int                                                Index;                                                    // 0x0004(0x0004) (CPF_Transient)
};

// ScriptStruct TAGame.CrowdActor_TA.CrowdNoiseModifierInstance
// 0x0008
struct FCrowdNoiseModifierInstance
{
	float                                              Value;                                                    // 0x0000(0x0004)
	float                                              Duration;                                                 // 0x0004(0x0004)
};

// ScriptStruct TAGame.StatFactory_TA.StatEventCollection
// 0x00A4
struct FStatEventCollection
{
	class UStatEvent_TA*                               Win;                                                      // 0x0000(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Loss;                                                     // 0x0004(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               TimePlayed;                                               // 0x0008(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Shot;                                                     // 0x000C(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Assist;                                                   // 0x0010(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Center;                                                   // 0x0014(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Clear;                                                    // 0x0018(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               PoolShot;                                                 // 0x001C(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Goal;                                                     // 0x0020(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               AerialGoal;                                               // 0x0024(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               BicycleGoal;                                              // 0x0028(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               BulletGoal;                                               // 0x002C(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               BackwardsGoal;                                            // 0x0030(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               LongGoal;                                                 // 0x0034(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               OvertimeGoal;                                             // 0x0038(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               TurtleGoal;                                               // 0x003C(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               AerialHit;                                                // 0x0040(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               BicycleHit;                                               // 0x0044(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               BulletHit;                                                // 0x0048(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               JuggleHit;                                                // 0x004C(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               FirstTouch;                                               // 0x0050(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Save;                                                     // 0x0054(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               EpicSave;                                                 // 0x0058(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               FreezeSave;                                               // 0x005C(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               HatTrick;                                                 // 0x0060(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Savior;                                                   // 0x0064(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Playmaker;                                                // 0x0068(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               MVP;                                                      // 0x006C(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               FastestGoal;                                              // 0x0070(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               SlowestGoal;                                              // 0x0074(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               FurthestGoal;                                             // 0x0078(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               OwnGoal;                                                  // 0x007C(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               MostBallTouches;                                          // 0x0080(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               FewestBallTouches;                                        // 0x0084(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               MostBoostPickups;                                         // 0x0088(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               FewestBoostPickups;                                       // 0x008C(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               CarTouches;                                               // 0x0090(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Demolition;                                               // 0x0094(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               Demolish;                                                 // 0x0098(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               BreakoutDamage;                                           // 0x009C(0x0004) (CPF_Edit)
	class UStatEvent_TA*                               BreakoutDamageLarge;                                      // 0x00A0(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.StatFactory_TA.BallInfo
// 0x0024
struct FBallInfo
{
	class ABall_TA*                                    Ball;                                                     // 0x0000(0x0004)
	class UGoal_TA*                                    ShotGoal;                                                 // 0x0004(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class UGoal_TA*                                    RedZoneGoal;                                              // 0x0008(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
	class APRI_TA*                                     RedZonePRI;                                               // 0x000C(0x0004)
	float                                              GroundHitTime;                                            // 0x0010(0x0004)
	float                                              JuggleTime;                                               // 0x0014(0x0004)
	float                                              SpecialHitTime;                                           // 0x0018(0x0004)
	float                                              SaveTime;                                                 // 0x001C(0x0004)
	float                                              ShotTime;                                                 // 0x0020(0x0004)
};

// ScriptStruct TAGame.DebugHelpMenu_TA.DebugHelpItem
// 0x0024
struct FDebugHelpItem
{
	struct FString                                     Key;                                                      // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Command;                                                  // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Description;                                              // 0x0018(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.DebugHelpMenu_TA.DebugCategory
// 0x0018
struct FDebugCategory
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FDebugHelpItem>                      Items;                                                    // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GameEvent_Soccar_TA.MemberTitleStat
// 0x0014
struct FMemberTitleStat
{
	class UStatCategory_TA*                            Category;                                                 // 0x0000(0x0004)
	class UStatTitle_TA*                               Title;                                                    // 0x0004(0x0004)
	int                                                PointsEarned;                                             // 0x0008(0x0004)
	int                                                StatCount;                                                // 0x000C(0x0004)
	class APRI_TA*                                     MemberPRI;                                                // 0x0010(0x0004)
};

// ScriptStruct TAGame.RPC_MatchComplete_TA.OnlineProductDrop
// 0x003C
struct FOnlineProductDrop
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	TArray<struct FOnlineProductData>                  ProductData;                                              // 0x0030(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Replay_Soccar_TA.ScoredGoal
// 0x0014
struct FScoredGoal
{
	int                                                frame;                                                    // 0x0000(0x0004) (CPF_DataBinding)
	struct FString                                     PlayerName;                                               // 0x0004(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	int                                                PlayerTeam;                                               // 0x0010(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.Replay_Soccar_TA.Highlight
// 0x0014
struct FHighlight
{
	int                                                frame;                                                    // 0x0000(0x0004)
	struct FName                                       CarName;                                                  // 0x0004(0x0008)
	struct FName                                       BallName;                                                 // 0x000C(0x0008)
};

// ScriptStruct TAGame.Replay_Soccar_TA.ReplayPlayerStats
// 0x0034
struct FReplayPlayerStats
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<EOnlinePlatform>                       Platform;                                                 // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000D(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.Replay_Soccar_TA.ReplayPlayerStats.OnlineID
	int                                                Team;                                                     // 0x0018(0x0004)
	int                                                Score;                                                    // 0x001C(0x0004)
	int                                                Goals;                                                    // 0x0020(0x0004)
	int                                                Assists;                                                  // 0x0024(0x0004)
	int                                                Saves;                                                    // 0x0028(0x0004)
	int                                                Shots;                                                    // 0x002C(0x0004)
	unsigned long                                      bBot : 1;                                                 // 0x0030(0x0004)
};

// ScriptStruct TAGame.Tutorial_TA.ButtonInfo
// 0x0020
struct FButtonInfo
{
	struct FString                                     Text;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             ClickDelegate;                                            // 0x000C(0x0010) (CPF_NeedCtorLink)
	unsigned long                                      bCorrectAnswer : 1;                                       // 0x001C(0x0004)
};

// ScriptStruct TAGame.Tutorial_TA.ActionNameInfo
// 0x000C
struct FActionNameInfo
{
	TArray<struct FName>                               ActionNames;                                              // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.Tutorial_TA.MessageInfo
// 0x0030
struct FMessageInfo
{
	struct FString                                     Title;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Body;                                                     // 0x000C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FButtonInfo>                         Buttons;                                                  // 0x0018(0x000C) (CPF_NeedCtorLink)
	TArray<struct FActionNameInfo>                     ActionNameList;                                           // 0x0024(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.MusicTheme_TA.GameVersionMusicTheme
// 0x0020
struct FGameVersionMusicTheme
{
	TArray<class UMusicPlaylist_TA*>                   Playlists;                                                // 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	class UAkSoundCue*                                 TitleTheme;                                               // 0x000C(0x0004) (CPF_Edit)
	class UAkSoundCue*                                 Credits;                                                  // 0x0010(0x0004) (CPF_Edit)
	class UAkSoundCue*                                 KonamiCode;                                               // 0x0014(0x0004) (CPF_Edit)
	TEnumAsByte<EGameVersion>                          GameVersion;                                              // 0x0018(0x0001) (CPF_Edit)
	class UTexture*                                    DefaultIcon;                                              // 0x001C(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.GFxData_MenuSequence_TA.MenuSequencePair
// 0x0010
struct FMenuSequencePair
{
	struct FName                                       MenuSequence;                                             // 0x0000(0x0008)
	struct FName                                       MenuID;                                                   // 0x0008(0x0008)
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetMessageGroup
// 0x0010
struct FChatPresetMessageGroup
{
	unsigned long                                      bTeam : 1;                                                // 0x0000(0x0004) (CPF_Edit)
	struct FString                                     Label;                                                    // 0x0004(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Chat_TA.ChatPresetMessage
// 0x001C
struct FChatPresetMessage
{
	int                                                GroupIndex;                                               // 0x0000(0x0004) (CPF_Edit, CPF_DataBinding)
	struct FName                                       Id;                                                       // 0x0004(0x0008) (CPF_DataBinding)
	unsigned long                                      bTeam : 1;                                                // 0x000C(0x0004) (CPF_DataBinding)
	struct FString                                     Label;                                                    // 0x0010(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Chat_TA.GFxChatMessage
// 0x0024
struct FGFxChatMessage
{
	int                                                Team;                                                     // 0x0000(0x0004) (CPF_DataBinding)
	struct FString                                     PlayerName;                                               // 0x0004(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Message;                                                  // 0x0010(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	TEnumAsByte<EChatChannel>                          ChatChannel;                                              // 0x001C(0x0001) (CPF_DataBinding)
	unsigned long                                      bLocalPlayer : 1;                                         // 0x0020(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Chat_TA.PendingFilterMessage
// 0x000D
struct FPendingFilterMessage
{
	struct FString                                     Message;                                                  // 0x0000(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<EChatChannel>                          ChatChannel;                                              // 0x000C(0x0001)
};

// ScriptStruct TAGame.GFxData_Controls_TA.LocalizedBindingCategory
// 0x0020
struct FLocalizedBindingCategory
{
	struct FName                                       Category;                                                 // 0x0000(0x0008) (CPF_DataBinding)
	struct FString                                     Label;                                                    // 0x0008(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Description;                                              // 0x0014(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Controls_TA.LocalizedAction
// 0x001C (0x004C - 0x0030)
struct FLocalizedAction : public FBindingAction
{
	struct FString                                     Label;                                                    // 0x0030(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Description;                                              // 0x003C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bRebindable : 1;                                          // 0x0048(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Controls_TA.UIPlayerBinding
// 0x000C (0x0038 - 0x002C)
struct FUIPlayerBinding : public FPlayerBinding
{
	struct FString                                     UIKey;                                                    // 0x002C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedNameData
// 0x0018
struct FLocalizedNameData
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Position;                                                 // 0x000C(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedDepartmentData
// 0x0018
struct FLocalizedDepartmentData
{
	struct FString                                     DepartmentTitle;                                          // 0x0000(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	TArray<struct FLocalizedNameData>                  Names;                                                    // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Credits_TA.LocalizedPostCreditData
// 0x0018
struct FLocalizedPostCreditData
{
	TArray<struct FString>                             Lines;                                                    // 0x0000(0x000C) (CPF_Const, CPF_Localized, CPF_NeedCtorLink)
	TArray<TEnumAsByte<EOnlinePlatform>>               Platforms;                                                // 0x000C(0x000C) (CPF_Config, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Credits_TA.DepartmentData
// 0x0024
struct FDepartmentData
{
	struct FString                                     DepartmentTitle;                                          // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Name;                                                     // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Position;                                                 // 0x0018(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Credits_TA.PostCreditData
// 0x0030
struct FPostCreditData
{
	struct FString                                     Line0;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Line1;                                                    // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Line2;                                                    // 0x0018(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Line3;                                                    // 0x0024(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Garage_TA.GarageProductSlot
// 0x003C
struct FGarageProductSlot
{
	unsigned long                                      bEnabled : 1;                                             // 0x0000(0x0004) (CPF_DataBinding)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (CPF_DataBinding)
	struct FString                                     Label;                                                    // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	class UTexture*                                    Icon;                                                     // 0x0018(0x0004) (CPF_DataBinding)
	int                                                SlotIndex;                                                // 0x001C(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_Garage_TA.GarageProductSlot.EquippedProduct0
	unsigned char                                      UnknownData01[0x8];                                       // 0x0028(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_Garage_TA.GarageProductSlot.EquippedProduct1
	int                                                EquippedPack;                                             // 0x0030(0x0004) (CPF_DataBinding)
	unsigned long                                      bCanUnequip : 1;                                          // 0x0034(0x0004) (CPF_DataBinding)
	unsigned long                                      bHasNewItems : 1;                                         // 0x0034(0x0004) (CPF_DataBinding)
	int                                                DefaultProductID;                                         // 0x0038(0x0004)
};

// ScriptStruct TAGame.GFxData_Garage_TA.GarageTeam
// 0x0024
struct FGarageTeam
{
	struct FString                                     Label;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	int                                                TeamColorID;                                              // 0x000C(0x0004) (CPF_DataBinding)
	int                                                CustomColorID;                                            // 0x0010(0x0004) (CPF_DataBinding)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0014(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_Garage_TA.GarageTeam.TeamFinishID
	unsigned char                                      UnknownData01[0x8];                                       // 0x001C(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_Garage_TA.GarageTeam.CustomFinishID
};

// ScriptStruct TAGame.GFxData_Products_TA.LoadingProduct
// 0x0028
struct FLoadingProduct
{
	int                                                ProductID;                                                // 0x0000(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0004(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_Products_TA.LoadingProduct.InstanceID
	TArray<int>                                        ReferencedViews;                                          // 0x000C(0x000C) (CPF_NeedCtorLink)
	class UOnlineProduct_TA*                           OnlineProduct;                                            // 0x0018(0x0004)
	TEnumAsByte<EProductThumbnailSize>                 ThumbnailSize;                                            // 0x001C(0x0001)
	class UProductAsset_TA*                            Asset;                                                    // 0x0020(0x0004)
	class UProductThumbnail_TA*                        Thumbnail;                                                // 0x0024(0x0004)
};

// ScriptStruct TAGame.GFxData_ItemDrops_TA.GFxItemDrop
// 0x000C
struct FGFxItemDrop
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_ItemDrops_TA.GFxItemDrop.Id
	unsigned long                                      bCanEquipNow : 1;                                         // 0x0008(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.SkillDecayMessageHandler_TA.PlayersShownPlaylists
// 0x003C
struct FPlayersShownPlaylists
{
	TArray<class UGameSettingPlaylist_X*>              ShownPlaylists;                                           // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // 0x000C(0x0030)
};

// ScriptStruct TAGame.GFxData_DLC_TA.GFxDLCData
// 0x004C
struct FGFxDLCData
{
	struct FString                                     PackName;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FName                                       Id;                                                       // 0x000C(0x0008) (CPF_DataBinding)
	int                                                ProductID;                                                // 0x0014(0x0004) (CPF_DataBinding)
	struct FString                                     SubItems;                                                 // 0x0018(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Price;                                                    // 0x0024(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     DiscountPrice;                                            // 0x0030(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	int                                                DiscountPercentage;                                       // 0x003C(0x0004) (CPF_DataBinding)
	int                                                LabelSlotIndex;                                           // 0x0040(0x0004) (CPF_DataBinding)
	unsigned long                                      bUnlocked : 1;                                            // 0x0044(0x0004) (CPF_DataBinding)
	unsigned long                                      bIsNew : 1;                                               // 0x0044(0x0004) (CPF_DataBinding)
	int                                                PurchaseTime;                                             // 0x0048(0x0004) (CPF_Transient)
};

// ScriptStruct TAGame.GFxData_Map_TA.GFxMapData
// 0x0020
struct FGFxMapData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_DataBinding)
	struct FString                                     FriendlyName;                                             // 0x0008(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	class UTexture2D*                                  Thumbnail;                                                // 0x0014(0x0004) (CPF_DataBinding)
	class UTexture2D*                                  LargeImage;                                               // 0x0018(0x0004)
	class UMapData_TA*                                 Data;                                                     // 0x001C(0x0004)
};

// ScriptStruct TAGame.GFxData_Regions_TA.GFxRegion
// 0x001C
struct FGFxRegion
{
	struct FString                                     Id;                                                       // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Name;                                                     // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bSelected : 1;                                            // 0x0018(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Matchmaking_TA.MessageUpdate
// 0x0010
struct FMessageUpdate
{
	int                                                DelayFromStart;                                           // 0x0000(0x0004) (CPF_Edit)
	struct FString                                     MessageKey;                                               // 0x0004(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_MusicPlayer_TA.GFxMusicPlaylist
// 0x0018
struct FGFxMusicPlaylist
{
	struct FString                                     Label;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	class UTexture*                                    Icon;                                                     // 0x000C(0x0004) (CPF_DataBinding)
	unsigned long                                      bSelected : 1;                                            // 0x0010(0x0004) (CPF_DataBinding)
	class UMusicPlaylist_TA*                           Playlist;                                                 // 0x0014(0x0004)
};

// ScriptStruct TAGame.MusicPlayerSave_TA.PlaylistState
// 0x000C
struct FPlaylistState
{
	struct FName                                       Playlist;                                                 // 0x0000(0x0008)
	unsigned long                                      bEnabled : 1;                                             // 0x0008(0x0004)
};

// ScriptStruct TAGame.GFxData_Party_TA.GFxPartyMember
// 0x0050
struct FGFxPartyMember
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     ProfileId;                                                // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	class UTexture*                                    PlayerAvatarTexture;                                      // 0x0018(0x0004) (CPF_DataBinding)
	unsigned long                                      bSplitScreen : 1;                                         // 0x001C(0x0004) (CPF_DataBinding)
	unsigned long                                      bLocalSplitScreen : 1;                                    // 0x001C(0x0004) (CPF_DataBinding)
	unsigned long                                      bHasProfile : 1;                                          // 0x001C(0x0004) (CPF_DataBinding)
	unsigned long                                      bPartyLeader : 1;                                         // 0x001C(0x0004) (CPF_DataBinding)
	unsigned long                                      bIsPlayerTrading : 1;                                     // 0x001C(0x0004) (CPF_DataBinding)
	unsigned long                                      bIsPlayerInMatch : 1;                                     // 0x001C(0x0004) (CPF_DataBinding)
	unsigned long                                      bPlayerCanTrade : 1;                                      // 0x001C(0x0004) (CPF_DataBinding)
	struct FUniqueNetId                                UniqueId;                                                 // 0x0020(0x0030) (CPF_Transient)
};

// ScriptStruct TAGame.GFxData_ReplayViewer_TA.LocalizedCameraMode
// 0x0024
struct FLocalizedCameraMode
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_DataBinding)
	unsigned long                                      bDisabled : 1;                                            // 0x0008(0x0004) (CPF_DataBinding)
	struct FString                                     Label;                                                    // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Description;                                              // 0x0018(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_SaveData_TA.SaveKeyValue
// 0x0014
struct FSaveKeyValue
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (CPF_DataBinding)
	struct FString                                     Value;                                                    // 0x0008(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Season_TA.SeasonWeek
// 0x0004
struct FSeasonWeek
{
	unsigned long                                      bWinner : 1;                                              // 0x0000(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_SeasonMode_TA.GFxLogoData
// 0x0024
struct FGFxLogoData
{
	struct FName                                       AssetName;                                                // 0x0000(0x0008) (CPF_DataBinding)
	class UTexture*                                    Logo;                                                     // 0x0008(0x0004) (CPF_DataBinding)
	int                                                TeamColor;                                                // 0x000C(0x0004) (CPF_DataBinding)
	int                                                CustomColor;                                              // 0x0010(0x0004) (CPF_DataBinding)
	struct FString                                     DefaultTeamName;                                          // 0x0014(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bIsBotTeam : 1;                                           // 0x0020(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_SeasonMode_TA.GFxBotData
// 0x0018
struct FGFxBotData
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Id;                                                       // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Settings_TA.BindingPreset
// 0x0014
struct FBindingPreset
{
	struct FName                                       PresetName;                                               // 0x0000(0x0008)
	struct FString                                     DisplayName;                                              // 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.UserSettingObserverEventCache_TA.SettingEvent
// 0x0044
struct FSettingEvent
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	struct FName                                       Id;                                                       // 0x0030(0x0008)
	struct FString                                     Value;                                                    // 0x0038(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_Stats_TA.GFxStatData
// 0x0038
struct FGFxStatData
{
	struct FString                                     Id;                                                       // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Name;                                                     // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     DisplayValue;                                             // 0x0018(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	class UTexture*                                    Texture;                                                  // 0x0024(0x0004) (CPF_DataBinding)
	struct FString                                     Description;                                              // 0x0028(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	class UClass*                                      DisplayProductStatClass;                                  // 0x0034(0x0004)
};

// ScriptStruct TAGame.GFxData_Training_TA.UseAction
// 0x0018
struct FUseAction
{
	struct FString                                     ActionName;                                               // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     LocalizedActionName;                                      // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GameEvent_GameEditor_TA.SpawnArchetypeData
// 0x0008
struct FSpawnArchetypeData
{
	class AActor*                                      Archetype;                                                // 0x0000(0x0004)
	int                                                MaxSpawnCount;                                            // 0x0004(0x0004)
};

// ScriptStruct TAGame.HUDBase_TA.ChatMessage
// 0x0028
struct FChatMessage
{
	class APlayerReplicationInfo*                      PRI;                                                      // 0x0000(0x0004)
	class ATeam_TA*                                    Team;                                                     // 0x0004(0x0004)
	struct FString                                     PlayerName;                                               // 0x0008(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // 0x0014(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<EChatChannel>                          ChatChannel;                                              // 0x0020(0x0001)
	unsigned long                                      bPreset : 1;                                              // 0x0024(0x0004)
};

// ScriptStruct TAGame.GFxHUD_TA.ScreenLocation
// 0x0010
struct FScreenLocation
{
	struct FVector                                     ScreenPos;                                                // 0x0000(0x000C)
	unsigned long                                      bOffScreen : 1;                                           // 0x000C(0x0004)
};

// ScriptStruct TAGame.ESportEvents_TA.EsportEventData
// 0x0080
struct FEsportEventData
{
	struct FString                                     Image;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Title;                                                    // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Description;                                              // 0x0018(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     URL;                                                      // 0x0024(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     StartTime;                                                // 0x0030(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     EndTime;                                                  // 0x003C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bStartingSoon : 1;                                        // 0x0048(0x0004) (CPF_DataBinding)
	unsigned long                                      bLiveNow : 1;                                             // 0x0048(0x0004) (CPF_DataBinding)
	class UTexture*                                    ImageTexture;                                             // 0x004C(0x0004) (CPF_DataBinding)
	int                                                ImageTextureSizeX;                                        // 0x0050(0x0004) (CPF_DataBinding)
	int                                                ImageTextureSizeY;                                        // 0x0054(0x0004) (CPF_DataBinding)
	struct FString                                     UTCStartTime;                                             // 0x0058(0x000C) (CPF_NeedCtorLink)
	struct FString                                     UTCEndTime;                                               // 0x0064(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0070(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.ESportEvents_TA.EsportEventData.UTCStartTimeSeconds
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.ESportEvents_TA.EsportEventData.UTCEndTimeSeconds
};

// ScriptStruct TAGame.Upsell_TA.UpsellData
// 0x0060
struct FUpsellData
{
	struct FString                                     Title;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     BodyTitle;                                                // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Body;                                                     // 0x0018(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     URL;                                                      // 0x0024(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	class UTexture*                                    SmallTexture;                                             // 0x0030(0x0004) (CPF_DataBinding)
	class UTexture*                                    LargeTexture;                                             // 0x0034(0x0004) (CPF_DataBinding)
	int                                                SmallTextureSizeX;                                        // 0x0038(0x0004) (CPF_DataBinding)
	int                                                SmallTextureSizeY;                                        // 0x003C(0x0004) (CPF_DataBinding)
	int                                                LargeTextureSizeX;                                        // 0x0040(0x0004) (CPF_DataBinding)
	int                                                LargeTextureSizeY;                                        // 0x0044(0x0004) (CPF_DataBinding)
	struct FString                                     SmallTextureURL;                                          // 0x0048(0x000C) (CPF_NeedCtorLink)
	struct FString                                     LargeTextureURL;                                          // 0x0054(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_ProductsLoadoutGet_TA.InstanceToSlotRow
// 0x0010
struct FInstanceToSlotRow
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_ProductsLoadoutGet_TA.InstanceToSlotRow.InstanceID
	int                                                SlotIndex;                                                // 0x0008(0x0004)
	int                                                TeamIndex;                                                // 0x000C(0x0004)
};

// ScriptStruct TAGame.OnlineGameReservations_TA.ReservationLoadout
// 0x003C
struct FReservationLoadout
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	TArray<int>                                        ProductIDs;                                               // 0x0030(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.OnlineProfile_TA.ProfileAddProperties
// 0x0004
struct FProfileAddProperties
{
	float                                              TotalXP;                                                  // 0x0000(0x0004)
};

// ScriptStruct TAGame.OnlineProfile_TA.ProfileSetProperties
// 0x0000
struct FProfileSetProperties
{

};

// ScriptStruct TAGame.OnlineSaveData_TA.SaveDataAddProperties
// 0x0000
struct FSaveDataAddProperties
{

};

// ScriptStruct TAGame.PlayerController_TA.ClientPacketData
// 0x0028
struct FClientPacketData
{
	float                                              TimeStamp;                                                // 0x0000(0x0004)
	struct FVector                                     CameraLoc;                                                // 0x0004(0x000C)
	struct FRotator                                    CameraRot;                                                // 0x0010(0x000C)
	TArray<struct FClientFrameData>                    Frames;                                                   // 0x001C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GameEditor_Ring_TA.ActorTouchRecordData
// 0x0010
struct FActorTouchRecordData
{
	class AActor*                                      Actor;                                                    // 0x0000(0x0004)
	struct FVector                                     TouchDirection;                                           // 0x0004(0x000C)
};

// ScriptStruct TAGame.AudioPriorityComponent_TA.PriorityCandidate
// 0x0014
struct FPriorityCandidate
{
	class ACar_TA*                                     Candidate;                                                // 0x0000(0x0004)
	int                                                Priority;                                                 // 0x0004(0x0004)
	TArray<struct FString>                             BonusReasons;                                             // 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.PRI_TA.ClientOnlineProductStat
// 0x000C
struct FClientOnlineProductStat
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.PRI_TA.ClientOnlineProductStat.InstanceID
	int                                                Value;                                                    // 0x0008(0x0004)
};

// ScriptStruct TAGame.ProductAsset_TA.ProductReplacement
// 0x0010
struct FProductReplacement
{
	TArray<TEnumAsByte<EConsoleType>>                  Platforms;                                                // 0x0000(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	class UProductAsset_TA*                            Replacement;                                              // 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayIOTaskBase
// 0x0018
struct FReplayIOTaskBase
{
	class UReplay_TA*                                  Replay;                                                   // 0x0000(0x0004)
	struct FString                                     Path;                                                     // 0x0004(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	class UErrorType*                                  Error;                                                    // 0x0010(0x0004)
	struct FPointer                                    Ar;                                                       // 0x0014(0x0004) (CPF_Native)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayExportTask
// 0x0010 (0x0028 - 0x0018)
struct FReplayExportTask : public FReplayIOTaskBase
{
	TArray<unsigned char>                              Data;                                                     // 0x0018(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	unsigned long                                      bDebug : 1;                                               // 0x0024(0x0004)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayClassTask
// 0x000C (0x0024 - 0x0018)
struct FReplayClassTask : public FReplayIOTaskBase
{
	struct FString                                     ClassPath;                                                // 0x0018(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayImportTask
// 0x000C (0x0024 - 0x0018)
struct FReplayImportTask : public FReplayIOTaskBase
{
	TArray<unsigned char>                              Data;                                                     // 0x0018(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayHeaderImportTask
// 0x0000 (0x0018 - 0x0018)
struct FReplayHeaderImportTask : public FReplayIOTaskBase
{

};

// ScriptStruct TAGame.ReplayManager_TA.ReplayTypeData
// 0x0018
struct FReplayTypeData
{
	struct FString                                     Filename;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ClassPath;                                                // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ReplayManager_TA.ReplayHeadersCountTask
// 0x001C
struct FReplayHeadersCountTask
{
	struct FString                                     Path;                                                     // 0x0000(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	TArray<struct FReplayTypeData>                     Replays;                                                  // 0x000C(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	class UErrorType*                                  Error;                                                    // 0x0018(0x0004)
};

// ScriptStruct TAGame.SaveData_TA.ProfileDiffScore
// 0x0008
struct FProfileDiffScore
{
	int                                                Score;                                                    // 0x0000(0x0004)
	class UProfile_TA*                                 Profile;                                                  // 0x0004(0x0004)
};

// ScriptStruct TAGame.SaveObjectManager_TA.LoadObjectResult
// 0x0009
struct FLoadObjectResult
{
	class UObject*                                     ObjectData;                                               // 0x0000(0x0004)
	class UError*                                      Error;                                                    // 0x0004(0x0004)
	TEnumAsByte<EBasicLoadResult>                      Code;                                                     // 0x0008(0x0001)
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveObjectResult
// 0x0009
struct FSaveObjectResult
{
	class UObject*                                     ObjectData;                                               // 0x0000(0x0004)
	class UError*                                      Error;                                                    // 0x0004(0x0004)
	TEnumAsByte<ESaveGameResult>                       Code;                                                     // 0x0008(0x0001)
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataListFilesTask
// 0x002D
struct FSaveDataListFilesTask
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveObjectManager_TA.SaveDataListFilesTask.ControllerIndex
	struct FString                                     Path;                                                     // 0x0008(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     Pattern;                                                  // 0x0014(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	TArray<struct FString>                             Files;                                                    // 0x0020(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	TEnumAsByte<EBasicLoadResult>                      Result;                                                   // 0x002C(0x0001)
};

// ScriptStruct TAGame.SeqAct_DriveSpline_TA.CarSplineData
// 0x0010
struct FCarSplineData
{
	class ACar_TA*                                     Car;                                                      // 0x0000(0x0004)
	class ASplineActor*                                Spline;                                                   // 0x0004(0x0004)
	float                                              DistanceAlongSpline;                                      // 0x0008(0x0004)
	unsigned long                                      bReachedSpline : 1;                                       // 0x000C(0x0004)
};

// ScriptStruct TAGame.SeqAct_SpawnCarColors_TA.SpawnCarColorSet
// 0x0008
struct FSpawnCarColorSet
{
	class UCarColorSet_TA*                             ColorSet;                                                 // 0x0000(0x0004) (CPF_Edit)
	unsigned long                                      bRender : 1;                                              // 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.StatFactory_TA.StatGroupCollection
// 0x0018
struct FStatGroupCollection
{
	class UStatGroup_TA*                               Wins;                                                     // 0x0000(0x0004) (CPF_Edit)
	class UStatGroup_TA*                               Losses;                                                   // 0x0004(0x0004) (CPF_Edit)
	class UStatGroup_TA*                               Goals;                                                    // 0x0008(0x0004) (CPF_Edit)
	class UStatGroup_TA*                               Saves;                                                    // 0x000C(0x0004) (CPF_Edit)
	class UStatGroup_TA*                               Shots;                                                    // 0x0010(0x0004) (CPF_Edit)
	class UStatGroup_TA*                               Assists;                                                  // 0x0014(0x0004) (CPF_Edit)
};

// ScriptStruct TAGame.FXActor_BreakoutPlatform_TA.PlatformParam
// 0x0018
struct FPlatformParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (CPF_Edit)
	struct FInterpCurveFloat                           ValueOverTime;                                            // 0x0008(0x0010) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataImportTask
// 0x0030
struct FSaveDataImportTask
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveObjectManager_TA.SaveDataImportTask.ControllerIndex
	struct FString                                     Path;                                                     // 0x0008(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	class UObject*                                     SaveDataObject;                                           // 0x0014(0x0004) (CPF_AlwaysInit)
	int                                                Version;                                                  // 0x0018(0x0004)
	TEnumAsByte<EBasicLoadResult>                      Result;                                                   // 0x001C(0x0001)
	TArray<unsigned char>                              Data;                                                     // 0x0020(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	unsigned long                                      bExactFileMatch : 1;                                      // 0x002C(0x0004) (CPF_AlwaysInit)
	unsigned long                                      bPlayerSaveData : 1;                                      // 0x002C(0x0004) (CPF_AlwaysInit)
};

// ScriptStruct TAGame.SaveObjectManager_TA.SaveDataExportTask
// 0x002C
struct FSaveDataExportTask
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveObjectManager_TA.SaveDataExportTask.ControllerIndex
	TArray<unsigned char>                              Data;                                                     // 0x0008(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     Path;                                                     // 0x0014(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	unsigned long                                      bExactFileMatch : 1;                                      // 0x0020(0x0004)
	unsigned long                                      bPlayerSaveData : 1;                                      // 0x0020(0x0004)
	TEnumAsByte<ESaveGameResult>                       Result;                                                   // 0x0024(0x0001)
	int                                                KeepNewestSaveFileCount;                                  // 0x0028(0x0004)
};

// ScriptStruct TAGame.SaveObjectManager_TA.DingoContentCache
// 0x0008
struct FDingoContentCache
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.SaveObjectManager_TA.DingoContentCache.UserXUID
};

// ScriptStruct TAGame.MapPrefsMetrics_TA.MapPrefsMetric
// 0x001C
struct FMapPrefsMetric
{
	int                                                Playlist;                                                 // 0x0000(0x0004)
	TArray<struct FName>                               Likes;                                                    // 0x0004(0x000C) (CPF_NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                                 // 0x0010(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.OnlineGameSkillGroups_TA.PartyPlayers
// 0x000C
struct FPartyPlayers
{
	TArray<struct FUniqueNetId>                        Players;                                                  // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.ProductMetrics_TA.PaintMetricsData
// 0x0010
struct FPaintMetricsData
{
	unsigned char                                      TeamColorID;                                              // 0x0000(0x0001)
	int                                                TeamProductID;                                            // 0x0004(0x0004)
	unsigned char                                      CustomColorID;                                            // 0x0008(0x0001)
	int                                                CustomProductID;                                          // 0x000C(0x0004)
};

// ScriptStruct TAGame.GFxData_MTXGarage_TA.MTXPurchaseInfo
// 0x0020
struct FMTXPurchaseInfo
{
	int                                                CatalogID;                                                // 0x0000(0x0004) (CPF_DataBinding)
	struct FString                                     PurchasePrice;                                            // 0x0004(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     BundleItems;                                              // 0x0010(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bCanBePlayerTraded : 1;                                   // 0x001C(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.RPC_MicroTransactions_GetCatalog_TA.MTProductInfo
// 0x000C
struct FMTProductInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_MicroTransactions_GetCatalog_TA.MTProductInfo.ProductID
	int                                                Count;                                                    // 0x0008(0x0004)
};

// ScriptStruct TAGame.RPC_MicroTransactions_GetCatalog_TA.MTCatalogInfo
// 0x002C
struct FMTCatalogInfo
{
	int                                                Id;                                                       // 0x0000(0x0004)
	TArray<struct FMTProductInfo>                      Items;                                                    // 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FString                                     PlatformProductID;                                        // 0x0010(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Category;                                                 // 0x001C(0x000C) (CPF_NeedCtorLink)
	int                                                Price;                                                    // 0x0028(0x0004)
};

// ScriptStruct TAGame.GFxData_MTXGarage_TA.CartInfo
// 0x0008
struct FCartInfo
{
	int                                                CatalogID;                                                // 0x0000(0x0004) (CPF_DataBinding)
	int                                                Count;                                                    // 0x0004(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.RPC_MicroTransactions_StartPurchase_TA.MTCartItem
// 0x0008
struct FMTCartItem
{
	int                                                CatalogID;                                                // 0x0000(0x0004)
	int                                                Count;                                                    // 0x0004(0x0004)
};

// ScriptStruct TAGame.RPC_GetDLC_TA.DLCInfo
// 0x000C
struct FDLCInfo
{
	struct FName                                       DLCName;                                                  // 0x0000(0x0008)
	unsigned long                                      bIsNew : 1;                                               // 0x0008(0x0004)
};

// ScriptStruct TAGame.CameraStateSelector_Priority_TA.StateParams
// 0x0005
struct FStateParams
{
	class UCameraState_X*                              State;                                                    // 0x0000(0x0004) (CPF_Edit)
	TEnumAsByte<EStatePriority>                        Priority;                                                 // 0x0004(0x0001) (CPF_Edit)
};

// ScriptStruct TAGame.BeamTraceComponent_TA.BeamTraceProps
// 0x0018
struct FBeamTraceProps
{
	float                                              NextTraceTime;                                            // 0x0000(0x0004)
	struct FVector                                     LastWorldLocation;                                        // 0x0004(0x000C)
	unsigned long                                      LastWorldHit : 1;                                         // 0x0010(0x0004)
	class UParticleSystemComponent*                    PSC;                                                      // 0x0014(0x0004) (CPF_ExportObject, CPF_Component, CPF_EditInline)
};

// ScriptStruct TAGame.CameraState_PodiumSpotlight_TA.CachedPodiumCar
// 0x0010
struct FCachedPodiumCar
{
	class ACar_TA*                                     Car;                                                      // 0x0000(0x0004)
	struct FVector                                     Location;                                                 // 0x0004(0x000C)
};

// ScriptStruct TAGame.GameEvent_Soccar_SubRules_500_TA.BallScoreData
// 0x0008
struct FBallScoreData
{
	int                                                BallTouchScore;                                           // 0x0000(0x0004)
	int                                                BallScoreWeight;                                          // 0x0004(0x0004)
};

// ScriptStruct TAGame.GameEvent_Soccar_SubRules_500_TA.CannonFacingInfo
// 0x001C
struct FCannonFacingInfo
{
	struct FRotator                                    OriginalFacing;                                           // 0x0000(0x000C)
	struct FRotator                                    TargetFacing;                                             // 0x000C(0x000C)
	class ACannon_TA*                                  Cannon;                                                   // 0x0018(0x0004)
};

// ScriptStruct TAGame.GFxData_ContainerDrops_TA.ContainerInfo
// 0x0014
struct FContainerInfo
{
	int                                                SeriesID;                                                 // 0x0000(0x0004) (CPF_DataBinding)
	int                                                ProductID;                                                // 0x0004(0x0004) (CPF_DataBinding)
	struct FString                                     PossibleContents;                                         // 0x0008(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.RPC_MicroTransactions_GetContainerDropTable_TA.RPCContainerDropTable
// 0x0014
struct FRPCContainerDropTable
{
	int                                                SeriesID;                                                 // 0x0000(0x0004) (CPF_Transient)
	int                                                ProductID;                                                // 0x0004(0x0004) (CPF_Transient)
	TArray<int>                                        Drops;                                                    // 0x0008(0x000C) (CPF_Transient, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_CustomTeams_TA.GFxCustomTeamSettings
// 0x0014
struct FGFxCustomTeamSettings
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	int                                                TeamColorID;                                              // 0x000C(0x0004) (CPF_DataBinding)
	int                                                CustomColorID;                                            // 0x0010(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_LoadoutSets_TA.GFxLoadoutSet
// 0x0014
struct FGFxLoadoutSet
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	int                                                Index;                                                    // 0x000C(0x0004) (CPF_DataBinding)
	unsigned long                                      bEquipped : 1;                                            // 0x0010(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.LoadoutSequencer_TA.SequenceData
// 0x000C
struct FSequenceData
{
	class UProductSlot_TA*                             Slot;                                                     // 0x0000(0x0004)
	float                                              AnimDelay;                                                // 0x0004(0x0004)
	unsigned long                                      bAssetLoaded : 1;                                         // 0x0008(0x0004)
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxPlaylistType
// 0x0014
struct FGFxPlaylistType
{
	struct FName                                       PlaylistTypeID;                                           // 0x0000(0x0008) (CPF_DataBinding)
	struct FString                                     Label;                                                    // 0x0008(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapType
// 0x0018
struct FGFxMapType
{
	struct FName                                       MapTypeID;                                                // 0x0000(0x0008) (CPF_DataBinding)
	struct FString                                     Label;                                                    // 0x0008(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	class UMapSet_TA*                                  MapSet;                                                   // 0x0014(0x0004)
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapPlaylist
// 0x0028
struct FGFxMapPlaylist
{
	struct FName                                       PlaylistId;                                               // 0x0000(0x0008) (CPF_DataBinding)
	struct FName                                       PlaylistTypeID;                                           // 0x0008(0x0008) (CPF_DataBinding)
	struct FString                                     Label;                                                    // 0x0010(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	int                                                LikesRemaining;                                           // 0x001C(0x0004) (CPF_DataBinding)
	int                                                DislikesRemaining;                                        // 0x0020(0x0004) (CPF_DataBinding)
	unsigned long                                      bOverrideGlobal : 1;                                      // 0x0024(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_MapPrefs_TA.GFxMapPreference
// 0x0029
struct FGFxMapPreference
{
	struct FName                                       MapID;                                                    // 0x0000(0x0008) (CPF_DataBinding)
	struct FName                                       MapTypeID;                                                // 0x0008(0x0008) (CPF_DataBinding)
	struct FName                                       PlaylistId;                                               // 0x0010(0x0008) (CPF_DataBinding)
	struct FString                                     Label;                                                    // 0x0018(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	class UTexture2D*                                  Thumbnail;                                                // 0x0024(0x0004) (CPF_DataBinding)
	TEnumAsByte<EMapPrefType>                          Preference;                                               // 0x0028(0x0001) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_MapSelection_TA.GFxMapSelectionData
// 0x000C
struct FGFxMapSelectionData
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_DataBinding)
	unsigned long                                      bSelected : 1;                                            // 0x0008(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_Mutators_TA.CustomGameSetting
// 0x0044
struct FCustomGameSetting
{
	struct FString                                     MutatorCategoryName;                                      // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     MutatorCategoryDesc;                                      // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     SettingsName;                                             // 0x0018(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	int                                                SettingIndex;                                             // 0x0024(0x0004) (CPF_DataBinding)
	struct FName                                       InternalName;                                             // 0x0028(0x0008)
	int                                                GameSettingCategoryIndex;                                 // 0x0030(0x0004)
	TArray<struct FName>                               SettingNameExplicit;                                      // 0x0034(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bPresetLocked : 1;                                        // 0x0040(0x0004)
};

// ScriptStruct TAGame.GFxData_Mutators_TA.ModeMapPair
// 0x000C
struct FModeMapPair
{
	int                                                GameMode;                                                 // 0x0000(0x0004)
	struct FName                                       MapName;                                                  // 0x0004(0x0008)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSlot
// 0x0018
struct FFilterProductSlot
{
	struct FString                                     Label;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bSelected : 1;                                            // 0x000C(0x0004) (CPF_DataBinding)
	int                                                SlotIndex;                                                // 0x0010(0x0004) (CPF_DataBinding)
	int                                                PreviewQuantity;                                          // 0x0014(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductQuality
// 0x0018
struct FFilterProductQuality
{
	struct FString                                     Label;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bSelected : 1;                                            // 0x000C(0x0004) (CPF_DataBinding)
	TEnumAsByte<EProductQuality>                       Quality;                                                  // 0x0010(0x0001) (CPF_DataBinding)
	int                                                PreviewQuantity;                                          // 0x0014(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductAttribute
// 0x0018
struct FFilterProductAttribute
{
	struct FString                                     Label;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bSelected : 1;                                            // 0x000C(0x0004) (CPF_DataBinding)
	class UClass*                                      AttributeClass;                                           // 0x0010(0x0004)
	int                                                PreviewQuantity;                                          // 0x0014(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_ProductFilter_TA.FilterProductSeries
// 0x0018
struct FFilterProductSeries
{
	struct FString                                     Label;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bSelected : 1;                                            // 0x000C(0x0004) (CPF_DataBinding)
	int                                                SeriesID;                                                 // 0x0010(0x0004) (CPF_DataBinding)
	int                                                PreviewQuantity;                                          // 0x0014(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_QuickChatBindings_TA.LocalizedQuickChat
// 0x001C
struct FLocalizedQuickChat
{
	struct FString                                     MessageId;                                                // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Message;                                                  // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	unsigned long                                      bPostGame : 1;                                            // 0x0018(0x0004) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_QuickChatBindings_TA.LocalizedQuickChatBinding
// 0x0028
struct FLocalizedQuickChatBinding
{
	struct FString                                     MessageId;                                                // 0x0000(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	struct FString                                     Message;                                                  // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	int                                                Group;                                                    // 0x0018(0x0004) (CPF_DataBinding)
	struct FString                                     Action;                                                   // 0x001C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeDifficulty
// 0x0001
struct FTrainingModeDifficulty
{
	TEnumAsByte<EDifficulty>                           Difficulty;                                               // 0x0000(0x0001) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeType
// 0x0001
struct FTrainingModeType
{
	TEnumAsByte<ETrainingType>                         Type;                                                     // 0x0000(0x0001) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_TrainingModeConstants_TA.TrainingModeTag
// 0x0001
struct FTrainingModeTag
{
	TEnumAsByte<ETrainingTag>                          Tag;                                                      // 0x0000(0x0001) (CPF_DataBinding)
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.SearchCacheData
// 0x0010
struct FSearchCacheData
{
	float                                              TimeoutTime;                                              // 0x0000(0x0004) (CPF_Transient)
	TArray<class UTrainingEditorData_TA*>              TrainingModes;                                            // 0x0004(0x000C) (CPF_Transient, CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.FavoritedFileMetaData
// 0x0020
struct FFavoritedFileMetaData
{
	struct FString                                     Code;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.GFxData_TrainingModeBrowser_TA.FavoritedFileMetaData.UpdatedAt
	struct FString                                     Filename;                                                 // 0x0014(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.GFxData_TrainingModeBrowser_TA.CachedDownloadedFile
// 0x0018
struct FCachedDownloadedFile
{
	struct FString                                     Filename;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Code;                                                     // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct TAGame.RPC_TrainingEditor_ListPlayerTrainingDataTimestamp_TA.CodeTimePair
// 0x0014
struct FCodeTimePair
{
	struct FString                                     Code;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x000C(0x0008) UNKNOWN PROPERTY: QWordProperty TAGame.RPC_TrainingEditor_ListPlayerTrainingDataTimestamp_TA.CodeTimePair.UpdatedAt
};

// ScriptStruct TAGame.VehiclePickup_BoostModifier_Randomizer_TA.RandomPickup
// 0x0008
struct FRandomPickup
{
	class ASpecialPickup_TA*                           PickupArchetype;                                          // 0x0000(0x0004) (CPF_Edit)
	float                                              Weight;                                                   // 0x0004(0x0004) (CPF_Edit)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
