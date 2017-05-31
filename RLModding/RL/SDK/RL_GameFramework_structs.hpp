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

#define CONST_GAMEEVENT_AGGREGATED_PLAYER_MATCH_WON              10004
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_TIMEALIVE              10001
#define CONST_GAMEEVENT_AGGREGATED_DATA                          10000
#define CONST_LOADING_MOVIE                                      "LoadingMovie"
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_WEAPON_DAMAGE    10202
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_KILLS                  10002
#define CONST_GAMEEVENT_AGGREGATED_TEAM_GAME_SCORE               10102
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_ROUND_WON              10005
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_DEATHS                 10003
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_NORMALKILL       10006
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASNORMALKILL 10007
#define CONST_GAMEEVENT_AGGREGATED_TEAM_KILLS                    10100
#define CONST_GAMEEVENT_AGGREGATED_TEAM_ROUND_WON                10104
#define CONST_GAMEEVENT_AGGREGATED_TEAM_DEATHS                   10101
#define CONST_GAMEEVENT_AGGREGATED_TEAM_MATCH_WON                10103
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_KILLS                  10200
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEATHS                 10201
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEEHITS        10206
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEE_DAMAGE     10203
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WEAPON_DAMAGE 10204
#define CONST_NumTouchDataEntries                                5
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_MELEE_DAMAGE  10205
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASMELEEHIT   10207
#define CONST_GAMEEVENT_AGGREGATED_GAME_SPECIFIC                 11000
#define CONST_GAMEEVENT_AGGREGATED_WEAPON_FIRED                  10300
#define CONST_GAMEEVENT_AGGREGATED_PAWN_SPAWN                    10400
#define CONST_NumInDragHistory                                   4

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameFramework.GameTypes.EShakeParam
enum class EShakeParam
{
	ESP_OffsetRandom               = 0,
	ESP_OffsetZero                 = 1,
	ESP_MAX                        = 2
};


// Enum GameFramework.GameCrowdAgent.EConformType
enum class EConformType
{
	CFM_NavMesh                    = 0,
	CFM_BSP                        = 1,
	CFM_World                      = 2,
	CFM_None                       = 3,
	CFM_MAX                        = 4
};


// Enum GameFramework.GameCrowdAgentBehavior.ECrowdBehaviorEvent
enum class ECrowdBehaviorEvent
{
	CBE_None                       = 0,
	CBE_Spawn                      = 1,
	CBE_Random                     = 2,
	CBE_SeePlayer                  = 3,
	CBE_EncounterAgent             = 4,
	CBE_TakeDamage                 = 5,
	CBE_GroupWaiting               = 6,
	CBE_Uneasy                     = 7,
	CBE_Alert                      = 8,
	CBE_Panic                      = 9,
	CBE_MAX                        = 10
};


// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
enum class ERecoilStart
{
	ERS_Zero                       = 0,
	ERS_Random                     = 1,
	ERS_MAX                        = 2
};


// Enum GameFramework.GameStateObject.GameSessionType
enum class EGameSessionType
{
	GT_SessionInvalid              = 0,
	GT_SinglePlayer                = 1,
	GT_Coop                        = 2,
	GT_Multiplayer                 = 3,
	GT_MAX                         = 4
};


// Enum GameFramework.GameThirdPersonCameraMode.ECameraViewportTypes
enum class ECameraViewportTypes
{
	CVT_16to9_Full                 = 0,
	CVT_16to9_VertSplit            = 1,
	CVT_16to9_HorizSplit           = 2,
	CVT_4to3_Full                  = 3,
	CVT_4to3_HorizSplit            = 4,
	CVT_4to3_VertSplit             = 5,
	CVT_MAX                        = 6
};


// Enum GameFramework.MobileInputZone.EZoneType
enum class EZoneType
{
	ZoneType_Button                = 0,
	ZoneType_Joystick              = 1,
	ZoneType_Trackball             = 2,
	ZoneType_Slider                = 3,
	ZoneType_SubClassed            = 4,
	ZoneType_MultitouchSurface     = 5,
	ZoneType_MAX                   = 6
};


