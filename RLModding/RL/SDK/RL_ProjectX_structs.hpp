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

#define CONST_MaxPing                                            1.0f
#define CONST_DEMO_VERSION                                       0
#define CONST_MAX_CONTROLLER_IDS                                 4
#define CONST_InMatchmakingID                                    -2
#define CONST_NumFriendsPerRequest                               100
#define CONST_FriendRequestPerFrame                              5

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ProjectX._Types_X.EJoinMatchType
enum class EJoinMatchType
{
	JMT_Public                     = 0,
	JMT_Private                    = 1,
	JMT_LanHost                    = 2,
	JMT_LanGuest                   = 3,
	JMT_MAX                        = 4
};


// Enum ProjectX._Types_X.EAuthResult
enum class EAuthResult
{
	AuthResult_OK                  = 0,
	AuthResult_Unauthorized        = 1,
	AuthResult_MAX                 = 2
};


// Enum ProjectX._Types_X.EWebRequestAuthorization
enum class EWebRequestAuthorization
{
	WRA_Offline                    = 0,
	WRA_Authorizing                = 1,
	WRA_Authorized                 = 2,
	WRA_Banned                     = 3,
	WRA_MAX                        = 4
};


// Enum ProjectX._Types_X.EPushNotificationType
enum class EPushNotificationType
{
	NotificationType_Unknown       = 0,
	AasAddictNotify                = 1,
	AasGameStartResp               = 2,
	EPushNotificationType_MAX      = 3
};


// Enum ProjectX._Types_X.EReservationStatus
enum class EReservationStatus
{
	ReservationStatus_None         = 0,
	ReservationStatus_Reserved     = 1,
	ReservationStatus_Joining      = 2,
	ReservationStatus_InGame       = 3,
	ReservationStatus_MAX          = 4
};


// Enum ProjectX._Types_X.EDatabaseEnvironment
enum class EDatabaseEnvironment
{
	DBE_DevLocal                   = 0,
	DBE_Dev                        = 1,
	DBE_Test                       = 2,
	DBE_Production                 = 3,
	DBE_MAX                        = 4
};


// Enum ProjectX._Types_X.EAxisSign
enum class EAxisSign
{
	AxisSign_None                  = 0,
	AxisSign_Positive              = 1,
	AxisSign_Negative              = 2,
	AxisSign_MAX                   = 3
};


// Enum ProjectX._Types_X.EButtonPressType
enum class EButtonPressType
{
	BPT_Normal                     = 0,
	BPT_Tap                        = 1,
	BPT_Hold                       = 2,
	BPT_DoubleTap                  = 3,
	BPT_Toggle                     = 4,
	BPT_MAX                        = 5
};


// Enum ProjectX._Types_X.ERemappable
enum class ERemappable
{
	Remappable_All                 = 0,
	Remappable_Key                 = 1,
	Remappable_Axis                = 2,
	Remappable_KeyTriggerAxis      = 3,
	Remappable_None                = 4,
	Remappable_MAX                 = 5
};


// Enum ProjectX._Types_X.EUINavigationMode
enum class EUINavigationMode
{
	UINavigationMode_Keyboard      = 0,
	UINavigationMode_Gamepad       = 1,
	UINavigationMode_Cursor        = 2,
	UINavigationMode_MAX           = 3
};


// Enum ProjectX._Types_X.EPartyMatchmakingRestriction
enum class EPartyMatchmakingRestriction
{
	PMR_NotOriginalAppOwner        = 0,
	PMR_PendingLicenseAgreement    = 1,
	PMR_InMainMenu                 = 2,
	PMR_MAX                        = 3
};


// Enum ProjectX._Types_X.EPlayerTitleType
enum class EPlayerTitleType
{
	PlayerTitleType_None           = 0,
	PlayerTitleType_XP             = 1,
	PlayerTitleType_Developer      = 2,
	PlayerTitleType_Helper         = 3,
	PlayerTitleType_Participant    = 4,
	PlayerTitleType_Champion       = 5,
	PlayerTitleType_Ranked_Champion = 6,
	PlayerTitleType_RLCS_Champion  = 7,
	PlayerTitleType_MAX            = 8
};


// Enum ProjectX._Types_X.EOnlinePlayerPermission
enum class EOnlinePlayerPermission
{
	OPP_PrivateMatchAdmin          = 0,
	OPP_SuperPrivateMatchAdmin     = 1,
	OPP_MAX                        = 2
};


// Enum ProjectX._Types_X.EOnlinePlayerRole
enum class EOnlinePlayerRole
{
	OPR_PrivateMatchAdmin          = 0,
	OPR_SuperPrivateMatchAdmin     = 1,
	OPR_MAX                        = 2
};


// Enum ProjectX.AnimNodeSeries_X.EAnimNodeSeriesChild
enum class EAnimNodeSeriesChild
{
	AnimNodeSeries_Idle            = 0,
	AnimNodeSeries_Intro           = 1,
	AnimNodeSeries_Loop            = 2,
	AnimNodeSeries_Outro           = 3,
	AnimNodeSeries_MAX             = 4
};


// Enum ProjectX.BugReport_X.EFileTruncateType
enum class EFileTruncateType
{
	FileTruncate_None              = 0,
	FileTruncate_KeepStart         = 1,
	FileTruncate_KeepEnd           = 2,
	FileTruncate_MAX               = 3
};


// Enum ProjectX.FXActor_X.EFXComponentTarget
enum class EFXComponentTarget
{
	FXComponentTarget_All          = 0,
	FXComponentTarget_Local        = 1,
	FXComponentTarget_NonLocal     = 2,
	FXComponentTarget_MAX          = 3
};


// Enum ProjectX.FXActor_X.EFXComponentState
enum class EFXComponentState
{
	FXComponentState_Detached      = 0,
	FXComponentState_Attached      = 1,
	FXComponentState_PendingDetach = 2,
	FXComponentState_MAX           = 3
};


// Enum ProjectX.GFxDataCallback_X.EDataCallbackType
enum class EDataCallbackType
{
	DataCallbackType_All           = 0,
	DataCallbackType_Table         = 1,
	DataCallbackType_Row           = 2,
	DataCallbackType_Value         = 3,
	DataCallbackType_MAX           = 4
};


// Enum ProjectX.MatchmakingReporter.EMatchmakingState
enum class EMatchmakingState
{
	MMState_None                   = 0,
	MMState_SearchingLan           = 1,
	MMState_SearchingInternet      = 2,
	MMState_FilteringResults       = 3,
	MMState_AttemptingJoin         = 4,
	MMState_Finished               = 5,
	MMState_MAX                    = 6
};


// Enum ProjectX.MatchmakingReporter.EMatchmakingInfoSeverity
enum class EMatchmakingInfoSeverity
{
	MMSeverity_Log                 = 0,
	MMSeverity_Warning             = 1,
	MMSeverity_Error               = 2,
	MMSeverity_Suppressed          = 3,
	MMSeverity_MAX                 = 4
};


// Enum ProjectX.MaterialEffect_X.EMaterialEffectStage
enum class EMaterialEffectStage
{
	EFFECT_INACTIVE                = 0,
	EFFECT_FADE_IN                 = 1,
	EFFECT_ACTIVE                  = 2,
	EFFECT_FADE_OUT                = 3,
	EFFECT_MAX                     = 4
};


// Enum ProjectX.OnlineGameDLC_X.DLCOwnershipState
enum class EDLCOwnershipState
{
	DLCOwnershipState_Unknown      = 0,
	DLCOwnershipState_Owned        = 1,
	DLCOwnershipState_NotOwned     = 2,
	DLCOwnershipState_Error        = 3,
	DLCOwnershipState_MAX          = 4
};


// Enum ProjectX.OnlineGameParty_X.PartyProcessingStatus
enum class EPartyProcessingStatus
{
	PPS_None                       = 0,
	PPS_Create                     = 1,
	PPS_Join                       = 2,
	PPS_MAX                        = 3
};


// Enum ProjectX.OnlineGameRegions_X.RegionPingResult
enum class ERegionPingResult
{
	PingResult_NotUsable           = 0,
	PingResult_UsingCache          = 1,
	PingResult_UsingSuccessfulPing = 2,
	PingResult_MAX                 = 3
};


// Enum ProjectX.OnlineGameWordFilter_X.EWordFilterUsage
enum class EWordFilterUsage
{
	WordFilterUsage_Name           = 0,
	WordFilterUsage_Chat           = 1,
	WordFilterUsage_MAX            = 2
};


// Enum ProjectX.ReservationsPasswordMessage_X.EPasswordFailureReason
enum class EPasswordFailureReason
{
	PFR_Empty                      = 0,
	PFR_Mismatch                   = 1,
	PFR_MAX                        = 2
};


// Enum ProjectX.ShakeComponent_X.EShakeReceiver
enum class EShakeReceiver
{
	ShakeReceiver_All              = 0,
	ShakeReceiver_Local            = 1,
	ShakeReceiver_NonLocal         = 2,
	ShakeReceiver_MAX              = 3
};


// Enum ProjectX.TcpConnection.EWebSocketState
enum class EWebSocketState
{
	WebSocketState_NotRequired     = 0,
	WebSocketState_NeedsHandshake  = 1,
	WebSocketState_Connected       = 2,
	WebSocketState_MAX             = 3
};