// Enum GameFramework.MobileInputZone.EZoneState
enum class EZoneState
{
	ZoneState_Inactive             = 0,
	ZoneState_Activating           = 1,
	ZoneState_Active               = 2,
	ZoneState_Deactivating         = 3,
	ZoneState_MAX                  = 4
};


// Enum GameFramework.MobileInputZone.EZoneSlideType
enum class EZoneSlideType
{
	ZoneSlide_UpDown               = 0,
	ZoneSlide_LeftRight            = 1,
	ZoneSlide_MAX                  = 2
};


// Enum GameFramework.MobilePlayerInput.EUIOrientation
enum class EUIOrientation
{
	UI_Unknown                     = 0,
	UI_Portait                     = 1,
	UI_PortaitUpsideDown           = 2,
	UI_LandscapeRight              = 3,
	UI_LandscapeLeft               = 4,
	UI_MAX                         = 5
};


// Enum GameFramework.MobileMenuImage.MenuImageDrawStyle
enum class EMenuImageDrawStyle
{
	IDS_Normal                     = 0,
	IDS_Stretched                  = 1,
	IDS_Tile                       = 2,
	IDS_MAX                        = 3
};


// Enum GameFramework.SeqEvent_HudRenderText.ETextDrawMethod
enum class ETextDrawMethod
{
	DRAW_CenterText                = 0,
	DRAW_WrapText                  = 1,
	DRAW_MAX                       = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameFramework.FrameworkGame.RequiredMobileInputConfig
// 0x001C
struct FRequiredMobileInputConfig
{
	struct FString                                     GroupName;                                                // 0x0000(0x000C) (CPF_Config, CPF_NeedCtorLink)
	TArray<struct FString>                             RequireZoneNames;                                         // 0x000C(0x000C) (CPF_Config, CPF_AlwaysInit, CPF_NeedCtorLink)
	unsigned long                                      bIsAttractModeGroup : 1;                                  // 0x0018(0x0004) (CPF_Config)
};

// ScriptStruct GameFramework.GameTypes.AICmdHistoryItem
// 0x0014
struct FAICmdHistoryItem
{
	class UClass*                                      CmdClass;                                                 // 0x0000(0x0004)
	float                                              TimeStamp;                                                // 0x0004(0x0004)
	struct FString                                     VerboseString;                                            // 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct GameFramework.GameTypes.NearbyDynamicItem
// 0x0004
struct FNearbyDynamicItem
{
	class AActor*                                      Dynamic;                                                  // 0x0000(0x0004) (CPF_Edit)
};

// ScriptStruct GameFramework.GameCrowdAgent.AvoidOtherSampleItem
// 0x000C
struct FAvoidOtherSampleItem
{
	int                                                RotOffset;                                                // 0x0000(0x0004) (CPF_Edit)
	unsigned char                                      NumMagSamples;                                            // 0x0004(0x0001) (CPF_Edit)
	unsigned long                                      bFallbackOnly : 1;                                        // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct GameFramework.GameCrowdAgent.RecentInteraction
// 0x000C
struct FRecentInteraction
{
	struct FName                                       InteractionTag;                                           // 0x0000(0x0008)
	float                                              InteractionDelay;                                         // 0x0008(0x0004)
};

// ScriptStruct GameFramework.GameCrowdAgent.BehaviorEntry
// 0x0010
struct FBehaviorEntry
{
	class UGameCrowdAgentBehavior*                     BehaviorArchetype;                                        // 0x0000(0x0004) (CPF_Edit)
	class AActor*                                      LookAtActor;                                              // 0x0004(0x0004) (CPF_Edit)
	float                                              BehaviorFrequency;                                        // 0x0008(0x0004) (CPF_Edit)
	unsigned long                                      bNeverRepeat : 1;                                         // 0x000C(0x0004) (CPF_Edit)
	unsigned long                                      bHasBeenUsed : 1;                                         // 0x000C(0x0004)
	unsigned long                                      bCanBeUsed : 1;                                           // 0x000C(0x0004)
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentInfo
// 0x0014
struct FGameCrowdAttachmentInfo
{
	class UStaticMesh*                                 StaticMesh;                                               // 0x0000(0x0004) (CPF_Edit)
	float                                              Chance;                                                   // 0x0004(0x0004) (CPF_Edit)
	struct FVector                                     Scale3D;                                                  // 0x0008(0x000C) (CPF_Edit)
};

// ScriptStruct GameFramework.GameCrowdAgentSkeletal.GameCrowdAttachmentList
// 0x0014
struct FGameCrowdAttachmentList
{
	struct FName                                       SocketName;                                               // 0x0000(0x0008) (CPF_Edit)
	TArray<struct FGameCrowdAttachmentInfo>            List;                                                     // 0x0008(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct GameFramework.GameTypes.AgentArchetypeInfo
// 0x001C
struct FAgentArchetypeInfo
{
	class UObject*                                     AgentArchetype;                                           // 0x0000(0x0004) (CPF_Edit)
	float                                              FrequencyModifier;                                        // 0x0004(0x0004) (CPF_Edit)
	int                                                MaxAllowed;                                               // 0x0008(0x0004) (CPF_Edit)
	int                                                CurrSpawned;                                              // 0x000C(0x0004) (CPF_Transient)
	TArray<class UObject*>                             GroupMembers;                                             // 0x0010(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct GameFramework.GameTypes.CrowdSpawnInfoItem
// 0x007C
struct FCrowdSpawnInfoItem
{
	class USeqAct_GameCrowdPopulationManagerToggle*    SeqSpawner;                                               // 0x0000(0x0004)
	unsigned long                                      bSpawningActive : 1;                                      // 0x0004(0x0004)
	float                                              SpawnRate;                                                // 0x0008(0x0004)
	int                                                SpawnNum;                                                 // 0x000C(0x0004)
	float                                              Remainder;                                                // 0x0010(0x0004)
	TArray<class AGameCrowdAgent*>                     ActiveAgents;                                             // 0x0014(0x000C) (CPF_NeedCtorLink)
	TArray<struct FAgentArchetypeInfo>                 AgentArchetypes;                                          // 0x0020(0x000C) (CPF_NeedCtorLink)
	float                                              AgentFrequencySum;                                        // 0x002C(0x0004)
	float                                              MaxSpawnDist;                                             // 0x0030(0x0004)
	float                                              MaxSpawnDistSq;                                           // 0x0034(0x0004)
	float                                              MinBehindSpawnDist;                                       // 0x0038(0x0004)
	float                                              MinBehindSpawnDistSq;                                     // 0x003C(0x0004)
	float                                              AgentWarmupTime;                                          // 0x0040(0x0004)
	unsigned long                                      bForceObstacleChecking : 1;                               // 0x0044(0x0004)
	unsigned long                                      bForceNavMeshPathing : 1;                                 // 0x0044(0x0004)
	unsigned long                                      bEnableCrowdLightEnvironment : 1;                         // 0x0044(0x0004)
	unsigned long                                      bCastShadows : 1;                                         // 0x0044(0x0004)
	struct FLightingChannelContainer                   AgentLightingChannel;                                     // 0x0048(0x0004)
	int                                                NumAgentsToTickPerFrame;                                  // 0x004C(0x0004) (CPF_Edit)
	int                                                LastAgentTickedIndex;                                     // 0x0050(0x0004)
	TArray<class AGameCrowdDestination*>               PotentialSpawnPoints;                                     // 0x0054(0x000C) (CPF_NeedCtorLink)
	float                                              SpawnPrioritizationInterval;                              // 0x0060(0x0004)
	int                                                PrioritizationIndex;                                      // 0x0064(0x0004)
	int                                                PrioritizationUpdateIndex;                                // 0x0068(0x0004)
	TArray<class AGameCrowdDestination*>               PrioritizedSpawnPoints;                                   // 0x006C(0x000C) (CPF_NeedCtorLink)
	float                                              PlayerPositionPredictionTime;                             // 0x0078(0x0004)
};

// ScriptStruct GameFramework.GameTypes.CrowdSpawnerPlayerInfo
// 0x0028
struct FCrowdSpawnerPlayerInfo
{
	struct FVector                                     ViewLocation;                                             // 0x0000(0x000C)
	struct FRotator                                    ViewRotation;                                             // 0x000C(0x000C)
	struct FVector                                     PredictLocation;                                          // 0x0018(0x000C)
	class APlayerController*                           PC;                                                       // 0x0024(0x0004)
};

// ScriptStruct GameFramework.MobileInputZone.TextureUVs
// 0x0010
struct FTextureUVs
{
	float                                              U;                                                        // 0x0000(0x0004) (CPF_Edit)
	float                                              V;                                                        // 0x0004(0x0004) (CPF_Edit)
	float                                              UL;                                                       // 0x0008(0x0004) (CPF_Edit)
	float                                              VL;                                                       // 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct GameFramework.MobileMenuObject.UVCoords
// 0x0014
struct FUVCoords
{
	unsigned long                                      bCustomCoords : 1;                                        // 0x0000(0x0004) (CPF_Edit)
	float                                              U;                                                        // 0x0004(0x0004) (CPF_Edit)
	float                                              V;                                                        // 0x0008(0x0004) (CPF_Edit)
	float                                              UL;                                                       // 0x000C(0x0004) (CPF_Edit)
	float                                              VL;                                                       // 0x0010(0x0004) (CPF_Edit)
};

// ScriptStruct GameFramework.MobilePlayerInput.TouchDataEvent
// 0x0014
struct FTouchDataEvent
{
	TEnumAsByte<ETouchType>                            EventType;                                                // 0x0000(0x0001)
	unsigned char                                      TouchpadIndex;                                            // 0x0001(0x0001)
	struct FVector2D                                   Location;                                                 // 0x0004(0x0008)
	struct FDouble                                     DeviceTime;                                               // 0x000C(0x0008)
};

// ScriptStruct GameFramework.MobilePlayerInput.TouchData
// 0x0048
struct FTouchData
{
	int                                                Handle;                                                   // 0x0000(0x0004)
	unsigned char                                      TouchpadIndex;                                            // 0x0004(0x0001)
	struct FVector2D                                   Location;                                                 // 0x0008(0x0008)
	float                                              TotalMoveDistance;                                        // 0x0010(0x0004)
	struct FDouble                                     InitialDeviceTime;                                        // 0x0014(0x0008)
	float                                              TouchDuration;                                            // 0x001C(0x0004)
	struct FDouble                                     MoveEventDeviceTime;                                      // 0x0020(0x0008)
	float                                              MoveDeltaTime;                                            // 0x0028(0x0004)
	unsigned long                                      bInUse : 1;                                               // 0x002C(0x0004)
	class UMobileInputZone*                            Zone;                                                     // 0x0030(0x0004)
	TEnumAsByte<ETouchType>                            State;                                                    // 0x0034(0x0001)
	TArray<struct FTouchDataEvent>                     Events;                                                   // 0x0038(0x000C) (CPF_NeedCtorLink)
	float                                              LastActiveTime;                                           // 0x0044(0x0004)
};

// ScriptStruct GameFramework.MobilePlayerInput.MobileInputGroup
// 0x0018
struct FMobileInputGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<class UMobileInputZone*>                    AssociatedZones;                                          // 0x000C(0x000C) (CPF_NeedCtorLink, CPF_EditInline)
};

// ScriptStruct GameFramework.MobilePlayerInput.MobileInputZoneClassMap
// 0x0010
struct FMobileInputZoneClassMap
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	class UClass*                                      ClassType;                                                // 0x000C(0x0004)
};

// ScriptStruct GameFramework.SeqAct_ModifyProperty.PropertyInfo
// 0x0018
struct FPropertyInfo
{
	struct FName                                       PropertyName;                                             // 0x0000(0x0008) (CPF_Edit)
	unsigned long                                      bModifyProperty : 1;                                      // 0x0008(0x0004) (CPF_Edit)
	struct FString                                     PropertyValue;                                            // 0x000C(0x000C) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilParams
// 0x0004
struct FRecoilParams
{
	TEnumAsByte<ERecoilStart>                          X;                                                        // 0x0000(0x0001) (CPF_Edit)
	TEnumAsByte<ERecoilStart>                          Y;                                                        // 0x0001(0x0001) (CPF_Edit)
	TEnumAsByte<ERecoilStart>                          Z;                                                        // 0x0002(0x0001) (CPF_Edit)
	unsigned char                                      Padding;                                                  // 0x0003(0x0001) (CPF_Const, CPF_Transient)
};

// ScriptStruct GameFramework.GameSkelCtrl_Recoil.RecoilDef
// 0x0070
struct FRecoilDef
{
	float                                              TimeToGo;                                                 // 0x0000(0x0004) (CPF_Transient)
	float                                              TimeDuration;                                             // 0x0004(0x0004) (CPF_Edit)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C) (CPF_Edit)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C) (CPF_Edit)
	struct FVector                                     RotSinOffset;                                             // 0x0020(0x000C)
	struct FRecoilParams                               RotParams;                                                // 0x002C(0x0004) (CPF_Edit)
	struct FRotator                                    RotOffset;                                                // 0x0030(0x000C) (CPF_Transient)
	struct FVector                                     LocAmplitude;                                             // 0x003C(0x000C) (CPF_Edit)
	struct FVector                                     LocFrequency;                                             // 0x0048(0x000C) (CPF_Edit)
	struct FVector                                     LocSinOffset;                                             // 0x0054(0x000C)
	struct FRecoilParams                               LocParams;                                                // 0x0060(0x0004) (CPF_Edit)
	struct FVector                                     LocOffset;                                                // 0x0064(0x000C) (CPF_Transient)
};

// ScriptStruct GameFramework.GameThirdPersonCamera.CamFocusPointParams
// 0x0034
struct FCamFocusPointParams
{
	class AActor*                                      FocusActor;                                               // 0x0000(0x0004) (CPF_Edit)
	struct FName                                       FocusBoneName;                                            // 0x0004(0x0008) (CPF_Edit)
	struct FVector                                     FocusWorldLoc;                                            // 0x000C(0x000C) (CPF_Edit)
	float                                              CameraFOV;                                                // 0x0018(0x0004) (CPF_Edit)
	struct FVector2D                                   InterpSpeedRange;                                         // 0x001C(0x0008) (CPF_Edit)
	struct FVector2D                                   InFocusFOV;                                               // 0x0024(0x0008) (CPF_Edit)
	unsigned long                                      bAlwaysFocus : 1;                                         // 0x002C(0x0004) (CPF_Edit)
	unsigned long                                      bAdjustCamera : 1;                                        // 0x002C(0x0004) (CPF_Edit)
	unsigned long                                      bIgnoreTrace : 1;                                         // 0x002C(0x0004) (CPF_Edit)
	float                                              FocusPitchOffsetDeg;                                      // 0x0030(0x0004) (CPF_Edit)
};

// ScriptStruct GameFramework.GameThirdPersonCamera.PenetrationAvoidanceFeeler
// 0x0028
struct FPenetrationAvoidanceFeeler
{
	struct FRotator                                    AdjustmentRot;                                            // 0x0000(0x000C) (CPF_Edit)
	float                                              WorldWeight;                                              // 0x000C(0x0004) (CPF_Edit)
	float                                              PawnWeight;                                               // 0x0010(0x0004) (CPF_Edit)
	struct FVector                                     Extent;                                                   // 0x0014(0x000C) (CPF_Edit)
	int                                                TraceInterval;                                            // 0x0020(0x0004) (CPF_Edit)
	int                                                FramesUntilNextTrace;                                     // 0x0024(0x0004) (CPF_Transient)
};

// ScriptStruct GameFramework.GameThirdPersonCameraMode.ViewOffsetData
// 0x0024
struct FViewOffsetData
{
	struct FVector                                     OffsetHigh;                                               // 0x0000(0x000C) (CPF_Edit)
	struct FVector                                     OffsetMid;                                                // 0x000C(0x000C) (CPF_Edit)
	struct FVector                                     OffsetLow;                                                // 0x0018(0x000C) (CPF_Edit)
};

// ScriptStruct GameFramework.GameStatsAggregator.AggregateEventMapping
// 0x000C
struct FAggregateEventMapping
{
	int                                                EventID;                                                  // 0x0000(0x0004)
	int                                                AggregateID;                                              // 0x0004(0x0004)
	int                                                TargetAggregateID;                                        // 0x0008(0x0004)
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvents
// 0x003C
struct FGameEvents
{
	struct FMap_Mirror                                 Events;                                                   // 0x0000(0x003C) (CPF_Const, CPF_Native, CPF_Transient)
};

// ScriptStruct GameFramework.GameStatsAggregator.EventsBase
// 0x0048
struct FEventsBase
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	TArray<struct FGameEvents>                         EventsByClass;                                            // 0x003C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.WeaponEvents
// 0x0000 (0x0048 - 0x0048)
struct FWeaponEvents : public FEventsBase
{

};

// ScriptStruct GameFramework.GameStatsAggregator.DamageEvents
// 0x0000 (0x0048 - 0x0048)
struct FDamageEvents : public FEventsBase
{

};

// ScriptStruct GameFramework.GameStatsAggregator.ProjectileEvents
// 0x0000 (0x0048 - 0x0048)
struct FProjectileEvents : public FEventsBase
{

};

// ScriptStruct GameFramework.GameStatsAggregator.PawnEvents
// 0x0000 (0x0048 - 0x0048)
struct FPawnEvents : public FEventsBase
{

};

// ScriptStruct GameFramework.GameStatsAggregator.TeamEvents
// 0x01A4
struct FTeamEvents
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	struct FWeaponEvents                               WeaponEvents;                                             // 0x003C(0x0048) (CPF_NeedCtorLink)
	struct FDamageEvents                               DamageAsPlayerEvents;                                     // 0x0084(0x0048) (CPF_NeedCtorLink)
	struct FDamageEvents                               DamageAsTargetEvents;                                     // 0x00CC(0x0048) (CPF_NeedCtorLink)
	struct FProjectileEvents                           ProjectileEvents;                                         // 0x0114(0x0048) (CPF_NeedCtorLink)
	struct FPawnEvents                                 PawnEvents;                                               // 0x015C(0x0048) (CPF_NeedCtorLink)
};

// ScriptStruct GameFramework.GameStatsAggregator.PlayerEvents
// 0x01A4
struct FPlayerEvents
{
	struct FGameEvents                                 TotalEvents;                                              // 0x0000(0x003C)
	struct FWeaponEvents                               WeaponEvents;                                             // 0x003C(0x0048) (CPF_NeedCtorLink)
	struct FDamageEvents                               DamageAsPlayerEvents;                                     // 0x0084(0x0048) (CPF_NeedCtorLink)
	struct FDamageEvents                               DamageAsTargetEvents;                                     // 0x00CC(0x0048) (CPF_NeedCtorLink)
	struct FProjectileEvents                           ProjectileEvents;                                         // 0x0114(0x0048) (CPF_NeedCtorLink)
	struct FPawnEvents                                 PawnEvents;                                               // 0x015C(0x0048) (CPF_NeedCtorLink)
};

// ScriptStruct GameFramework.GameTypes.SpecialMoveStruct
// 0x0014
struct FSpecialMoveStruct
{
	struct FName                                       SpecialMoveName;                                          // 0x0000(0x0008)
	class AGamePawn*                                   InteractionPawn;                                          // 0x0008(0x0004)
	class AActor*                                      InteractionActor;                                         // 0x000C(0x0004)
	int                                                Flags;                                                    // 0x0010(0x0004)
};

// ScriptStruct GameFramework.GameTypes.GameSpecialMoveInfo
// 0x0010
struct FGameSpecialMoveInfo
{
	struct FName                                       SpecialMoveName;                                          // 0x0000(0x0008) (CPF_Edit)
	class UClass*                                      SpecialMoveClass;                                         // 0x0008(0x0004) (CPF_Edit)
	class UGameSpecialMove*                            SpecialMoveInstance;                                      // 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct GameFramework.GameTypes.TakeHitInfo
// 0x0038
struct FTakeHitInfo
{
	struct FVector                                     HitLocation;                                              // 0x0000(0x000C)
	struct FVector                                     Momentum;                                                 // 0x000C(0x000C)
	class UClass*                                      DamageType;                                               // 0x0018(0x0004)
	class APawn*                                       InstigatedBy;                                             // 0x001C(0x0004)
	unsigned char                                      HitBoneIndex;                                             // 0x0020(0x0001)
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0024(0x0004)
	float                                              Damage;                                                   // 0x0028(0x0004)
	struct FVector                                     RadialDamageOrigin;                                       // 0x002C(0x000C)
};

// ScriptStruct GameFramework.GameTypes.ShakeParams
// 0x0004
struct FShakeParams
{
	TEnumAsByte<EShakeParam>                           X;                                                        // 0x0000(0x0001)
	TEnumAsByte<EShakeParam>                           Y;                                                        // 0x0001(0x0001)
	TEnumAsByte<EShakeParam>                           Z;                                                        // 0x0002(0x0001)
	unsigned char                                      Padding;                                                  // 0x0003(0x0001) (CPF_Const, CPF_Transient)
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeStruct
// 0x0078
struct FScreenShakeStruct
{
	float                                              TimeToGo;                                                 // 0x0000(0x0004)
	float                                              TimeDuration;                                             // 0x0004(0x0004)
	struct FVector                                     RotAmplitude;                                             // 0x0008(0x000C)
	struct FVector                                     RotFrequency;                                             // 0x0014(0x000C)
	struct FVector                                     RotSinOffset;                                             // 0x0020(0x000C)
	struct FShakeParams                                RotParam;                                                 // 0x002C(0x0004)
	struct FVector                                     LocAmplitude;                                             // 0x0030(0x000C)
	struct FVector                                     LocFrequency;                                             // 0x003C(0x000C)
	struct FVector                                     LocSinOffset;                                             // 0x0048(0x000C)
	struct FShakeParams                                LocParam;                                                 // 0x0054(0x0004)
	float                                              FOVAmplitude;                                             // 0x0058(0x0004)
	float                                              FOVFrequency;                                             // 0x005C(0x0004)
	float                                              FOVSinOffset;                                             // 0x0060(0x0004)
	TEnumAsByte<EShakeParam>                           FOVParam;                                                 // 0x0064(0x0001)
	struct FName                                       ShakeName;                                                // 0x0068(0x0008)
	unsigned long                                      bOverrideTargetingDampening : 1;                          // 0x0070(0x0004)
	float                                              TargetingDampening;                                       // 0x0074(0x0004)
};

// ScriptStruct GameFramework.GameTypes.ScreenShakeAnimStruct
// 0x0030
struct FScreenShakeAnimStruct
{
	class UCameraAnim*                                 Anim;                                                     // 0x0000(0x0004)
	unsigned long                                      bUseDirectionalAnimVariants : 1;                          // 0x0004(0x0004)
	class UCameraAnim*                                 Anim_Left;                                                // 0x0008(0x0004)
	class UCameraAnim*                                 Anim_Right;                                               // 0x000C(0x0004)
	class UCameraAnim*                                 Anim_Rear;                                                // 0x0010(0x0004)
	float                                              AnimPlayRate;                                             // 0x0014(0x0004)
	float                                              AnimScale;                                                // 0x0018(0x0004)
	float                                              AnimBlendInTime;                                          // 0x001C(0x0004)
	float                                              AnimBlendOutTime;                                         // 0x0020(0x0004)
	unsigned long                                      bRandomSegment : 1;                                       // 0x0024(0x0004)
	float                                              RandomSegmentDuration;                                    // 0x0028(0x0004)
	unsigned long                                      bSingleInstance : 1;                                      // 0x002C(0x0004)
};

// ScriptStruct GameFramework.GameStateObject.TeamState
// 0x0010
struct FTeamState
{
	int                                                TeamIndex;                                                // 0x0000(0x0004)
	TArray<int>                                        PlayerIndices;                                            // 0x0004(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct GameFramework.GameStateObject.PlayerState
// 0x0010
struct FPlayerState
{
	int                                                PlayerIndex;                                              // 0x0000(0x0004)
	int                                                CurrentTeamIndex;                                         // 0x0004(0x0004)
	float                                              TimeSpawned;                                              // 0x0008(0x0004)
	float                                              TimeAliveSinceLastDeath;                                  // 0x000C(0x0004)
};

// ScriptStruct GameFramework.GameStatsAggregator.GameEvent
// 0x000C
struct FGameEvent
{
	TArray<float>                                      EventCountByTimePeriod;                                   // 0x0000(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct GameFramework.MobileMenuInventory.RenderElementInfo
// 0x0008
struct FRenderElementInfo
{
	unsigned long                                      bIsDragItem : 1;                                          // 0x0000(0x0004)
	int                                                Index;                                                    // 0x0004(0x0004)
};

// ScriptStruct GameFramework.MobileMenuInventory.DragElementInfo
// 0x0025
struct FDragElementInfo
{
	unsigned long                                      bIsDragging : 1;                                          // 0x0000(0x0004)
	int                                                IndexFrom;                                                // 0x0004(0x0004)
	unsigned long                                      bIsOver : 1;                                              // 0x0008(0x0004)
	int                                                IndexOver;                                                // 0x000C(0x0004)
	unsigned long                                      bCanDropInOver : 1;                                       // 0x0010(0x0004)
	struct FVector2D                                   OrigTouch;                                                // 0x0014(0x0008)
	struct FVector2D                                   CurTouch;                                                 // 0x001C(0x0008)
	TEnumAsByte<ETouchType>                            EventType;                                                // 0x0024(0x0001)
};

// ScriptStruct GameFramework.MobileMenuList.SelectedMenuItem
// 0x000C
struct FSelectedMenuItem
{
	int                                                Index;                                                    // 0x0000(0x0004)
	float                                              Offset;                                                   // 0x0004(0x0004)
	unsigned long                                      bEndOfList : 1;                                           // 0x0008(0x0004)
};

// ScriptStruct GameFramework.MobileMenuList.DragHistoryData
// 0x0008
struct FDragHistoryData
{
	float                                              TouchTime;                                                // 0x0000(0x0004)
	float                                              TouchCoord;                                               // 0x0004(0x0004)
};

// ScriptStruct GameFramework.MobileMenuList.MenuListDragInfo
// 0x0050
struct FMenuListDragInfo
{
	unsigned long                                      bIsDragging : 1;                                          // 0x0000(0x0004)
	class UMobileMenuListItem*                         TouchedItem;                                              // 0x0004(0x0004)
	struct FSelectedMenuItem                           OrigSelectedItem;                                         // 0x0008(0x000C)
	struct FVector2D                                   StartTouch;                                               // 0x0014(0x0008)
	float                                              TouchTime;                                                // 0x001C(0x0004)
	float                                              ScrollAmount;                                             // 0x0020(0x0004)
	float                                              AbsScrollAmount;                                          // 0x0024(0x0004)
	struct FDragHistoryData                            UpdateHistory[0x4];                                       // 0x0028(0x0008)
	int                                                NumUpdates;                                               // 0x0048(0x0004)
	unsigned long                                      bHasSelectedChanged : 1;                                  // 0x004C(0x0004)
};

// ScriptStruct GameFramework.MobileMenuList.MenuListMovementInfo
// 0x001C
struct FMenuListMovementInfo
{
	unsigned long                                      bIsMoving : 1;                                            // 0x0000(0x0004)
	struct FSelectedMenuItem                           OrigSelectedItem;                                         // 0x0004(0x000C)
	float                                              FullMovement;                                             // 0x0010(0x0004)
	float                                              TotalTime;                                                // 0x0014(0x0004)
	float                                              CurrentTime;                                              // 0x0018(0x0004)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