// Enum ProjectX.TcpConnection.ETcpConnectionState
enum class ETcpConnectionState
{
	TcpConnectionState_Invalid     = 0,
	TcpConnectionState_Connecting  = 1,
	TcpConnectionState_Connected   = 2,
	TcpConnectionState_Disconnected = 3,
	TcpConnectionState_MAX         = 4
};


// Enum ProjectX.WebRequest_X.EWebRequestState
enum class EWebRequestState
{
	WebRequestState_PendingSend    = 0,
	WebRequestState_PendingResponse = 1,
	WebRequestState_Success        = 2,
	WebRequestState_Error          = 3,
	WebRequestState_MAX            = 4
};


// Enum ProjectX.FakeData_X.FakeDataEnum
enum class EFakeDataEnum
{
	FakeData                       = 0,
	FakeData01                     = 1,
	FakeData02                     = 2,
	FakeData_Count                 = 3,
	FakeData_MAX                   = 4
};


// Enum ProjectX.ClanforgeReservation_X.EReserveState
enum class EReserveState
{
	ReserveState_Unitialized       = 0,
	ReserveState_Unreserved        = 1,
	ReserveState_Reserved          = 2,
	ReserveState_MAX               = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProjectX.ShakeComponent_X.ShakeReceiver
// 0x0008
struct FShakeReceiver
{
	class APlayerController*                           Player;                                                   // 0x0000(0x0004)
	float                                              Scale;                                                    // 0x0004(0x0004)
};

// ScriptStruct ProjectX.FXActor_X.FXAttachment
// 0x00B4
struct FFXAttachment
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_Edit)
	struct FName                                       SocketOrBoneName;                                         // 0x0008(0x0008) (CPF_Edit)
	float                                              AttachDelay;                                              // 0x0010(0x0004) (CPF_Edit)
	float                                              DetachDelay;                                              // 0x0014(0x0004) (CPF_Edit)
	float                                              Lifetime;                                                 // 0x0018(0x0004) (CPF_Edit)
	unsigned long                                      bCreateDuplicates : 1;                                    // 0x001C(0x0004) (CPF_Edit)
	TEnumAsByte<EFXComponentTarget>                    Target;                                                   // 0x0020(0x0001) (CPF_Edit)
	class UActorComponent*                             Component;                                                // 0x0024(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)
	TArray<class UFXActorEvent_X*>                     AttachAny;                                                // 0x0028(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     DetachAny;                                                // 0x0034(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	TArray<class UFXActorEvent_X*>                     AttachAll;                                                // 0x0040(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	unsigned long                                      bExistingComponent : 1;                                   // 0x004C(0x0004)
	unsigned long                                      bExistingAttachment : 1;                                  // 0x004C(0x0004)
	float                                              AttachedTime;                                             // 0x0050(0x0004) (CPF_Transient)
	TEnumAsByte<EFXComponentState>                     State;                                                    // 0x0054(0x0001) (CPF_Transient)
	unsigned long                                      bWantsAttachment : 1;                                     // 0x0058(0x0004) (CPF_Transient)
	float                                              WantsAttachmentChangeTime;                                // 0x005C(0x0004) (CPF_Transient)
	class USkeletalMeshComponent*                      AttachedToMesh;                                           // 0x0060(0x0004) (CPF_ExportObject, CPF_Transient, CPF_Component, CPF_EditInline)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0064(0x000C) MISSED OFFSET
	struct FMatrix                                     RelativeTransform;                                        // 0x0070(0x0040) (CPF_Transient)
	int                                                BoneIndex;                                                // 0x00B0(0x0004) (CPF_Transient)
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedParam
// 0x0008
struct FAnimatedParam
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (CPF_Edit)
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedFloatParam
// 0x0010 (0x0018 - 0x0008)
struct FAnimatedFloatParam : public FAnimatedParam
{
	struct FInterpCurveFloat                           ValueOverTime;                                            // 0x0008(0x0010) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedVectorParam
// 0x0010 (0x0018 - 0x0008)
struct FAnimatedVectorParam : public FAnimatedParam
{
	struct FInterpCurveVector                          ValueOverTime;                                            // 0x0008(0x0010) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.AnimateParametersComponent_X.AnimatedLinearColorParam
// 0x0010 (0x0018 - 0x0008)
struct FAnimatedLinearColorParam : public FAnimatedParam
{
	struct FInterpCurveLinearColor                     ValueOverTime;                                            // 0x0008(0x0010) (CPF_Edit, CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.TcpMessageBeacon.TcpMessageHandler
// 0x0010
struct FTcpMessageHandler
{
	class UClass*                                      MessageClass;                                             // 0x0000(0x0004)
	TArray<struct FScriptDelegate>                     Delegates;                                                // 0x0004(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.BugReport_X.BugReportSubmitterData
// 0x0028
struct FBugReportSubmitterData
{
	class APlayerController*                           Submitter;                                                // 0x0000(0x0004)
	struct FString                                     Name;                                                     // 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FVector                                     Location;                                                 // 0x0010(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x001C(0x000C)
};

// ScriptStruct ProjectX.BugReport_X.BugReportSystemData
// 0x0028
struct FBugReportSystemData
{
	struct FString                                     ComputerName;                                             // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     GameName;                                                 // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     NetMode;                                                  // 0x0018(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bClient : 1;                                              // 0x0024(0x0004)
};

// ScriptStruct ProjectX.BugReport_X.BugReportPathData
// 0x0030
struct FBugReportPathData
{
	struct FString                                     OutputPath;                                               // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     LogName;                                                  // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     LogPath;                                                  // 0x0018(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ScreenShotPath;                                           // 0x0024(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.BugReport_X.BugReportDescriptionData
// 0x003C
struct FBugReportDescriptionData
{
	struct FString                                     Title;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ShortTitle;                                               // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     MetaTitle;                                                // 0x0018(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Description;                                              // 0x0024(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Email;                                                    // 0x0030(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.BugReport_X.FileUploadData
// 0x0029
struct FFileUploadData
{
	class UBugReport_X*                                BugReport;                                                // 0x0000(0x0004)
	struct FString                                     BugID;                                                    // 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Folder;                                                   // 0x0010(0x000C) (CPF_NeedCtorLink)
	struct FString                                     FilePath;                                                 // 0x001C(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<EFileTruncateType>                     TruncateType;                                             // 0x0028(0x0001)
};

// ScriptStruct ProjectX.Camera_X.CameraOrientation
// 0x002C
struct FCameraOrientation
{
	struct FVector                                     Focus;                                                    // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	float                                              Distance;                                                 // 0x0018(0x0004)
	float                                              FOV;                                                      // 0x001C(0x0004)
	struct FVector                                     CalculatedLocation;                                       // 0x0020(0x000C)
};

// ScriptStruct ProjectX.Camera_X.CameraKnockBase
// 0x0010
struct FCameraKnockBase
{
	float                                              BlendInTime;                                              // 0x0000(0x0004) (CPF_Edit)
	float                                              BlendOutTime;                                             // 0x0004(0x0004) (CPF_Edit)
	float                                              Falloff;                                                  // 0x0008(0x0004) (CPF_Edit)
	float                                              Time;                                                     // 0x000C(0x0004) (CPF_Transient)
};

// ScriptStruct ProjectX.Camera_X.LocationCameraKnock
// 0x000C (0x001C - 0x0010)
struct FLocationCameraKnock : public FCameraKnockBase
{
	struct FVector                                     Amount;                                                   // 0x0010(0x000C) (CPF_Edit)
};

// ScriptStruct ProjectX.Camera_X.RotationCameraKnock
// 0x000C (0x001C - 0x0010)
struct FRotationCameraKnock : public FCameraKnockBase
{
	struct FRotator                                    Amount;                                                   // 0x0010(0x000C) (CPF_Edit)
};

// ScriptStruct ProjectX._Types_X.PlayerBinding
// 0x002C
struct FPlayerBinding
{
	struct FName                                       Action;                                                   // 0x0000(0x0008) (CPF_DataBinding)
	struct FName                                       Key;                                                      // 0x0008(0x0008) (CPF_DataBinding)
	TEnumAsByte<EAxisSign>                             AxisSign;                                                 // 0x0010(0x0001) (CPF_DataBinding)
	TEnumAsByte<EButtonPressType>                      PressType;                                                // 0x0011(0x0001) (CPF_DataBinding)
	float                                              Speed;                                                    // 0x0014(0x0004) (CPF_DataBinding)
	unsigned long                                      bRequired : 1;                                            // 0x0018(0x0004) (CPF_DataBinding)
	TEnumAsByte<ERemappable>                           Remappable;                                               // 0x001C(0x0001)
	float                                              PressedTime;                                              // 0x0020(0x0004) (CPF_Transient)
	float                                              ReleasedTime;                                             // 0x0024(0x0004) (CPF_Transient)
	unsigned long                                      bTapped : 1;                                              // 0x0028(0x0004) (CPF_Transient)
	unsigned long                                      bToggled : 1;                                             // 0x0028(0x0004) (CPF_Transient)
};

// ScriptStruct ProjectX.DemoRecDriverInterface_X.DemoLogItem
// 0x001C
struct FDemoLogItem
{
	int                                                frame;                                                    // 0x0000(0x0004)
	struct FString                                     PlayerName;                                               // 0x0004(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     Text;                                                     // 0x0010(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.EffectsMap_X.EffectsMapping
// 0x0008
struct FEffectsMapping
{
	class UPhysicalMaterial*                           PhysicalMaterial;                                         // 0x0000(0x0004) (CPF_Edit)
	class UParticleSystem*                             Particle;                                                 // 0x0004(0x0004) (CPF_Edit)
};

// ScriptStruct ProjectX._Types_X.MetricsEvent
// 0x001C
struct FMetricsEvent
{
	float                                              TimeSeconds;                                              // 0x0000(0x0004)
	struct FString                                     EventName;                                                // 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FString                                     EventData;                                                // 0x0010(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.FakeData_X.FakeData1
// 0x002D
struct FFakeData1
{
	struct FString                                     string1;                                                  // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FName                                       name1;                                                    // 0x000C(0x0008)
	unsigned long                                      bool1 : 1;                                                // 0x0014(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData1.qword1
	float                                              float1;                                                   // 0x0020(0x0004)
	unsigned char                                      byte1;                                                    // 0x0024(0x0001)
	int                                                int1;                                                     // 0x0028(0x0004)
	TEnumAsByte<EFakeDataEnum>                         enum1;                                                    // 0x002C(0x0001)
};

// ScriptStruct ProjectX.FakeData_X.FakeData2
// 0x0078
struct FFakeData2
{
	struct FFakeData1                                  struct1;                                                  // 0x0000(0x0030) (CPF_NeedCtorLink)
	struct FString                                     string1;                                                  // 0x0030(0x000C) (CPF_NeedCtorLink)
	struct FName                                       name1;                                                    // 0x003C(0x0008)
	unsigned long                                      bool1 : 1;                                                // 0x0044(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData2.qword1
	float                                              float1;                                                   // 0x0050(0x0004)
	unsigned char                                      byte1;                                                    // 0x0054(0x0001)
	int                                                int1;                                                     // 0x0058(0x0004)
	TEnumAsByte<EFakeDataEnum>                         enum1;                                                    // 0x005C(0x0001)
	TArray<struct FFakeData1>                          array1;                                                   // 0x0060(0x000C) (CPF_NeedCtorLink)
	TArray<struct FString>                             array2;                                                   // 0x006C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.FakeData_X.FakeData3
// 0x00FC
struct FFakeData3
{
	TArray<struct FFakeData2>                          array1;                                                   // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     string1;                                                  // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FFakeData1                                  struct1;                                                  // 0x0018(0x0030) (CPF_NeedCtorLink)
	struct FName                                       name1;                                                    // 0x0048(0x0008)
	TArray<struct FFakeData2>                          array2;                                                   // 0x0050(0x000C) (CPF_NeedCtorLink)
	TArray<struct FFakeData2>                          array3;                                                   // 0x005C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bool1 : 1;                                                // 0x0068(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x006C(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData3.qword1
	float                                              float1;                                                   // 0x0074(0x0004)
	unsigned char                                      byte1;                                                    // 0x0078(0x0001)
	int                                                int1;                                                     // 0x007C(0x0004)
	TEnumAsByte<EFakeDataEnum>                         enum1;                                                    // 0x0080(0x0001)
	struct FFakeData2                                  struct2;                                                  // 0x0084(0x0078) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.FakeData_X.FakeData4
// 0x00ED
struct FFakeData4
{
	struct FFakeData2                                  struct2;                                                  // 0x0000(0x0078) (CPF_NeedCtorLink)
	TArray<struct FFakeData3>                          array1;                                                   // 0x0078(0x000C) (CPF_NeedCtorLink)
	struct FFakeData1                                  struct1;                                                  // 0x0084(0x0030) (CPF_NeedCtorLink)
	TArray<struct FFakeData2>                          array2;                                                   // 0x00B4(0x000C) (CPF_NeedCtorLink)
	struct FString                                     string1;                                                  // 0x00C0(0x000C) (CPF_NeedCtorLink)
	struct FName                                       name1;                                                    // 0x00CC(0x0008)
	unsigned long                                      bool1 : 1;                                                // 0x00D4(0x0004)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.FakeData_X.FakeData4.qword1
	float                                              float1;                                                   // 0x00E0(0x0004)
	unsigned char                                      byte1;                                                    // 0x00E4(0x0001)
	int                                                int1;                                                     // 0x00E8(0x0004)
	TEnumAsByte<EFakeDataEnum>                         enum1;                                                    // 0x00EC(0x0001)
};

// ScriptStruct ProjectX.GameInfo_X.PauserData
// 0x0008
struct FPauserData
{
	class APlayerController*                           PC;                                                       // 0x0000(0x0004)
	int                                                PauseNum;                                                 // 0x0004(0x0004)
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreColumn
// 0x000C
struct FGFxDataStoreColumn
{
	TEnumAsByte<EASType>                               Type;                                                     // 0x0000(0x0001)
	struct FName                                       Name;                                                     // 0x0004(0x0008)
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreRow
// 0x0010
struct FGFxDataStoreRow
{
	TArray<struct FASValue>                            Values;                                                   // 0x0000(0x000C) (CPF_NeedCtorLink)
	class UGFxDataRow_X*                               BoundObject;                                              // 0x000C(0x0004)
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDataStoreTable
// 0x0024
struct FGFxDataStoreTable
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	TArray<struct FGFxDataStoreColumn>                 Columns;                                                  // 0x0008(0x000C) (CPF_NeedCtorLink)
	TArray<struct FGFxDataStoreRow>                    Rows;                                                     // 0x0014(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bLevelTransitionPersistent : 1;                           // 0x0020(0x0004)
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDirtyRow
// 0x0010
struct FGFxDirtyRow
{
	int                                                RowNum;                                                   // 0x0000(0x0004)
	TArray<struct FName>                               DirtyValues;                                              // 0x0004(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.GFxDataStore_X.GFxDirtyTable
// 0x0014
struct FGFxDirtyTable
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	TArray<struct FGFxDirtyRow>                        DirtyRows;                                                // 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.GFxEngine_X.DirtyObject
// 0x000C
struct FDirtyObject
{
	class UObject*                                     Object;                                                   // 0x0000(0x0004)
	class UProperty*                                   Property;                                                 // 0x0004(0x0004)
	int                                                Index;                                                    // 0x0008(0x0004)
};

// ScriptStruct ProjectX.GFxSoundPack_X.SoundPackSoundRef
// 0x000C
struct FSoundPackSoundRef
{
	class UAkSoundCue*                                 Sound;                                                    // 0x0000(0x0004) (CPF_Edit)
	struct FName                                       Name;                                                     // 0x0004(0x0008) (CPF_Edit)
};

// ScriptStruct ProjectX.LensFlareComponent_X.LensFlareFloatParamCurve
// 0x0028
struct FLensFlareFloatParamCurve
{
	struct FName                                       MaterialParamName;                                        // 0x0000(0x0008) (CPF_Edit)
	int                                                MaterialParamIndex;                                       // 0x0008(0x0004) (CPF_Edit)
	struct FRawDistributionFloat                       ValueOverTime;                                            // 0x000C(0x001C) (CPF_Edit, CPF_Component, CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.LocalCache_X.CacheImportCallbackData
// 0x0014
struct FCacheImportCallbackData
{
	struct FPointer                                    Task;                                                     // 0x0000(0x0004) (CPF_Native)
	struct FScriptDelegate                             Callback;                                                 // 0x0004(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct ProjectX.LocalCache_X.CacheExportCallbackData
// 0x0014
struct FCacheExportCallbackData
{
	struct FPointer                                    Task;                                                     // 0x0000(0x0004) (CPF_Native)
	struct FScriptDelegate                             Callback;                                                 // 0x0004(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct ProjectX._Types_X.RenderProfile
// 0x001C
struct FRenderProfile
{
	float                                              RenderThreadTime;                                         // 0x0000(0x0004)
	float                                              GPUTime;                                                  // 0x0004(0x0004)
	float                                              FrameTime;                                                // 0x0008(0x0004)
	float                                              AccumRenderThreadTime;                                    // 0x000C(0x0004)
	float                                              AccumGPUTime;                                             // 0x0010(0x0004)
	float                                              AccumFrameTime;                                           // 0x0014(0x0004)
	int                                                NumSamples;                                               // 0x0018(0x0004)
};

// ScriptStruct ProjectX.MatchmakingReporter.MatchmakingInfo
// 0x0010
struct FMatchmakingInfo
{
	TEnumAsByte<EMatchmakingInfoSeverity>              Severity;                                                 // 0x0000(0x0001)
	struct FString                                     Info;                                                     // 0x0004(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.MatchmakingReporter.MatchmakingStateReport
// 0x0018
struct FMatchmakingStateReport
{
	TEnumAsByte<EMatchmakingState>                     State;                                                    // 0x0000(0x0001)
	float                                              StartTime;                                                // 0x0004(0x0004)
	float                                              EndTime;                                                  // 0x0008(0x0004)
	TArray<struct FMatchmakingInfo>                    Info;                                                     // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ObjectListComponent_X.ObjectListListener
// 0x0024
struct FObjectListListener
{
	class UClass*                                      ObjClass;                                                 // 0x0000(0x0004)
	struct FScriptDelegate                             OnAdd;                                                    // 0x0004(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             OnRemove;                                                 // 0x0014(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct ProjectX.OnlineConfig_X.ModifierSubscription
// 0x0024
struct FModifierSubscription
{
	class UClass*                                      ObjClass;                                                 // 0x0000(0x0004)
	struct FScriptDelegate                             OnAdd;                                                    // 0x0004(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             OnRemove;                                                 // 0x0014(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct ProjectX._Types_X.CrossplayGroup
// 0x000C
struct FCrossplayGroup
{
	TArray<TEnumAsByte<EOnlinePlatform>>               Platforms;                                                // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineMessageComponent_X.OnlineMessageHandler
// 0x0010
struct FOnlineMessageHandler
{
	class UClass*                                      MessageClass;                                             // 0x0000(0x0004)
	TArray<struct FScriptDelegate>                     Delegates;                                                // 0x0004(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.ParameterDispenser_X.NameParamPair
// 0x0010
struct FNameParamPair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (CPF_Edit)
	struct FName                                       Value;                                                    // 0x0008(0x0008) (CPF_Edit)
};

// ScriptStruct ProjectX.ParameterDispenser_X.FloatParamPair
// 0x000C
struct FFloatParamPair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (CPF_Edit)
	float                                              Value;                                                    // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct ProjectX.ParameterDispenser_X.VectorParamPair
// 0x0014
struct FVectorParamPair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (CPF_Edit)
	struct FVector                                     Value;                                                    // 0x0008(0x000C) (CPF_Edit)
};

// ScriptStruct ProjectX.ParameterDispenser_X.ColorParamPair
// 0x0018
struct FColorParamPair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008) (CPF_Edit)
	struct FLinearColor                                Value;                                                    // 0x0008(0x0010) (CPF_Edit)
};

// ScriptStruct ProjectX.PlayerInput_X.GamepadDeadzoneSettings
// 0x0010
struct FGamepadDeadzoneSettings
{
	TEnumAsByte<EInputPlatformType>                    Type;                                                     // 0x0000(0x0001) (CPF_Edit)
	struct FName                                       Key;                                                      // 0x0004(0x0008) (CPF_Edit)
	float                                              Deadzone;                                                 // 0x000C(0x0004) (CPF_Edit)
};

// ScriptStruct ProjectX.PlayerInput_X.KeyboardAxisBlendSettings
// 0x000C
struct FKeyboardAxisBlendSettings
{
	struct FName                                       Axis;                                                     // 0x0000(0x0008) (CPF_Edit)
	float                                              BlendTime;                                                // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct ProjectX._Types_X.BindingAction
// 0x0030
struct FBindingAction
{
	struct FName                                       Action;                                                   // 0x0000(0x0008) (CPF_DataBinding)
	struct FName                                       Category;                                                 // 0x0008(0x0008) (CPF_DataBinding)
	struct FName                                       Axis;                                                     // 0x0010(0x0008) (CPF_DataBinding)
	TEnumAsByte<EAxisSign>                             AxisSign;                                                 // 0x0018(0x0001) (CPF_DataBinding)
	struct FString                                     Command;                                                  // 0x001C(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bDisableRemapping : 1;                                    // 0x0028(0x0004)
	int                                                Priority;                                                 // 0x002C(0x0004)
};

// ScriptStruct ProjectX.PsyNet_X.PsyNetKeys
// 0x0030
struct FPsyNetKeys
{
	struct FString                                     Environment;                                              // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     PsyNetAuth;                                               // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     GetKeys;                                                  // 0x0018(0x000C) (CPF_NeedCtorLink)
	struct FString                                     SteamPublisher;                                           // 0x0024(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RandomStream_X.RandomStream_Mirror
// 0x0004
struct FRandomStream_Mirror
{
	int                                                Seed;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_Native)
};

// ScriptStruct ProjectX.RenderProfiler_X.PrimitiveComponentProfile
// 0x0050
struct FPrimitiveComponentProfile
{
	struct FString                                     ContentName;                                              // 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<class UPrimitiveComponent*>                 Components;                                               // 0x000C(0x000C) (CPF_ExportObject, CPF_Component, CPF_NeedCtorLink, CPF_EditInline)
	struct FRenderProfile                              InclusiveProfile;                                         // 0x0018(0x001C)
	struct FRenderProfile                              ExclusiveProfile;                                         // 0x0034(0x001C)
};

// ScriptStruct ProjectX.RPCQueue_X.PendingRPC
// 0x0014
struct FPendingRPC
{
	class URPC_X*                                      RPC;                                                      // 0x0000(0x0004)
	int                                                UniqueId;                                                 // 0x0004(0x0004)
	float                                              CreationTime;                                             // 0x0008(0x0004)
	int                                                Failures;                                                 // 0x000C(0x0004)
	float                                              NextSendTime;                                             // 0x0010(0x0004)
};

// ScriptStruct ProjectX.RPCQueue_X.RPCError
// 0x0018
struct FRPCError
{
	struct FString                                     Type;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPCQueue_X.RPCResponse
// 0x0020
struct FRPCResponse
{
	int                                                Id;                                                       // 0x0000(0x0004)
	struct FRPCError                                   Error;                                                    // 0x0004(0x0018) (CPF_NeedCtorLink)
	class URPC_X*                                      Result;                                                   // 0x001C(0x0004)
};

// ScriptStruct ProjectX.RPCQueue_X.RPCBatch
// 0x0034
struct FRPCBatch
{
	class UWebRequest_X*                               WebRequest;                                               // 0x0000(0x0004)
	TArray<struct FPendingRPC>                         Requests;                                                 // 0x0004(0x000C) (CPF_NeedCtorLink)
	TArray<struct FRPCResponse>                        Responses;                                                // 0x0010(0x000C) (CPF_NeedCtorLink)
	struct FRPCError                                   Error;                                                    // 0x001C(0x0018) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ClubColorSet
// 0x0008
struct FClubColorSet
{
	unsigned char                                      TeamColorID;                                              // 0x0000(0x0001)
	unsigned char                                      CustomColorID;                                            // 0x0001(0x0001)
	unsigned long                                      bTeamColorSet : 1;                                        // 0x0004(0x0004)
	unsigned long                                      bCustomColorSet : 1;                                      // 0x0004(0x0004)
};

// ScriptStruct ProjectX._Types_X.CustomMatchTeamSettings
// 0x0014
struct FCustomMatchTeamSettings
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FClubColorSet                               Colors;                                                   // 0x000C(0x0008)
};

// ScriptStruct ProjectX._Types_X.CustomMatchSettings
// 0x0060
struct FCustomMatchSettings
{
	struct FString                                     GameTags;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FName                                       MapName;                                                  // 0x000C(0x0008)
	unsigned char                                      GameMode;                                                 // 0x0014(0x0001)
	int                                                MaxPlayerCount;                                           // 0x0018(0x0004)
	struct FString                                     ServerName;                                               // 0x001C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Password;                                                 // 0x0028(0x000C) (CPF_NeedCtorLink)
	unsigned long                                      bPublic : 1;                                              // 0x0034(0x0004)
	struct FCustomMatchTeamSettings                    TeamSettings[0x2];                                        // 0x0038(0x0014) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamPlayerDLCOwnershipState
// 0x0011
struct FSteamPlayerDLCOwnershipState
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDLC_X.SteamPlayerDLCOwnershipState.AppID
	TEnumAsByte<EDLCOwnershipState>                    State;                                                    // 0x0010(0x0001) (CPF_Transient)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.PlayerDLCInfo
// 0x0050
struct FPlayerDLCInfo
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	TArray<struct FSteamPlayerDLCOwnershipState>       DLCs;                                                     // 0x0030(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             ValidationReadyDelegate;                                  // 0x003C(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              TimeLastOwnershipRequest;                                 // 0x004C(0x0004) (CPF_Transient)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamWebRequestData
// 0x0034
struct FSteamWebRequestData
{
	class UWebRequest_X*                               Request;                                                  // 0x0000(0x0004)
	struct FUniqueNetId                                PlayerID;                                                 // 0x0004(0x0030)
};

// ScriptStruct ProjectX.OnlineGameLeaderboards_X.LeaderboardData
// 0x0064
struct FLeaderboardData
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	struct FString                                     UnSanitizedPlayerName;                                    // 0x0030(0x000C) (CPF_NeedCtorLink)
	struct FString                                     PlayerName;                                               // 0x003C(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	class UTexture*                                    PlayerAvatar;                                             // 0x0048(0x0004) (CPF_DataBinding)
	unsigned long                                      bPsyNetUser : 1;                                          // 0x004C(0x0004) (CPF_DataBinding)
	int                                                Rank;                                                     // 0x0050(0x0004) (CPF_DataBinding)
	int                                                Value;                                                    // 0x0054(0x0004) (CPF_DataBinding)
	float                                              MMR;                                                      // 0x0058(0x0004) (CPF_DataBinding)
	int                                                Division;                                                 // 0x005C(0x0004) (CPF_DataBinding)
	unsigned long                                      bIsPrimaryPlayer : 1;                                     // 0x0060(0x0004) (CPF_DataBinding)
};

// ScriptStruct ProjectX.OnlineGameLeaderboards_X.CachedLeaderboardData
// 0x001C
struct FCachedLeaderboardData
{
	struct FName                                       LeaderboardId;                                            // 0x0000(0x0008) (CPF_Transient)
	TArray<struct FLeaderboardData>                    DataList;                                                 // 0x0008(0x000C) (CPF_Transient, CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0014(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameLeaderboards_X.CachedLeaderboardData.LastLeaderboardSyncTime
};

// ScriptStruct ProjectX._Types_X.SkillRating
// 0x0008
struct FSkillRating
{
	float                                              Mu;                                                       // 0x0000(0x0004)
	float                                              Sigma;                                                    // 0x0004(0x0004)
};

// ScriptStruct ProjectX.OnlineGameReservations_X.ReservationData
// 0x00A4
struct FReservationData
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	struct FString                                     PlayerName;                                               // 0x0030(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyID;                                                  // 0x003C(0x0030)
	TEnumAsByte<EReservationStatus>                    Status;                                                   // 0x006C(0x0001)
	float                                              TimeoutTime;                                              // 0x0070(0x0004)
	unsigned long                                      bDisableCrossPlay : 1;                                    // 0x0074(0x0004)
	class APlayerReplicationInfo*                      PRI;                                                      // 0x0078(0x0004)
	unsigned char                                      Team;                                                     // 0x007C(0x0001)
	class UTcpConnection*                              Connection;                                               // 0x0080(0x0004)
	struct FSkillRating                                Skill;                                                    // 0x0084(0x0008)
	TArray<struct FName>                               MapLikes;                                                 // 0x008C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                              // 0x0098(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameReservations_X.TeamPairHistory
// 0x0064
struct FTeamPairHistory
{
	struct FUniqueNetId                                PartyA;                                                   // 0x0000(0x0030)
	struct FUniqueNetId                                PartyB;                                                   // 0x0030(0x0030)
	int                                                Count;                                                    // 0x0060(0x0004)
};

// ScriptStruct ProjectX._SharedHelpers.Orientation
// 0x0018
struct FOrientation
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
};

// ScriptStruct ProjectX._Types_X.JoinMatchSettings
// 0x0018
struct FJoinMatchSettings
{
	TEnumAsByte<EJoinMatchType>                        MatchType;                                                // 0x0000(0x0001)
	int                                                PlaylistId;                                               // 0x0004(0x0004)
	unsigned long                                      bFriendJoin : 1;                                          // 0x0008(0x0004)
	unsigned long                                      bMigration : 1;                                           // 0x0008(0x0004)
	unsigned long                                      bRankedReconnect : 1;                                     // 0x0008(0x0004)
	struct FString                                     Password;                                                 // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.SkillMatchPlayer
// 0x003C
struct FSkillMatchPlayer
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	float                                              PctTimePlayed;                                            // 0x0030(0x0004)
	unsigned long                                      bQuitter : 1;                                             // 0x0034(0x0004)
	int                                                PartyID;                                                  // 0x0038(0x0004)
};

// ScriptStruct ProjectX._Types_X.PartyJoinMatchSettings
// 0x002C
struct FPartyJoinMatchSettings
{
	struct FString                                     BeaconAddress;                                            // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     GameAddress;                                              // 0x000C(0x000C) (CPF_NeedCtorLink)
	int                                                PlaylistId;                                               // 0x0018(0x0004)
	unsigned long                                      bFriendJoin : 1;                                          // 0x001C(0x0004)
	struct FString                                     Password;                                                 // 0x0020(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ServerResult
// 0x0078
struct FServerResult
{
	struct FString                                     Address;                                                  // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ServerName;                                               // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Settings;                                                 // 0x0018(0x0060) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PushNotificationData
// 0x0048
struct FPushNotificationData
{
	TEnumAsByte<EPushNotificationType>                 NotificationType;                                         // 0x0000(0x0001)
	struct FString                                     Content;                                                  // 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                FromUserId;                                               // 0x0010(0x0030)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX._Types_X.PushNotificationData.CreatedAt
};

// ScriptStruct ProjectX._Types_X.IntVector3
// 0x000C
struct FIntVector3
{
	int                                                X;                                                        // 0x0000(0x0004) (CPF_Edit)
	int                                                Y;                                                        // 0x0004(0x0004) (CPF_Edit)
	int                                                Z;                                                        // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct ProjectX._Types_X.DownloadedImage
// 0x0010
struct FDownloadedImage
{
	struct FString                                     URL;                                                      // 0x0000(0x000C) (CPF_NeedCtorLink)
	class UTexture2DDynamic*                           Texture;                                                  // 0x000C(0x0004)
};

// ScriptStruct ProjectX._Types_X.CheckReservationData
// 0x001C
struct FCheckReservationData
{
	struct FString                                     Address;                                                  // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ServerName;                                               // 0x000C(0x000C) (CPF_NeedCtorLink)
	int                                                Playlist;                                                 // 0x0018(0x0004)
};

// ScriptStruct ProjectX._Types_X.MapPrefs
// 0x0018
struct U_Types_X_FMapPrefs
{
	TArray<struct FName>                               Likes;                                                    // 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                                 // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.TierSkillRating
// 0x0010 (0x0018 - 0x0008)
struct FTierSkillRating : public FSkillRating
{
	int                                                Tier;                                                     // 0x0008(0x0004)
	int                                                Division;                                                 // 0x000C(0x0004)
	int                                                MatchesPlayed;                                            // 0x0010(0x0004)
	float                                              MMR;                                                      // 0x0014(0x0004)
};

// ScriptStruct ProjectX._Types_X.GroupSkillRating
// 0x000C (0x0024 - 0x0018)
struct FGroupSkillRating : public FTierSkillRating
{
	TArray<struct FUniqueNetId>                        Players;                                                  // 0x0018(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PlayerSeasonRewardProgress
// 0x0038
struct FPlayerSeasonRewardProgress
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	int                                                Level;                                                    // 0x0030(0x0004)
	int                                                Wins;                                                     // 0x0034(0x0004)
};

// ScriptStruct ProjectX._Types_X.SkillMatchPartyRating
// 0x0004 (0x001C - 0x0018)
struct FSkillMatchPartyRating : public FTierSkillRating
{
	int                                                PartyID;                                                  // 0x0018(0x0004)
};

// ScriptStruct ProjectX._Types_X.SkillMatchParty
// 0x0018
struct FSkillMatchParty
{
	int                                                PartyID;                                                  // 0x0000(0x0004)
	float                                              PctTimePlayed;                                            // 0x0004(0x0004)
	unsigned long                                      bQuitter : 1;                                             // 0x0008(0x0004)
	TArray<struct FUniqueNetId>                        Players;                                                  // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.RecordedMatchData
// 0x001C
struct FRecordedMatchData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX._Types_X.RecordedMatchData.ServerID
	int                                                Playlist;                                                 // 0x0008(0x0004)
	int                                                WinningTeam;                                              // 0x000C(0x0004)
	int                                                Team0Score;                                               // 0x0010(0x0004)
	int                                                Team1Score;                                               // 0x0014(0x0004)
	unsigned long                                      bOverTime : 1;                                            // 0x0018(0x0004)
};

// ScriptStruct ProjectX._Types_X.RecordedMatchPlayer
// 0x0040
struct FRecordedMatchPlayer
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	int                                                Team;                                                     // 0x0030(0x0004)
	float                                              TimePlayed;                                               // 0x0034(0x0004)
	unsigned long                                      bInGame : 1;                                              // 0x0038(0x0004)
	unsigned long                                      bQuitter : 1;                                             // 0x0038(0x0004)
	int                                                PartyID;                                                  // 0x003C(0x0004)
};

// ScriptStruct ProjectX._Types_X.LastTimePeriodLeaderData
// 0x001C
struct FLastTimePeriodLeaderData
{
	struct FString                                     LeaderboardId;                                            // 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FString>                             PlayerNames;                                              // 0x000C(0x000C) (CPF_NeedCtorLink)
	int                                                Value;                                                    // 0x0018(0x0004)
};

// ScriptStruct ProjectX._Types_X.ReplicatedReservationData
// 0x003D
struct FReplicatedReservationData
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	struct FString                                     PlayerName;                                               // 0x0030(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<EReservationStatus>                    Status;                                                   // 0x003C(0x0001)
};

// ScriptStruct ProjectX._Types_X.ReservationPlayerData
// 0x0070
struct FReservationPlayerData
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	struct FString                                     PlayerName;                                               // 0x0030(0x000C) (CPF_NeedCtorLink)
	float                                              SkillMu;                                                  // 0x003C(0x0004)
	float                                              SkillSigma;                                               // 0x0040(0x0004)
	int                                                Tier;                                                     // 0x0044(0x0004)
	unsigned long                                      bRemotePlayer : 1;                                        // 0x0048(0x0004)
	TArray<int>                                        Loadout;                                                  // 0x004C(0x000C) (CPF_NeedCtorLink)
	TArray<struct FName>                               MapLikes;                                                 // 0x0058(0x000C) (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                              // 0x0064(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PlayerTitleData
// 0x0015
struct FPlayerTitleData
{
	struct FName                                       Id;                                                       // 0x0000(0x0008) (CPF_DataBinding)
	struct FString                                     Text;                                                     // 0x0008(0x000C) (CPF_NeedCtorLink, CPF_DataBinding)
	TEnumAsByte<EPlayerTitleType>                      Type;                                                     // 0x0014(0x0001) (CPF_DataBinding)
};

// ScriptStruct ProjectX._Types_X.GamePlaylist
// 0x0020
struct FGamePlaylist
{
	struct FString                                     FriendlyName;                                             // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FName                                       Id;                                                       // 0x000C(0x0008)
	TArray<struct FName>                               GameTags;                                                 // 0x0014(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ReplicatedRBState
// 0x0038
struct FReplicatedRBState
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C)
	struct FVector                                     LinearVelocity;                                           // 0x0018(0x000C)
	struct FVector                                     AngularVelocity;                                          // 0x0024(0x000C)
	unsigned long                                      bSleeping : 1;                                            // 0x0030(0x0004)
	unsigned long                                      bNewData : 1;                                             // 0x0030(0x0004)
	float                                              Time;                                                     // 0x0034(0x0004)
};

// ScriptStruct ProjectX._Types_X.ProcedureKeyValuePair
// 0x0014
struct FProcedureKeyValuePair
{
	struct FName                                       Key;                                                      // 0x0000(0x0008)
	struct FString                                     Value;                                                    // 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ProcedureResult
// 0x000C
struct FProcedureResult
{
	TArray<struct FProcedureKeyValuePair>              KVPairs;                                                  // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.UITimer
// 0x000C
struct FUITimer
{
	struct FName                                       Event;                                                    // 0x0000(0x0008) (CPF_Edit)
	float                                              Delay;                                                    // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct ProjectX._Types_X.UIAnimValue
// 0x0018
struct FUIAnimValue
{
	float                                              X;                                                        // 0x0000(0x0004)
	float                                              Y;                                                        // 0x0004(0x0004)
	float                                              R;                                                        // 0x0008(0x0004)
	float                                              G;                                                        // 0x000C(0x0004)
	float                                              B;                                                        // 0x0010(0x0004)
	float                                              A;                                                        // 0x0014(0x0004)
};

// ScriptStruct ProjectX._Types_X.UIWidgetMatrix
// 0x0034
struct FUIWidgetMatrix
{
	struct FVector                                     Position;                                                 // 0x0000(0x000C)
	struct FVector                                     Size;                                                     // 0x000C(0x000C)
	struct FVector                                     Scale;                                                    // 0x0018(0x000C)
	struct FLinearColor                                Tint;                                                     // 0x0024(0x0010)
};

// ScriptStruct ProjectX._Types_X.CustomAnimSettings
// 0x0034
struct FCustomAnimSettings
{
	struct FName                                       AnimName;                                                 // 0x0000(0x0008) (CPF_Edit)
	unsigned long                                      bLoop : 1;                                                // 0x0008(0x0004) (CPF_Edit)
	float                                              BlendInTime;                                              // 0x000C(0x0004) (CPF_Edit)
	float                                              BlendOutTime;                                             // 0x0010(0x0004) (CPF_Edit)
	float                                              StartTime;                                                // 0x0014(0x0004) (CPF_Edit)
	float                                              EndTime;                                                  // 0x0018(0x0004) (CPF_Edit)
	float                                              Rate;                                                     // 0x001C(0x0004) (CPF_Edit)
	TEnumAsByte<ERootMotionMode>                       RootMotionMode;                                           // 0x0020(0x0001) (CPF_Edit)
	TEnumAsByte<ERootBoneAxis>                         RootBoneAxis;                                             // 0x0021(0x0001) (CPF_Edit)
	TEnumAsByte<ERootMotionRotationMode>               RootMotionRotationMode;                                   // 0x0022(0x0001) (CPF_Edit)
	TEnumAsByte<ERootRotationOption>                   RootBoneRotationAxis;                                     // 0x0023(0x0001) (CPF_Edit)
	struct FVector                                     RootMotionAccelScale;                                     // 0x0024(0x000C) (CPF_Edit)
	unsigned long                                      bOverride : 1;                                            // 0x0030(0x0004) (CPF_Edit)
	unsigned long                                      bMirrored : 1;                                            // 0x0030(0x0004) (CPF_Edit)
};

// ScriptStruct ProjectX._Types_X.Ray
// 0x0018
struct FRay
{
	struct FVector                                     Origin;                                                   // 0x0000(0x000C)
	struct FVector                                     Dir;                                                      // 0x000C(0x000C)
};

// ScriptStruct ProjectX._Types_X.KeyHandler
// 0x0018
struct FKeyHandler
{
	struct FName                                       Key;                                                      // 0x0000(0x0008)
	struct FScriptDelegate                             Handler;                                                  // 0x0008(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct ProjectX._Types_X.PlaylistTierSkillRating
// 0x0004 (0x001C - 0x0018)
struct FPlaylistTierSkillRating : public FTierSkillRating
{
	int                                                Playlist;                                                 // 0x0018(0x0004)
};

// ScriptStruct ProjectX._Types_X.PlayerSkillRating
// 0x0030 (0x0048 - 0x0018)
struct FPlayerSkillRating : public FTierSkillRating
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0018(0x0030)
};

// ScriptStruct ProjectX._Types_X.PlaylistSkillRating
// 0x0004 (0x004C - 0x0048)
struct FPlaylistSkillRating : public FPlayerSkillRating
{
	int                                                Playlist;                                                 // 0x0048(0x0004)
};

// ScriptStruct ProjectX._Types_X.RPCRewardLevelData
// 0x0008
struct FRPCRewardLevelData
{
	int                                                SeasonLevel;                                              // 0x0000(0x0004)
	int                                                SeasonLevelWins;                                          // 0x0004(0x0004)
};

// ScriptStruct ProjectX._Types_X.RPCPlayerRewardLevelData
// 0x0030 (0x0038 - 0x0008)
struct FRPCPlayerRewardLevelData : public FRPCRewardLevelData
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0008(0x0030)
};

// ScriptStruct ProjectX._Types_X.CachedRegionPing
// 0x000C
struct FCachedRegionPing
{
	struct FName                                       Name;                                                     // 0x0000(0x0008)
	float                                              Ping;                                                     // 0x0008(0x0004)
};

// ScriptStruct ProjectX._Types_X.PartyMemberServer
// 0x001C
struct FPartyMemberServer
{
	struct FString                                     BeaconAddress;                                            // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Password;                                                 // 0x000C(0x000C) (CPF_NeedCtorLink)
	int                                                PlaylistId;                                               // 0x0018(0x0004)
};

// ScriptStruct ProjectX._Types_X.PartyMember
// 0x00D8
struct FPartyMember
{
	struct FUniqueNetId                                PrimaryMemberId;                                          // 0x0000(0x0030)
	struct FUniqueNetId                                MemberId;                                                 // 0x0030(0x0030)
	struct FString                                     MemberName;                                               // 0x0060(0x000C) (CPF_NeedCtorLink)
	int                                                MatchmakeRestrictions;                                    // 0x006C(0x0004)
	int                                                LocalControllerId;                                        // 0x0070(0x0004)
	unsigned long                                      bDisableCrossPlay : 1;                                    // 0x0074(0x0004)
	struct FUniqueNetId                                TradingMemberId;                                          // 0x0078(0x0030)
	struct FGuid                                       TradeId;                                                  // 0x00A8(0x0010)
	unsigned long                                      bReadyToTrade : 1;                                        // 0x00B8(0x0004)
	struct FPartyMemberServer                          Server;                                                   // 0x00BC(0x001C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.ClubMember
// 0x003C
struct FClubMember
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	struct FString                                     PlayerName;                                               // 0x0030(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX._Types_X.PlayerPermissionsList
// 0x003C
struct FPlayerPermissionsList
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	TArray<TEnumAsByte<EOnlinePlayerPermission>>       Permissions;                                              // 0x0030(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameParty_X.PlaylistRestrictionPlayer
// 0x0034
struct FPlaylistRestrictionPlayer
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	int                                                Tier;                                                     // 0x0030(0x0004)
};

// ScriptStruct ProjectX.OnlineGameParty_X.PlaylistSkillRestrictionInfo
// 0x006C
struct FPlaylistSkillRestrictionInfo
{
	struct FPlaylistRestrictionPlayer                  HighestPlayer;                                            // 0x0000(0x0034)
	struct FPlaylistRestrictionPlayer                  LowestPlayer;                                             // 0x0034(0x0034)
	int                                                PlaylistId;                                               // 0x0068(0x0004)
};

// ScriptStruct ProjectX.AddReservationMessagePublic_X.OnlinePlayerMapPrefs
// 0x0048
struct FOnlinePlayerMapPrefs
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	TArray<struct FName>                               MapLikes;                                                 // 0x0030(0x000C) (CPF_NeedCtorLink)
	TArray<struct FName>                               MapDislikes;                                              // 0x003C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameSkill_X.SkillSyncRequest
// 0x0044
struct FSkillSyncRequest
{
	class URPC_GetPlayerSkill_X*                       RPC;                                                      // 0x0000(0x0004)
	struct FUniqueNetId                                PlayerID;                                                 // 0x0004(0x0030)
	struct FScriptDelegate                             Callback;                                                 // 0x0034(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct ProjectX.BugReport_X.BugReportUploadTask
// 0x0048
struct FBugReportUploadTask
{
	struct FFileUploadData                             Data;                                                     // 0x0000(0x002C) (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                              // 0x002C(0x0004)
	struct FString                                     TaskName;                                                 // 0x0030(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     Error;                                                    // 0x003C(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.CameraStateBlender_X.CameraTransition
// 0x0048
struct FCameraTransition
{
	class UCameraState_X*                              CameraState;                                              // 0x0000(0x0004)
	struct FViewTargetTransitionParams                 BlendParams;                                              // 0x0004(0x0010)
	float                                              RemainingTime;                                            // 0x0014(0x0004)
	struct FCameraOrientation                          SnapshotPOV;                                              // 0x0018(0x002C)
	unsigned long                                      bStarted : 1;                                             // 0x0044(0x0004)
};

// ScriptStruct ProjectX.Camera_X.VectorInterpRate
// 0x0018
struct FVectorInterpRate
{
	float                                              MaxDistance;                                              // 0x0000(0x0004)
	float                                              InterpRate;                                               // 0x0004(0x0004)
	float                                              ForwardScale;                                             // 0x0008(0x0004)
	float                                              BackwardScale;                                            // 0x000C(0x0004)
	float                                              SideScale;                                                // 0x0010(0x0004)
	float                                              UpDownScale;                                              // 0x0014(0x0004)
};

// ScriptStruct ProjectX.CheatManager_X.TestStructEvent
// 0x0010
struct FTestStructEvent
{
	struct FScriptDelegate                             Callback;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct ProjectX.OnlineImageDownloaderWeb_X.DownloadedImageRequest
// 0x002C
struct FDownloadedImageRequest
{
	struct FString                                     Id;                                                       // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FDownloadedImage                            Image;                                                    // 0x000C(0x0010) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     Callbacks;                                                // 0x001C(0x000C) (CPF_NeedCtorLink)
	class UHttpRequestInterface*                       HTTPRequest;                                              // 0x0028(0x0004)
};

// ScriptStruct ProjectX.PresetMutators_X.CategorySettingPair
// 0x0010
struct FCategorySettingPair
{
	struct FName                                       Category;                                                 // 0x0000(0x0008)
	struct FName                                       Setting;                                                  // 0x0008(0x0008)
};

// ScriptStruct ProjectX.MapRenderProfiler_X.MapProfile
// 0x0030
struct FMapProfile
{
	struct FString                                     Map;                                                      // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FRenderProfile                              Profile;                                                  // 0x000C(0x001C)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.MapRenderProfiler_X.MapProfile.ProfileId
};

// ScriptStruct ProjectX.OnlineGamePlayerTitles_X.CachedTitleData
// 0x0030
struct FCachedTitleData
{
	struct FName                                       Id;                                                       // 0x0000(0x0008)
	struct FPlayerTitleData                            Data;                                                     // 0x0008(0x0018) (CPF_NeedCtorLink)
	class UWebRequest_X*                               WebRequest;                                               // 0x0020(0x0004)
	TArray<struct FScriptDelegate>                     Callbacks;                                                // 0x0024(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGamePlayerTitles_X.CachedPlayerData
// 0x0050
struct FCachedPlayerData
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	TArray<struct FName>                               Titles;                                                   // 0x0030(0x000C) (CPF_NeedCtorLink)
	float                                              CacheTime;                                                // 0x003C(0x0004)
	class URPC_X*                                      RPC;                                                      // 0x0040(0x0004)
	TArray<struct FScriptDelegate>                     Callbacks;                                                // 0x0044(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.WebCache_X.CachedDataRequest
// 0x002C
struct FCachedDataRequest
{
	struct FString                                     URL;                                                      // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Path;                                                     // 0x000C(0x000C) (CPF_NeedCtorLink)
	class UCachedWebData_X*                            CachedWebData;                                            // 0x0018(0x0004)
	struct FScriptDelegate                             Callback;                                                 // 0x001C(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct ProjectX.OnlineGameWordFilter_X.FilterPair
// 0x003C
struct FFilterPair
{
	struct FString                                     Key;                                                      // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // 0x000C(0x000C) (CPF_NeedCtorLink)
	TEnumAsByte<EWordFilterUsage>                      Usage;                                                    // 0x0018(0x0001)
	unsigned long                                      bPending : 1;                                             // 0x001C(0x0004)
	class UError*                                      Error;                                                    // 0x0020(0x0004)
	TArray<struct FScriptDelegate>                     Callbacks;                                                // 0x0024(0x000C) (CPF_NeedCtorLink)
	TArray<struct FScriptDelegate>                     ErrorCallbacks;                                           // 0x0030(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameSkillGroups_X.GroupSkillSyncRequest
// 0x0018
struct FGroupSkillSyncRequest
{
	class URPC_GetGroupSkills_X*                       RPC;                                                      // 0x0000(0x0004)
	int                                                GroupIndex;                                               // 0x0004(0x0004)
	struct FScriptDelegate                             Callback;                                                 // 0x0008(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0008(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct ProjectX.OnlineGameSkillGroups_X.PlayerGroup
// 0x0010
struct FPlayerGroup
{
	TArray<int>                                        Players;                                                  // 0x0000(0x000C) (CPF_NeedCtorLink)
	int                                                PlayersHash;                                              // 0x000C(0x0004)
};

// ScriptStruct ProjectX.OnlineGameSkillGroups_X.CachedGroupSkillRating
// 0x0024
struct FCachedGroupSkillRating
{
	int                                                GroupIndex;                                               // 0x0000(0x0004)
	int                                                Playlist;                                                 // 0x0004(0x0004)
	struct FTierSkillRating                            Rating;                                                   // 0x0008(0x0018)
	unsigned long                                      bSynced : 1;                                              // 0x0020(0x0004)
};

// ScriptStruct ProjectX.OnlineGameWordFilterProcessor_X.WordFilterRequest
// 0x002C
struct FWordFilterRequest
{
	class UWebRequest_X*                               Request;                                                  // 0x0000(0x0004)
	struct FString                                     Comment;                                                  // 0x0004(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Sanitized;                                                // 0x0010(0x000C) (CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // 0x001C(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct ProjectX.OnlineGameRegions_X.RegionData
// 0x0039
struct FRegionData
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     LocalizedName;                                            // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Address;                                                  // 0x0018(0x000C) (CPF_NeedCtorLink)
	class UTcpConnection*                              Connection;                                               // 0x0024(0x0004)
	float                                              PingSendTime;                                             // 0x0028(0x0004)
	float                                              Ping;                                                     // 0x002C(0x0004)
	float                                              AvgPing;                                                  // 0x0030(0x0004)
	int                                                PingCount;                                                // 0x0034(0x0004)
	TEnumAsByte<ERegionPingResult>                     PingResult;                                               // 0x0038(0x0001)
};

// ScriptStruct ProjectX.OnlineGamePopulation_X.PlaylistPopulation
// 0x0008
struct UOnlineGamePopulation_X_FPlaylistPopulation
{
	int                                                PlaylistId;                                               // 0x0000(0x0004)
	int                                                NumPlayers;                                               // 0x0004(0x0004)
};

// ScriptStruct ProjectX.RPC_CheckReplacementDedicatedServer_X.CheckReplacementDedicatedServerData
// 0x001C
struct FCheckReplacementDedicatedServerData
{
	struct FString                                     IP;                                                       // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Host;                                                     // 0x000C(0x000C) (CPF_NeedCtorLink)
	int                                                Port;                                                     // 0x0018(0x0004)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3
// 0x0020
struct FSteamJsonResponseGetPublisherAppOwnership3
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3.AppID
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) UNKNOWN PROPERTY: QWordProperty ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership3.OwnerSteamID
	unsigned long                                      OwnsApp : 1;                                              // 0x0010(0x0004)
	unsigned long                                      Permanent : 1;                                            // 0x0010(0x0004)
	struct FString                                     TimeStamp;                                                // 0x0014(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership2
// 0x000C
struct FSteamJsonResponseGetPublisherAppOwnership2
{
	TArray<struct FSteamJsonResponseGetPublisherAppOwnership3> Apps;                                                     // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameDLC_X.SteamJsonResponseGetPublisherAppOwnership
// 0x000C
struct FSteamJsonResponseGetPublisherAppOwnership
{
	struct FSteamJsonResponseGetPublisherAppOwnership2 AppOwnership;                                             // 0x0000(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetLeaderboardBase_X.GetLeaderboardBaseData
// 0x0044
struct FGetLeaderboardBaseData
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // 0x000C(0x0030)
	int                                                Value;                                                    // 0x003C(0x0004)
	float                                              MMR;                                                      // 0x0040(0x0004)
};

// ScriptStruct ProjectX.RPC_GetLeaderboardBase_X.GetLeaderboardPlatformBaseData
// 0x0018
struct FGetLeaderboardPlatformBaseData
{
	struct FString                                     Platform;                                                 // 0x0000(0x000C) (CPF_NeedCtorLink)
	TArray<struct FGetLeaderboardBaseData>             Players;                                                  // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetLeaderboardRankForUsersBase_X.GetLeaderboardRankForUserData
// 0x0044
struct FGetLeaderboardRankForUserData
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // 0x000C(0x0030)
	int                                                Value;                                                    // 0x003C(0x0004)
	float                                              MMR;                                                      // 0x0040(0x0004)
};

// ScriptStruct ProjectX.PartyMessage_LocalPlayers_X.SimplePartyMember
// 0x003C
struct FSimplePartyMember
{
	struct FUniqueNetId                                MemberId;                                                 // 0x0000(0x0030)
	struct FString                                     MemberName;                                               // 0x0030(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PartyMetrics_X.PartyMetricsData
// 0x000C
struct FPartyMetricsData
{
	int                                                LocalPlayers;                                             // 0x0000(0x0004)
	int                                                RemotePlayers;                                            // 0x0004(0x0004)
	unsigned long                                      bPartyLeader : 1;                                         // 0x0008(0x0004)
};

// ScriptStruct ProjectX.RPC_GetPopulation_X.GetPopulationData
// 0x0008
struct FGetPopulationData
{
	int                                                Playlist;                                                 // 0x0000(0x0004)
	int                                                PlayerCount;                                              // 0x0004(0x0004)
};

// ScriptStruct ProjectX.RPC_GetRegionList_X.GetRegionListData
// 0x0018
struct FGetRegionListData
{
	struct FString                                     Region;                                                   // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     RegionName;                                               // 0x000C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetGameServerPingList_X.GetGameServerPingListData
// 0x0034
struct FGetGameServerPingListData
{
	struct FString                                     Region;                                                   // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     IP;                                                       // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FString                                     Host;                                                     // 0x0018(0x000C) (CPF_NeedCtorLink)
	int                                                Port;                                                     // 0x0024(0x0004)
	struct FString                                     Address;                                                  // 0x0028(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.OnlineGameReservations_AssignTeamsByParty_X.PartyByTeam
// 0x0038
struct FPartyByTeam
{
	struct FUniqueNetId                                PartyID;                                                  // 0x0000(0x0030)
	unsigned char                                      Team;                                                     // 0x0030(0x0001)
	int                                                Size;                                                     // 0x0034(0x0004)
};

// ScriptStruct ProjectX.RPC_CustomGameServerGet_X.FindPrivateServerResult
// 0x0088
struct FFindPrivateServerResult
{
	struct FString                                     IP;                                                       // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ServerName;                                               // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FCustomMatchSettings                        Settings;                                                 // 0x0018(0x0060) (CPF_NeedCtorLink)
	struct FString                                     Host;                                                     // 0x0078(0x000C) (CPF_NeedCtorLink)
	int                                                Port;                                                     // 0x0084(0x0004)
};

// ScriptStruct ProjectX.RPC_GetPlayerSkill_X.GetPlayerSkillData
// 0x0020
struct FGetPlayerSkillData
{
	int                                                Playlist;                                                 // 0x0000(0x0004)
	float                                              Mu;                                                       // 0x0004(0x0004)
	float                                              Sigma;                                                    // 0x0008(0x0004)
	int                                                Tier;                                                     // 0x000C(0x0004)
	int                                                Division;                                                 // 0x0010(0x0004)
	int                                                MatchesPlayed;                                            // 0x0014(0x0004)
	float                                              MMR;                                                      // 0x0018(0x0004)
	int                                                WinStreak;                                                // 0x001C(0x0004)
};

// ScriptStruct ProjectX.OnlineGameStats_X.UploadStatData
// 0x0034
struct FUploadStatData
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	int                                                Value;                                                    // 0x0030(0x0004)
};

// ScriptStruct ProjectX.OnlineGameStats_X.UploadStatDataSet
// 0x0014
struct FUploadStatDataSet
{
	struct FName                                       StatId;                                                   // 0x0000(0x0008)
	TArray<struct FUploadStatData>                     Data;                                                     // 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.PostProcessManager_X.PPEffectDefaults
// 0x000C
struct FPPEffectDefaults
{
	struct FName                                       EffectName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_Const)
	unsigned long                                      bEnabled : 1;                                             // 0x0008(0x0004) (CPF_Edit, CPF_Const)
};

// ScriptStruct ProjectX.PostProcessManager_X.PPPersistentEffectDefaults
// 0x001C
struct FPPPersistentEffectDefaults
{
	struct FName                                       EffectName;                                               // 0x0000(0x0008) (CPF_Edit, CPF_Const)
	struct FName                                       MaterialEffectName;                                       // 0x0008(0x0008) (CPF_Edit, CPF_Const)
	struct FName                                       MaterialParamName;                                        // 0x0010(0x0008) (CPF_Edit, CPF_Const)
	float                                              DefaultValue;                                             // 0x0018(0x0004) (CPF_Edit, CPF_Const)
};

// ScriptStruct ProjectX.PostProcessManager_X.PPChainInfo
// 0x000C
struct FPPChainInfo
{
	struct FName                                       ChainName;                                                // 0x0000(0x0008) (CPF_Edit)
	class UPostProcessChain*                           ChainReference;                                           // 0x0008(0x0004) (CPF_Edit)
};

// ScriptStruct ProjectX.PostProcessManager_X.PostProcessOverride
// 0x0168
struct FPostProcessOverride
{
	struct FPostProcessSettings                        Settings;                                                 // 0x0000(0x0150) (CPF_NeedCtorLink)
	class APostProcessVolume*                          Volume;                                                   // 0x0150(0x0004)
	struct FName                                       Id;                                                       // 0x0154(0x0008)
	float                                              BlendInTime;                                              // 0x015C(0x0004)
	float                                              BlendOutTime;                                             // 0x0160(0x0004)
	unsigned long                                      bEnabled : 1;                                             // 0x0164(0x0004) (CPF_Transient)
	unsigned long                                      bDefaultEnabled : 1;                                      // 0x0164(0x0004) (CPF_Edit)
};

// ScriptStruct ProjectX.RPC_Test_X.RPCTestItem
// 0x0054
struct FRPCTestItem
{
	unsigned long                                      BoolItem : 1;                                             // 0x0000(0x0004)
	int                                                IntItem;                                                  // 0x0004(0x0004)
	float                                              FloatItem;                                                // 0x0008(0x0004)
	struct FString                                     StringItem;                                               // 0x000C(0x000C) (CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerItem;                                               // 0x0018(0x0030)
	TArray<struct FString>                             StringItems;                                              // 0x0048(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_Test_X.RPCTestParam
// 0x0060
struct FRPCTestParam
{
	struct FRPCTestItem                                TestItem;                                                 // 0x0000(0x0054) (CPF_NeedCtorLink)
	TArray<struct FRPCTestItem>                        TestItems;                                                // 0x0054(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.LocalCache_X.CacheIOTaskBase
// 0x0020
struct FCacheIOTaskBase
{
	class UObject*                                     CacheObject;                                              // 0x0000(0x0004)
	TArray<unsigned char>                              Data;                                                     // 0x0004(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	struct FString                                     Path;                                                     // 0x0010(0x000C) (CPF_AlwaysInit, CPF_NeedCtorLink)
	class UErrorType*                                  Error;                                                    // 0x001C(0x0004)
};

// ScriptStruct ProjectX.LocalCache_X.CacheExportTask
// 0x0000 (0x0020 - 0x0020)
struct FCacheExportTask : public FCacheIOTaskBase
{

};

// ScriptStruct ProjectX.LocalCache_X.CacheImportTask
// 0x0000 (0x0020 - 0x0020)
struct FCacheImportTask : public FCacheIOTaskBase
{

};

// ScriptStruct ProjectX.RPC_CheckReservation_X.CheckReservationResponse
// 0x0038
struct FCheckReservationResponse
{
	struct FString                                     IP;                                                       // 0x0000(0x000C) (CPF_NeedCtorLink)
	struct FString                                     ServerName;                                               // 0x000C(0x000C) (CPF_NeedCtorLink)
	int                                                Playlist;                                                 // 0x0018(0x0004)
	struct FString                                     Host;                                                     // 0x001C(0x000C) (CPF_NeedCtorLink)
	int                                                Port;                                                     // 0x0028(0x0004)
	struct FString                                     Address;                                                  // 0x002C(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetGenericDataAll_X.GetGenericDataAllData
// 0x0014
struct FGetGenericDataAllData
{
	struct FName                                       DataKey;                                                  // 0x0000(0x0008)
	struct FString                                     DataValue;                                                // 0x0008(0x000C) (CPF_NeedCtorLink)
};

// ScriptStruct ProjectX.RPC_GetPlayerPermissions_X.PlayerPermissionsReponse
// 0x003C
struct FPlayerPermissionsReponse
{
	struct FUniqueNetId                                PlayerID;                                                 // 0x0000(0x0030)
	TArray<struct FName>                               Permissions;                                              // 0x0030(0x000C) (CPF_NeedCtorLink)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
