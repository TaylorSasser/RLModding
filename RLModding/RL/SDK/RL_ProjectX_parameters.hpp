#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function ProjectX._SharedHelpers.ScoreDeltaFromDefault
struct U_SharedHelpers_ScoreDeltaFromDefault_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX._SharedHelpers.FindNetId
struct U_SharedHelpers_FindNetId_Params
{
	struct FUniqueNetId                                FindId;                                                   // (CPF_Parm)
	TArray<struct FUniqueNetId>                        List;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX._SharedHelpers.DrawShadowedText
struct U_SharedHelpers_DrawShadowedText_Params
{
	class UCanvas*                                     Canvas;                                                   // (CPF_Parm)
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                ShadowOffsetX;                                            // (CPF_OptionalParm, CPF_Parm)
	int                                                ShadowOffsetY;                                            // (CPF_OptionalParm, CPF_Parm)
	int                                                ShadowAlpha;                                              // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX._SharedHelpers.IsInTransientPackage
struct U_SharedHelpers_IsInTransientPackage_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX._SharedHelpers.GetAPlayerController
struct U_SharedHelpers_GetAPlayerController_Params
{
	class UClass*                                      PlayerControllerClass;                                    // (CPF_OptionalParm, CPF_Parm)
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function ProjectX._SharedHelpers.GetDefaultObject
struct U_SharedHelpers_GetDefaultObject_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function ProjectX._SharedHelpers.DumpUnreferencedAnims
struct U_SharedHelpers_DumpUnreferencedAnims_Params
{
};

// Function ProjectX._SharedHelpers.GetLanguageExtension
struct U_SharedHelpers_GetLanguageExtension_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX._Types_X.ToIntVector3
struct U_Types_X_ToIntVector3_Params
{
	struct FVector                                     V;                                                        // (CPF_Parm)
	struct FIntVector3                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX._Types_X.OnPriviledgeChecked
struct U_Types_X_OnPriviledgeChecked_Params
{
	class UPrivilegeCheck_X*                           PrivilegeCheck;                                           // (CPF_Parm)
};

// Function ProjectX._Types_X.KeyPressDelegate
struct U_Types_X_KeyPressDelegate_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ActorComponent_X.Reattach
struct UActorComponent_X_Reattach_Params
{
};

// Function ProjectX.ActorComponent_X.Tick
struct UActorComponent_X_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.ActorComponent_X.Detached
struct UActorComponent_X_Detached_Params
{
};

// Function ProjectX.ActorComponent_X.Attached
struct UActorComponent_X_Attached_Params
{
};

// Function ProjectX.ActorComponent_X.BeginPlay
struct UActorComponent_X_BeginPlay_Params
{
};

// Function ProjectX.ExplosionComponent_X.ProcessHit
struct UExplosionComponent_X_ProcessHit_Params
{
	class AActor*                                      Victim;                                                   // (CPF_Parm)
	struct FVector                                     HitLocation;                                              // (CPF_Parm)
	struct FTraceHitInfo                               ExtraHitInfo;                                             // (CPF_Parm)
	float                                              DamageScale;                                              // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.ExplosionComponent_X.Detached
struct UExplosionComponent_X_Detached_Params
{
};

// Function ProjectX.MICParamDispenserComponent_X.__MICParamDispenserComponent_X__Attached_1
struct UMICParamDispenserComponent_X___MICParamDispenserComponent_X__Attached_1_Params
{
	struct FFXAttachment                               A;                                                        // (CPF_Parm, CPF_Component, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.MICParamDispenserComponent_X.Attached
struct UMICParamDispenserComponent_X_Attached_Params
{
};

// Function ProjectX.MICParamDispenserComponent_X.SetLinearColorParameter
struct UMICParamDispenserComponent_X_SetLinearColorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FLinearColor                                Value;                                                    // (CPF_Parm)
};

// Function ProjectX.MICParamDispenserComponent_X.SetVectorParameter
struct UMICParamDispenserComponent_X_SetVectorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FVector                                     Value;                                                    // (CPF_Parm)
};

// Function ProjectX.MICParamDispenserComponent_X.SetFloatParameter
struct UMICParamDispenserComponent_X_SetFloatParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function ProjectX.MICParamDispenserComponent_X.SetNameParameter
struct UMICParamDispenserComponent_X_SetNameParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FName                                       Value;                                                    // (CPF_Parm)
};

// Function ProjectX.ShakeComponent_X.GetColorParameter
struct UShakeComponent_X_GetColorParameter_Params
{
	struct FName                                       InName;                                                   // (CPF_Const, CPF_Parm)
	struct FColor                                      OutColor;                                                 // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ShakeComponent_X.GetVectorParameter
struct UShakeComponent_X_GetVectorParameter_Params
{
	struct FName                                       InName;                                                   // (CPF_Const, CPF_Parm)
	struct FVector                                     OutVector;                                                // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ShakeComponent_X.GetFloatParameter
struct UShakeComponent_X_GetFloatParameter_Params
{
	struct FName                                       InName;                                                   // (CPF_Const, CPF_Parm)
	float                                              OutFloat;                                                 // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ShakeComponent_X.SetColorParameter
struct UShakeComponent_X_SetColorParameter_Params
{
	struct FName                                       ParameterName;                                            // (CPF_Parm)
	struct FColor                                      Param;                                                    // (CPF_Parm)
};

// Function ProjectX.ShakeComponent_X.SetVectorRandParameter
struct UShakeComponent_X_SetVectorRandParameter_Params
{
	struct FName                                       ParameterName;                                            // (CPF_Parm)
	struct FVector                                     Param;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FVector                                     ParamLow;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function ProjectX.ShakeComponent_X.SetVectorParameter
struct UShakeComponent_X_SetVectorParameter_Params
{
	struct FName                                       ParameterName;                                            // (CPF_Parm)
	struct FVector                                     Param;                                                    // (CPF_Parm)
};

// Function ProjectX.ShakeComponent_X.SetFloatRandParameter
struct UShakeComponent_X_SetFloatRandParameter_Params
{
	struct FName                                       ParameterName;                                            // (CPF_Parm)
	float                                              Param;                                                    // (CPF_Parm)
	float                                              ParamLow;                                                 // (CPF_Parm)
};

// Function ProjectX.ShakeComponent_X.SetFloatParameter
struct UShakeComponent_X_SetFloatParameter_Params
{
	struct FName                                       ParameterName;                                            // (CPF_Parm)
	float                                              Param;                                                    // (CPF_Parm)
};

// Function ProjectX.ShakeComponent_X.IsPlaying
struct UShakeComponent_X_IsPlaying_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ShakeComponent_X.StopShake
struct UShakeComponent_X_StopShake_Params
{
	float                                              InBlendOutTime;                                           // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.ShakeComponent_X.InitParams
struct UShakeComponent_X_InitParams_Params
{
};

// Function ProjectX.ShakeComponent_X.PlayShake
struct UShakeComponent_X_PlayShake_Params
{
};

// Function ProjectX.ShakeComponent_X.Detached
struct UShakeComponent_X_Detached_Params
{
};

// Function ProjectX.ShakeComponent_X.Attached
struct UShakeComponent_X_Attached_Params
{
};

// Function ProjectX.FXActor_X.Destroyed
struct AFXActor_X_Destroyed_Params
{
};

// Function ProjectX.FXActor_X.TickFX
struct AFXActor_X_TickFX_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.FXActor_X.OnToggle
struct AFXActor_X_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (CPF_Parm)
};

// Function ProjectX.FXActor_X.OnTriggerFXActor_X
struct AFXActor_X_OnTriggerFXActor_X_Params
{
	class USeqAct_TriggerFXActor_X*                    SeqAct;                                                   // (CPF_Parm)
};

// Function ProjectX.FXActor_X.Inherit
struct AFXActor_X_Inherit_Params
{
	class AFXActor_X*                                  Other;                                                    // (CPF_Parm)
};

// Function ProjectX.FXActor_X.CopyFrom
struct AFXActor_X_CopyFrom_Params
{
	class AFXActor_X*                                  Other;                                                    // (CPF_Parm)
};

// Function ProjectX.FXActor_X.ResetParticles
struct AFXActor_X_ResetParticles_Params
{
};

// Function ProjectX.FXActor_X.StopAllEffects
struct AFXActor_X_StopAllEffects_Params
{
};

// Function ProjectX.FXActor_X.DeactivateAndDestroy
struct AFXActor_X_DeactivateAndDestroy_Params
{
};

// Function ProjectX.FXActor_X.OnDetached
struct AFXActor_X_OnDetached_Params
{
	class UActorComponent*                             AC;                                                       // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.FXActor_X.DeactivateFXComponent
struct AFXActor_X_DeactivateFXComponent_Params
{
	class UActorComponent*                             AC;                                                       // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.FXActor_X.ActivateFXComponent
struct AFXActor_X_ActivateFXComponent_Params
{
	class UActorComponent*                             AC;                                                       // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.FXActor_X.OnAttached
struct AFXActor_X_OnAttached_Params
{
	class UActorComponent*                             AC;                                                       // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.FXActor_X.UpdateFXStates
struct AFXActor_X_UpdateFXStates_Params
{
};

// Function ProjectX.FXActor_X.IsLocallyControlled
struct AFXActor_X_IsLocallyControlled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.FXActor_X.ToggleState
struct AFXActor_X_ToggleState_Params
{
	class UFXActorEvent_X*                             NewState;                                                 // (CPF_Parm)
};

// Function ProjectX.FXActor_X.RemoveState
struct AFXActor_X_RemoveState_Params
{
	class UFXActorEvent_X*                             OldState;                                                 // (CPF_Parm)
};

// Function ProjectX.FXActor_X.AddState
struct AFXActor_X_AddState_Params
{
	class UFXActorEvent_X*                             NewState;                                                 // (CPF_Parm)
};

// Function ProjectX.FXActor_X.IsStateActive
struct AFXActor_X_IsStateActive_Params
{
	class UFXActorEvent_X*                             InState;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.FXActor_X.Deactivate
struct AFXActor_X_Deactivate_Params
{
};

// Function ProjectX.FXActor_X.Activate
struct AFXActor_X_Activate_Params
{
};

// Function ProjectX.FXActor_X.HandleParentStatePopped
struct AFXActor_X_HandleParentStatePopped_Params
{
	class AFXActor_X*                                  P;                                                        // (CPF_Parm)
	class UFXActorEvent_X*                             Event;                                                    // (CPF_Parm)
};

// Function ProjectX.FXActor_X.HandleParentStatePushed
struct AFXActor_X_HandleParentStatePushed_Params
{
	class AFXActor_X*                                  P;                                                        // (CPF_Parm)
	class UFXActorEvent_X*                             Event;                                                    // (CPF_Parm)
};

// Function ProjectX.FXActor_X.BindTo
struct AFXActor_X_BindTo_Params
{
	class AFXActor_X*                                  ParentFXActor;                                            // (CPF_Parm)
};

// Function ProjectX.FXActor_X.SetAttachmentActor
struct AFXActor_X_SetAttachmentActor_Params
{
	class AActor*                                      AttachToActor;                                            // (CPF_Parm)
};

// Function ProjectX.FXActor_X.PostBeginPlay
struct AFXActor_X_PostBeginPlay_Params
{
};

// Function ProjectX.FXActor_X.AllAttachments
struct AFXActor_X_AllAttachments_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm)
	class UActorComponent*                             OutComponent;                                             // (CPF_Parm, CPF_OutParm, CPF_EditInline)
	int                                                OutAttachmentIdx;                                         // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
};

// Function ProjectX.FXActor_X.GetComponentByName
struct AFXActor_X_GetComponentByName_Params
{
	class UClass*                                      ComponentClass;                                           // (CPF_Parm)
	struct FName                                       ComponentName;                                            // (CPF_Parm)
	class UActorComponent*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm, CPF_EditInline)
};

// Function ProjectX.FXActor_X.EventFXStatePopped
struct AFXActor_X_EventFXStatePopped_Params
{
	class AFXActor_X*                                  FXActor;                                                  // (CPF_Parm)
	class UFXActorEvent_X*                             Event;                                                    // (CPF_Parm)
};

// Function ProjectX.FXActor_X.EventFXStatePushed
struct AFXActor_X_EventFXStatePushed_Params
{
	class AFXActor_X*                                  FXActor;                                                  // (CPF_Parm)
	class UFXActorEvent_X*                             Event;                                                    // (CPF_Parm)
};

// Function ProjectX.ArchetypeSpawnPoint_X.OnSpawned
struct AArchetypeSpawnPoint_X_OnSpawned_Params
{
	class AActor*                                      Spawned;                                                  // (CPF_Parm)
};

// Function ProjectX.ArchetypeSpawnPoint_X.DoSpawn
struct AArchetypeSpawnPoint_X_DoSpawn_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ArchetypeSpawnPoint_X.OnToggle
struct AArchetypeSpawnPoint_X_OnToggle_Params
{
	class USeqAct_Toggle*                              Action;                                                   // (CPF_Parm)
};

// Function ProjectX.ArchetypeSpawnPoint_X.OnDestroy
struct AArchetypeSpawnPoint_X_OnDestroy_Params
{
	class USeqAct_Destroy*                             Action;                                                   // (CPF_Parm)
};

// Function ProjectX.ArchetypeSpawnPoint_X.PostBeginPlay
struct AArchetypeSpawnPoint_X_PostBeginPlay_Params
{
};

// Function ProjectX.ArchetypeSpawnPoint_X.EventSpawned
struct AArchetypeSpawnPoint_X_EventSpawned_Params
{
	class AArchetypeSpawnPoint_X*                      SpawnPoint;                                               // (CPF_Parm)
	class AActor*                                      Spawned;                                                  // (CPF_Parm)
};

// Function ProjectX.Aws4Signature_X.SignRequest
struct UAws4Signature_X_SignRequest_Params
{
	class UHttpRequestInterface*                       HTTPRequest;                                              // (CPF_Parm)
};

// Function ProjectX.TcpBeacon.OnDisconnected
struct UTcpBeacon_OnDisconnected_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.TcpBeacon.OnConnected
struct UTcpBeacon_OnConnected_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.TcpBeacon.OnConnectionRemoved
struct UTcpBeacon_OnConnectionRemoved_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.TcpBeacon.OnConnectionAdded
struct UTcpBeacon_OnConnectionAdded_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.TcpBeacon.GetConnection
struct UTcpBeacon_GetConnection_Params
{
	struct FString                                     Address;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	class UTcpConnection*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.TcpBeacon.Close
struct UTcpBeacon_Close_Params
{
};

// Function ProjectX.TcpBeacon.GetExternalHostAddress
struct UTcpBeacon_GetExternalHostAddress_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.TcpBeacon.GetLocalHostAddress
struct UTcpBeacon_GetLocalHostAddress_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.TcpBeacon.BeginListen
struct UTcpBeacon_BeginListen_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.TcpBeacon.BeginConnect
struct UTcpBeacon_BeginConnect_Params
{
	struct FString                                     Address;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	class UTcpConnection*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.TcpBeacon.EventDisconnected
struct UTcpBeacon_EventDisconnected_Params
{
	class UTcpBeacon*                                  Beacon;                                                   // (CPF_Parm, CPF_EditInline)
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.TcpBeacon.EventConnected
struct UTcpBeacon_EventConnected_Params
{
	class UTcpBeacon*                                  Beacon;                                                   // (CPF_Parm, CPF_EditInline)
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.TcpMessageBeacon.BroadcastMessage
struct UTcpMessageBeacon_BroadcastMessage_Params
{
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.TcpMessageBeacon.SendMessage
struct UTcpMessageBeacon_SendMessage_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.TcpMessageBeacon.CreateMessage
struct UTcpMessageBeacon_CreateMessage_Params
{
	class UClass*                                      MessageClass;                                             // (CPF_Parm)
	class UBeaconMessage_X*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function ProjectX.TcpMessageBeacon.RemoveMessageHandler
struct UTcpMessageBeacon_RemoveMessageHandler_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.TcpMessageBeacon.AddMessageHandler
struct UTcpMessageBeacon_AddMessageHandler_Params
{
	class UClass*                                      MessageClass;                                             // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.TcpMessageBeacon.MessageReceivedDelegate
struct UTcpMessageBeacon_MessageReceivedDelegate_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.BeaconMessage_X.Broadcast
struct UBeaconMessage_X_Broadcast_Params
{
	class UBeaconMessage_X*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.BeaconMessage_X.Send
struct UBeaconMessage_X_Send_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UBeaconMessage_X*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.BugReport_X.HandleHttpRequestComplete
struct UBugReport_X_HandleHttpRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      InHttpResponse;                                           // (CPF_Parm)
	bool                                               bDidSucceed;                                              // (CPF_Parm)
};

// Function ProjectX.BugReport_X.LogText
struct UBugReport_X_LogText_Params
{
	struct FString                                     Str;                                                      // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function ProjectX.BugReport_X.PDIReport
struct UBugReport_X_PDIReport_Params
{
};

// Function ProjectX.BugReport_X.CancelBugReport
struct UBugReport_X_CancelBugReport_Params
{
};

// Function ProjectX.BugReport_X.SubmitBugReport
struct UBugReport_X_SubmitBugReport_Params
{
	struct FString                                     Title;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Description;                                              // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Email;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.BugReport_X.StartBugReport
struct UBugReport_X_StartBugReport_Params
{
};

// Function ProjectX.BugReport_X.StaticSubmitBugReport
struct UBugReport_X_StaticSubmitBugReport_Params
{
	struct FString                                     Title;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.BugReport_X.CreateBugReport
struct UBugReport_X_CreateBugReport_Params
{
	class UBugReport_X*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CachedWebData_X.GetText
struct UCachedWebData_X_GetText_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.CachedWebData_X.UpdateData
struct UCachedWebData_X_UpdateData_Params
{
	TArray<unsigned char>                              NewData;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     NewETag;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.Camera_X.OnViewTargetChanged
struct ACamera_X_OnViewTargetChanged_Params
{
};

// Function ProjectX.Camera_X.SetViewTarget
struct ACamera_X_SetViewTarget_Params
{
	class AActor*                                      NewViewTarget;                                            // (CPF_Parm)
	struct FViewTargetTransitionParams                 TransitionParams;                                         // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.Camera_X.IsTransitioning
struct ACamera_X_IsTransitioning_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Camera_X.HandleBlenderStateChanged
struct ACamera_X_HandleBlenderStateChanged_Params
{
	class UCameraStateBlender_X*                       CameraBlender;                                            // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.Camera_X.SnapTransition
struct ACamera_X_SnapTransition_Params
{
};

// Function ProjectX.Camera_X.PrintDebugInfo
struct ACamera_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.Camera_X.ApplyCameraModifiers
struct ACamera_X_ApplyCameraModifiers_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FTPOV                                       OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.Camera_X.CameraTrace
struct ACamera_X_CameraTrace_Params
{
	struct FVector                                     End;                                                      // (CPF_Parm)
	struct FVector                                     Start;                                                    // (CPF_Parm)
	struct FVector                                     Extent;                                                   // (CPF_Parm)
	struct FVector                                     HitLoc;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	class AActor*                                      HitActor;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Camera_X.InstanceCameraState
struct ACamera_X_InstanceCameraState_Params
{
	class UCameraState_X*                              Archetype;                                                // (CPF_Parm)
	class UCameraState_X*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Camera_X.ModifyPostProcessSettings
struct ACamera_X_ModifyPostProcessSettings_Params
{
	struct FPostProcessSettings                        PP;                                                       // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.Camera_X.ProcessViewRotation
struct ACamera_X_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FRotator                                    OutViewRotation;                                          // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    OutDeltaRot;                                              // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.Camera_X.PostProcessCameraState
struct ACamera_X_PostProcessCameraState_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.Camera_X.ProcessCameraState
struct ACamera_X_ProcessCameraState_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.Camera_X.CheckViewTarget
struct ACamera_X_CheckViewTarget_Params
{
	struct FTViewTarget                                VT;                                                       // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.Camera_X.CopyFade
struct ACamera_X_CopyFade_Params
{
	class ACamera_X*                                   Other;                                                    // (CPF_Parm)
};

// Function ProjectX.Camera_X.SetCameraFade
struct ACamera_X_SetCameraFade_Params
{
	bool                                               bNewEnableFading;                                         // (CPF_Parm)
	struct FColor                                      NewFadeColor;                                             // (CPF_OptionalParm, CPF_Parm)
	struct FVector2D                                   NewFadeAlpha;                                             // (CPF_OptionalParm, CPF_Parm)
	float                                              NewFadeTime;                                              // (CPF_OptionalParm, CPF_Parm)
	bool                                               bNewFadeAudio;                                            // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.Camera_X.UpdateFade
struct ACamera_X_UpdateFade_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.Camera_X.UpdateCamera
struct ACamera_X_UpdateCamera_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.Camera_X.ClampPOV
struct ACamera_X_ClampPOV_Params
{
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.Camera_X.RemoveRoll
struct ACamera_X_RemoveRoll_Params
{
	struct FRotator                                    InRot;                                                    // (CPF_Parm)
	struct FRotator                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Camera_X.GetCameraState
struct ACamera_X_GetCameraState_Params
{
	class UCameraState_X*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Camera_X.SelectCameraState
struct ACamera_X_SelectCameraState_Params
{
	class UCameraState_X*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Camera_X.UpdateCameraState
struct ACamera_X_UpdateCameraState_Params
{
};

// Function ProjectX.Camera_X.UpdateCameraKnocks
struct ACamera_X_UpdateCameraKnocks_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.Camera_X.AddRotationKnock
struct ACamera_X_AddRotationKnock_Params
{
	struct FRotationCameraKnock                        Knock;                                                    // (CPF_Parm)
	float                                              Scale;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.Camera_X.AddLocationKnock
struct ACamera_X_AddLocationKnock_Params
{
	struct FLocationCameraKnock                        Knock;                                                    // (CPF_Parm)
	float                                              Scale;                                                    // (CPF_OptionalParm, CPF_Parm)
	struct FRotator                                    Transform;                                                // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.Camera_X.InstanceCameraStates
struct ACamera_X_InstanceCameraStates_Params
{
};

// Function ProjectX.Camera_X.InitializeFor
struct ACamera_X_InitializeFor_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
};

// Function ProjectX.Camera_X.ModifyCameraShakeScale
struct ACamera_X_ModifyCameraShakeScale_Params
{
	class UCameraShake*                                Shake;                                                    // (CPF_Parm)
	float                                              NewScale;                                                 // (CPF_Parm)
};

// Function ProjectX.Camera_X.OnLoadingMovieClosesd
struct ACamera_X_OnLoadingMovieClosesd_Params
{
};

// Function ProjectX.Camera_X.PostBeginPlay
struct ACamera_X_PostBeginPlay_Params
{
};

// Function ProjectX.Camera_X.InterpVector
struct ACamera_X_InterpVector_Params
{
	struct FVector                                     OldValue;                                                 // (CPF_Parm)
	struct FVector                                     NewValue;                                                 // (CPF_Parm)
	struct FVectorInterpRate                           Rate;                                                     // (CPF_Parm)
	struct FRotator                                    Orientation;                                              // (CPF_Parm)
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FVector                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Camera_X.FinalizeOrientation
struct ACamera_X_FinalizeOrientation_Params
{
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.Camera_X.BlendCameraOrientations
struct ACamera_X_BlendCameraOrientations_Params
{
	struct FCameraOrientation                          A;                                                        // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FCameraOrientation                          B;                                                        // (CPF_Const, CPF_Parm, CPF_OutParm)
	float                                              Alpha;                                                    // (CPF_Parm)
	struct FCameraOrientation                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Camera_X.EventCameraStateChanged
struct ACamera_X_EventCameraStateChanged_Params
{
	class ACamera_X*                                   Camera;                                                   // (CPF_Parm)
	class UCameraState_X*                              CameraState;                                              // (CPF_Parm)
};

// Function ProjectX.CanvasTexture_X.Draw
struct UCanvasTexture_X_Draw_Params
{
	class UCanvas*                                     C;                                                        // (CPF_Parm)
};

// Function ProjectX.CanvasTextureComponent_X.OnDraw
struct UCanvasTextureComponent_X_OnDraw_Params
{
	class UCanvas*                                     C;                                                        // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.ClientSetSeasonReward
struct APlayerController_X_ClientSetSeasonReward_Params
{
	struct FPlayerSeasonRewardProgress                 Reward;                                                   // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.ServerUpdateCustomMatchSettings
struct APlayerController_X_ServerUpdateCustomMatchSettings_Params
{
	struct FCustomMatchSettings                        Settings;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PlayerController_X.ServerSetParty
struct APlayerController_X_ServerSetParty_Params
{
	struct FUniqueNetId                                MemberId;                                                 // (CPF_Parm)
	struct FUniqueNetId                                NewPartyID;                                               // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.DisconnectSplitScreenPlayer
struct APlayerController_X_DisconnectSplitScreenPlayer_Params
{
	class UPlayer*                                     P;                                                        // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.ServerDestroy
struct APlayerController_X_ServerDestroy_Params
{
};

// Function ProjectX.PlayerController_X.KickPlayerForReason
struct APlayerController_X_KickPlayerForReason_Params
{
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Title;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PlayerController_X.ClientNetLag
struct APlayerController_X_ClientNetLag_Params
{
	float                                              PktLag;                                                   // (CPF_Parm)
	float                                              PktVariance;                                              // (CPF_Parm)
	float                                              PktLoss;                                                  // (CPF_Parm)
	float                                              PktDup;                                                   // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.ServerNetLag
struct APlayerController_X_ServerNetLag_Params
{
	float                                              PktLag;                                                   // (CPF_Parm)
	float                                              PktVariance;                                              // (CPF_Parm)
	float                                              PktLoss;                                                  // (CPF_Parm)
	float                                              PktDup;                                                   // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.Pause
struct APlayerController_X_Pause_Params
{
};

// Function ProjectX.PlayerController_X.RemoveOptionFromLastURL
struct APlayerController_X_RemoveOptionFromLastURL_Params
{
	struct FString                                     OptName;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PlayerController_X.PrintDebugInfo
struct APlayerController_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.ClearOnlineDelegates
struct APlayerController_X_ClearOnlineDelegates_Params
{
};

// Function ProjectX.PlayerController_X.RegisterOnlineDelegates
struct APlayerController_X_RegisterOnlineDelegates_Params
{
};

// Function ProjectX.PlayerController_X.NotifyTakeHit_X
struct APlayerController_X_NotifyTakeHit_X_Params
{
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.PlayerController_X.ClientPlayForceFeedbackWaveform
struct APlayerController_X_ClientPlayForceFeedbackWaveform_Params
{
	class UForceFeedbackWaveform*                      FFWaveform;                                               // (CPF_Parm)
	class AActor*                                      FFWaveformInstigator;                                     // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.PlayerController_X.ClientCommand
struct APlayerController_X_ClientCommand_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function ProjectX.PlayerController_X.ServerCommand
struct APlayerController_X_ServerCommand_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function ProjectX.PlayerController_X.PawnDied
struct APlayerController_X_PawnDied_Params
{
	class APawn*                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.UnPossess
struct APlayerController_X_UnPossess_Params
{
};

// Function ProjectX.PlayerController_X.Possess
struct APlayerController_X_Possess_Params
{
	class APawn*                                       aPawn;                                                    // (CPF_Parm)
	bool                                               bVehicleTransition;                                       // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.OnPawnChange
struct APlayerController_X_OnPawnChange_Params
{
	class APawn*                                       OldPawn;                                                  // (CPF_Parm)
	class APawn*                                       NewPawn;                                                  // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.PawnReferenceUpdated
struct APlayerController_X_PawnReferenceUpdated_Params
{
};

// Function ProjectX.PlayerController_X.ClientRestart
struct APlayerController_X_ClientRestart_Params
{
	class APawn*                                       NewPawn;                                                  // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.GivePawn
struct APlayerController_X_GivePawn_Params
{
	class APawn*                                       NewPawn;                                                  // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.InitInputSystem
struct APlayerController_X_InitInputSystem_Params
{
};

// Function ProjectX.PlayerController_X.GetCameraArchetype
struct APlayerController_X_GetCameraArchetype_Params
{
	class ACamera*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlayerController_X.SpawnPlayerCamera
struct APlayerController_X_SpawnPlayerCamera_Params
{
};

// Function ProjectX.PlayerController_X.OnCameraChanged
struct APlayerController_X_OnCameraChanged_Params
{
	class ACamera*                                     InCamera;                                                 // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.AddCheats
struct APlayerController_X_AddCheats_Params
{
	bool                                               bForce;                                                   // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.PlayerController_X.GetOnlineAccount
struct APlayerController_X_GetOnlineAccount_Params
{
	class UOnlineGameAccount_X*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlayerController_X.GetOnlinePlayer
struct APlayerController_X_GetOnlinePlayer_Params
{
	class UOnlinePlayer_X*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlayerController_X.OnReceivedPRI
struct APlayerController_X_OnReceivedPRI_Params
{
};

// Function ProjectX.PlayerController_X.InitPlayerReplicationInfo
struct APlayerController_X_InitPlayerReplicationInfo_Params
{
};

// Function ProjectX.PlayerController_X.Destroyed
struct APlayerController_X_Destroyed_Params
{
};

// Function ProjectX.PlayerController_X.OnExternalUIChanged
struct APlayerController_X_OnExternalUIChanged_Params
{
	bool                                               bIsOpening;                                               // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.SetPaused
struct APlayerController_X_SetPaused_Params
{
	bool                                               bPaused;                                                  // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.ReceivedPlayer
struct APlayerController_X_ReceivedPlayer_Params
{
};

// Function ProjectX.PlayerController_X.GetOnlineGame
struct APlayerController_X_GetOnlineGame_Params
{
	class UOnlineGame_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlayerController_X.GetOnlineGameHost
struct APlayerController_X_GetOnlineGameHost_Params
{
	TScriptInterface<class UIOnlineGameHost_X>         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlayerController_X.GetOnlineGameLanServer
struct APlayerController_X_GetOnlineGameLanServer_Params
{
	class UOnlineGameLanServer_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlayerController_X.GetOnlineGameDedicatedServer
struct APlayerController_X_GetOnlineGameDedicatedServer_Params
{
	class UOnlineGameDedicatedServer_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlayerController_X.SpawnDefaultHUD
struct APlayerController_X_SpawnDefaultHUD_Params
{
};

// Function ProjectX.PlayerController_X.SetPRI
struct APlayerController_X_SetPRI_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.ReplicatedEvent
struct APlayerController_X_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.EventPlayerKicked
struct APlayerController_X_EventPlayerKicked_Params
{
	class APlayerController_X*                         PC;                                                       // (CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PlayerController_X.EventPlayerCameraChange
struct APlayerController_X_EventPlayerCameraChange_Params
{
	class APlayerController_X*                         PC;                                                       // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.EventDestroyed
struct APlayerController_X_EventDestroyed_Params
{
	class APlayerController_X*                         PC;                                                       // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.EventReceivedPlayer
struct APlayerController_X_EventReceivedPlayer_Params
{
	class APlayerController_X*                         PC;                                                       // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.EventPawnChange
struct APlayerController_X_EventPawnChange_Params
{
	class APlayerController_X*                         PC;                                                       // (CPF_Parm)
	class APawn*                                       OldPawn;                                                  // (CPF_Parm)
	class APawn*                                       NewPawn;                                                  // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.EventReceivedPRI
struct APlayerController_X_EventReceivedPRI_Params
{
	class APlayerController_X*                         PC;                                                       // (CPF_Parm)
};

// Function ProjectX.CheatManager_X.GetErrorArray
struct UCheatManager_X_GetErrorArray_Params
{
	struct FString                                     Error1;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Error2;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Error3;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.CheatManager_X.SetUnderMaintenance
struct UCheatManager_X_SetUnderMaintenance_Params
{
	bool                                               bUnderMaintenance;                                        // (CPF_Parm)
};

// Function ProjectX.CheatManager_X.CreateCheatObjects
struct UCheatManager_X_CreateCheatObjects_Params
{
	TArray<class UObject*>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.CheatManager_X.LoadPsynetStaticData
struct UCheatManager_X_LoadPsynetStaticData_Params
{
	struct FString                                     Platform;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Language;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.CheatManager_X.HandleImageDownloaded
struct UCheatManager_X_HandleImageDownloaded_Params
{
	class UOnlineImageDownloaderWeb_X*                 Downloader;                                               // (CPF_Parm)
	struct FDownloadedImage                            Image;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.CheatManager_X.DownloadImage
struct UCheatManager_X_DownloadImage_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.CheatManager_X.LoadKismetLevel
struct UCheatManager_X_LoadKismetLevel_Params
{
	struct FName                                       LeveFileName;                                             // (CPF_Parm)
};

// Function ProjectX.CheatManager_X.DrawBulletContacts
struct UCheatManager_X_DrawBulletContacts_Params
{
	float                                              Lifetime;                                                 // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.CheatManager_X.PrintReproPhysics
struct UCheatManager_X_PrintReproPhysics_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	class AActor*                                      A;                                                        // (CPF_Parm)
};

// Function ProjectX.CheatManager_X.ReproPhysics
struct UCheatManager_X_ReproPhysics_Params
{
	class AActor*                                      A;                                                        // (CPF_Parm)
	float                                              LX;                                                       // (CPF_Parm)
	float                                              LY;                                                       // (CPF_Parm)
	float                                              LZ;                                                       // (CPF_Parm)
	float                                              RX;                                                       // (CPF_Parm)
	float                                              RY;                                                       // (CPF_Parm)
	float                                              RZ;                                                       // (CPF_Parm)
	float                                              RW;                                                       // (CPF_Parm)
	float                                              VX;                                                       // (CPF_Parm)
	float                                              VY;                                                       // (CPF_Parm)
	float                                              VZ;                                                       // (CPF_Parm)
};

// Function ProjectX.CheatManager_X.DisableCCD
struct UCheatManager_X_DisableCCD_Params
{
};

// Function ProjectX.CheatManager_X.SimulateInputKey
struct UCheatManager_X_SimulateInputKey_Params
{
	struct FName                                       KeyName;                                                  // (CPF_Parm)
};

// Function ProjectX.CheatManager_X.SetNetServerMaxTickRate
struct UCheatManager_X_SetNetServerMaxTickRate_Params
{
	float                                              Rate;                                                     // (CPF_Parm)
};

// Function ProjectX.CheatManager_X.ListVisiblePrimitives
struct UCheatManager_X_ListVisiblePrimitives_Params
{
};

// Function ProjectX.CheatManager_X.HideVisiblePrimitives
struct UCheatManager_X_HideVisiblePrimitives_Params
{
	struct FString                                     NameMatch;                                                // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     NameIgnore;                                               // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.CheatManager_X.ToggleReplicateVoiceToSelf
struct UCheatManager_X_ToggleReplicateVoiceToSelf_Params
{
};

// Function ProjectX.CheatManager_X.ToggleReplicateVoiceToSender
struct UCheatManager_X_ToggleReplicateVoiceToSender_Params
{
};

// Function ProjectX.CheatManager_X.EventDelegateTest
struct UCheatManager_X_EventDelegateTest_Params
{
};

// Function ProjectX.Compression_X.Uncompress
struct UCompression_X_Uncompress_Params
{
	TArray<unsigned char>                              Compressed;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<unsigned char>                              Uncompressed;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Compression_X.Compress
struct UCompression_X_Compress_Params
{
	TArray<unsigned char>                              Uncompressed;                                             // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<unsigned char>                              Compressed;                                               // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ControlPreset_X.GetGamepadBindings
struct UControlPreset_X_GetGamepadBindings_Params
{
	TArray<struct FPlayerBinding>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.ControlPreset_X.GetPCBindings
struct UControlPreset_X_GetPCBindings_Params
{
	TArray<struct FPlayerBinding>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.ControlPreset_X.GetDefaultGamepadBindings
struct UControlPreset_X_GetDefaultGamepadBindings_Params
{
	TArray<struct FPlayerBinding>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.ControlPreset_X.GetDefaultPCBindings
struct UControlPreset_X_GetDefaultPCBindings_Params
{
	TArray<struct FPlayerBinding>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.CRC_X.GetStringCRC
struct UCRC_X_GetStringCRC_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Seed;                                                     // (CPF_OptionalParm, CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CycleLog_X.AllLogs
struct UCycleLog_X_AllLogs_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.DamageComponent_X.Reset
struct UDamageComponent_X_Reset_Params
{
};

// Function ProjectX.DamageComponent_X.CalculateDamage
struct UDamageComponent_X_CalculateDamage_Params
{
	class AActor*                                      Victim;                                                   // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DamageComponent_X.ApplyDamage
struct UDamageComponent_X_ApplyDamage_Params
{
	class AActor*                                      Victim;                                                   // (CPF_Parm)
	bool                                               bManualReset;                                             // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.DamageComponent_X.SetImpact
struct UDamageComponent_X_SetImpact_Params
{
	struct FImpactInfo                                 Impact;                                                   // (CPF_Parm)
	class UDamageComponent_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.DamageComponent_X.SetHitInfo
struct UDamageComponent_X_SetHitInfo_Params
{
	struct FTraceHitInfo                               InHitInfo;                                                // (CPF_Parm)
	class UDamageComponent_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.DamageComponent_X.ScaleDamage
struct UDamageComponent_X_ScaleDamage_Params
{
	float                                              InScale;                                                  // (CPF_Parm)
	class UDamageComponent_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.DamageComponent_X.SetMomentumDir
struct UDamageComponent_X_SetMomentumDir_Params
{
	struct FVector                                     InMomentumDir;                                            // (CPF_Parm)
	class UDamageComponent_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.DamageComponent_X.SetLocation
struct UDamageComponent_X_SetLocation_Params
{
	struct FVector                                     InLocation;                                               // (CPF_Parm)
	class UDamageComponent_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.DamageComponent_X.SetSource
struct UDamageComponent_X_SetSource_Params
{
	class AActor*                                      InSource;                                                 // (CPF_Parm)
	class UDamageComponent_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.DamageComponent_X.InitSource
struct UDamageComponent_X_InitSource_Params
{
};

// Function ProjectX.DamageComponent_X.GetArchetype
struct UDamageComponent_X_GetArchetype_Params
{
	class UDamageComponent_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.DemoRecDriverInterface_X.DemoLog
struct UDemoRecDriverInterface_X_DemoLog_Params
{
	class UObject*                                     context;                                                  // (CPF_Parm)
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function ProjectX.DemoRecDriverInterface_X.GetCurrentFrame
struct UDemoRecDriverInterface_X_GetCurrentFrame_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DemoRecDriverInterface_X.DelayedAdvancePlayback
struct UDemoRecDriverInterface_X_DelayedAdvancePlayback_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm)
};

// Function ProjectX.DemoRecDriverInterface_X.TogglePause
struct UDemoRecDriverInterface_X_TogglePause_Params
{
};

// Function ProjectX.DemoRecDriverInterface_X.RestartPlayback
struct UDemoRecDriverInterface_X_RestartPlayback_Params
{
};

// Function ProjectX.DemoRecDriverInterface_X.SetPlaybackSpeed
struct UDemoRecDriverInterface_X_SetPlaybackSpeed_Params
{
	float                                              Speed;                                                    // (CPF_Parm)
};

// Function ProjectX.DemoRecDriverInterface_X.GetTime
struct UDemoRecDriverInterface_X_GetTime_Params
{
	int                                                ForFrameNum;                                              // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DemoRecDriverInterface_X.GetTimelinePoint
struct UDemoRecDriverInterface_X_GetTimelinePoint_Params
{
	int                                                ForFrameNum;                                              // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DemoRecDriverInterface_X.GetTimelineFrameNum
struct UDemoRecDriverInterface_X_GetTimelineFrameNum_Params
{
	float                                              TimelinePoint;                                            // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DemoRecDriverInterface_X.GetFrameNum
struct UDemoRecDriverInterface_X_GetFrameNum_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DemoRecDriverInterface_X.AdvancePlayback
struct UDemoRecDriverInterface_X_AdvancePlayback_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm)
};

// Function ProjectX.DemoRecDriverInterface_X.SkipToTimelinePoint
struct UDemoRecDriverInterface_X_SkipToTimelinePoint_Params
{
	float                                              Percentage;                                               // (CPF_Parm)
};

// Function ProjectX.DemoRecDriverInterface_X.SkipToFrameNum
struct UDemoRecDriverInterface_X_SkipToFrameNum_Params
{
	int                                                FrameNum;                                                 // (CPF_Parm)
};

// Function ProjectX.DemoRecDriverInterface_X.StepFrame
struct UDemoRecDriverInterface_X_StepFrame_Params
{
};

// Function ProjectX.DemoRecDriverInterface_X.ResumePlayback
struct UDemoRecDriverInterface_X_ResumePlayback_Params
{
};

// Function ProjectX.DemoRecDriverInterface_X.PausePlayback
struct UDemoRecDriverInterface_X_PausePlayback_Params
{
};

// Function ProjectX.DemoRecDriverInterface_X.ResumeRecording
struct UDemoRecDriverInterface_X_ResumeRecording_Params
{
};

// Function ProjectX.DemoRecDriverInterface_X.PauseRecording
struct UDemoRecDriverInterface_X_PauseRecording_Params
{
};

// Function ProjectX.DemoRecDriverInterface_X.OnInit
struct UDemoRecDriverInterface_X_OnInit_Params
{
};

// Function ProjectX.EffectsMap_X.GetEffects
struct UEffectsMap_X_GetEffects_Params
{
	class UPhysicalMaterial*                           PhysMat;                                                  // (CPF_Parm)
	struct FEffectsMapping                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.EngineShare_X.PrintDebugInfo
struct UEngineShare_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.EngineShare_X.GetRegionString
struct UEngineShare_X_GetRegionString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.EngineShare_X.GetPlatformString
struct UEngineShare_X_GetPlatformString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.EngineShare_X.Crash
struct UEngineShare_X_Crash_Params
{
};

// Function ProjectX.EngineShare_X.ParseCommandlineString
struct UEngineShare_X_ParseCommandlineString_Params
{
	struct FString                                     Param;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     OutValue;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.EngineShare_X.ParseCommandlineQWORD
struct UEngineShare_X_ParseCommandlineQWORD_Params
{
	struct FString                                     Param;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.EngineShare_X.ParseCommandlineFloat
struct UEngineShare_X_ParseCommandlineFloat_Params
{
	struct FString                                     Param;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	float                                              OutValue;                                                 // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.EngineShare_X.ParseCommandlineInt
struct UEngineShare_X_ParseCommandlineInt_Params
{
	struct FString                                     Param;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	int                                                OutValue;                                                 // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.EngineShare_X.ParseCommandlineParam
struct UEngineShare_X_ParseCommandlineParam_Params
{
	struct FString                                     Param;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.EngineShare_X.InitOnlineGame
struct UEngineShare_X_InitOnlineGame_Params
{
	class UOnlineSubsystem*                            NewOnlineSubsystem;                                       // (CPF_Parm)
};

// Function ProjectX.EngineShare_X.IsLanServer
struct UEngineShare_X_IsLanServer_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.EngineShare_X.IsDedicatedServer
struct UEngineShare_X_IsDedicatedServer_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.EngineShare_X.EventPostLoadMap
struct UEngineShare_X_EventPostLoadMap_Params
{
};

// Function ProjectX.EngineShare_X.EventPreLoadMap
struct UEngineShare_X_EventPreLoadMap_Params
{
	struct FString                                     MapName;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.EngineShare_X.EventOnlineGameInitialized
struct UEngineShare_X_EventOnlineGameInitialized_Params
{
};

// Function ProjectX.EngineShare_X.EventPostScriptsReloaded
struct UEngineShare_X_EventPostScriptsReloaded_Params
{
};

// Function ProjectX.EngineShare_X.EventPreScriptsReloaded
struct UEngineShare_X_EventPreScriptsReloaded_Params
{
};

// Function ProjectX.EngineShare_X.EventLoadingMovieClosed
struct UEngineShare_X_EventLoadingMovieClosed_Params
{
};

// Function ProjectX.EngineShare_X.EventPreExit
struct UEngineShare_X_EventPreExit_Params
{
};

// Function ProjectX.Errors_X.GetResponseError
struct UErrors_X_GetResponseError_Params
{
	struct FString                                     Exception;                                                // (CPF_Parm, CPF_NeedCtorLink)
	class UErrorType*                                  OutType;                                                  // (CPF_Parm, CPF_OutParm)
	int                                                OutCode;                                                  // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.EventRecorder_X.MetricsFlood
struct UEventRecorder_X_MetricsFlood_Params
{
	struct FString                                     LastEventName;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.EventRecorder_X.SetLevelSessionID
struct UEventRecorder_X_SetLevelSessionID_Params
{
	struct FGuid                                       Id;                                                       // (CPF_Parm)
};

// Function ProjectX.EventRecorder_X.Send
struct UEventRecorder_X_Send_Params
{
};

// Function ProjectX.EventRecorder_X.RecordEvent
struct UEventRecorder_X_RecordEvent_Params
{
	struct FString                                     Category;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FName                                       Event;                                                    // (CPF_Parm)
	struct FString                                     Data;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.EventRecorder_X.RecordFunction
struct UEventRecorder_X_RecordFunction_Params
{
	struct FString                                     Category;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.EventRecorderGroup_X.VectorToString
struct UEventRecorderGroup_X_VectorToString_Params
{
	struct FVector                                     V;                                                        // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.EventRecorderGroup_X.RecordFunction
struct UEventRecorderGroup_X_RecordFunction_Params
{
};

// Function ProjectX.EventRecorderGroup_X.GetEventRecorder
struct UEventRecorderGroup_X_GetEventRecorder_Params
{
	class UEventRecorder_X*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.MetricsGroup_X.GetEventRecorder
struct UMetricsGroup_X_GetEventRecorder_Params
{
	class UEventRecorder_X*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.FakeData_X.RandomizeValues
struct UFakeData_X_RandomizeValues_Params
{
	class UObject*                                     Target;                                                   // (CPF_Parm)
	int                                                InRandomSeed;                                             // (CPF_OptionalParm, CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.FakeData_X.RandomizeFakeData
struct UFakeData_X_RandomizeFakeData_Params
{
	class UFakeData_X*                                 FakeData;                                                 // (CPF_Parm)
	int                                                InRandomSeed;                                             // (CPF_OptionalParm, CPF_Parm)
	class UFakeData_X*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.FakeData_X.GenerateFakeData
struct UFakeData_X_GenerateFakeData_Params
{
	int                                                InRandomSeed;                                             // (CPF_OptionalParm, CPF_Parm)
	class UFakeData_X*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameEngine_X.PrintDebugInfo
struct UGameEngine_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.GameEngine_X.OnlineSubsystemInitialized
struct UGameEngine_X_OnlineSubsystemInitialized_Params
{
};

// Function ProjectX.GameInfo_X.PrintDebugInfo
struct AGameInfo_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.GameInfo_X.ClientMapLoadFail
struct AGameInfo_X_ClientMapLoadFail_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     MapName;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GameInfo_X.SetPaused
struct AGameInfo_X_SetPaused_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
	bool                                               bPause;                                                   // (CPF_Parm)
};

// Function ProjectX.GameInfo_X.TogglePause
struct AGameInfo_X_TogglePause_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
};

// Function ProjectX.GameInfo_X.IsPaused
struct AGameInfo_X_IsPaused_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameInfo_X.GetOnlineGameHost
struct AGameInfo_X_GetOnlineGameHost_Params
{
	TScriptInterface<class UIOnlineGameHost_X>         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameInfo_X.GetOnlineGameLanServer
struct AGameInfo_X_GetOnlineGameLanServer_Params
{
	class UOnlineGameLanServer_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameInfo_X.GetOnlineGameDedicatedServer
struct AGameInfo_X_GetOnlineGameDedicatedServer_Params
{
	class UOnlineGameDedicatedServer_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameInfo_X.GetOnlineGame
struct AGameInfo_X_GetOnlineGame_Params
{
	class UOnlineGame_Base_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameInfo_X.EndOnlineGame
struct AGameInfo_X_EndOnlineGame_Params
{
};

// Function ProjectX.GameInfo_X.Logout
struct AGameInfo_X_Logout_Params
{
	class AController*                                 Exiting;                                                  // (CPF_Parm)
};

// Function ProjectX.GameInfo_X.GenericPlayerInitialization
struct AGameInfo_X_GenericPlayerInitialization_Params
{
	class AController*                                 C;                                                        // (CPF_Parm)
};

// Function ProjectX.GameInfo_X.DisconnectExistingPlayer
struct AGameInfo_X_DisconnectExistingPlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function ProjectX.GameInfo_X.Login
struct AGameInfo_X_Login_Params
{
	struct FString                                     Portal;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                                 // (CPF_Const, CPF_Parm)
	struct FString                                     ErrorMessage;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameInfo_X.PreLogin
struct AGameInfo_X_PreLogin_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Address;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                                 // (CPF_Const, CPF_Parm)
	bool                                               bSupportsAuth;                                            // (CPF_Parm)
	struct FString                                     ErrorMessage;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.GameInfo_X.UpdateGameSettingsCounts
struct AGameInfo_X_UpdateGameSettingsCounts_Params
{
};

// Function ProjectX.GameInfo_X.PostBeginPlay
struct AGameInfo_X_PostBeginPlay_Params
{
};

// Function ProjectX.GameInfo_X.ProcessServerLogin
struct AGameInfo_X_ProcessServerLogin_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameInfo_X.RegisterServer
struct AGameInfo_X_RegisterServer_Params
{
};

// Function ProjectX.GameInfo_X.SpawnDefaultPawnFor
struct AGameInfo_X_SpawnDefaultPawnFor_Params
{
	class AController*                                 NewPlayer;                                                // (CPF_Parm)
	class ANavigationPoint*                            StartSpot;                                                // (CPF_Parm)
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameInfo_X.Killed_X
struct AGameInfo_X_Killed_X_Params
{
	class AController*                                 Killer;                                                   // (CPF_Parm)
	class AController*                                 KilledPlayer;                                             // (CPF_Parm)
	class APawn*                                       KilledPawn;                                               // (CPF_Parm)
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.GameInfo_X.AdjustDamage_X
struct AGameInfo_X_AdjustDamage_X_Params
{
	class APawn*                                       injured;                                                  // (CPF_Parm)
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.GameInfo_X.PreBeginPlay
struct AGameInfo_X_PreBeginPlay_Params
{
};

// Function ProjectX.GameInfo_X.SpawnPlayerController
struct AGameInfo_X_SpawnPlayerController_Params
{
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm)
	struct FRotator                                    SpawnRotation;                                            // (CPF_Parm)
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameInfo_X.SetGameType
struct AGameInfo_X_SetGameType_Params
{
	struct FString                                     MapName;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Portal;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class UClass*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameInfo_X.GetDefaultGameClassPath
struct AGameInfo_X_GetDefaultGameClassPath_Params
{
	struct FString                                     MapName;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Portal;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.GameInfo_X.PDI
struct AGameInfo_X_PDI_Params
{
	class UClass*                                      ActorClass;                                               // (CPF_Parm)
	bool                                               bOnlybDebug;                                              // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.GameInfo_X.InitGame
struct AGameInfo_X_InitGame_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ErrorMessage;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.GameInfo_X.EventInit
struct AGameInfo_X_EventInit_Params
{
	class AGameInfo_X*                                 G;                                                        // (CPF_Parm)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GameInfo_X.EventSpawned
struct AGameInfo_X_EventSpawned_Params
{
	class AGameInfo_X*                                 G;                                                        // (CPF_Parm)
};

// Function ProjectX.GameSetting_X.PrintDebugInfo
struct UGameSetting_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.GameSetting_X.IsSetting
struct UGameSetting_X_IsSetting_Params
{
	struct FName                                       SettingName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameSetting_X.AddGameSettingToList
struct UGameSetting_X_AddGameSettingToList_Params
{
	class UOnlineGameSettings_X*                       OnlineGameSettings;                                       // (CPF_Parm)
	TArray<class UGameSetting_X*>                      GameSettingsArray;                                        // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.GameSettingCategory_X.PrintDebugInfo
struct UGameSettingCategory_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.GameSettingCategory_X.GetGameSettingIndex
struct UGameSettingCategory_X_GetGameSettingIndex_Params
{
	struct FName                                       SettingName;                                              // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameSettingCategory_X.HasSetting
struct UGameSettingCategory_X_HasSetting_Params
{
	struct FName                                       SettingName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameSettingCategory_X.GetSelectedGameSettings
struct UGameSettingCategory_X_GetSelectedGameSettings_Params
{
	TArray<class UGameSetting_X*>                      SelectedGameSettings;                                     // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.GameSettingCategory_X.GetFirstSelectedGameSetting
struct UGameSettingCategory_X_GetFirstSelectedGameSetting_Params
{
	class UGameSetting_X*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameSettingCategory_X.ClearSelected
struct UGameSettingCategory_X_ClearSelected_Params
{
};

// Function ProjectX.GameSettingCategory_X.AddSelectedSetting
struct UGameSettingCategory_X_AddSelectedSetting_Params
{
	struct FName                                       NewSelectedName;                                          // (CPF_Parm)
};

// Function ProjectX.GameSettingCategory_X.SetGameSettings
struct UGameSettingCategory_X_SetGameSettings_Params
{
	TArray<class UGameSetting_X*>                      NewGameSettings;                                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GameViewportClient_X.GetDefaultSafeZone
struct UGameViewportClient_X_GetDefaultSafeZone_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameViewportClient_X.OnPrimaryPlayerSwitch
struct UGameViewportClient_X_OnPrimaryPlayerSwitch_Params
{
	class ULocalPlayer*                                OldPrimaryPlayer;                                         // (CPF_Parm)
	class ULocalPlayer*                                NewPrimaryPlayer;                                         // (CPF_Parm)
};

// Function ProjectX.GameViewportClient_X.ForceRemovePlayer
struct UGameViewportClient_X_ForceRemovePlayer_Params
{
	class ULocalPlayer*                                ExPlayer;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameViewportClient_X.RemovePlayer
struct UGameViewportClient_X_RemovePlayer_Params
{
	class ULocalPlayer*                                ExPlayer;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameViewportClient_X.RemovePlayerByID
struct UGameViewportClient_X_RemovePlayerByID_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameViewportClient_X.FlashWindow
struct UGameViewportClient_X_FlashWindow_Params
{
};

// Function ProjectX.GameViewportClient_X.SetHardwareMouseCursorVisibility
struct UGameViewportClient_X_SetHardwareMouseCursorVisibility_Params
{
	bool                                               bIsVisible;                                               // (CPF_Parm)
};

// Function ProjectX.GameViewportClient_X.NotifyConnectionError
struct UGameViewportClient_X_NotifyConnectionError_Params
{
	TEnumAsByte<EProgressMessageType>                  MessageType;                                              // (CPF_Parm)
	struct FString                                     Message;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Title;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GameViewportClient_X.CreatePlayer
struct UGameViewportClient_X_CreatePlayer_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FString                                     OutError;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               bSpawnActor;                                              // (CPF_Parm)
	class ULocalPlayer*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameViewportClient_X.NotifyPlayerRemoved
struct UGameViewportClient_X_NotifyPlayerRemoved_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm)
	class ULocalPlayer*                                RemovedPlayer;                                            // (CPF_Parm)
};

// Function ProjectX.GameViewportClient_X.NotifyPlayerAdded
struct UGameViewportClient_X_NotifyPlayerAdded_Params
{
	int                                                PlayerIndex;                                              // (CPF_Parm)
	class ULocalPlayer*                                AddedPlayer;                                              // (CPF_Parm)
};

// Function ProjectX.GameViewportClient_X.SaveCurrentWindowState
struct UGameViewportClient_X_SaveCurrentWindowState_Params
{
};

// Function ProjectX.GameViewportClient_X.SaveWindowState
struct UGameViewportClient_X_SaveWindowState_Params
{
	int                                                ResX;                                                     // (CPF_Parm, CPF_CoerceParm)
	int                                                ResY;                                                     // (CPF_Parm, CPF_CoerceParm)
	bool                                               bFullScreen;                                              // (CPF_Parm)
	bool                                               bBorderless;                                              // (CPF_Parm)
	bool                                               bVsync;                                                   // (CPF_Parm)
};

// Function ProjectX.GameViewportClient_X.GetAvailableResolutions
struct UGameViewportClient_X_GetAvailableResolutions_Params
{
	TArray<struct FIntPoint>                           Resolutions;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameViewportClient_X.GetAvailableResolutionsStr
struct UGameViewportClient_X_GetAvailableResolutionsStr_Params
{
	TArray<struct FString>                             Resolutions;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameViewportClient_X.IsBorderlessViewport
struct UGameViewportClient_X_IsBorderlessViewport_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameViewportClient_X.GetViewportSizePoint
struct UGameViewportClient_X_GetViewportSizePoint_Params
{
	struct FIntPoint                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameViewportClient_X.GetViewportSizeStr
struct UGameViewportClient_X_GetViewportSizeStr_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.GameViewportClient_X.GetInstance
struct UGameViewportClient_X_GetInstance_Params
{
	class UGameViewportClient_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameViewportClient_X.EventPrimaryPlayerChange
struct UGameViewportClient_X_EventPrimaryPlayerChange_Params
{
	class ULocalPlayer*                                OldPrimaryPlayer;                                         // (CPF_Parm)
	class ULocalPlayer*                                NewPrimaryPlayer;                                         // (CPF_Parm)
};

// Function ProjectX.GameViewportClient_X.EventNotifyConnectionError
struct UGameViewportClient_X_EventNotifyConnectionError_Params
{
	struct FString                                     Title;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GameViewportClient_X.EventLocalPlayerLeave
struct UGameViewportClient_X_EventLocalPlayerLeave_Params
{
	class ULocalPlayer*                                OldPlayer;                                                // (CPF_Parm)
};

// Function ProjectX.GameViewportClient_X.EventLocalPlayerJoin
struct UGameViewportClient_X_EventLocalPlayerJoin_Params
{
	class ULocalPlayer*                                NewPlayer;                                                // (CPF_Parm)
};

// Function ProjectX.GFxDataRow_X.FlashEventObject
struct UGFxDataRow_X_FlashEventObject_Params
{
	class UGFxObject*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxDataRow_X.FlashEventString
struct UGFxDataRow_X_FlashEventString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxDataRow_X.FlashEventFloat
struct UGFxDataRow_X_FlashEventFloat_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxDataRow_X.FlashEventInt
struct UGFxDataRow_X_FlashEventInt_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxDataRow_X.FlashEventVoid
struct UGFxDataRow_X_FlashEventVoid_Params
{
};

// Function ProjectX.GFxDataRow_X.SetProxy
struct UGFxDataRow_X_SetProxy_Params
{
	class UObject*                                     InProxyObject;                                            // (CPF_Parm)
};

// Function ProjectX.GFxDataRow_X.OnRemoved
struct UGFxDataRow_X_OnRemoved_Params
{
};

// Function ProjectX.GFxDataRow_X.OnShellSet
struct UGFxDataRow_X_OnShellSet_Params
{
};

// Function ProjectX.GFxShell_X.PrintDebugInfo
struct UGFxShell_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.SetMouseKeyPressed
struct UGFxShell_X_SetMouseKeyPressed_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	bool                                               bPressed;                                                 // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.SetAllowAnyPlayerInput
struct UGFxShell_X_SetAllowAnyPlayerInput_Params
{
	bool                                               bAllow;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.HandlePauseChanged
struct UGFxShell_X_HandlePauseChanged_Params
{
};

// Function ProjectX.GFxShell_X.OnShowKeyboardCanceled
struct UGFxShell_X_OnShowKeyboardCanceled_Params
{
};

// Function ProjectX.GFxShell_X.OnShowKeyboardComplete
struct UGFxShell_X_OnShowKeyboardComplete_Params
{
	struct FString                                     NewText;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxShell_X.HandleShowKeyboardComplete
struct UGFxShell_X_HandleShowKeyboardComplete_Params
{
	struct FString                                     NewText;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bCanceled;                                                // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.PasteFromClipboard
struct UGFxShell_X_PasteFromClipboard_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxShell_X.CopyToClipboard
struct UGFxShell_X_CopyToClipboard_Params
{
	struct FString                                     ClipboardText;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxShell_X.HideKeyboard
struct UGFxShell_X_HideKeyboard_Params
{
};

// Function ProjectX.GFxShell_X.ShowKeyboard
struct UGFxShell_X_ShowKeyboard_Params
{
	struct FString                                     TitleText;                                                // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bIsPassword;                                              // (CPF_Parm)
	struct FString                                     DefaultText;                                              // (CPF_Parm, CPF_NeedCtorLink)
	int                                                MaxLength;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxShell_X.SetGamePaused
struct UGFxShell_X_SetGamePaused_Params
{
	bool                                               bPaused;                                                  // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.ExitToMainMenu
struct UGFxShell_X_ExitToMainMenu_Params
{
};

// Function ProjectX.GFxShell_X.ExitGame
struct UGFxShell_X_ExitGame_Params
{
};

// Function ProjectX.GFxShell_X.HandleMovieInputCaptureChanged
struct UGFxShell_X_HandleMovieInputCaptureChanged_Params
{
	class UGFxMoviePlayer_X*                           MoviePlayer;                                              // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.TriggerDataCallbacks
struct UGFxShell_X_TriggerDataCallbacks_Params
{
};

// Function ProjectX.GFxShell_X.Tick
struct UGFxShell_X_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.OnMovieClosed
struct UGFxShell_X_OnMovieClosed_Params
{
	class UGFxMoviePlayer_X*                           Movie;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.OnMovieStarted
struct UGFxShell_X_OnMovieStarted_Params
{
	class UGFxMoviePlayer_X*                           Movie;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.StopMovie
struct UGFxShell_X_StopMovie_Params
{
	class UGFxMoviePlayer_X*                           Movie;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.StartMovie
struct UGFxShell_X_StartMovie_Params
{
	class UGFxMoviePlayer_X*                           Movie;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.Stop
struct UGFxShell_X_Stop_Params
{
};

// Function ProjectX.GFxShell_X.OnStart
struct UGFxShell_X_OnStart_Params
{
};

// Function ProjectX.GFxShell_X.Start
struct UGFxShell_X_Start_Params
{
	class ULocalPlayer_X*                              InPlayer;                                                 // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.EventReceivedInput
struct UGFxShell_X_EventReceivedInput_Params
{
	class UGFxShell_X*                                 InShell;                                                  // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.EventInputTypeChanged
struct UGFxShell_X_EventInputTypeChanged_Params
{
	class UGFxShell_X*                                 InShell;                                                  // (CPF_Parm)
};

// Function ProjectX.GFxShell_X.EventInputCaptureChanged
struct UGFxShell_X_EventInputCaptureChanged_Params
{
	class UGFxShell_X*                                 InShell;                                                  // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.ExportFakeData
struct UGFxDataStore_X_ExportFakeData_Params
{
	struct FName                                       TableName;                                                // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.PrintData
struct UGFxDataStore_X_PrintData_Params
{
	struct FName                                       TableName;                                                // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.GetObjectRow
struct UGFxDataStore_X_GetObjectRow_Params
{
	class UGFxDataRow_X*                               O;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxDataStore_X.AllObjects
struct UGFxDataStore_X_AllObjects_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
	class UGFxDataRow_X*                               OutObject;                                                // (CPF_Parm, CPF_OutParm)
	int                                                Row;                                                      // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
};

// Function ProjectX.GFxDataStore_X.GetObject
struct UGFxDataStore_X_GetObject_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
	int                                                Row;                                                      // (CPF_OptionalParm, CPF_Parm)
	class UGFxDataRow_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function ProjectX.GFxDataStore_X.RemoveObject
struct UGFxDataStore_X_RemoveObject_Params
{
	class UGFxDataRow_X*                               O;                                                        // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.BindObject
struct UGFxDataStore_X_BindObject_Params
{
	class UGFxDataRow_X*                               Object;                                                   // (CPF_Parm)
	int                                                Row;                                                      // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.CreateObject
struct UGFxDataStore_X_CreateObject_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
	int                                                Row;                                                      // (CPF_OptionalParm, CPF_Parm)
	class UGFxDataRow_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function ProjectX.GFxDataStore_X.RemoveAllObjects
struct UGFxDataStore_X_RemoveAllObjects_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.SetObjectCount
struct UGFxDataStore_X_SetObjectCount_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
	int                                                Count;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.GetObjectCount
struct UGFxDataStore_X_GetObjectCount_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxDataStore_X.EmptyTables
struct UGFxDataStore_X_EmptyTables_Params
{
};

// Function ProjectX.GFxDataStore_X.EmptyTable
struct UGFxDataStore_X_EmptyTable_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.RemoveRow
struct UGFxDataStore_X_RemoveRow_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                Row;                                                      // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.SetRowCount
struct UGFxDataStore_X_SetRowCount_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                Count;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.GetRowCount
struct UGFxDataStore_X_GetRowCount_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxDataStore_X.GetValue
struct UGFxDataStore_X_GetValue_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                Row;                                                      // (CPF_Parm)
	struct FName                                       Column;                                                   // (CPF_Parm)
	struct FASValue                                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxDataStore_X.SetASValue
struct UGFxDataStore_X_SetASValue_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                Row;                                                      // (CPF_Parm)
	struct FName                                       Column;                                                   // (CPF_Parm)
	struct FASValue                                    Value;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxDataStore_X.SetTextureValue
struct UGFxDataStore_X_SetTextureValue_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                Row;                                                      // (CPF_Parm)
	struct FName                                       Column;                                                   // (CPF_Parm)
	class UTexture*                                    Value;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.SetStringValue
struct UGFxDataStore_X_SetStringValue_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                Row;                                                      // (CPF_Parm)
	struct FName                                       Column;                                                   // (CPF_Parm)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxDataStore_X.SetQWordValue
struct UGFxDataStore_X_SetQWordValue_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                Row;                                                      // (CPF_Parm)
	struct FName                                       Column;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.SetFloatValue
struct UGFxDataStore_X_SetFloatValue_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                Row;                                                      // (CPF_Parm)
	struct FName                                       Column;                                                   // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.SetIntValue
struct UGFxDataStore_X_SetIntValue_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                Row;                                                      // (CPF_Parm)
	struct FName                                       Column;                                                   // (CPF_Parm)
	int                                                Value;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.SetBoolValue
struct UGFxDataStore_X_SetBoolValue_Params
{
	struct FName                                       Table;                                                    // (CPF_Parm)
	int                                                Row;                                                      // (CPF_Parm)
	struct FName                                       Column;                                                   // (CPF_Parm)
	bool                                               Value;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxDataStore_X.SetDirty
struct UGFxDataStore_X_SetDirty_Params
{
	struct FName                                       TableName;                                                // (CPF_Parm)
	int                                                RowNum;                                                   // (CPF_OptionalParm, CPF_Parm)
	struct FName                                       Value;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.GFxEngine_X.PrintDebugInfo
struct UGFxEngine_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxEngine_X.OnGameSessionEnded
struct UGFxEngine_X_OnGameSessionEnded_Params
{
};

// Function ProjectX.GFxEngine_X.GetFlashKey
struct UGFxEngine_X_GetFlashKey_Params
{
	struct FName                                       UnrealKey;                                                // (CPF_Parm)
	int                                                KeyCode;                                                  // (CPF_Parm, CPF_OutParm)
	int                                                MouseButton;                                              // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.GFxEngine_X.UpdateHardwareMouseCursorVisibility
struct UGFxEngine_X_UpdateHardwareMouseCursorVisibility_Params
{
};

// Function ProjectX.GFxEngine_X.HandleShellInputTypeChanged
struct UGFxEngine_X_HandleShellInputTypeChanged_Params
{
	class UGFxShell_X*                                 InShell;                                                  // (CPF_Parm)
};

// Function ProjectX.GFxEngine_X.HandleGFxEnabledChanged
struct UGFxEngine_X_HandleGFxEnabledChanged_Params
{
	class UGameViewportClient*                         GVC;                                                      // (CPF_Parm)
};

// Function ProjectX.GFxEngine_X.HandleShellInputCaptureChanged
struct UGFxEngine_X_HandleShellInputCaptureChanged_Params
{
	class UGFxShell_X*                                 InShell;                                                  // (CPF_Parm)
};

// Function ProjectX.GFxEngine_X.FlushDirtyObjects
struct UGFxEngine_X_FlushDirtyObjects_Params
{
};

// Function ProjectX.GFxEngine_X.Tick
struct UGFxEngine_X_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.GFxEngine_X.FindShell
struct UGFxEngine_X_FindShell_Params
{
	class ULocalPlayer_X*                              ForPlayer;                                                // (CPF_Parm)
	class UGFxShell_X*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxEngine_X.OnShellDestroyed
struct UGFxEngine_X_OnShellDestroyed_Params
{
	class UGFxShell_X*                                 Shell;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxEngine_X.DestroyShell
struct UGFxEngine_X_DestroyShell_Params
{
	class ULocalPlayer*                                ForPlayer;                                                // (CPF_Parm)
};

// Function ProjectX.GFxEngine_X.CreateShell
struct UGFxEngine_X_CreateShell_Params
{
	class UGFxShell_X*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxEngine_X.GetShell
struct UGFxEngine_X_GetShell_Params
{
	class ULocalPlayer_X*                              ForPlayer;                                                // (CPF_Parm)
	class UGFxShell_X*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxEngine_X.SetShellArchetype
struct UGFxEngine_X_SetShellArchetype_Params
{
	class UGFxShell_X*                                 InShellArchetype;                                         // (CPF_Parm)
};

// Function ProjectX.GFxEngine_X.GetInstance
struct UGFxEngine_X_GetInstance_Params
{
	class UClass*                                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	class UGFxEngine_X*                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function ProjectX.GFxEngine_X.EventGameSessionEnded
struct UGFxEngine_X_EventGameSessionEnded_Params
{
};

// Function ProjectX.GFxEngine_X.EventAvailableGamepadTypeChanged
struct UGFxEngine_X_EventAvailableGamepadTypeChanged_Params
{
	class UGFxEngine_X*                                Engine;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxEngine_X.EventShellCreated
struct UGFxEngine_X_EventShellCreated_Params
{
	class UGFxEngine_X*                                Engine;                                                   // (CPF_Parm)
	class UGFxShell_X*                                 Shell;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxMoviePlayer_X.PrintDebugInfo
struct UGFxMoviePlayer_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxMoviePlayer_X.SetAllowAnyPlayerInput
struct UGFxMoviePlayer_X_SetAllowAnyPlayerInput_Params
{
	bool                                               bAllow;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxMoviePlayer_X.PopString
struct UGFxMoviePlayer_X_PopString_Params
{
	TArray<struct FString>                             Items;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxMoviePlayer_X.SetGlobalRTCP
struct UGFxMoviePlayer_X_SetGlobalRTCP_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxMoviePlayer_X.StopAllSounds
struct UGFxMoviePlayer_X_StopAllSounds_Params
{
	class UGFxSoundPack_X*                             SoundPack;                                                // (CPF_Parm)
};

// Function ProjectX.GFxMoviePlayer_X.StopSound
struct UGFxMoviePlayer_X_StopSound_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm)
};

// Function ProjectX.GFxMoviePlayer_X.PlaySound
struct UGFxMoviePlayer_X_PlaySound_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm)
};

// Function ProjectX.GFxMoviePlayer_X.PlaySoundFromTheme
struct UGFxMoviePlayer_X_PlaySoundFromTheme_Params
{
	struct FName                                       EventName;                                                // (CPF_Parm)
	struct FName                                       SoundThemeName;                                           // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.GFxMoviePlayer_X.GetSoundSource
struct UGFxMoviePlayer_X_GetSoundSource_Params
{
	class AActor*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxMoviePlayer_X.UpdateCursorVisibility
struct UGFxMoviePlayer_X_UpdateCursorVisibility_Params
{
};

// Function ProjectX.GFxMoviePlayer_X.SetCaptureAllInput
struct UGFxMoviePlayer_X_SetCaptureAllInput_Params
{
	bool                                               bNewCaptureInput;                                         // (CPF_Parm)
	struct FString                                     SceneName;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxMoviePlayer_X.SetReceiveInput
struct UGFxMoviePlayer_X_SetReceiveInput_Params
{
	bool                                               bNewReceiveInput;                                         // (CPF_Parm)
	struct FString                                     SceneName;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxMoviePlayer_X.SetCursorVisible
struct UGFxMoviePlayer_X_SetCursorVisible_Params
{
	bool                                               bVisible;                                                 // (CPF_Parm)
	struct FString                                     SceneName;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxMoviePlayer_X.InitShellHooks
struct UGFxMoviePlayer_X_InitShellHooks_Params
{
};

// Function ProjectX.GFxMoviePlayer_X.InitDataHooks
struct UGFxMoviePlayer_X_InitDataHooks_Params
{
};

// Function ProjectX.GFxMoviePlayer_X.OnClose
struct UGFxMoviePlayer_X_OnClose_Params
{
};

// Function ProjectX.GFxMoviePlayer_X.Start
struct UGFxMoviePlayer_X_Start_Params
{
	bool                                               StartPaused;                                              // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxMoviePlayer_X.EventInputCaptureChanged
struct UGFxMoviePlayer_X_EventInputCaptureChanged_Params
{
	class UGFxMoviePlayer_X*                           Player;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxMoviePlayer_X.EventClosed
struct UGFxMoviePlayer_X_EventClosed_Params
{
	class UGFxMoviePlayer_X*                           Player;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxMoviePlayer_X.EventStarted
struct UGFxMoviePlayer_X_EventStarted_Params
{
	class UGFxMoviePlayer_X*                           Player;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxSoundPack_X.ToggleSound
struct UGFxSoundPack_X_ToggleSound_Params
{
	int                                                Idx;                                                      // (CPF_Parm)
	class AActor*                                      Target;                                                   // (CPF_Parm)
	bool                                               bPlay;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxSoundPack_X.StopAll
struct UGFxSoundPack_X_StopAll_Params
{
	class AActor*                                      Target;                                                   // (CPF_Parm)
};

// Function ProjectX.GFxSoundPack_X.StopSound
struct UGFxSoundPack_X_StopSound_Params
{
	struct FName                                       SoundName;                                                // (CPF_Parm)
	class AActor*                                      Target;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxSoundPack_X.PlaySound
struct UGFxSoundPack_X_PlaySound_Params
{
	struct FName                                       SoundName;                                                // (CPF_Parm)
	class AActor*                                      Target;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.InterpComponent_X.DetachComponent
struct UInterpComponent_X_DetachComponent_Params
{
	class UActorComponent*                             Component;                                                // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.InterpComponent_X.AttachComponent
struct UInterpComponent_X_AttachComponent_Params
{
	class UActorComponent*                             Component;                                                // (CPF_Parm, CPF_EditInline)
	struct FVector                                     RelativeLocation;                                         // (CPF_OptionalParm, CPF_Parm)
	struct FRotator                                    RelativeRotation;                                         // (CPF_OptionalParm, CPF_Parm)
	struct FVector                                     RelativeScale;                                            // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.JsonTests_X.ToJsonAndBack
struct UJsonTests_X_ToJsonAndBack_Params
{
	class UObject*                                     Target;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.JsonTests_X.RunJsonTests
struct UJsonTests_X_RunJsonTests_Params
{
	int                                                RandomSeed;                                               // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.LanBeacon_X.BroadcastMessage
struct ULanBeacon_X_BroadcastMessage_Params
{
	class UObject*                                     Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LanBeacon_X.BroadcastData
struct ULanBeacon_X_BroadcastData_Params
{
	TArray<unsigned char>                              Data;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LanBeacon_X.Stop
struct ULanBeacon_X_Stop_Params
{
};

// Function ProjectX.LanBeacon_X.Start
struct ULanBeacon_X_Start_Params
{
	TEnumAsByte<ELanBeaconState>                       InitialState;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LensFlareComponent_X.SetLinearColorParameter
struct ULensFlareComponent_X_SetLinearColorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FLinearColor                                Value;                                                    // (CPF_Parm)
};

// Function ProjectX.LensFlareComponent_X.SetVectorParameter
struct ULensFlareComponent_X_SetVectorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FVector                                     Value;                                                    // (CPF_Parm)
};

// Function ProjectX.LensFlareComponent_X.SetFloatParameter
struct ULensFlareComponent_X_SetFloatParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function ProjectX.LensFlareComponent_X.SetNameParameter
struct ULensFlareComponent_X_SetNameParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FName                                       Value;                                                    // (CPF_Parm)
};

// Function ProjectX.LocalCache_X.HasActiveTasks
struct ULocalCache_X_HasActiveTasks_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LocalCache_X.ExportObject
struct ULocalCache_X_ExportObject_Params
{
	class UObject*                                     CacheObject;                                              // (CPF_Parm)
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.LocalCache_X.ImportObject
struct ULocalCache_X_ImportObject_Params
{
	class UObject*                                     CacheObject;                                              // (CPF_Parm)
	struct FString                                     Path;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.LocalCache_X.EventExportFinished
struct ULocalCache_X_EventExportFinished_Params
{
	class ULocalCache_X*                               Cache;                                                    // (CPF_Parm)
	class UObject*                                     CacheObject;                                              // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.LocalCache_X.EventImportFinished
struct ULocalCache_X_EventImportFinished_Params
{
	class ULocalCache_X*                               Cache;                                                    // (CPF_Parm)
	class UObject*                                     CacheObject;                                              // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.LocalPlayer_X.SpawnPlayActor
struct ULocalPlayer_X_SpawnPlayActor_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     OutError;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LocalPlayer_X.NotifyServerConnectionOpen
struct ULocalPlayer_X_NotifyServerConnectionOpen_Params
{
};

// Function ProjectX.LocalPlayer_X.OnRemoved
struct ULocalPlayer_X_OnRemoved_Params
{
};

// Function ProjectX.LocalPlayer_X.OnCreated
struct ULocalPlayer_X_OnCreated_Params
{
};

// Function ProjectX.MapFlythroughProfiler_X.SetupPlayers
struct AMapFlythroughProfiler_X_SetupPlayers_Params
{
};

// Function ProjectX.MapFlythroughProfiler_X.PostBeginPlay
struct AMapFlythroughProfiler_X_PostBeginPlay_Params
{
};

// Function ProjectX.MapFlythroughProfiler_X.EventFinished
struct AMapFlythroughProfiler_X_EventFinished_Params
{
	class AMapFlythroughProfiler_X*                    Profiler;                                                 // (CPF_Parm)
};

// Function ProjectX.MatchmakingReporter.PrintDebugInfo
struct UMatchmakingReporter_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.MatchmakingReporter.GetMatchmakingStateName
struct UMatchmakingReporter_GetMatchmakingStateName_Params
{
	TEnumAsByte<EMatchmakingState>                     InState;                                                  // (CPF_Const, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.MatchmakingReporter.AddInfo
struct UMatchmakingReporter_AddInfo_Params
{
	struct FString                                     Info;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EMatchmakingInfoSeverity>              Severity;                                                 // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.MatchmakingReporter.SetMatchmakingState
struct UMatchmakingReporter_SetMatchmakingState_Params
{
	TEnumAsByte<EMatchmakingState>                     InState;                                                  // (CPF_Const, CPF_Parm)
};

// Function ProjectX.MatchmakingReporter.ClearStateReports
struct UMatchmakingReporter_ClearStateReports_Params
{
};

// Function ProjectX.MatchmakingReporter.Initialize
struct UMatchmakingReporter_Initialize_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.MatchmakingReporter.ShowReportsLocation
struct UMatchmakingReporter_ShowReportsLocation_Params
{
};

// Function ProjectX.MatchmakingReporter.GetInstance
struct UMatchmakingReporter_GetInstance_Params
{
	class UMatchmakingReporter*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ObjectListComponent_X.GetCount
struct UObjectListComponent_X_GetCount_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ObjectListComponent_X.Merge
struct UObjectListComponent_X_Merge_Params
{
	TArray<class UObject*>                             NewList;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.ObjectListComponent_X.RemoveObject
struct UObjectListComponent_X_RemoveObject_Params
{
	class UObject*                                     NewObj;                                                   // (CPF_Parm)
};

// Function ProjectX.ObjectListComponent_X.AddObject
struct UObjectListComponent_X_AddObject_Params
{
	class UObject*                                     NewObj;                                                   // (CPF_Parm)
};

// Function ProjectX.ObjectListComponent_X.RemoveListener
struct UObjectListComponent_X_RemoveListener_Params
{
	class UObject*                                     Listener;                                                 // (CPF_Parm)
	class UClass*                                      ObjClass;                                                 // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.ObjectListComponent_X.AddListener
struct UObjectListComponent_X_AddListener_Params
{
	struct FScriptDelegate                             OnAdd;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             OnRemove;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	class UClass*                                      ObjClass;                                                 // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.ObjectListComponent_X.AllObjects
struct UObjectListComponent_X_AllObjects_Params
{
	class UClass*                                      BaseClass;                                                // (CPF_Parm)
	class UObject*                                     Obj;                                                      // (CPF_Parm, CPF_OutParm)
	class UClass*                                      InterfaceClass;                                           // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.ObjectListComponent_X.ObjectListenerCallback
struct UObjectListComponent_X_ObjectListenerCallback_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineConfig_X.UnsubscribeModifiers
struct UOnlineConfig_X_UnsubscribeModifiers_Params
{
};

// Function ProjectX.OnlineConfig_X.ModifyObjects
struct UOnlineConfig_X_ModifyObjects_Params
{
	class UClass*                                      ObjClass;                                                 // (CPF_Parm)
	struct FScriptDelegate                             ApplyCallback;                                            // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             ResetCallback;                                            // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineConfig_X.Undo
struct UOnlineConfig_X_Undo_Params
{
};

// Function ProjectX.OnlineConfig_X.Apply
struct UOnlineConfig_X_Apply_Params
{
};

// Function ProjectX.CrossplayConfig_X.PlatformsShareGroup
struct UCrossplayConfig_X_PlatformsShareGroup_Params
{
	TEnumAsByte<EOnlinePlatform>                       Platform1;                                                // (CPF_Parm)
	TEnumAsByte<EOnlinePlatform>                       Platform2;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPCConfig_X.IsRPCDisabled
struct URPCConfig_X_IsRPCDisabled_Params
{
	class URPC_X*                                      RPC;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSearch_X.GetStringProperty
struct UOnlineGameSearch_X_GetStringProperty_Params
{
	int                                                PropertyId;                                               // (CPF_Parm)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSearch_X.GetExclusiveGameTags
struct UOnlineGameSearch_X_GetExclusiveGameTags_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSearch_X.GetInclusiveGameTags
struct UOnlineGameSearch_X_GetInclusiveGameTags_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSearch_X.SetMap
struct UOnlineGameSearch_X_SetMap_Params
{
	struct FString                                     inMapName;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSearch_X.SetExclusiveGameTags
struct UOnlineGameSearch_X_SetExclusiveGameTags_Params
{
	TArray<struct FString>                             inGameTagsArray;                                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSearch_X.SetInclusiveGameTags
struct UOnlineGameSearch_X_SetInclusiveGameTags_Params
{
	TArray<struct FString>                             inGameTagsArray;                                          // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSettings_X.PrintDebugInfo
struct UOnlineGameSettings_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameSettings_X.Equals
struct UOnlineGameSettings_X_Equals_Params
{
	class UOnlineGameSettings_X*                       OtherGameSettings;                                        // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSettings_X.CalculateMinAndMaxNumPlayers
struct UOnlineGameSettings_X_CalculateMinAndMaxNumPlayers_Params
{
};

// Function ProjectX.OnlineGameSettings_X.CopyFrom
struct UOnlineGameSettings_X_CopyFrom_Params
{
	class UOnlineGameSettings_X*                       OtherGameSettings;                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameSettings_X.GetPlaylist
struct UOnlineGameSettings_X_GetPlaylist_Params
{
	class UGameSettingPlaylist_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSettings_X.IsValid
struct UOnlineGameSettings_X_IsValid_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSettings_X.RemoveMismatchedTags
struct UOnlineGameSettings_X_RemoveMismatchedTags_Params
{
	class UOnlineGameSettings_X*                       OtherGameSettings;                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameSettings_X.GetGameSettingCategoryByName
struct UOnlineGameSettings_X_GetGameSettingCategoryByName_Params
{
	struct FName                                       CategoryName;                                             // (CPF_Parm)
	class UGameSettingCategory_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSettings_X.SetIntProperty
struct UOnlineGameSettings_X_SetIntProperty_Params
{
	int                                                PropertyId;                                               // (CPF_Parm)
	int                                                Value;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameSettings_X.SetGameTag
struct UOnlineGameSettings_X_SetGameTag_Params
{
	struct FName                                       NewGameTag;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameSettings_X.UpdateFromURL
struct UOnlineGameSettings_X_UpdateFromURL_Params
{
	struct FString                                     URL;                                                      // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class AGameInfo*                                   Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameSettings_X.HasSetting
struct UOnlineGameSettings_X_HasSetting_Params
{
	struct FName                                       SettingName;                                              // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSettings_X.GetActiveGameSettings
struct UOnlineGameSettings_X_GetActiveGameSettings_Params
{
	TArray<class UGameSetting_X*>                      GameSettings;                                             // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSettings_X.GetGameSetting
struct UOnlineGameSettings_X_GetGameSetting_Params
{
	struct FString                                     SettingName;                                              // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	class UGameSettingCategory_X*                      Category;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	class UGameSetting_X*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSettings_X.GetGameTags
struct UOnlineGameSettings_X_GetGameTags_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSettings_X.GetStringProperty
struct UOnlineGameSettings_X_GetStringProperty_Params
{
	int                                                PropertyId;                                               // (CPF_Parm)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSettings_X.Init
struct UOnlineGameSettings_X_Init_Params
{
};

// Function ProjectX.OnlineGameSettings_X.EventNumPlayersUpdated
struct UOnlineGameSettings_X_EventNumPlayersUpdated_Params
{
	class UOnlineGameSettings_X*                       GameSettings;                                             // (CPF_Parm)
	int                                                NewMinimumPlayersRequired;                                // (CPF_Parm)
};

// Function ProjectX.OnlineLegalText_X.HandleWebText
struct UOnlineLegalText_X_HandleWebText_Params
{
	class UCachedWebData_X*                            InCachedData;                                             // (CPF_Parm)
};

// Function ProjectX.OnlineLegalText_X.GetWebUrl
struct UOnlineLegalText_X_GetWebUrl_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineLegalText_X.GetPlatformString
struct UOnlineLegalText_X_GetPlatformString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineLegalText_X.GetRelativeUrl
struct UOnlineLegalText_X_GetRelativeUrl_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineLegalText_X.GetText
struct UOnlineLegalText_X_GetText_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineLegalText_X.Sync
struct UOnlineLegalText_X_Sync_Params
{
};

// Function ProjectX.OnlineLegalText_X.EventNewText
struct UOnlineLegalText_X_EventNewText_Params
{
	class UOnlineLegalText_X*                          Text;                                                     // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.OnlineMessageComponent_X.EnableCompression
struct UOnlineMessageComponent_X_EnableCompression_Params
{
	bool                                               bEnabled;                                                 // (CPF_Parm)
	class UOnlineMessageComponent_X*                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.OnlineMessageComponent_X.SetSerializer
struct UOnlineMessageComponent_X_SetSerializer_Params
{
	class USerializer_X*                               InSerializer;                                             // (CPF_Parm)
	class UOnlineMessageComponent_X*                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.OnlineMessageComponent_X.InvokeHandlers
struct UOnlineMessageComponent_X_InvokeHandlers_Params
{
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineMessageComponent_X.DeserializeMessage
struct UOnlineMessageComponent_X_DeserializeMessage_Params
{
	TArray<unsigned char>                              Data;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UObject*                                     MessageOuter;                                             // (CPF_Parm)
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineMessageComponent_X.SerializeMessage
struct UOnlineMessageComponent_X_SerializeMessage_Params
{
	class UObject*                                     Message;                                                  // (CPF_Parm)
	TArray<unsigned char>                              OutData;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineMessageComponent_X.CreateMessage
struct UOnlineMessageComponent_X_CreateMessage_Params
{
	class UClass*                                      MessageClass;                                             // (CPF_Parm)
	class UObject*                                     MessageOuter;                                             // (CPF_OptionalParm, CPF_Parm)
	class UOnlineMessage_X*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function ProjectX.OnlineMessageComponent_X.RemoveMessageHandler
struct UOnlineMessageComponent_X_RemoveMessageHandler_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineMessageComponent_X.AddMessageHandler
struct UOnlineMessageComponent_X_AddMessageHandler_Params
{
	class UClass*                                      MessageClass;                                             // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineMessageComponent_X.MessageReceivedDelegate
struct UOnlineMessageComponent_X_MessageReceivedDelegate_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.ParameterDispenser_X.Inherit
struct UParameterDispenser_X_Inherit_Params
{
	class UParameterDispenser_X*                       Other;                                                    // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.ParameterDispenser_X.ResetMaterials
struct UParameterDispenser_X_ResetMaterials_Params
{
};

// Function ProjectX.ParameterDispenser_X.ApplyAllParameters
struct UParameterDispenser_X_ApplyAllParameters_Params
{
	TScriptInterface<class UISetParameter>             ActorComp;                                                // (CPF_Parm)
};

// Function ProjectX.ParameterDispenser_X.SetLinearColorParameter
struct UParameterDispenser_X_SetLinearColorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FLinearColor                                Value;                                                    // (CPF_Parm)
};

// Function ProjectX.ParameterDispenser_X.SetVectorParameter
struct UParameterDispenser_X_SetVectorParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FVector                                     Value;                                                    // (CPF_Parm)
};

// Function ProjectX.ParameterDispenser_X.SetFloatParameter
struct UParameterDispenser_X_SetFloatParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
};

// Function ProjectX.ParameterDispenser_X.SetNameParameter
struct UParameterDispenser_X_SetNameParameter_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	struct FName                                       Value;                                                    // (CPF_Parm)
};

// Function ProjectX.ParameterDispenser_X.RemoveComponent
struct UParameterDispenser_X_RemoveComponent_Params
{
	TScriptInterface<class UISetParameter>             ActorComp;                                                // (CPF_Parm)
};

// Function ProjectX.ParameterDispenser_X.AddComponent
struct UParameterDispenser_X_AddComponent_Params
{
	TScriptInterface<class UISetParameter>             ActorComp;                                                // (CPF_Parm)
};

// Function ProjectX.Pawn_X.IsSameTeam
struct APawn_X_IsSameTeam_Params
{
	class APawn*                                       Other;                                                    // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Pawn_X.Destroyed
struct APawn_X_Destroyed_Params
{
};

// Function ProjectX.Pawn_X.GetGravityZ
struct APawn_X_GetGravityZ_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Pawn_X.NotifyTakeHit_X
struct APawn_X_NotifyTakeHit_X_Params
{
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.Pawn_X.PlayDeath_X
struct APawn_X_PlayDeath_X_Params
{
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.Pawn_X.PlayHit_X
struct APawn_X_PlayHit_X_Params
{
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.Pawn_X.OnDied
struct APawn_X_OnDied_Params
{
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.Pawn_X.Died_X
struct APawn_X_Died_X_Params
{
	class AController*                                 Killer;                                                   // (CPF_Parm)
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Pawn_X.AdjustDamage_X
struct APawn_X_AdjustDamage_X_Params
{
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.Pawn_X.OnTakeDamage
struct APawn_X_OnTakeDamage_Params
{
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.Pawn_X.TakeDamage_X
struct APawn_X_TakeDamage_X_Params
{
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Pawn_X.OnHealDamage
struct APawn_X_OnHealDamage_Params
{
	int                                                Amount;                                                   // (CPF_Parm)
};

// Function ProjectX.Pawn_X.HealDamage
struct APawn_X_HealDamage_Params
{
	int                                                Amount;                                                   // (CPF_Parm)
	class AController*                                 Healer;                                                   // (CPF_Parm)
	class UClass*                                      DamageType;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Pawn_X.TakeDamage
struct APawn_X_TakeDamage_Params
{
	int                                                Damage;                                                   // (CPF_Parm)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm)
	struct FVector                                     HitLocation;                                              // (CPF_Parm)
	struct FVector                                     Momentum;                                                 // (CPF_Parm)
	class UClass*                                      DamageType;                                               // (CPF_Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (CPF_OptionalParm, CPF_Parm)
	class AActor*                                      DamageCauser;                                             // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.Pawn_X.Suicide
struct APawn_X_Suicide_Params
{
};

// Function ProjectX.Pawn_X.OnAnimEnd
struct APawn_X_OnAnimEnd_Params
{
	class UAnimNodeSequence*                           SeqNode;                                                  // (CPF_Parm)
	float                                              PlayedTime;                                               // (CPF_Parm)
	float                                              ExcessTime;                                               // (CPF_Parm)
};

// Function ProjectX.Pawn_X.PlayerChangedTeam
struct APawn_X_PlayerChangedTeam_Params
{
};

// Function ProjectX.Pawn_X.OnControllerChanged
struct APawn_X_OnControllerChanged_Params
{
};

// Function ProjectX.Pawn_X.PossessedBy
struct APawn_X_PossessedBy_Params
{
	class AController*                                 C;                                                        // (CPF_Parm)
	bool                                               bVehicleTransition;                                       // (CPF_Parm)
};

// Function ProjectX.Pawn_X.UpdateControllerRef
struct APawn_X_UpdateControllerRef_Params
{
};

// Function ProjectX.Pawn_X.ReplicatedEvent
struct APawn_X_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (CPF_Parm)
};

// Function ProjectX.Pawn_X.EventAnimEnd
struct APawn_X_EventAnimEnd_Params
{
	class APawn_X*                                     ForPawn;                                                  // (CPF_Parm)
	class UAnimNodeSequence*                           SeqNode;                                                  // (CPF_Parm)
};

// Function ProjectX.Pawn_X.EventDestroyed
struct APawn_X_EventDestroyed_Params
{
	class APawn_X*                                     Pawn;                                                     // (CPF_Parm)
};

// Function ProjectX.Pawn_X.EventDied
struct APawn_X_EventDied_Params
{
	class APawn_X*                                     Pawn;                                                     // (CPF_Parm)
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.Pawn_X.EventHealDamage
struct APawn_X_EventHealDamage_Params
{
	class APawn_X*                                     Pawn;                                                     // (CPF_Parm)
	int                                                Amount;                                                   // (CPF_Parm)
};

// Function ProjectX.Pawn_X.EventTakeDamage
struct APawn_X_EventTakeDamage_Params
{
	class APawn_X*                                     Pawn;                                                     // (CPF_Parm)
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.DemoPC_X.GetFollowPlayer
struct ADemoPC_X_GetFollowPlayer_Params
{
	class APawn*                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DemoPC_X.DrawLogs
struct ADemoPC_X_DrawLogs_Params
{
	class UCanvas*                                     C;                                                        // (CPF_Parm)
	class APawn*                                       InPlayer;                                                 // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.DrawNames
struct ADemoPC_X_DrawNames_Params
{
	class UCanvas*                                     C;                                                        // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.DrawTimeline
struct ADemoPC_X_DrawTimeline_Params
{
	class UCanvas*                                     C;                                                        // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.DrawHUD
struct ADemoPC_X_DrawHUD_Params
{
	class AHUD*                                        H;                                                        // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.HUDMessage
struct ADemoPC_X_HUDMessage_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FName                                       Type;                                                     // (CPF_Parm)
	float                                              Lifetime;                                                 // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.DemoPC_X.ClientStartOnlineGame
struct ADemoPC_X_ClientStartOnlineGame_Params
{
};

// Function ProjectX.DemoPC_X.InitPlayerReplicationInfo
struct ADemoPC_X_InitPlayerReplicationInfo_Params
{
};

// Function ProjectX.DemoPC_X.ClientSkipToFirstFrame
struct ADemoPC_X_ClientSkipToFirstFrame_Params
{
};

// Function ProjectX.DemoPC_X.ReplicateStreamingStatus
struct ADemoPC_X_ReplicateStreamingStatus_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.SetDemoInterface
struct ADemoPC_X_SetDemoInterface_Params
{
	class UDemoRecDriverInterface_X*                   InDemoInterface;                                          // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.ReceivedPlayer
struct ADemoPC_X_ReceivedPlayer_Params
{
};

// Function ProjectX.PlayerInput_MobileNative_X.EventAppEnteredForeground
struct UPlayerInput_MobileNative_X_EventAppEnteredForeground_Params
{
};

// Function ProjectX.PlayerInput_MobileNative_X.EventAppEnteredBackground
struct UPlayerInput_MobileNative_X_EventAppEnteredBackground_Params
{
};

// Function ProjectX.PlayerInput_X.PrintDebugInfo
struct UPlayerInput_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.PlayerInput_X.GetKeyForActionArray
struct UPlayerInput_X_GetKeyForActionArray_Params
{
	struct FName                                       Action;                                                   // (CPF_Parm)
	TArray<struct FPlayerBinding>                      PlayerBindings;                                           // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlayerInput_X.AbsorbCurrentKeyPress
struct UPlayerInput_X_AbsorbCurrentKeyPress_Params
{
};

// Function ProjectX.PlayerInput_X.SetBindings
struct UPlayerInput_X_SetBindings_Params
{
	TArray<struct FPlayerBinding>                      PC;                                                       // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FPlayerBinding>                      Gamepad;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.PlayerInput_X.ClearDisableActionUntilNextUseList
struct UPlayerInput_X_ClearDisableActionUntilNextUseList_Params
{
};

// Function ProjectX.PlayerInput_X.DisableActionUntilNextUse
struct UPlayerInput_X_DisableActionUntilNextUse_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm)
};

// Function ProjectX.PlayerInput_X.ClearDisabledActions
struct UPlayerInput_X_ClearDisabledActions_Params
{
};

// Function ProjectX.PlayerInput_X.RemoveFromDisabledActions
struct UPlayerInput_X_RemoveFromDisabledActions_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm)
};

// Function ProjectX.PlayerInput_X.AddToDisabledActions
struct UPlayerInput_X_AddToDisabledActions_Params
{
	struct FName                                       ActionName;                                               // (CPF_Parm)
};

// Function ProjectX.PlayerInput_X.ReleaseKey
struct UPlayerInput_X_ReleaseKey_Params
{
	struct FName                                       Key;                                                      // (CPF_Parm)
	bool                                               bTriggerEvents;                                           // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.PlayerInput_X.GetUIKey
struct UPlayerInput_X_GetUIKey_Params
{
	struct FName                                       KeyName;                                                  // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.PlayerInput_X.InitInputSystem
struct UPlayerInput_X_InitInputSystem_Params
{
};

// Function ProjectX.PlayerInput_X.ResetInput
struct UPlayerInput_X_ResetInput_Params
{
};

// Function ProjectX.PlayerInput_X.SetControlPreset
struct UPlayerInput_X_SetControlPreset_Params
{
	struct FName                                       PresetName;                                               // (CPF_Parm)
};

// Function ProjectX.PlayerInput_X.EventActionToggled
struct UPlayerInput_X_EventActionToggled_Params
{
	class UPlayerInput_X*                              PlayerInput;                                              // (CPF_Parm)
	struct FName                                       ActionName;                                               // (CPF_Parm)
	bool                                               bEnabled;                                                 // (CPF_Parm)
};

// Function ProjectX.PsyNet_X.GetRetryDelay
struct UPsyNet_X_GetRetryDelay_Params
{
	int                                                Failures;                                                 // (CPF_Parm)
	TArray<float>                                      Delays;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PsyNet_X.ConnectionChangedIP
struct UPsyNet_X_ConnectionChangedIP_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.PsyNet_X.NetworkError
struct UPsyNet_X_NetworkError_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PsyNet_X.IsUnderMaintenance
struct UPsyNet_X_IsUnderMaintenance_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PsyNet_X.SetUnderMaintenance
struct UPsyNet_X_SetUnderMaintenance_Params
{
	bool                                               bUnderMaintenance;                                        // (CPF_Parm)
};

// Function ProjectX.PsyNet_X.NotifyWhenLoggedOut
struct UPsyNet_X_NotifyWhenLoggedOut_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PsyNet_X.NotifyWhenLoggedIn
struct UPsyNet_X_NotifyWhenLoggedIn_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PsyNet_X.HandleLoginChanged
struct UPsyNet_X_HandleLoginChanged_Params
{
	class UOnlinePlayerAuthentication_X*               Auth;                                                     // (CPF_Parm)
};

// Function ProjectX.PsyNet_X.Init
struct UPsyNet_X_Init_Params
{
};

// Function ProjectX.PsyNet_X.Flush
struct UPsyNet_X_Flush_Params
{
};

// Function ProjectX.PsyNet_X.RPC
struct UPsyNet_X_RPC_Params
{
	class UClass*                                      RPCClass;                                                 // (CPF_Parm)
	class UPsyNetSession_X*                            Session;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_EditInline)
	class URPC_X*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function ProjectX.PsyNet_X.CreateWebRequest
struct UPsyNet_X_CreateWebRequest_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PsyNet_X.GetInstance
struct UPsyNet_X_GetInstance_Params
{
	class UPsyNet_X*                                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PsyNet_X.EventPrimaryPlayerLoggedOut
struct UPsyNet_X_EventPrimaryPlayerLoggedOut_Params
{
};

// Function ProjectX.PsyNet_X.EventPrimaryPlayerLoggedIn
struct UPsyNet_X_EventPrimaryPlayerLoggedIn_Params
{
};

// Function ProjectX.PsyNetLocator_X.GetURL
struct UPsyNetLocator_X_GetURL_Params
{
	TEnumAsByte<EDatabaseEnvironment>                  Environment;                                              // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.PsyNetSession_X.GetDebugName
struct UPsyNetSession_X_GetDebugName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.PsyNetSession_X.Dispose
struct UPsyNetSession_X_Dispose_Params
{
};

// Function ProjectX.PsyNetSession_X.NotifyWhenActive
struct UPsyNetSession_X_NotifyWhenActive_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PsyNetSession_X.End
struct UPsyNetSession_X_End_Params
{
};

// Function ProjectX.PsyNetSession_X.Begin
struct UPsyNetSession_X_Begin_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (CPF_Parm)
	struct FString                                     InSessionID;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PsyNetSession_X.IsActive
struct UPsyNetSession_X_IsActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PsyNetSession_X.EventEnd
struct UPsyNetSession_X_EventEnd_Params
{
	class UPsyNetSession_X*                            Session;                                                  // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.PsyNetSession_X.EventBegin
struct UPsyNetSession_X_EventBegin_Params
{
	class UPsyNetSession_X*                            Session;                                                  // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.PsyNetStaticData_X.UpdateRegisteredObjects
struct UPsyNetStaticData_X_UpdateRegisteredObjects_Params
{
};

// Function ProjectX.PsyNetStaticData_X.LoadFromUTF8
struct UPsyNetStaticData_X_LoadFromUTF8_Params
{
	TArray<unsigned char>                              SignedData;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PsyNetStaticData_X.LoadFromSignedUTF8
struct UPsyNetStaticData_X_LoadFromSignedUTF8_Params
{
	TArray<unsigned char>                              SignedData;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PsyNetStaticData_X.InstanceComponents
struct UPsyNetStaticData_X_InstanceComponents_Params
{
};

// Function ProjectX.PsyNetStaticData_X.HandleDataChanged
struct UPsyNetStaticData_X_HandleDataChanged_Params
{
	class UOnlineResource_X*                           Resource;                                                 // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.PsyNetStaticData_X.HandleGetURL
struct UPsyNetStaticData_X_HandleGetURL_Params
{
	class URPC_GetStaticDataURL_X*                     RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.PsyNetStaticData_X.Sync
struct UPsyNetStaticData_X_Sync_Params
{
};

// Function ProjectX.PsyNetStaticData_X.HandleCacheExpired
struct UPsyNetStaticData_X_HandleCacheExpired_Params
{
	class UCacheTimer_X*                               Timer;                                                    // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.PsyNetStaticData_X.HandlePsyNetLogin
struct UPsyNetStaticData_X_HandlePsyNetLogin_Params
{
};

// Function ProjectX.PsyNetStaticData_X.Init
struct UPsyNetStaticData_X_Init_Params
{
};

// Function ProjectX.PsyNetStaticData_X.EventLoaded
struct UPsyNetStaticData_X_EventLoaded_Params
{
	class UPsyNetStaticData_X*                         Data;                                                     // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.RandomStream_X.SetCurrentSeed
struct URandomStream_X_SetCurrentSeed_Params
{
	int                                                NewSeed;                                                  // (CPF_Parm)
};

// Function ProjectX.RandomStream_X.GetNextValue
struct URandomStream_X_GetNextValue_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RenderProfiler_X.SetupPlayers
struct ARenderProfiler_X_SetupPlayers_Params
{
};

// Function ProjectX.RenderProfiler_X.PostBeginPlay
struct ARenderProfiler_X_PostBeginPlay_Params
{
};

// Function ProjectX.RenderProfiler_X.EventFinished
struct ARenderProfiler_X_EventFinished_Params
{
	class ARenderProfiler_X*                           Profiler;                                                 // (CPF_Parm)
};

// Function ProjectX.RPC_X.IsPersistentConnection
struct URPC_X_IsPersistentConnection_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_X.NotifySuccess
struct URPC_X_NotifySuccess_Params
{
};

// Function ProjectX.RPC_X.NotifyError
struct URPC_X_NotifyError_Params
{
	class UError*                                      InError;                                                  // (CPF_Parm)
};

// Function ProjectX.RPC_X.ShouldResendOnFail
struct URPC_X_ShouldResendOnFail_Params
{
	class UError*                                      InError;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_X.OnComplete
struct URPC_X_OnComplete_Params
{
};

// Function ProjectX.RPC_X.OnFail
struct URPC_X_OnFail_Params
{
};

// Function ProjectX.RPC_X.OnSuccess
struct URPC_X_OnSuccess_Params
{
};

// Function ProjectX.RPC_X.Dispose
struct URPC_X_Dispose_Params
{
};

// Function ProjectX.RPC_X.CreateTask
struct URPC_X_CreateTask_Params
{
	struct FScriptDelegate                             InCallback;                                               // (CPF_Parm, CPF_NeedCtorLink)
	class UScriptAsyncTask_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_X.NotifyOnComplete
struct URPC_X_NotifyOnComplete_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_X*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_X.NotifyOnFail
struct URPC_X_NotifyOnFail_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_X*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_X.NotifyOnSuccess
struct URPC_X_NotifyOnSuccess_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_X*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_X.GetResponseObject
struct URPC_X_GetResponseObject_Params
{
	class UObject*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_X.EventComplete
struct URPC_X_EventComplete_Params
{
	class URPC_X*                                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.RPC_X.EventFail
struct URPC_X_EventFail_Params
{
	class URPC_X*                                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.RPC_X.EventSuccess
struct URPC_X_EventSuccess_Params
{
	class URPC_X*                                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.RPCQueue_X.SignatureMismatch
struct URPCQueue_X_SignatureMismatch_Params
{
	int                                                ServiceID;                                                // (CPF_Parm)
};

// Function ProjectX.RPCQueue_X.SetHeader
struct URPCQueue_X_SetHeader_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPCQueue_X.FailAllPending
struct URPCQueue_X_FailAllPending_Params
{
	class UErrorType*                                  ErrorType;                                                // (CPF_Parm)
	struct FString                                     DebugMessage;                                             // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.RPCQueue_X.SetEnabled
struct URPCQueue_X_SetEnabled_Params
{
	bool                                               bNewEnabled;                                              // (CPF_Parm)
};

// Function ProjectX.RPCQueue_X.Flush
struct URPCQueue_X_Flush_Params
{
};

// Function ProjectX.RPCQueue_X.TickReceive
struct URPCQueue_X_TickReceive_Params
{
};

// Function ProjectX.RPCQueue_X.TickSend
struct URPCQueue_X_TickSend_Params
{
};

// Function ProjectX.RPCQueue_X.QueRPC
struct URPCQueue_X_QueRPC_Params
{
	class URPC_X*                                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.RPCQueue_X.CreatePendingRPC
struct URPCQueue_X_CreatePendingRPC_Params
{
	class UClass*                                      RPCClass;                                                 // (CPF_Parm)
	class URPC_X*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function ProjectX.RPCQueue_X.Init
struct URPCQueue_X_Init_Params
{
};

// Function ProjectX.SaveGame_X.GetSaveFilename
struct USaveGame_X_GetSaveFilename_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.SaveGame_X.OnInit
struct USaveGame_X_OnInit_Params
{
};

// Function ProjectX.SaveGame_X.OnLoaded
struct USaveGame_X_OnLoaded_Params
{
};

// Function ProjectX.SaveGame_X.Load
struct USaveGame_X_Load_Params
{
	bool                                               bMustExist;                                               // (CPF_OptionalParm, CPF_Parm)
	bool                                               bIgnoreErrors;                                            // (CPF_OptionalParm, CPF_Parm)
	TEnumAsByte<EBasicLoadResult>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.SaveGame_X.ClearSaveTimer
struct USaveGame_X_ClearSaveTimer_Params
{
};

// Function ProjectX.SaveGame_X.SetSaveTimer
struct USaveGame_X_SetSaveTimer_Params
{
	float                                              Delay;                                                    // (CPF_Parm)
};

// Function ProjectX.SaveGame_X.SaveNow
struct USaveGame_X_SaveNow_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.SaveGame_X.Save
struct USaveGame_X_Save_Params
{
};

// Function ProjectX.SaveGame_X.EventLoadFail
struct USaveGame_X_EventLoadFail_Params
{
	class USaveGame_X*                                 SaveGame;                                                 // (CPF_Parm)
};

// Function ProjectX.SaveGame_X.EventSaveFail
struct USaveGame_X_EventSaveFail_Params
{
	class USaveGame_X*                                 SaveGame;                                                 // (CPF_Parm)
};

// Function ProjectX.ScriptAsyncTask_X.__ScriptAsyncTask_X__DisposeAll_1
struct UScriptAsyncTask_X___ScriptAsyncTask_X__DisposeAll_1_Params
{
	class UScriptAsyncTask_X*                          T;                                                        // (CPF_Parm)
};

// Function ProjectX.ScriptAsyncTask_X.GetCompleted
struct UScriptAsyncTask_X_GetCompleted_Params
{
	class UScriptAsyncTask_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ScriptAsyncTask_X.DisposeAll
struct UScriptAsyncTask_X_DisposeAll_Params
{
	TArray<class UScriptAsyncTask_X*>                  Tasks;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.ScriptAsyncTask_X.CompleteAll
struct UScriptAsyncTask_X_CompleteAll_Params
{
	TArray<class UScriptAsyncTask_X*>                  Tasks;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UError*                                      InError;                                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.ScriptAsyncTask_X.Create
struct UScriptAsyncTask_X_Create_Params
{
	class UScriptAsyncTask_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ScriptAsyncTask_X.Dispose
struct UScriptAsyncTask_X_Dispose_Params
{
};

// Function ProjectX.ScriptAsyncTask_X.Complete
struct UScriptAsyncTask_X_Complete_Params
{
	class UError*                                      InError;                                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.ScriptAsyncTask_X.NotifyOnComplete
struct UScriptAsyncTask_X_NotifyOnComplete_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UScriptAsyncTask_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ScriptAsyncTask_X.NotifyOnFail
struct UScriptAsyncTask_X_NotifyOnFail_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UScriptAsyncTask_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ScriptAsyncTask_X.NotifyOnSuccess
struct UScriptAsyncTask_X_NotifyOnSuccess_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UScriptAsyncTask_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ScriptAsyncTask_X.EventTaskComplete
struct UScriptAsyncTask_X_EventTaskComplete_Params
{
	class UScriptAsyncTask_X*                          Task;                                                     // (CPF_Parm)
};

// Function ProjectX.ScriptAsyncTask_X.EventTaskFail
struct UScriptAsyncTask_X_EventTaskFail_Params
{
	class UScriptAsyncTask_X*                          Task;                                                     // (CPF_Parm)
};

// Function ProjectX.ScriptAsyncTask_X.EventTaskSuccess
struct UScriptAsyncTask_X_EventTaskSuccess_Params
{
	class UScriptAsyncTask_X*                          Task;                                                     // (CPF_Parm)
};

// Function ProjectX.SeqAct_NonNativeUpdate_X.Update
struct USeqAct_NonNativeUpdate_X_Update_Params
{
	float                                              dt;                                                       // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.SequenceCondition_X.Activated
struct USequenceCondition_X_Activated_Params
{
};

// Function ProjectX.Serializer_X.DeserializeObject
struct USerializer_X_DeserializeObject_Params
{
	class UObject*                                     Target;                                                   // (CPF_Parm)
	TArray<unsigned char>                              InData;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.Serializer_X.SerializeObject
struct USerializer_X_SerializeObject_Params
{
	class UObject*                                     Target;                                                   // (CPF_Parm)
	TArray<unsigned char>                              OutData;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.JSONSerializer_X.DecodeObject
struct UJSONSerializer_X_DecodeObject_Params
{
	class UObject*                                     Target;                                                   // (CPF_Parm)
	struct FString                                     Stream;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.JSONSerializer_X.EncodeObject
struct UJSONSerializer_X_EncodeObject_Params
{
	class UObject*                                     Target;                                                   // (CPF_Parm)
	struct FString                                     Stream;                                                   // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.JSONSerializer_X.DeserializeObject
struct UJSONSerializer_X_DeserializeObject_Params
{
	class UObject*                                     Target;                                                   // (CPF_Parm)
	TArray<unsigned char>                              InData;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.JSONSerializer_X.SerializeObject
struct UJSONSerializer_X_SerializeObject_Params
{
	class UObject*                                     Target;                                                   // (CPF_Parm)
	TArray<unsigned char>                              OutData;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.ObjectSerializer_X.DeserializeObject
struct UObjectSerializer_X_DeserializeObject_Params
{
	class UObject*                                     Target;                                                   // (CPF_Parm)
	TArray<unsigned char>                              InData;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.ObjectSerializer_X.SerializeObject
struct UObjectSerializer_X_SerializeObject_Params
{
	class UObject*                                     Target;                                                   // (CPF_Parm)
	TArray<unsigned char>                              OutData;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.StateObject_X.InitExecution
struct UStateObject_X_InitExecution_Params
{
};

// Function ProjectX.StateObject_X.Destroyed
struct UStateObject_X_Destroyed_Params
{
};

// Function ProjectX.StateObject_X.Destroy
struct UStateObject_X_Destroy_Params
{
};

// Function ProjectX.TickableStateObject_X.Sleep
struct UTickableStateObject_X_Sleep_Params
{
	float                                              Seconds;                                                  // (CPF_Parm)
};

// Function ProjectX.TickableStateObject_X.Tick
struct UTickableStateObject_X_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.TickableStateObject_X.ProcessState
struct UTickableStateObject_X_ProcessState_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm)
};

// Function ProjectX.TickableStateObject_X.UpdateTimers
struct UTickableStateObject_X_UpdateTimers_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm)
};

// Function ProjectX.TickableStateObject_X.NativeTick
struct UTickableStateObject_X_NativeTick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.TickableStateObject_X.Destroy
struct UTickableStateObject_X_Destroy_Params
{
};

// Function ProjectX.TickableStateObject_X.SetTickable
struct UTickableStateObject_X_SetTickable_Params
{
	bool                                               bTick;                                                    // (CPF_Parm)
};

// Function ProjectX.TickableStateObject_X.IsTimerActive
struct UTickableStateObject_X_IsTimerActive_Params
{
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.TickableStateObject_X.PauseTimer
struct UTickableStateObject_X_PauseTimer_Params
{
	bool                                               bPause;                                                   // (CPF_Parm)
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TickableStateObject_X.ClearAllTimers
struct UTickableStateObject_X_ClearAllTimers_Params
{
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TickableStateObject_X.ClearTimer
struct UTickableStateObject_X_ClearTimer_Params
{
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TickableStateObject_X.SetStateTimer
struct UTickableStateObject_X_SetStateTimer_Params
{
	float                                              InRate;                                                   // (CPF_Parm)
	bool                                               inbLoop;                                                  // (CPF_OptionalParm, CPF_Parm)
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TickableStateObject_X.SetTimer
struct UTickableStateObject_X_SetTimer_Params
{
	float                                              InRate;                                                   // (CPF_Parm)
	bool                                               inbLoop;                                                  // (CPF_OptionalParm, CPF_Parm)
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.AutomationScript_X.Wait
struct UAutomationScript_X_Wait_Params
{
	float                                              Time;                                                     // (CPF_Parm)
};

// Function ProjectX.AutomationScript_X.ExecuteCommand
struct UAutomationScript_X_ExecuteCommand_Params
{
	struct FString                                     Command;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.AutomationScript_X.ExecuteNextCommand
struct UAutomationScript_X_ExecuteNextCommand_Params
{
};

// Function ProjectX.AutomationScript_X.Start
struct UAutomationScript_X_Start_Params
{
};

// Function ProjectX.AutomationScript_X.LoadCommandsFromText
struct UAutomationScript_X_LoadCommandsFromText_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.AutomationScript_X.LoadCommandsFromFile
struct UAutomationScript_X_LoadCommandsFromFile_Params
{
	struct FString                                     FilePath;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.DrawDebugManager_X.DrawBox
struct UDrawDebugManager_X_DrawBox_Params
{
	struct FVector                                     Start;                                                    // (CPF_Parm)
	struct FVector                                     Extent;                                                   // (CPF_OptionalParm, CPF_Parm)
	class AActor*                                      A;                                                        // (CPF_OptionalParm, CPF_Parm)
	float                                              Lifetime;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UDrawDebugBox_X*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DrawDebugManager_X.DrawSphere
struct UDrawDebugManager_X_DrawSphere_Params
{
	struct FVector                                     Start;                                                    // (CPF_Parm)
	float                                              Radius;                                                   // (CPF_Parm)
	class AActor*                                      A;                                                        // (CPF_OptionalParm, CPF_Parm)
	float                                              Lifetime;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UDrawDebugSphere_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DrawDebugManager_X.DrawLinePivotActor
struct UDrawDebugManager_X_DrawLinePivotActor_Params
{
	class AActor*                                      A;                                                        // (CPF_Parm)
	float                                              Size;                                                     // (CPF_OptionalParm, CPF_Parm)
	float                                              Lifetime;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UDrawDebugLinePivot_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DrawDebugManager_X.DrawLinePivot
struct UDrawDebugManager_X_DrawLinePivot_Params
{
	struct FVector                                     Start;                                                    // (CPF_Parm)
	struct FRotator                                    Rotation;                                                 // (CPF_Parm)
	float                                              Size;                                                     // (CPF_OptionalParm, CPF_Parm)
	float                                              Lifetime;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UDrawDebugLinePivot_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DrawDebugManager_X.DrawLineActors
struct UDrawDebugManager_X_DrawLineActors_Params
{
	class AActor*                                      ActorStart;                                               // (CPF_Parm)
	class AActor*                                      ActorEnd;                                                 // (CPF_Parm)
	float                                              Lifetime;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UDrawDebugLine_X*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DrawDebugManager_X.DrawLine
struct UDrawDebugManager_X_DrawLine_Params
{
	struct FVector                                     Start;                                                    // (CPF_Parm)
	struct FVector                                     End;                                                      // (CPF_Parm)
	float                                              Lifetime;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UDrawDebugLine_X*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DrawDebugManager_X.CreateObject
struct UDrawDebugManager_X_CreateObject_Params
{
	class UClass*                                      Type;                                                     // (CPF_Parm)
	float                                              Lifetime;                                                 // (CPF_Parm)
	class AActor*                                      ActorRef;                                                 // (CPF_OptionalParm, CPF_Parm)
	class UDrawDebugObject_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DrawDebugManager_X.SetColor
struct UDrawDebugManager_X_SetColor_Params
{
	unsigned char                                      R;                                                        // (CPF_Parm)
	unsigned char                                      G;                                                        // (CPF_Parm)
	unsigned char                                      B;                                                        // (CPF_Parm)
};

// Function ProjectX.DrawDebugManager_X.Tick
struct UDrawDebugManager_X_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.DrawDebugManager_X.Destroy
struct UDrawDebugManager_X_Destroy_Params
{
};

// Function ProjectX.DrawDebugManager_X.GetInstance
struct UDrawDebugManager_X_GetInstance_Params
{
	class UDrawDebugManager_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.BuildAddress
struct UOnline_X_BuildAddress_Params
{
	struct FString                                     Host;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Port;                                                     // (CPF_Parm)
	struct FString                                     IP;                                                       // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.Online_X.IsInOnlineGame
struct UOnline_X_IsInOnlineGame_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.IsInMainMenu
struct UOnline_X_IsInMainMenu_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.GetGRI
struct UOnline_X_GetGRI_Params
{
	class AGRI_X*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.GetWorldInfo
struct UOnline_X_GetWorldInfo_Params
{
	class AWorldInfo*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.CreateUniqueNetID
struct UOnline_X_CreateUniqueNetID_Params
{
	TEnumAsByte<EOnlinePlatform>                       Platform;                                                 // (CPF_Parm)
	struct FString                                     PlatformName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.UniqueLobbyIDIsSet
struct UOnline_X_UniqueLobbyIDIsSet_Params
{
	struct FUniqueLobbyId                              InID;                                                     // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.StringToUniqueLobbyId
struct UOnline_X_StringToUniqueLobbyId_Params
{
	struct FString                                     InID;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueLobbyId                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.UniqueLobbyIdToString
struct UOnline_X_UniqueLobbyIdToString_Params
{
	struct FUniqueLobbyId                              InID;                                                     // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.Online_X.GetUniqueNetIDWithoutSplitscreenID
struct UOnline_X_GetUniqueNetIDWithoutSplitscreenID_Params
{
	struct FUniqueNetId                                Id;                                                       // (CPF_Parm)
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.GetPrimaryIDForGuest
struct UOnline_X_GetPrimaryIDForGuest_Params
{
	struct FUniqueNetId                                InGuestID;                                                // (CPF_Parm)
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.UniqueNetIDIsGuest
struct UOnline_X_UniqueNetIDIsGuest_Params
{
	struct FUniqueNetId                                InID;                                                     // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.UniqueNetIDIsValid
struct UOnline_X_UniqueNetIDIsValid_Params
{
	struct FUniqueNetId                                InID;                                                     // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.StringToUniqueNetId
struct UOnline_X_StringToUniqueNetId_Params
{
	struct FString                                     InID;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.UniqueNetIdToString
struct UOnline_X_UniqueNetIdToString_Params
{
	struct FUniqueNetId                                InID;                                                     // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.Online_X.FindUniqueNetID
struct UOnline_X_FindUniqueNetID_Params
{
	TArray<struct FUniqueNetId>                        List;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FUniqueNetId                                Search;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.GetConnectionStatusError
struct UOnline_X_GetConnectionStatusError_Params
{
	int                                                ErrorCode;                                                // (CPF_Parm)
	class UError*                                      FallbackError;                                            // (CPF_OptionalParm, CPF_Parm)
	class UError*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Online_X.OnExit
struct UOnline_X_OnExit_Params
{
};

// Function ProjectX.Online_X.OnNewGame
struct UOnline_X_OnNewGame_Params
{
};

// Function ProjectX.Online_X.OnMainMenuOpened
struct UOnline_X_OnMainMenuOpened_Params
{
};

// Function ProjectX.Online_X.HandleGRISpawned
struct UOnline_X_HandleGRISpawned_Params
{
	class AGRI_X*                                      GRI;                                                      // (CPF_Parm)
};

// Function ProjectX.Online_X.OnInit
struct UOnline_X_OnInit_Params
{
};

// Function ProjectX.Online_X.Init
struct UOnline_X_Init_Params
{
	class UOnlineSubsystem*                            NewOnlineSubsystem;                                       // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.OnlineGame_Base_X.PrintDebugInfo
struct UOnlineGame_Base_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGame_Base_X.HasInternetConnection
struct UOnlineGame_Base_X_HasInternetConnection_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_Base_X.GetPort
struct UOnlineGame_Base_X_GetPort_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_Base_X.GetExternalHostAddress
struct UOnlineGame_Base_X_GetExternalHostAddress_Params
{
	bool                                               bWithPort;                                                // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGame_Base_X.GetLocalHostAddress
struct UOnlineGame_Base_X_GetLocalHostAddress_Params
{
	bool                                               bWithPort;                                                // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGame_Base_X.HandleInternetConnectionChanged
struct UOnlineGame_Base_X_HandleInternetConnectionChanged_Params
{
	bool                                               bConnected;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGame_Base_X.HandleConnectionStatusChanged
struct UOnlineGame_Base_X_HandleConnectionStatusChanged_Params
{
	TEnumAsByte<EOnlineServerConnectionStatus>         ConnectionStatus;                                         // (CPF_Parm)
};

// Function ProjectX.OnlineGame_Base_X.SetDefaultSearchType
struct UOnlineGame_Base_X_SetDefaultSearchType_Params
{
	class UClass*                                      OnlineSearchClass;                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGame_Base_X.KickAllPlayers
struct UOnlineGame_Base_X_KickAllPlayers_Params
{
};

// Function ProjectX.OnlineGame_Base_X.DelayedShutdownServer
struct UOnlineGame_Base_X_DelayedShutdownServer_Params
{
};

// Function ProjectX.OnlineGame_Base_X.OnExit
struct UOnlineGame_Base_X_OnExit_Params
{
};

// Function ProjectX.OnlineGame_Base_X.GetPlaylistPlayerCount
struct UOnlineGame_Base_X_GetPlaylistPlayerCount_Params
{
	class UGameSettingPlaylist_X*                      Playlist;                                                 // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_Base_X.OnNewSettingsChosen
struct UOnlineGame_Base_X_OnNewSettingsChosen_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGame_Base_X.UpdateGameSettingsPlayerCount
struct UOnlineGame_Base_X_UpdateGameSettingsPlayerCount_Params
{
	int                                                NumPlayers;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGame_Base_X.UpdateGameSettings
struct UOnlineGame_Base_X_UpdateGameSettings_Params
{
	class UOnlineGameSettings_X*                       InGameSettings;                                           // (CPF_Parm)
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGame_Base_X.CreateOnlineGameSettings
struct UOnlineGame_Base_X_CreateOnlineGameSettings_Params
{
	struct FString                                     Options;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameSettings_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_Base_X.OnNewGameInfoCreated
struct UOnlineGame_Base_X_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGame_Base_X.InitOnlineSubsystemInterfaces
struct UOnlineGame_Base_X_InitOnlineSubsystemInterfaces_Params
{
};

// Function ProjectX.OnlineGame_Base_X.OnInit
struct UOnlineGame_Base_X_OnInit_Params
{
};

// Function ProjectX.OnlineGame_Base_X.GetInstance
struct UOnlineGame_Base_X_GetInstance_Params
{
	class UClass*                                      Type;                                                     // (CPF_OptionalParm, CPF_Parm)
	class UOnlineGame_Base_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)
};

// Function ProjectX.OnlineGame_Base_X.EventInternetConnectionChanged
struct UOnlineGame_Base_X_EventInternetConnectionChanged_Params
{
	bool                                               bConnected;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.PrintDebugInfo
struct UOnlineGame_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.NotifyPlayerPsyNetLogout
struct UOnlineGame_X_NotifyPlayerPsyNetLogout_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGame_X.NotifyPlayerPsyNetLogin
struct UOnlineGame_X_NotifyPlayerPsyNetLogin_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGame_X.IsSignedIn
struct UOnlineGame_X_IsSignedIn_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.CheckUpToDate
struct UOnlineGame_X_CheckUpToDate_Params
{
	class UError*                                      Error;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.CheckNotTooYoung
struct UOnlineGame_X_CheckNotTooYoung_Params
{
	class UError*                                      Error;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.GetPsyNetLoginError
struct UOnlineGame_X_GetPsyNetLoginError_Params
{
	class UOnlinePlayer_X*                             OnlinePlayer;                                             // (CPF_Parm)
	class UError*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.CheckPsyNetConnection
struct UOnlineGame_X_CheckPsyNetConnection_Params
{
	class UError*                                      Error;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.CheckInternetConnection
struct UOnlineGame_X_CheckInternetConnection_Params
{
	class UError*                                      Error;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.IsOnlinePlayerID
struct UOnlineGame_X_IsOnlinePlayerID_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.GetOnlinePlayerByID
struct UOnlineGame_X_GetOnlinePlayerByID_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	class UOnlinePlayer_X*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.OnNewSettingsChosen
struct UOnlineGame_X_OnNewSettingsChosen_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.GetPrimaryPlayerID
struct UOnlineGame_X_GetPrimaryPlayerID_Params
{
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.GetPrimaryPlayer
struct UOnlineGame_X_GetPrimaryPlayer_Params
{
	class UOnlinePlayer_X*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.RemoveOnlinePlayer
struct UOnlineGame_X_RemoveOnlinePlayer_Params
{
	class ULocalPlayer_X*                              LocalPlayer;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.CreateOnlinePlayer
struct UOnlineGame_X_CreateOnlinePlayer_Params
{
	class ULocalPlayer_X*                              LocalPlayer;                                              // (CPF_Parm)
	class UOnlinePlayer_X*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.SetPlayedWith
struct UOnlineGame_X_SetPlayedWith_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.GetPlayerAvatar
struct UOnlineGame_X_GetPlayerAvatar_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                         // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EAvatarSize>                           Size;                                                     // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.OnlineGame_X.SetVoiceVolume
struct UOnlineGame_X_SetVoiceVolume_Params
{
	float                                              NewValue;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.OnNewGameInfoCreated
struct UOnlineGame_X_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.OnMainMenuOpened
struct UOnlineGame_X_OnMainMenuOpened_Params
{
};

// Function ProjectX.OnlineGame_X.HandlePlayerLogin
struct UOnlineGame_X_HandlePlayerLogin_Params
{
	class UOnlinePlayer_X*                             OnlinePlayer;                                             // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.HandlePsyNetLoginChanged
struct UOnlineGame_X_HandlePsyNetLoginChanged_Params
{
	class UOnlinePlayerAuthentication_X*               Auth;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.IsLoggedInToPsyNet
struct UOnlineGame_X_IsLoggedInToPsyNet_Params
{
	class UOnlinePlayer_X*                             OnlinePlayer;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGame_X.OnInit
struct UOnlineGame_X_OnInit_Params
{
};

// Function ProjectX.OnlineGame_X.EventPlayerPsyNetLogout
struct UOnlineGame_X_EventPlayerPsyNetLogout_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.EventPlayerPsyNetLogin
struct UOnlineGame_X_EventPlayerPsyNetLogin_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGame_X.EventConnectionError
struct UOnlineGame_X_EventConnectionError_Params
{
	class UError*                                      Error;                                                    // (CPF_Parm)
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.PrintDebugInfo
struct UOnlineGameDedicatedServer_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.CreateMatchID
struct UOnlineGameDedicatedServer_X_CreateMatchID_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.GetCurrentMapName
struct UOnlineGameDedicatedServer_X_GetCurrentMapName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.ClearMatchmakingBan
struct UOnlineGameDedicatedServer_X_ClearMatchmakingBan_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.IssueMatchmakingBan
struct UOnlineGameDedicatedServer_X_IssueMatchmakingBan_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServer_X.GetTeamNum
struct UOnlineGameDedicatedServer_X_GetTeamNum_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.IsRankedMatch
struct UOnlineGameDedicatedServer_X_IsRankedMatch_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.OnExit
struct UOnlineGameDedicatedServer_X_OnExit_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.HandleNewServerIPRPC
struct UOnlineGameDedicatedServer_X_HandleNewServerIPRPC_Params
{
	class URPC_CheckReplacementDedicatedServer_X*      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.CheckNewServerIP
struct UOnlineGameDedicatedServer_X_CheckNewServerIP_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.CheckNewServerTimeout
struct UOnlineGameDedicatedServer_X_CheckNewServerTimeout_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.CheckStartShutdown
struct UOnlineGameDedicatedServer_X_CheckStartShutdown_Params
{
	int                                                GameTimeRemaining;                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.UpdateGameTime
struct UOnlineGameDedicatedServer_X_UpdateGameTime_Params
{
	int                                                TimeSeconds;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.FindNewDedicatedServerForPlayers
struct UOnlineGameDedicatedServer_X_FindNewDedicatedServerForPlayers_Params
{
	struct FScriptDelegate                             InDelegate;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServer_X.IsInPostGameLobby
struct UOnlineGameDedicatedServer_X_IsInPostGameLobby_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.IsTravellingToNextMap
struct UOnlineGameDedicatedServer_X_IsTravellingToNextMap_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.UpdateOnlineGame
struct UOnlineGameDedicatedServer_X_UpdateOnlineGame_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.AllowSplitscreenJoin
struct UOnlineGameDedicatedServer_X_AllowSplitscreenJoin_Params
{
	class APlayerReplicationInfo*                      PrimaryPRI;                                               // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.PlayerLoggedOut
struct UOnlineGameDedicatedServer_X_PlayerLoggedOut_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.PlayerLoggedIn
struct UOnlineGameDedicatedServer_X_PlayerLoggedIn_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.AllowPlayerLogin
struct UOnlineGameDedicatedServer_X_AllowPlayerLogin_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.OnNewGameInfoCreated
struct UOnlineGameDedicatedServer_X_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.TravelToMap
struct UOnlineGameDedicatedServer_X_TravelToMap_Params
{
	struct FString                                     ServerCommand;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServer_X.GotoPrivateMatchMap
struct UOnlineGameDedicatedServer_X_GotoPrivateMatchMap_Params
{
	struct FName                                       MapName;                                                  // (CPF_Parm)
	int                                                GameMode;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.GotoNextPrivateMatchMap
struct UOnlineGameDedicatedServer_X_GotoNextPrivateMatchMap_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.OnPrivateEventDestroyed
struct UOnlineGameDedicatedServer_X_OnPrivateEventDestroyed_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.GetStartServerCommand
struct UOnlineGameDedicatedServer_X_GetStartServerCommand_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServer_X.GetNextRandomMapName
struct UOnlineGameDedicatedServer_X_GetNextRandomMapName_Params
{
	int                                                GameMode;                                                 // (CPF_Parm)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.GetNextMapName
struct UOnlineGameDedicatedServer_X_GetNextMapName_Params
{
	int                                                GameMode;                                                 // (CPF_OptionalParm, CPF_Parm)
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.GetCustomMatchSettings
struct UOnlineGameDedicatedServer_X_GetCustomMatchSettings_Params
{
	struct FCustomMatchSettings                        OutSettings;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServer_X.GetCustomMatchOwner
struct UOnlineGameDedicatedServer_X_GetCustomMatchOwner_Params
{
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.UpdateCustomMatchOwner
struct UOnlineGameDedicatedServer_X_UpdateCustomMatchOwner_Params
{
	struct FUniqueNetId                                NewOwner;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.SetCustomSettings
struct UOnlineGameDedicatedServer_X_SetCustomSettings_Params
{
	struct FCustomMatchSettings                        Settings;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServer_X.SetupPrivateMatch
struct UOnlineGameDedicatedServer_X_SetupPrivateMatch_Params
{
	struct FCustomMatchSettings                        Settings;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                Creator;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.GoToNextMap
struct UOnlineGameDedicatedServer_X_GoToNextMap_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.GetNextMutatorMapName
struct UOnlineGameDedicatedServer_X_GetNextMutatorMapName_Params
{
	struct FName                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.GoToMap
struct UOnlineGameDedicatedServer_X_GoToMap_Params
{
	struct FString                                     MapName;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServer_X.GetPlaylistTags
struct UOnlineGameDedicatedServer_X_GetPlaylistTags_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServer_X.UpdateAverageMMR
struct UOnlineGameDedicatedServer_X_UpdateAverageMMR_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.ClearSettings
struct UOnlineGameDedicatedServer_X_ClearSettings_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.SetPlaylist
struct UOnlineGameDedicatedServer_X_SetPlaylist_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.HandleReservationsUpdated
struct UOnlineGameDedicatedServer_X_HandleReservationsUpdated_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.InitClanforge
struct UOnlineGameDedicatedServer_X_InitClanforge_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.OnInit
struct UOnlineGameDedicatedServer_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.EventActive
struct UOnlineGameDedicatedServer_X_EventActive_Params
{
	class UOnlineGameDedicatedServer_X*                Server;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.EventInactive
struct UOnlineGameDedicatedServer_X_EventInactive_Params
{
	class UOnlineGameDedicatedServer_X*                Server;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.EventPrivateMatchSettingsChanged
struct UOnlineGameDedicatedServer_X_EventPrivateMatchSettingsChanged_Params
{
	class UOnlineGameDedicatedServer_X*                Server;                                                   // (CPF_Parm)
	struct FCustomMatchSettings                        NewSettings;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServer_X.EventPlaylistSet
struct UOnlineGameDedicatedServer_X_EventPlaylistSet_Params
{
	class UOnlineGameDedicatedServer_X*                Server;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.EventAverageMMRChanged
struct UOnlineGameDedicatedServer_X_EventAverageMMRChanged_Params
{
	class UOnlineGameDedicatedServer_X*                Server;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.EventFoundNewDedicatedServerForPlayers
struct UOnlineGameDedicatedServer_X_EventFoundNewDedicatedServerForPlayers_Params
{
	struct FString                                     NewIP;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDLC_X.DoesPlayerOwnDLC
struct UOnlineGameDLC_X_DoesPlayerOwnDLC_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FName                                       DLCName;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDLC_X.HandleGetPublisherAppOwnership
struct UOnlineGameDLC_X_HandleGetPublisherAppOwnership_Params
{
	class UWebRequest_X*                               Request;                                                  // (CPF_Const, CPF_Parm)
};

// Function ProjectX.OnlineGameDLC_X.OnMatchFinished
struct UOnlineGameDLC_X_OnMatchFinished_Params
{
};

// Function ProjectX.OnlineGameDLC_X.SyncPlayerDLC
struct UOnlineGameDLC_X_SyncPlayerDLC_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDLC_X.UpdatePlayerDLCInfo
struct UOnlineGameDLC_X_UpdatePlayerDLCInfo_Params
{
	int                                                PlayerInfoIndex;                                          // (CPF_Parm)
};

// Function ProjectX.OnlineGameDLC_X.CreatePlayerDLCInfo
struct UOnlineGameDLC_X_CreatePlayerDLCInfo_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDLC_X.IsPlayerReadyForValidation
struct UOnlineGameDLC_X_IsPlayerReadyForValidation_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDLC_X.EventValidationReady
struct UOnlineGameDLC_X_EventValidationReady_Params
{
};

// Function ProjectX.OnlineGameLeaderboards_X.IsSkillLeaderboard
struct UOnlineGameLeaderboards_X_IsSkillLeaderboard_Params
{
	struct FString                                     NewLeaderboardID;                                         // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                Playlist;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLeaderboards_X.SortLeaderboardDataMMR
struct UOnlineGameLeaderboards_X_SortLeaderboardDataMMR_Params
{
	TArray<struct FLeaderboardData>                    Leaderboard;                                              // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FLeaderboardData>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLeaderboards_X.SortLeaderboardData
struct UOnlineGameLeaderboards_X_SortLeaderboardData_Params
{
	TArray<struct FLeaderboardData>                    Leaderboard;                                              // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FLeaderboardData>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLeaderboards_X.HandleGetLeaderboardFriendsRPC
struct UOnlineGameLeaderboards_X_HandleGetLeaderboardFriendsRPC_Params
{
	class URPC_GetLeaderboardRankForUsersBase_X*       RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameLeaderboards_X.DispatchLeaderboardFriendsRequest
struct UOnlineGameLeaderboards_X_DispatchLeaderboardFriendsRequest_Params
{
};

// Function ProjectX.OnlineGameLeaderboards_X.GetLeaderboardsForAllFriends
struct UOnlineGameLeaderboards_X_GetLeaderboardsForAllFriends_Params
{
	struct FName                                       LeaderboardId;                                            // (CPF_Parm)
};

// Function ProjectX.OnlineGameLeaderboards_X.GetLeaderboardFriends
struct UOnlineGameLeaderboards_X_GetLeaderboardFriends_Params
{
	class UOnlinePlayer_X*                             OnlinePlayer;                                             // (CPF_Parm)
	struct FName                                       NewLeaderboardID;                                         // (CPF_Parm)
	struct FScriptDelegate                             NewDelegate;                                              // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             FailedDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLeaderboards_X.HandleGetAvatar
struct UOnlineGameLeaderboards_X_HandleGetAvatar_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm)
	class UTexture*                                    Avatar;                                                   // (CPF_Parm)
	struct FString                                     OnlinePlayerName;                                         // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLeaderboards_X.RequestPlayerAvatar
struct UOnlineGameLeaderboards_X_RequestPlayerAvatar_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameLeaderboards_X.HandleGetLeaderboardRPC
struct UOnlineGameLeaderboards_X_HandleGetLeaderboardRPC_Params
{
	class URPC_GetLeaderboardBase_X*                   RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameLeaderboards_X.GetLeaderboard
struct UOnlineGameLeaderboards_X_GetLeaderboard_Params
{
	struct FName                                       NewLeaderboardID;                                         // (CPF_Parm)
	bool                                               bGlobal;                                                  // (CPF_Parm)
	struct FScriptDelegate                             NewDelegate;                                              // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             FailedDelegate;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLeaderboards_X.GetCachedLeaderboardData
struct UOnlineGameLeaderboards_X_GetCachedLeaderboardData_Params
{
	struct FName                                       LeaderboardId;                                            // (CPF_Parm)
	TArray<struct FLeaderboardData>                    LeaderboardDataList;                                      // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLeaderboards_X.CalcDivision
struct UOnlineGameLeaderboards_X_CalcDivision_Params
{
	float                                              TopValue;                                                 // (CPF_Parm)
	float                                              Value;                                                    // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLeaderboards_X.GetRankForPrimaryPlayer
struct UOnlineGameLeaderboards_X_GetRankForPrimaryPlayer_Params
{
	struct FName                                       LeaderboardId;                                            // (CPF_Parm)
	int                                                Value;                                                    // (CPF_Parm)
	int                                                Rank;                                                     // (CPF_Parm, CPF_OutParm)
	int                                                Division;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.OnlineGameLeaderboards_X.HandleGetLeaderboardPlayerValueRPC
struct UOnlineGameLeaderboards_X_HandleGetLeaderboardPlayerValueRPC_Params
{
	class URPC_GetLeaderboardValueForUserBase_X*       RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameLeaderboards_X.GetLeaderboardPlayerValue
struct UOnlineGameLeaderboards_X_GetLeaderboardPlayerValue_Params
{
	struct FName                                       NewLeaderboardID;                                         // (CPF_Parm)
	struct FScriptDelegate                             NewDelegate;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLeaderboards_X.GetCurrentPlatformName
struct UOnlineGameLeaderboards_X_GetCurrentPlatformName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLeaderboards_X.EventLeaderboardAvatarFound
struct UOnlineGameLeaderboards_X_EventLeaderboardAvatarFound_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (CPF_Const, CPF_Parm, CPF_OutParm)
	class UTexture*                                    Avatar;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameLeaderboards_X.EventGetLeaderboardFailed
struct UOnlineGameLeaderboards_X_EventGetLeaderboardFailed_Params
{
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameLeaderboards_X.EventNewLeaderboard
struct UOnlineGameLeaderboards_X_EventNewLeaderboard_Params
{
	struct FName                                       NewLeaderboardID;                                         // (CPF_Parm)
	TArray<struct FLeaderboardData>                    NewLeaderboardData;                                       // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLeaderboards_X.OnGetLeaderboardPlayerValue
struct UOnlineGameLeaderboards_X_OnGetLeaderboardPlayerValue_Params
{
	class UOnlineGameLeaderboards_X*                   LeaderboardsRef;                                          // (CPF_Parm)
	struct FLeaderboardData                            PlayerLeaderboardData;                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FName                                       LeaderboardId;                                            // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.__OnlineGameReservations_X__AllPlayersReserved_1
struct UOnlineGameReservations_X___OnlineGameReservations_X__AllPlayersReserved_1_Params
{
	struct FReservationData                            P;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.__OnlineGameReservations_X__AllPlayersInGame_1
struct UOnlineGameReservations_X___OnlineGameReservations_X__AllPlayersInGame_1_Params
{
	struct FReservationData                            P;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.GetAccumulatedPrefs
struct UOnlineGameReservations_X_GetAccumulatedPrefs_Params
{
	TArray<struct FName>                               Likes;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameReservations_X.PrintDebugInfo
struct UOnlineGameReservations_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.GetMetrics
struct UOnlineGameReservations_X_GetMetrics_Params
{
	class UReservationsMetrics_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.OnlineGameReservations_X.OnNewGameInfoCreated
struct UOnlineGameReservations_X_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.HasSplitscreenPlayers
struct UOnlineGameReservations_X_HasSplitscreenPlayers_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.SetParty
struct UOnlineGameReservations_X_SetParty_Params
{
	struct FUniqueNetId                                MemberId;                                                 // (CPF_Parm)
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.GetPartyID
struct UOnlineGameReservations_X_GetPartyID_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.GetTeamNum
struct UOnlineGameReservations_X_GetTeamNum_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.GetPlayersPlatformsString
struct UOnlineGameReservations_X_GetPlayersPlatformsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameReservations_X.GetPlatformsString
struct UOnlineGameReservations_X_GetPlatformsString_Params
{
	TArray<TEnumAsByte<EOnlinePlatform>>               Platforms;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameReservations_X.GetPlayerPlatforms
struct UOnlineGameReservations_X_GetPlayerPlatforms_Params
{
	TArray<TEnumAsByte<EOnlinePlatform>>               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameReservations_X.CanPlayTogether
struct UOnlineGameReservations_X_CanPlayTogether_Params
{
	TEnumAsByte<EOnlinePlatform>                       Platform1;                                                // (CPF_Parm)
	TEnumAsByte<EOnlinePlatform>                       Platform2;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.CanAcceptReservationsForPlatform
struct UOnlineGameReservations_X_CanAcceptReservationsForPlatform_Params
{
	class UAddReservationMessagePublic_X*              Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.GetExclusivePlatform
struct UOnlineGameReservations_X_GetExclusivePlatform_Params
{
	TEnumAsByte<EOnlinePlatform>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.CanAcceptReservations
struct UOnlineGameReservations_X_CanAcceptReservations_Params
{
	class UAddReservationMessagePublic_X*              Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.GetPlayerCounts
struct UOnlineGameReservations_X_GetPlayerCounts_Params
{
	int                                                Team0Reserved;                                            // (CPF_Parm, CPF_OutParm)
	int                                                Team0Joined;                                              // (CPF_Parm, CPF_OutParm)
	int                                                Team1Reserved;                                            // (CPF_Parm, CPF_OutParm)
	int                                                Team1Joined;                                              // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.OnlineGameReservations_X.NotifyReservationsUpdated
struct UOnlineGameReservations_X_NotifyReservationsUpdated_Params
{
};

// Function ProjectX.OnlineGameReservations_X.OnReservationsUpdated
struct UOnlineGameReservations_X_OnReservationsUpdated_Params
{
};

// Function ProjectX.OnlineGameReservations_X.CheckReservationTimeout
struct UOnlineGameReservations_X_CheckReservationTimeout_Params
{
};

// Function ProjectX.OnlineGameReservations_X.StartReservationTimeout
struct UOnlineGameReservations_X_StartReservationTimeout_Params
{
};

// Function ProjectX.OnlineGameReservations_X.SyncSkills
struct UOnlineGameReservations_X_SyncSkills_Params
{
};

// Function ProjectX.OnlineGameReservations_X.HackForceNotServerTravelling
struct UOnlineGameReservations_X_HackForceNotServerTravelling_Params
{
};

// Function ProjectX.OnlineGameReservations_X.SetServerTraveling
struct UOnlineGameReservations_X_SetServerTraveling_Params
{
	bool                                               bTraveling;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.CloseConnection
struct UOnlineGameReservations_X_CloseConnection_Params
{
	int                                                Index;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.RemoveReservationIndex
struct UOnlineGameReservations_X_RemoveReservationIndex_Params
{
	int                                                Index;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.AddSpecialReservation
struct UOnlineGameReservations_X_AddSpecialReservation_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyID;                                                  // (CPF_OptionalParm, CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.HandleTeamChanged
struct UOnlineGameReservations_X_HandleTeamChanged_Params
{
	class APRI_X*                                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.RemoveReservation
struct UOnlineGameReservations_X_RemoveReservation_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.PlayerLoggedOut
struct UOnlineGameReservations_X_PlayerLoggedOut_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.PlayerLoggedIn
struct UOnlineGameReservations_X_PlayerLoggedIn_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.AllowPlayerLogin
struct UOnlineGameReservations_X_AllowPlayerLogin_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.AllPlayersInGame
struct UOnlineGameReservations_X_AllPlayersInGame_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.AllPlayersReserved
struct UOnlineGameReservations_X_AllPlayersReserved_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.HasGameEnded
struct UOnlineGameReservations_X_HasGameEnded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.HasGameStarted
struct UOnlineGameReservations_X_HasGameStarted_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.CanStartMatch
struct UOnlineGameReservations_X_CanStartMatch_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.HasJoiningPlayers
struct UOnlineGameReservations_X_HasJoiningPlayers_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.IsEmpty
struct UOnlineGameReservations_X_IsEmpty_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.IsNearlyFull
struct UOnlineGameReservations_X_IsNearlyFull_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.IsFull
struct UOnlineGameReservations_X_IsFull_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.GetNumReservedPlayers
struct UOnlineGameReservations_X_GetNumReservedPlayers_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.IsCustomMatch
struct UOnlineGameReservations_X_IsCustomMatch_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.HandleReservationDisconnected
struct UOnlineGameReservations_X_HandleReservationDisconnected_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.ClearGetKeysRPCs
struct UOnlineGameReservations_X_ClearGetKeysRPCs_Params
{
};

// Function ProjectX.OnlineGameReservations_X.ClearTeamHistory
struct UOnlineGameReservations_X_ClearTeamHistory_Params
{
};

// Function ProjectX.OnlineGameReservations_X.ClearReservations
struct UOnlineGameReservations_X_ClearReservations_Params
{
};

// Function ProjectX.OnlineGameReservations_X.Reset
struct UOnlineGameReservations_X_Reset_Params
{
};

// Function ProjectX.OnlineGameReservations_X.RecordTeamHistory
struct UOnlineGameReservations_X_RecordTeamHistory_Params
{
	TArray<struct FReservationData>                    TestPlayers;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FTeamPairHistory>                    History;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameReservations_X.ScrambleTeams
struct UOnlineGameReservations_X_ScrambleTeams_Params
{
};

// Function ProjectX.OnlineGameReservations_X.UpdateTeams
struct UOnlineGameReservations_X_UpdateTeams_Params
{
};

// Function ProjectX.OnlineGameReservations_X.AssignTeamsByPartySize
struct UOnlineGameReservations_X_AssignTeamsByPartySize_Params
{
};

// Function ProjectX.OnlineGameReservations_X.AssignScrambledTeams
struct UOnlineGameReservations_X_AssignScrambledTeams_Params
{
	int                                                TeamSize;                                                 // (CPF_Parm)
	TArray<struct FTeamPairHistory>                    History;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FReservationData>                    TestPlayers;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.AssignTeams
struct UOnlineGameReservations_X_AssignTeams_Params
{
	int                                                TeamSize;                                                 // (CPF_Parm)
	TArray<struct FReservationData>                    TestPlayers;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.HandleSkillSynced
struct UOnlineGameReservations_X_HandleSkillSynced_Params
{
	class UOnlineGameSkill_X*                          SkillSystem;                                              // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.AllowSplitscreenJoin
struct UOnlineGameReservations_X_AllowSplitscreenJoin_Params
{
	class APlayerReplicationInfo*                      PrimaryPRI;                                               // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.IsCheatingSplitscreenReservation
struct UOnlineGameReservations_X_IsCheatingSplitscreenReservation_Params
{
	class UAddReservationMessage_X*                    Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.IsCheatingSplitscreen
struct UOnlineGameReservations_X_IsCheatingSplitscreen_Params
{
	struct FUniqueNetId                                PrimaryPlayerID;                                          // (CPF_Parm)
	struct FUniqueNetId                                SplitscreenPlayerID;                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.CreateReservationData
struct UOnlineGameReservations_X_CreateReservationData_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PartyID;                                                  // (CPF_OptionalParm, CPF_Parm)
	TEnumAsByte<EReservationStatus>                    Status;                                                   // (CPF_OptionalParm, CPF_Parm)
	struct FReservationData                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameReservations_X.NotAllPlayersJoined
struct UOnlineGameReservations_X_NotAllPlayersJoined_Params
{
};

// Function ProjectX.OnlineGameReservations_X.DisconnectExistingPlayers
struct UOnlineGameReservations_X_DisconnectExistingPlayers_Params
{
	class UAddReservationMessage_X*                    ReservationMessage;                                       // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.SetPlayers
struct UOnlineGameReservations_X_SetPlayers_Params
{
	TArray<struct FReservationData>                    TempPlayers;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameReservations_X.AddPlayersFromReservationMessage
struct UOnlineGameReservations_X_AddPlayersFromReservationMessage_Params
{
	class UAddReservationMessage_X*                    ReservationMessage;                                       // (CPF_Parm)
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	TArray<struct FReservationData>                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameReservations_X.IsUnique
struct UOnlineGameReservations_X_IsUnique_Params
{
	TArray<struct FName>                               Prefs;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.HandlePrivateReservation
struct UOnlineGameReservations_X_HandlePrivateReservation_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessagePrivate_X*             Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.SendGetKeysRPCs
struct UOnlineGameReservations_X_SendGetKeysRPCs_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessage_X*                    Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.HandlePrivateReservationMessage
struct UOnlineGameReservations_X_HandlePrivateReservationMessage_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessagePrivate_X*             Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.CanAcceptReservationsForServerKey
struct UOnlineGameReservations_X_CanAcceptReservationsForServerKey_Params
{
	class UAddReservationMessagePublic_X*              Message;                                                  // (CPF_Parm)
	bool                                               bServerKey;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.RemoveKeysRPC
struct UOnlineGameReservations_X_RemoveKeysRPC_Params
{
	class URPC_GetKeys_X*                              RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.HandleGetKeysRPCFail
struct UOnlineGameReservations_X_HandleGetKeysRPCFail_Params
{
	class URPC_GetKeys_X*                              RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.AddNetworkKeys
struct UOnlineGameReservations_X_AddNetworkKeys_Params
{
	class URPC_GetKeys_X*                              RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.HandleGetKeysRPCSuccess
struct UOnlineGameReservations_X_HandleGetKeysRPCSuccess_Params
{
	class URPC_GetKeys_X*                              RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.HandleGetKeysRPC
struct UOnlineGameReservations_X_HandleGetKeysRPC_Params
{
	class URPC_GetKeys_X*                              RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.StartMatch
struct UOnlineGameReservations_X_StartMatch_Params
{
};

// Function ProjectX.OnlineGameReservations_X.BroadcastReadyMessageIfReady
struct UOnlineGameReservations_X_BroadcastReadyMessageIfReady_Params
{
};

// Function ProjectX.OnlineGameReservations_X.CreateReadyMessage
struct UOnlineGameReservations_X_CreateReadyMessage_Params
{
	class UReservationsReadyMessage_X*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.ShouldSyncSkills
struct UOnlineGameReservations_X_ShouldSyncSkills_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.IsSoloPlaylist
struct UOnlineGameReservations_X_IsSoloPlaylist_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.HandlePublicReservation
struct UOnlineGameReservations_X_HandlePublicReservation_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessagePublic_X*              Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.HandlePublicReservationMessage
struct UOnlineGameReservations_X_HandlePublicReservationMessage_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessagePublic_X*              Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.HandlePingMessage
struct UOnlineGameReservations_X_HandlePingMessage_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.OnInit
struct UOnlineGameReservations_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameReservations_X.EventMigrationJoinOccurred
struct UOnlineGameReservations_X_EventMigrationJoinOccurred_Params
{
};

// Function ProjectX.OnlineGameReservations_X.EventReservationsUpdated
struct UOnlineGameReservations_X_EventReservationsUpdated_Params
{
};

// Function ProjectX.OnlineGameStats_X.UploadStats
struct UOnlineGameStats_X_UploadStats_Params
{
	struct FString                                     StatType;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FUploadStatDataSet>                  DataSet;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.GetPlayersLikesDislikes
struct UOnlinePlayer_X_GetPlayersLikesDislikes_Params
{
	class UGameSettingPlaylist_X*                      Playlist;                                                 // (CPF_Parm)
	TArray<struct FName>                               PlayerLikes;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FName>                               PlayerDislikes;                                           // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.PrintDebugInfo
struct UOnlinePlayer_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.IsGuestAccount
struct UOnlinePlayer_X_IsGuestAccount_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayer_X.SetPlayerName
struct UOnlinePlayer_X_SetPlayerName_Params
{
	struct FString                                     NewName;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.CreatePsyNetWebRequest
struct UOnlinePlayer_X_CreatePsyNetWebRequest_Params
{
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayer_X.UpdateSplitscreenId
struct UOnlinePlayer_X_UpdateSplitscreenId_Params
{
};

// Function ProjectX.OnlinePlayer_X.IsUpdateRequired
struct UOnlinePlayer_X_IsUpdateRequired_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayer_X.GetOnlineName
struct UOnlinePlayer_X_GetOnlineName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.GetLocalName
struct UOnlinePlayer_X_GetLocalName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.GetRemoteName
struct UOnlinePlayer_X_GetRemoteName_Params
{
	int                                                LocalPlayerIndex;                                         // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.HandleCanPlayOnlineChanged
struct UOnlinePlayer_X_HandleCanPlayOnlineChanged_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.OnExit
struct UOnlinePlayer_X_OnExit_Params
{
};

// Function ProjectX.OnlinePlayer_X.CanPlayOnline
struct UOnlinePlayer_X_CanPlayOnline_Params
{
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayer_X.HandlePlayerCountryReceived
struct UOnlinePlayer_X_HandlePlayerCountryReceived_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (CPF_Parm)
	struct FString                                     Country;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.GetPlayerCountry
struct UOnlinePlayer_X_GetPlayerCountry_Params
{
	struct FScriptDelegate                             Handler;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.CanCommunicateText
struct UOnlinePlayer_X_CanCommunicateText_Params
{
	TEnumAsByte<EFeaturePrivilegeLevel>                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayer_X.OpenErrorDialog
struct UOnlinePlayer_X_OpenErrorDialog_Params
{
	TEnumAsByte<EPS4ErrorDialog>                       ErrorCode;                                                // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.OpenPS4DisplayMode
struct UOnlinePlayer_X_OpenPS4DisplayMode_Params
{
	TEnumAsByte<EPS4DisplayMode>                       DisplayMode;                                              // (CPF_Parm)
	TArray<struct FString>                             Targets;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	int                                                ServiceLabel;                                             // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.ResetControllerColor
struct UOnlinePlayer_X_ResetControllerColor_Params
{
	int                                                InControllerID;                                           // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.SetControllerColor
struct UOnlinePlayer_X_SetControllerColor_Params
{
	int                                                InControllerID;                                           // (CPF_Parm)
	struct FColor                                      NewColor;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.PostActivityFeedMessage
struct UOnlinePlayer_X_PostActivityFeedMessage_Params
{
	struct FString                                     Id;                                                       // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             StringReplaceList;                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.GetSyncedAchievements
struct UOnlinePlayer_X_GetSyncedAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TArray<unsigned long>                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.UnlockAchievement
struct UOnlinePlayer_X_UnlockAchievement_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	int                                                AchievementId;                                            // (CPF_Parm)
	float                                              PercentComplete;                                          // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.UpdateStat
struct UOnlinePlayer_X_UpdateStat_Params
{
	struct FName                                       StatName;                                                 // (CPF_Parm)
	int                                                Points;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.HandleShowKeyboardComplete
struct UOnlinePlayer_X_HandleShowKeyboardComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.HideKeyboard
struct UOnlinePlayer_X_HideKeyboard_Params
{
};

// Function ProjectX.OnlinePlayer_X.ShowKeyboard
struct UOnlinePlayer_X_ShowKeyboard_Params
{
	struct FString                                     TitleText;                                                // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bIsPassword;                                              // (CPF_Parm)
	struct FString                                     DefaultText;                                              // (CPF_Parm, CPF_NeedCtorLink)
	int                                                MaxLength;                                                // (CPF_Parm)
	struct FScriptDelegate                             OnCompleteDelegate;                                       // (CPF_Parm, CPF_NeedCtorLink)
	int                                                LocalPlayerNumOverride;                                   // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayer_X.OnNewGame
struct UOnlinePlayer_X_OnNewGame_Params
{
};

// Function ProjectX.OnlinePlayer_X.HandleControllerChange
struct UOnlinePlayer_X_HandleControllerChange_Params
{
	int                                                InControllerID;                                           // (CPF_Parm)
	bool                                               bIsConnected;                                             // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.HandleUserLoginStatusChange
struct UOnlinePlayer_X_HandleUserLoginStatusChange_Params
{
	TEnumAsByte<ELoginStatus>                          NewStatus;                                                // (CPF_Parm)
	struct FUniqueNetId                                NewId;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.IsLoggedIn
struct UOnlinePlayer_X_IsLoggedIn_Params
{
	bool                                               bRequireOnlineLogin;                                      // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayer_X.HandleLogoutComplete
struct UOnlinePlayer_X_HandleLogoutComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.HandleLoginChanged
struct UOnlinePlayer_X_HandleLoginChanged_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.HandleLoginFailed
struct UOnlinePlayer_X_HandleLoginFailed_Params
{
	unsigned char                                      PlayerNum;                                                // (CPF_Parm)
	TEnumAsByte<EOnlineServerConnectionStatus>         ErrorCode;                                                // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.Logout
struct UOnlinePlayer_X_Logout_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.Login
struct UOnlinePlayer_X_Login_Params
{
	struct FString                                     LoginName;                                                // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     LoginPassword;                                            // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.OnRemoved
struct UOnlinePlayer_X_OnRemoved_Params
{
};

// Function ProjectX.OnlinePlayer_X.InitPlayer
struct UOnlinePlayer_X_InitPlayer_Params
{
};

// Function ProjectX.OnlinePlayer_X.IsPrimaryPlayer
struct UOnlinePlayer_X_IsPrimaryPlayer_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayer_X.HandleAuthLoginChange
struct UOnlinePlayer_X_HandleAuthLoginChange_Params
{
	class UOnlinePlayerAuthentication_X*               Auth;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.HandleAuthSession
struct UOnlinePlayer_X_HandleAuthSession_Params
{
	class UOnlinePlayerAuthentication_X*               Auth;                                                     // (CPF_Parm)
	struct FString                                     SessionId;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.OnInit
struct UOnlinePlayer_X_OnInit_Params
{
};

// Function ProjectX.OnlinePlayer_X.GetOnlineGame
struct UOnlinePlayer_X_GetOnlineGame_Params
{
	class UOnlineGame_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayer_X.EventShowKeyboardComplete
struct UOnlinePlayer_X_EventShowKeyboardComplete_Params
{
	struct FString                                     NewText;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bCanceled;                                                // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.EventCanPlayOnlineChanged
struct UOnlinePlayer_X_EventCanPlayOnlineChanged_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.EventCountryUpdated
struct UOnlinePlayer_X_EventCountryUpdated_Params
{
	struct FString                                     Country;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayer_X.EventLoginStatusChanged
struct UOnlinePlayer_X_EventLoginStatusChanged_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.EventLogoutComplete
struct UOnlinePlayer_X_EventLogoutComplete_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlinePlayer_X.EventLoginComplete
struct UOnlinePlayer_X_EventLoginComplete_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.IsBanned
struct UOnlinePlayerAuthentication_X_IsBanned_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.SetLoggedIn
struct UOnlinePlayerAuthentication_X_SetLoggedIn_Params
{
	bool                                               bSignedIn;                                                // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.GetGameVersion
struct UOnlinePlayerAuthentication_X_GetGameVersion_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.GetBuildRegion
struct UOnlinePlayerAuthentication_X_GetBuildRegion_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayerAuthentication_X.HandleTrialStatusChanged
struct UOnlinePlayerAuthentication_X_HandleTrialStatusChanged_Params
{
	class UOnlineGameTrial_X*                          InTrial;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.OnChangeAuthenticatedName
struct UOnlinePlayerAuthentication_X_OnChangeAuthenticatedName_Params
{
	struct FString                                     NewName;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayerAuthentication_X.NeedToAuthenticateName
struct UOnlinePlayerAuthentication_X_NeedToAuthenticateName_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.HandleReceivedAuthorizationCode
struct UOnlinePlayerAuthentication_X_HandleReceivedAuthorizationCode_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     AuthorizationCode;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     EncryptedTicket;                                          // (CPF_Parm, CPF_NeedCtorLink)
	int                                                IssuerID;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.RequestAuthorizationCode
struct UOnlinePlayerAuthentication_X_RequestAuthorizationCode_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.AuthenticationError
struct UOnlinePlayerAuthentication_X_AuthenticationError_Params
{
	TEnumAsByte<EAuthResult>                           AuthResult;                                               // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.ResetAuthentication
struct UOnlinePlayerAuthentication_X_ResetAuthentication_Params
{
};

// Function ProjectX.OnlinePlayerAuthentication_X.RequiresAuthorizationCode
struct UOnlinePlayerAuthentication_X_RequiresAuthorizationCode_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.ReLogin
struct UOnlinePlayerAuthentication_X_ReLogin_Params
{
};

// Function ProjectX.OnlinePlayerAuthentication_X.SetLoggedInPlayer
struct UOnlinePlayerAuthentication_X_SetLoggedInPlayer_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.HandlePsyNetLoginChanged
struct UOnlinePlayerAuthentication_X_HandlePsyNetLoginChanged_Params
{
	class UOnlinePlayerAuthentication_X*               Auth;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.HandleLocalPlayerLoginStatusChanged
struct UOnlinePlayerAuthentication_X_HandleLocalPlayerLoginStatusChanged_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.GetBannedMinutesRemaining
struct UOnlinePlayerAuthentication_X_GetBannedMinutesRemaining_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.ParseBanned
struct UOnlinePlayerAuthentication_X_ParseBanned_Params
{
	class URPC_LoginAuthPlayer_X*                      RPC;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.ReceiveAuthenticatedName
struct UOnlinePlayerAuthentication_X_ReceiveAuthenticatedName_Params
{
	struct FString                                     ReceivedName;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayerAuthentication_X.RetryLogin
struct UOnlinePlayerAuthentication_X_RetryLogin_Params
{
};

// Function ProjectX.OnlinePlayerAuthentication_X.OnLoginFailRPC
struct UOnlinePlayerAuthentication_X_OnLoginFailRPC_Params
{
	class URPC_LoginAuthPlayer_X*                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.OnLoginSuccessRPC
struct UOnlinePlayerAuthentication_X_OnLoginSuccessRPC_Params
{
	class URPC_LoginAuthPlayer_X*                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.SendLoginRequest
struct UOnlinePlayerAuthentication_X_SendLoginRequest_Params
{
};

// Function ProjectX.OnlinePlayerAuthentication_X.ClearLoginRPC
struct UOnlinePlayerAuthentication_X_ClearLoginRPC_Params
{
};

// Function ProjectX.OnlinePlayerAuthentication_X.PsyNetLogin
struct UOnlinePlayerAuthentication_X_PsyNetLogin_Params
{
};

// Function ProjectX.OnlinePlayerAuthentication_X.OnRemoved
struct UOnlinePlayerAuthentication_X_OnRemoved_Params
{
};

// Function ProjectX.OnlinePlayerAuthentication_X.OnInit
struct UOnlinePlayerAuthentication_X_OnInit_Params
{
};

// Function ProjectX.OnlinePlayerAuthentication_X.EventAuthenticatedNameChanged
struct UOnlinePlayerAuthentication_X_EventAuthenticatedNameChanged_Params
{
	class UOnlinePlayerAuthentication_X*               Auth;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.EventBanned
struct UOnlinePlayerAuthentication_X_EventBanned_Params
{
	class UOnlinePlayerAuthentication_X*               Auth;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerAuthentication_X.EventUnauthorized
struct UOnlinePlayerAuthentication_X_EventUnauthorized_Params
{
};

// Function ProjectX.OnlinePlayerAuthentication_X.EventSessionReceived
struct UOnlinePlayerAuthentication_X_EventSessionReceived_Params
{
	class UOnlinePlayerAuthentication_X*               Auth;                                                     // (CPF_Parm)
	struct FString                                     SessionId;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayerAuthentication_X.EventLoginChanged
struct UOnlinePlayerAuthentication_X_EventLoginChanged_Params
{
	class UOnlinePlayerAuthentication_X*               Auth;                                                     // (CPF_Parm)
};

// Function ProjectX.TickActorComponent_X.SetTickable
struct UTickActorComponent_X_SetTickable_Params
{
	bool                                               bWantsTick;                                               // (CPF_Parm)
};

// Function ProjectX.TickActorComponent_X.ClearAllTimers
struct UTickActorComponent_X_ClearAllTimers_Params
{
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TickActorComponent_X.ClearTimer
struct UTickActorComponent_X_ClearTimer_Params
{
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TickActorComponent_X.SetTimer
struct UTickActorComponent_X_SetTimer_Params
{
	float                                              InRate;                                                   // (CPF_Parm)
	bool                                               inbLoop;                                                  // (CPF_OptionalParm, CPF_Parm)
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TickActorComponent_X.EventTick
struct UTickActorComponent_X_EventTick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.Timers_X.ClearDelegate
struct UTimers_X_ClearDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.Timers_X.SetDelegate
struct UTimers_X_SetDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	float                                              Rate;                                                     // (CPF_Parm)
	bool                                               bLoop;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.Timers_X.GetRemainingTime
struct UTimers_X_GetRemainingTime_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
	struct FName                                       FuncName;                                                 // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Timers_X.GetRate
struct UTimers_X_GetRate_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
	struct FName                                       FuncName;                                                 // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Timers_X.GetCount
struct UTimers_X_GetCount_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
	struct FName                                       FuncName;                                                 // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Timers_X.ClearAll
struct UTimers_X_ClearAll_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
};

// Function ProjectX.Timers_X.Clear
struct UTimers_X_Clear_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
	struct FName                                       FuncName;                                                 // (CPF_Parm)
};

// Function ProjectX.Timers_X.IsActive
struct UTimers_X_IsActive_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
	struct FName                                       FuncName;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Timers_X.Set
struct UTimers_X_Set_Params
{
	class UObject*                                     Obj;                                                      // (CPF_Parm)
	struct FName                                       FuncName;                                                 // (CPF_Parm)
	float                                              Rate;                                                     // (CPF_Parm)
	bool                                               bLoop;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TimersComponent_X.ClearDelegate
struct UTimersComponent_X_ClearDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.TimersComponent_X.SetDelegate
struct UTimersComponent_X_SetDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	float                                              Rate;                                                     // (CPF_Parm)
	bool                                               bLoop;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TimersComponent_X.GetRemainingTimeForTimer
struct UTimersComponent_X_GetRemainingTimeForTimer_Params
{
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.TimersComponent_X.GetTimerRate
struct UTimersComponent_X_GetTimerRate_Params
{
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.TimersComponent_X.GetTimerCount
struct UTimersComponent_X_GetTimerCount_Params
{
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.TimersComponent_X.NotifyStateChanged
struct UTimersComponent_X_NotifyStateChanged_Params
{
	struct FName                                       OldStateName;                                             // (CPF_Parm)
};

// Function ProjectX.TimersComponent_X.UpdateTimers
struct UTimersComponent_X_UpdateTimers_Params
{
	float                                              DeltaSeconds;                                             // (CPF_Parm)
};

// Function ProjectX.TimersComponent_X.ClearAllTimers
struct UTimersComponent_X_ClearAllTimers_Params
{
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TimersComponent_X.ClearTimer
struct UTimersComponent_X_ClearTimer_Params
{
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TimersComponent_X.IsTimerActive
struct UTimersComponent_X_IsTimerActive_Params
{
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.TimersComponent_X.SetStateTimer
struct UTimersComponent_X_SetStateTimer_Params
{
	float                                              InRate;                                                   // (CPF_Parm)
	bool                                               inbLoop;                                                  // (CPF_OptionalParm, CPF_Parm)
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TimersComponent_X.SetTimer
struct UTimersComponent_X_SetTimer_Params
{
	float                                              InRate;                                                   // (CPF_Parm)
	bool                                               inbLoop;                                                  // (CPF_OptionalParm, CPF_Parm)
	struct FName                                       inTimerFunc;                                              // (CPF_OptionalParm, CPF_Parm)
	class UObject*                                     inObj;                                                    // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.TickComponent_X.SetTickable
struct UTickComponent_X_SetTickable_Params
{
	bool                                               bWantsTick;                                               // (CPF_Parm)
};

// Function ProjectX.TickComponent_X.TickDelegate
struct UTickComponent_X_TickDelegate_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.WebRequest_X.PrintDebugInfo
struct UWebRequest_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.WebRequest_X.SetError
struct UWebRequest_X_SetError_Params
{
	class UError*                                      InError;                                                  // (CPF_Parm)
};

// Function ProjectX.WebRequest_X.HasInternetConnection
struct UWebRequest_X_HasInternetConnection_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.HandleHttpRequestComplete
struct UWebRequest_X_HandleHttpRequestComplete_Params
{
	class UHttpRequestInterface*                       OriginalRequest;                                          // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bDidSucceed;                                              // (CPF_Parm)
};

// Function ProjectX.WebRequest_X.ConstructHttpRequest
struct UWebRequest_X_ConstructHttpRequest_Params
{
};

// Function ProjectX.WebRequest_X.GetResponseHeader
struct UWebRequest_X_GetResponseHeader_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.WebRequest_X.GetResponseString
struct UWebRequest_X_GetResponseString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.WebRequest_X.HasNewData
struct UWebRequest_X_HasNewData_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.IsSuccess
struct UWebRequest_X_IsSuccess_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.IsError
struct UWebRequest_X_IsError_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.IsComplete
struct UWebRequest_X_IsComplete_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.IsSent
struct UWebRequest_X_IsSent_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.GetHttpRequest
struct UWebRequest_X_GetHttpRequest_Params
{
	class UHttpRequestInterface*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.Send
struct UWebRequest_X_Send_Params
{
	struct FString                                     InURL;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             OnCompleteCallback;                                       // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.PrepareRequest
struct UWebRequest_X_PrepareRequest_Params
{
	struct FString                                     InURL;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.WebRequest_X.SetContentFromString
struct UWebRequest_X_SetContentFromString_Params
{
	struct FString                                     ContentString;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.WebRequest_X.GetETag
struct UWebRequest_X_GetETag_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.WebRequest_X.SetETag
struct UWebRequest_X_SetETag_Params
{
	struct FString                                     ETag;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.WebRequest_X.SetSessionID
struct UWebRequest_X_SetSessionID_Params
{
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.SetHeader
struct UWebRequest_X_SetHeader_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.AddPlayerIDParam
struct UWebRequest_X_AddPlayerIDParam_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.AddStringParam
struct UWebRequest_X_AddStringParam_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.AddFloatParam
struct UWebRequest_X_AddFloatParam_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	float                                              Value;                                                    // (CPF_Parm)
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.AddQwordParam
struct UWebRequest_X_AddQwordParam_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.AddIntParam
struct UWebRequest_X_AddIntParam_Params
{
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Value;                                                    // (CPF_Parm)
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.Create
struct UWebRequest_X_Create_Params
{
	class UWebRequest_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.WebRequest_X.EventCompleted
struct UWebRequest_X_EventCompleted_Params
{
	class UWebRequest_X*                               Request;                                                  // (CPF_Parm)
};

// Function ProjectX.AnimNodeBlendBase_X.SetActiveChildNamed
struct UAnimNodeBlendBase_X_SetActiveChildNamed_Params
{
	struct FName                                       ChildName;                                                // (CPF_Parm)
	bool                                               bForce;                                                   // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.AnimNodeBlendBase_X.GetAnimDuration
struct UAnimNodeBlendBase_X_GetAnimDuration_Params
{
	int                                                ChildIndex;                                               // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.AnimNodeBlendBase_X.GetBlendTime
struct UAnimNodeBlendBase_X_GetBlendTime_Params
{
	int                                                ChildIndex;                                               // (CPF_Parm)
	bool                                               bGetDefault;                                              // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.AnimNodePose_X.PlayAnim
struct UAnimNodePose_X_PlayAnim_Params
{
	bool                                               bLoop;                                                    // (CPF_OptionalParm, CPF_Parm)
	float                                              InRate;                                                   // (CPF_OptionalParm, CPF_Parm)
	float                                              StartTime;                                                // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.AnimNodeSlot_X.AddNodeToGroup
struct UAnimNodeSlot_X_AddNodeToGroup_Params
{
	struct FName                                       GroupName;                                                // (CPF_Parm)
};

// Function ProjectX.AnimNodeSlot_X.PlaySettings
struct UAnimNodeSlot_X_PlaySettings_Params
{
	struct FCustomAnimSettings                         Settings;                                                 // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.AnimNotify_PlayParticleEffect_X.OnParticleSystemFinished
struct UAnimNotify_PlayParticleEffect_X_OnParticleSystemFinished_Params
{
	class UParticleSystemComponent*                    Component;                                                // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.AnimNotify_PlayParticleEffect_X.NotifyEnd
struct UAnimNotify_PlayParticleEffect_X_NotifyEnd_Params
{
	class AActor*                                      Owner;                                                    // (CPF_Parm)
	class UAnimNodeSequence*                           AnimSeqInstigator;                                        // (CPF_Parm)
};

// Function ProjectX.AnimNotify_PlayParticleEffect_X.Notify
struct UAnimNotify_PlayParticleEffect_X_Notify_Params
{
	class AActor*                                      Owner;                                                    // (CPF_Parm)
	class UAnimNodeSequence*                           AnimSeqInstigator;                                        // (CPF_Parm)
};

// Function ProjectX.TcpConnection.OnDisconnected
struct UTcpConnection_OnDisconnected_Params
{
};

// Function ProjectX.TcpConnection.OnConnected
struct UTcpConnection_OnConnected_Params
{
};

// Function ProjectX.TcpConnection.Close
struct UTcpConnection_Close_Params
{
};

// Function ProjectX.TcpConnection.GetRemoteAddress
struct UTcpConnection_GetRemoteAddress_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.TcpConnection.GetAddress
struct UTcpConnection_GetAddress_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.TcpConnection.EventDisconnected
struct UTcpConnection_EventDisconnected_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.TcpConnection.EventConnected
struct UTcpConnection_EventConnected_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.PrivilegeCheck_X.HasFeatureRestriction
struct UPrivilegeCheck_X_HasFeatureRestriction_Params
{
	int                                                OutControllerID;                                          // (CPF_Parm, CPF_OutParm)
	TEnumAsByte<EFeaturePrivilege>                     OutFailedPrivilege;                                       // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PrivilegeCheck_X.OnFinished
struct UPrivilegeCheck_X_OnFinished_Params
{
};

// Function ProjectX.PrivilegeCheck_X.Fail
struct UPrivilegeCheck_X_Fail_Params
{
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PrivilegeCheck_X.HandlePrivilege
struct UPrivilegeCheck_X_HandlePrivilege_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (CPF_Parm)
	TEnumAsByte<EFeaturePrivilegeLevel>                Level;                                                    // (CPF_Parm)
};

// Function ProjectX.PrivilegeCheck_X.CheckPrivilege
struct UPrivilegeCheck_X_CheckPrivilege_Params
{
};

// Function ProjectX.PrivilegeCheck_X.CheckPsyNet
struct UPrivilegeCheck_X_CheckPsyNet_Params
{
};

// Function ProjectX.PrivilegeCheck_X.CheckInternet
struct UPrivilegeCheck_X_CheckInternet_Params
{
};

// Function ProjectX.PrivilegeCheck_X.RequirePrivilege
struct UPrivilegeCheck_X_RequirePrivilege_Params
{
	TEnumAsByte<EFeaturePrivilege>                     Privilege;                                                // (CPF_Parm)
	class UPrivilegeCheck_X*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PrivilegeCheck_X.RequirePsyNet
struct UPrivilegeCheck_X_RequirePsyNet_Params
{
	class UPrivilegeCheck_X*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PrivilegeCheck_X.RequireInternet
struct UPrivilegeCheck_X_RequireInternet_Params
{
	class UPrivilegeCheck_X*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PrivilegeCheck_X.StartNextCheck
struct UPrivilegeCheck_X_StartNextCheck_Params
{
};

// Function ProjectX.PrivilegeCheck_X.Start
struct UPrivilegeCheck_X_Start_Params
{
};

// Function ProjectX.PrivilegeCheck_X.Init
struct UPrivilegeCheck_X_Init_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
};

// Function ProjectX.PrivilegeCheck_X.CheckDelegate
struct UPrivilegeCheck_X_CheckDelegate_Params
{
};

// Function ProjectX.AccessControl_X.GetPlayerIDFromPlayer
struct AAccessControl_X_GetPlayerIDFromPlayer_Params
{
	class UPlayer*                                     SearchPlayer;                                             // (CPF_Parm)
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ActivateAnimSeriesComponent_X.SetAnimSeriesActiveInComponent
struct UActivateAnimSeriesComponent_X_SetAnimSeriesActiveInComponent_Params
{
	class USkeletalMeshComponent*                      SKC;                                                      // (CPF_Parm, CPF_EditInline)
	bool                                               bActive;                                                  // (CPF_Parm)
};

// Function ProjectX.ActivateAnimSeriesComponent_X.SetAnimSeriesActive
struct UActivateAnimSeriesComponent_X_SetAnimSeriesActive_Params
{
	bool                                               bActive;                                                  // (CPF_Parm)
};

// Function ProjectX.ActivateAnimSeriesComponent_X.Detached
struct UActivateAnimSeriesComponent_X_Detached_Params
{
};

// Function ProjectX.ActivateAnimSeriesComponent_X.Attached
struct UActivateAnimSeriesComponent_X_Attached_Params
{
};

// Function ProjectX.AddReservationMessage_X.GetPlayerMapPrefs
struct UAddReservationMessage_X_GetPlayerMapPrefs_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	TArray<struct FName>                               Likes;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.AddReservationMessage_X.SetDisableCrossPlay
struct UAddReservationMessage_X_SetDisableCrossPlay_Params
{
	bool                                               bValue;                                                   // (CPF_Parm)
	class UAddReservationMessage_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.AddReservationMessage_X.AddPlayer
struct UAddReservationMessage_X_AddPlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bRemotePlayer;                                            // (CPF_Parm)
	class UAddReservationMessage_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.AddReservationMessage_X.AddOnlinePlayer
struct UAddReservationMessage_X_AddOnlinePlayer_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
	bool                                               bFriendJoin;                                              // (CPF_OptionalParm, CPF_Parm)
	class UAddReservationMessage_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.AddReservationMessage_X.AddPlayers
struct UAddReservationMessage_X_AddPlayers_Params
{
	class UAddReservationMessage_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.HandlePartyConfigChanged
struct UOnlineGameParty_X_HandlePartyConfigChanged_Params
{
};

// Function ProjectX.OnlineGameParty_X.HandleMessageForMetrics
struct UOnlineGameParty_X_HandleMessageForMetrics_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandlePlayerTradeComplete
struct UOnlineGameParty_X_HandlePlayerTradeComplete_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.SendPlayerTradeComplete
struct UOnlineGameParty_X_SendPlayerTradeComplete_Params
{
};

// Function ProjectX.OnlineGameParty_X.SendPlayerTradeCompleteAndClear
struct UOnlineGameParty_X_SendPlayerTradeCompleteAndClear_Params
{
	bool                                               bWasCanceled;                                             // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleReadyToTrade
struct UOnlineGameParty_X_HandleReadyToTrade_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.ReadyToTrade
struct UOnlineGameParty_X_ReadyToTrade_Params
{
	bool                                               bReadyToTrade;                                            // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.SetPartyMessageHandlerTradeProductUpdate
struct UOnlineGameParty_X_SetPartyMessageHandlerTradeProductUpdate_Params
{
	bool                                               bAddHandler;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.ClearTradingPlayer
struct UOnlineGameParty_X_ClearTradingPlayer_Params
{
	bool                                               bWasCanceled;                                             // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleAcceptInviteToTrade
struct UOnlineGameParty_X_HandleAcceptInviteToTrade_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.CanAcceptTrade
struct UOnlineGameParty_X_CanAcceptTrade_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.AcceptInviteToTrade
struct UOnlineGameParty_X_AcceptInviteToTrade_Params
{
	bool                                               bAccepted;                                                // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.ResolveGuids
struct UOnlineGameParty_X_ResolveGuids_Params
{
	struct FGuid                                       A;                                                        // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FGuid                                       B;                                                        // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FGuid                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.GetTradingPlayerID
struct UOnlineGameParty_X_GetTradingPlayerID_Params
{
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.GetTradingPlayerName
struct UOnlineGameParty_X_GetTradingPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.HandleInviteToTradeMessage
struct UOnlineGameParty_X_HandleInviteToTradeMessage_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UPartyMessage_InviteToTrade_X*               Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.InvitePlayerToTrade
struct UOnlineGameParty_X_InvitePlayerToTrade_Params
{
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.IsPlayerTrading
struct UOnlineGameParty_X_IsPlayerTrading_Params
{
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.ClearAllPlayersTrading
struct UOnlineGameParty_X_ClearAllPlayersTrading_Params
{
};

// Function ProjectX.OnlineGameParty_X.SetPlayersTrading
struct UOnlineGameParty_X_SetPlayersTrading_Params
{
	struct FUniqueNetId                                InMember1Id;                                              // (CPF_Parm)
	struct FUniqueNetId                                InMember2Id;                                              // (CPF_Parm)
	bool                                               bTrading;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.GetMemberName
struct UOnlineGameParty_X_GetMemberName_Params
{
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.GetOrderedPartyMemberIDs
struct UOnlineGameParty_X_GetOrderedPartyMemberIDs_Params
{
	TArray<struct FUniqueNetId>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.GetPartyMemberIDs
struct UOnlineGameParty_X_GetPartyMemberIDs_Params
{
	TArray<struct FUniqueNetId>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.HandleSessionCreated
struct UOnlineGameParty_X_HandleSessionCreated_Params
{
};

// Function ProjectX.OnlineGameParty_X.IsProcessing
struct UOnlineGameParty_X_IsProcessing_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.SetProcessingStatus
struct UOnlineGameParty_X_SetProcessingStatus_Params
{
	TEnumAsByte<EPartyProcessingStatus>                Status;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.PrintDebugInfo
struct UOnlineGameParty_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.GetPlayerRatingString
struct UOnlineGameParty_X_GetPlayerRatingString_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                Playlist;                                                 // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.HandlePartyBugReport
struct UOnlineGameParty_X_HandlePartyBugReport_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.BroadcastBugReport
struct UOnlineGameParty_X_BroadcastBugReport_Params
{
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.OnPartyError
struct UOnlineGameParty_X_OnPartyError_Params
{
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandlePartyError
struct UOnlineGameParty_X_HandlePartyError_Params
{
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.HandleRankedConfigChanged
struct UOnlineGameParty_X_HandleRankedConfigChanged_Params
{
};

// Function ProjectX.OnlineGameParty_X.UpdatePlaylistRestrictions
struct UOnlineGameParty_X_UpdatePlaylistRestrictions_Params
{
};

// Function ProjectX.OnlineGameParty_X.GetPlaylistSkillRestrictionInfo
struct UOnlineGameParty_X_GetPlaylistSkillRestrictionInfo_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	struct FPlaylistSkillRestrictionInfo               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.IsPlaylistSkillRestricted
struct UOnlineGameParty_X_IsPlaylistSkillRestricted_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.HandleGroupSkillSynced
struct UOnlineGameParty_X_HandleGroupSkillSynced_Params
{
	class UOnlineGameSkillGroups_X*                    SkillObj;                                                 // (CPF_Parm)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                // (CPF_Parm, CPF_NeedCtorLink)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandlePlayerSkillSynced
struct UOnlineGameParty_X_HandlePlayerSkillSynced_Params
{
	class UOnlineGameSkill_X*                          SkillObj;                                                 // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.GetAverageSkill
struct UOnlineGameParty_X_GetAverageSkill_Params
{
	int                                                Playlist;                                                 // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.GetGroupSkill
struct UOnlineGameParty_X_GetGroupSkill_Params
{
	int                                                Playlist;                                                 // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.GetSkill
struct UOnlineGameParty_X_GetSkill_Params
{
	int                                                Playlist;                                                 // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.SyncUpdatedSkills
struct UOnlineGameParty_X_SyncUpdatedSkills_Params
{
};

// Function ProjectX.OnlineGameParty_X.SyncIndividualSkills
struct UOnlineGameParty_X_SyncIndividualSkills_Params
{
};

// Function ProjectX.OnlineGameParty_X.SyncGroupSkills
struct UOnlineGameParty_X_SyncGroupSkills_Params
{
};

// Function ProjectX.OnlineGameParty_X.SyncSkills
struct UOnlineGameParty_X_SyncSkills_Params
{
	bool                                               bFromCache;                                               // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.SyncPlayerSkill
struct UOnlineGameParty_X_SyncPlayerSkill_Params
{
	struct FUniqueNetId                                MemberId;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandlePsyNetLogin
struct UOnlineGameParty_X_HandlePsyNetLogin_Params
{
};

// Function ProjectX.OnlineGameParty_X.OnPartyChanged
struct UOnlineGameParty_X_OnPartyChanged_Params
{
};

// Function ProjectX.OnlineGameParty_X.UseGroupMMR
struct UOnlineGameParty_X_UseGroupMMR_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.TryGetValueInt
struct UOnlineGameParty_X_TryGetValueInt_Params
{
	TArray<struct FLobbyMetaData>                      MetaData;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	int                                                Value;                                                    // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.PartyHasDisableCrossPlay
struct UOnlineGameParty_X_PartyHasDisableCrossPlay_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.SetDisableCrossPlayForMember
struct UOnlineGameParty_X_SetDisableCrossPlayForMember_Params
{
	struct FUniqueNetId                                PartyMemberID;                                            // (CPF_Parm)
	bool                                               bDisableCrossPlay;                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleDisableCrossPlayMessage
struct UOnlineGameParty_X_HandleDisableCrossPlayMessage_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.BroadcastDisableCrossPlay
struct UOnlineGameParty_X_BroadcastDisableCrossPlay_Params
{
};

// Function ProjectX.OnlineGameParty_X.GetAnyAppOwnerRestrictionPlayerName
struct UOnlineGameParty_X_GetAnyAppOwnerRestrictionPlayerName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.GetMatchmakingRestrictionError
struct UOnlineGameParty_X_GetMatchmakingRestrictionError_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.IsPlayerInMainMenu
struct UOnlineGameParty_X_IsPlayerInMainMenu_Params
{
	struct FUniqueNetId                                MemberId;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.IsPlayerInMatch
struct UOnlineGameParty_X_IsPlayerInMatch_Params
{
	struct FUniqueNetId                                MemberId;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.SetAvailableForMatchmakingForMember
struct UOnlineGameParty_X_SetAvailableForMatchmakingForMember_Params
{
	struct FUniqueNetId                                PartyMemberID;                                            // (CPF_Parm)
	int                                                MatchmakeRestrictions;                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleMatchmakingAvailability
struct UOnlineGameParty_X_HandleMatchmakingAvailability_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.BuildMatchmakingRestrictions
struct UOnlineGameParty_X_BuildMatchmakingRestrictions_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.BroadcastMatchmakingAvailability
struct UOnlineGameParty_X_BroadcastMatchmakingAvailability_Params
{
};

// Function ProjectX.OnlineGameParty_X.BroadcastAllLocalPlayers
struct UOnlineGameParty_X_BroadcastAllLocalPlayers_Params
{
};

// Function ProjectX.OnlineGameParty_X.BroadcastLocalPlayersDelayed
struct UOnlineGameParty_X_BroadcastLocalPlayersDelayed_Params
{
};

// Function ProjectX.OnlineGameParty_X.BroadcastLocalPlayers
struct UOnlineGameParty_X_BroadcastLocalPlayers_Params
{
};

// Function ProjectX.OnlineGameParty_X.HandleLocalPlayerLoginStatusChanged
struct UOnlineGameParty_X_HandleLocalPlayerLoginStatusChanged_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleLocalPlayerLeave
struct UOnlineGameParty_X_HandleLocalPlayerLeave_Params
{
	class ULocalPlayer*                                Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleLocalPlayerJoin
struct UOnlineGameParty_X_HandleLocalPlayerJoin_Params
{
	class ULocalPlayer*                                Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.ProcessLocalPlayersMessage
struct UOnlineGameParty_X_ProcessLocalPlayersMessage_Params
{
	class UPartyMessage_LocalPlayers_X*                Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleLocalPlayers
struct UOnlineGameParty_X_HandleLocalPlayers_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     ObjMessage;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.AllowSplitScreenPlayer
struct UOnlineGameParty_X_AllowSplitScreenPlayer_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	class UError*                                      OutError;                                                 // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.GetPartySize
struct UOnlineGameParty_X_GetPartySize_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.HandleSearchStatus
struct UOnlineGameParty_X_HandleSearchStatus_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.BroadcastSearchStatus
struct UOnlineGameParty_X_BroadcastSearchStatus_Params
{
};

// Function ProjectX.OnlineGameParty_X.GetSearchStatusMessage
struct UOnlineGameParty_X_GetSearchStatusMessage_Params
{
	class UPartyMessage_SearchStatus_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.TogglePartyLock
struct UOnlineGameParty_X_TogglePartyLock_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.GetMaxPartySize
struct UOnlineGameParty_X_GetMaxPartySize_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.AllowPartySize
struct UOnlineGameParty_X_AllowPartySize_Params
{
	int                                                InSize;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.IsPartyOverFull
struct UOnlineGameParty_X_IsPartyOverFull_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.AllowNewMember
struct UOnlineGameParty_X_AllowNewMember_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.UpdatePartyLock
struct UOnlineGameParty_X_UpdatePartyLock_Params
{
};

// Function ProjectX.OnlineGameParty_X.HandleFindGameStateChanged
struct UOnlineGameParty_X_HandleFindGameStateChanged_Params
{
	struct FName                                       NewState;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.ClearLastServerAddress
struct UOnlineGameParty_X_ClearLastServerAddress_Params
{
};

// Function ProjectX.OnlineGameParty_X.OnNewGameInfoCreated
struct UOnlineGameParty_X_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.OnNewSettingsChosen
struct UOnlineGameParty_X_OnNewSettingsChosen_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.OnNewGame
struct UOnlineGameParty_X_OnNewGame_Params
{
};

// Function ProjectX.OnlineGameParty_X.SetMatchmakingSearching
struct UOnlineGameParty_X_SetMatchmakingSearching_Params
{
	bool                                               bState;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.SetSearchState
struct UOnlineGameParty_X_SetSearchState_Params
{
	struct FName                                       SearchState;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.GetLocalMemberId
struct UOnlineGameParty_X_GetLocalMemberId_Params
{
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.IsMemberLocal
struct UOnlineGameParty_X_IsMemberLocal_Params
{
	struct FUniqueNetId                                MemberId;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.HasRemoteMember
struct UOnlineGameParty_X_HasRemoteMember_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.HandleNewLeader
struct UOnlineGameParty_X_HandleNewLeader_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleKickMessage
struct UOnlineGameParty_X_HandleKickMessage_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleLobbyDestroyed
struct UOnlineGameParty_X_HandleLobbyDestroyed_Params
{
	struct FUniqueLobbyId                              LobbyId;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm)
	TEnumAsByte<ELobbyKickReason>                      Reason;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleLobbyReceiveBinaryData
struct UOnlineGameParty_X_HandleLobbyReceiveBinaryData_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                MemberIndex;                                              // (CPF_Parm)
	TArray<unsigned char>                              Data;                                                     // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.RemoveAllPartyMembers
struct UOnlineGameParty_X_RemoveAllPartyMembers_Params
{
};

// Function ProjectX.OnlineGameParty_X.RemovePartyMemberByLocalPlayer
struct UOnlineGameParty_X_RemovePartyMemberByLocalPlayer_Params
{
	class ULocalPlayer*                                Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.RemovePartyMemberByID
struct UOnlineGameParty_X_RemovePartyMemberByID_Params
{
	struct FUniqueNetId                                MemberId;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.AddPartyMember
struct UOnlineGameParty_X_AddPartyMember_Params
{
	struct FUniqueNetId                                PrimaryMemberId;                                          // (CPF_Parm)
	struct FUniqueNetId                                MemberId;                                                 // (CPF_Parm)
	struct FString                                     MemberName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ControllerId;                                             // (CPF_OptionalParm, CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.OnEditExistingPartyMember
struct UOnlineGameParty_X_OnEditExistingPartyMember_Params
{
	int                                                PartyMemberIdx;                                           // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.OnAddNewPartyMember
struct UOnlineGameParty_X_OnAddNewPartyMember_Params
{
	int                                                PartyMemberIdx;                                           // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.UpdatePartyInfo
struct UOnlineGameParty_X_UpdatePartyInfo_Params
{
	struct FActiveLobbyInfo                            Lobby;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.OnNewLobby
struct UOnlineGameParty_X_OnNewLobby_Params
{
};

// Function ProjectX.OnlineGameParty_X.HandleJoinLobby
struct UOnlineGameParty_X_HandleJoinLobby_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FUniqueLobbyId                              LobbyUID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.HandleLobbyMemberStatusUpdate
struct UOnlineGameParty_X_HandleLobbyMemberStatusUpdate_Params
{
	struct FActiveLobbyInfo                            LobbyInfo;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	int                                                MemberIndex;                                              // (CPF_Parm)
	int                                                InstigatorIndex;                                          // (CPF_Parm)
	struct FString                                     Status;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.HandlePartyJoinGameComplete
struct UOnlineGameParty_X_HandlePartyJoinGameComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.HandleConfirmJoinGame
struct UOnlineGameParty_X_HandleConfirmJoinGame_Params
{
	struct FPartyJoinMatchSettings                     InSettings;                                               // (CPF_Const, CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.JoinFriend
struct UOnlineGameParty_X_JoinFriend_Params
{
	struct FUniqueNetId                                PartyMemberID;                                            // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.WantsToFollowTheLeaderOutOfGame
struct UOnlineGameParty_X_WantsToFollowTheLeaderOutOfGame_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.HandlePartyJoinGame
struct UOnlineGameParty_X_HandlePartyJoinGame_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     MessageObject;                                            // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.BroadcastPartyServer
struct UOnlineGameParty_X_BroadcastPartyServer_Params
{
};

// Function ProjectX.OnlineGameParty_X.HandleServerReserved
struct UOnlineGameParty_X_HandleServerReserved_Params
{
};

// Function ProjectX.OnlineGameParty_X.HandleJoinGameComplete
struct UOnlineGameParty_X_HandleJoinGameComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.GetPartyMemberServer
struct UOnlineGameParty_X_GetPartyMemberServer_Params
{
	struct FPartyMemberServer                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
	struct FPartyMemberServer                          StructInitializer_134D48E84585344A8A885BB92F666FBB;       // (CPF_Const, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.HandlePartyMemberJoinGame
struct UOnlineGameParty_X_HandlePartyMemberJoinGame_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UPartyMessage_PartyMemberJoinGame_X*         MessageObject;                                            // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.SetPartyMemberJoinGame
struct UOnlineGameParty_X_SetPartyMemberJoinGame_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FPartyMemberServer                          Server;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.BroadcastPartyMember
struct UOnlineGameParty_X_BroadcastPartyMember_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FPartyMemberServer                          Server;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.SetLeader
struct UOnlineGameParty_X_SetLeader_Params
{
	struct FUniqueNetId                                NewLeader;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.IsPrimaryPlayerIndex
struct UOnlineGameParty_X_IsPrimaryPlayerIndex_Params
{
	int                                                MemberIdx;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.IsPrimaryPlayer
struct UOnlineGameParty_X_IsPrimaryPlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.IsPlayerInParty
struct UOnlineGameParty_X_IsPlayerInParty_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.KickPlayer
struct UOnlineGameParty_X_KickPlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	TEnumAsByte<ELobbyKickReason>                      Reason;                                                   // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.ShowInviteUI
struct UOnlineGameParty_X_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.LeaveParty
struct UOnlineGameParty_X_LeaveParty_Params
{
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.IsInCurrentGame
struct UOnlineGameParty_X_IsInCurrentGame_Params
{
	struct FUniqueNetId                                MemberId;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.IsPartyLeader
struct UOnlineGameParty_X_IsPartyLeader_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.IsInParty
struct UOnlineGameParty_X_IsInParty_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.HandleJoinPartyPrivilegeCheck
struct UOnlineGameParty_X_HandleJoinPartyPrivilegeCheck_Params
{
	class UPrivilegeCheck_X*                           PrivilegeCheck;                                           // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.JoinParty
struct UOnlineGameParty_X_JoinParty_Params
{
	int                                                LocalPlayerNum;                                           // (CPF_Parm)
	struct FUniqueLobbyId                              InPartyId;                                                // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function ProjectX.OnlineGameParty_X.CheckPartyTimeout
struct UOnlineGameParty_X_CheckPartyTimeout_Params
{
};

// Function ProjectX.OnlineGameParty_X.StartPartyTimeout
struct UOnlineGameParty_X_StartPartyTimeout_Params
{
};

// Function ProjectX.OnlineGameParty_X.OnPartyCreated
struct UOnlineGameParty_X_OnPartyCreated_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
	struct FUniqueLobbyId                              InPartyId;                                                // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.CreateParty
struct UOnlineGameParty_X_CreateParty_Params
{
	int                                                LocalPlayerNum;                                           // (CPF_Parm)
	int                                                MaxPlayers;                                               // (CPF_Parm)
	struct FScriptDelegate                             Handler;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameParty_X.HandlePlayerInvited
struct UOnlineGameParty_X_HandlePlayerInvited_Params
{
	struct FUniqueLobbyId                              InLobbyId;                                                // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                FriendId;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
	bool                                               bAccepted;                                                // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandlePartySizeTracker
struct UOnlineGameParty_X_HandlePartySizeTracker_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandlePrimaryPlayerIdChanged
struct UOnlineGameParty_X_HandlePrimaryPlayerIdChanged_Params
{
	class UOnlineGameAccount_X*                        InAccount;                                                // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.HandleInternetConnectionChanged
struct UOnlineGameParty_X_HandleInternetConnectionChanged_Params
{
	bool                                               bConnected;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.GetMetrics
struct UOnlineGameParty_X_GetMetrics_Params
{
	class UPartyMetrics_X*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.OnlineGameParty_X.OnInit
struct UOnlineGameParty_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameParty_X.EventPlayerIsCurrentlyTrading
struct UOnlineGameParty_X_EventPlayerIsCurrentlyTrading_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventPlayerInMatchChanged
struct UOnlineGameParty_X_EventPlayerInMatchChanged_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventAnotherInviteToTrade
struct UOnlineGameParty_X_EventAnotherInviteToTrade_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventTradeReady
struct UOnlineGameParty_X_EventTradeReady_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventNotReadyToTrade
struct UOnlineGameParty_X_EventNotReadyToTrade_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventReadyToTrade
struct UOnlineGameParty_X_EventReadyToTrade_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventCloseInviteToTrade
struct UOnlineGameParty_X_EventCloseInviteToTrade_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	bool                                               bWasCanceled;                                             // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventAcceptedInviteToTrade
struct UOnlineGameParty_X_EventAcceptedInviteToTrade_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventInviteToTrade
struct UOnlineGameParty_X_EventInviteToTrade_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventPlayerTradingChanged
struct UOnlineGameParty_X_EventPlayerTradingChanged_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
	bool                                               bIsPlayerTrading;                                         // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventPlaylistSkillRestrictionChange
struct UOnlineGameParty_X_EventPlaylistSkillRestrictionChange_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventDisableCrossPlayChanged
struct UOnlineGameParty_X_EventDisableCrossPlayChanged_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventProcessingStatusChanged
struct UOnlineGameParty_X_EventProcessingStatusChanged_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventLeaderLeftOnlineGame
struct UOnlineGameParty_X_EventLeaderLeftOnlineGame_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventConfirmJoinGameMessage
struct UOnlineGameParty_X_EventConfirmJoinGameMessage_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventPartyDestroyed
struct UOnlineGameParty_X_EventPartyDestroyed_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventPartyJoinGameSuccess
struct UOnlineGameParty_X_EventPartyJoinGameSuccess_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventPartyJoinGameError
struct UOnlineGameParty_X_EventPartyJoinGameError_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	struct FString                                     LocalizedErrorString;                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameParty_X.EventPartyError
struct UOnlineGameParty_X_EventPartyError_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventSearchStatusChanged
struct UOnlineGameParty_X_EventSearchStatusChanged_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	class UPartyMessage_SearchStatus_X*                StatusMessage;                                            // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventPartySizeChanged
struct UOnlineGameParty_X_EventPartySizeChanged_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	int                                                NewSize;                                                  // (CPF_Parm)
	int                                                OldSize;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventPartyChanged
struct UOnlineGameParty_X_EventPartyChanged_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameParty_X.EventPlayerInvited
struct UOnlineGameParty_X_EventPlayerInvited_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	struct FUniqueLobbyId                              InPartyId;                                                // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FUniqueNetId                                FriendId;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm)
};

// Function ProjectX.OnlineGameParty_X.EventPartyCreated
struct UOnlineGameParty_X_EventPartyCreated_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function ProjectX.OnlineGameAccount_X.PrintDebugInfo
struct UOnlineGameAccount_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameAccount_X.OnMainMenuOpened
struct UOnlineGameAccount_X_OnMainMenuOpened_Params
{
};

// Function ProjectX.OnlineGameAccount_X.GetNumLocalPlayers
struct UOnlineGameAccount_X_GetNumLocalPlayers_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameAccount_X.SendUpdatePlayerCurrentGameRequest
struct UOnlineGameAccount_X_SendUpdatePlayerCurrentGameRequest_Params
{
};

// Function ProjectX.OnlineGameAccount_X.UpdateCurrentGame
struct UOnlineGameAccount_X_UpdateCurrentGame_Params
{
};

// Function ProjectX.OnlineGameAccount_X.ClearCurrentPlaylist
struct UOnlineGameAccount_X_ClearCurrentPlaylist_Params
{
};

// Function ProjectX.OnlineGameAccount_X.SetCurrentPlaylist
struct UOnlineGameAccount_X_SetCurrentPlaylist_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameAccount_X.HandleServerAddressChanged
struct UOnlineGameAccount_X_HandleServerAddressChanged_Params
{
};

// Function ProjectX.OnlineGameAccount_X.HandlePsyNetLoginChanged
struct UOnlineGameAccount_X_HandlePsyNetLoginChanged_Params
{
	class UOnlinePlayerAuthentication_X*               Auth;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameAccount_X.HandlePlayerLoginStatusChanged
struct UOnlineGameAccount_X_HandlePlayerLoginStatusChanged_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameAccount_X.OnPrimaryPlayerIdChanged
struct UOnlineGameAccount_X_OnPrimaryPlayerIdChanged_Params
{
};

// Function ProjectX.OnlineGameAccount_X.SetPrimaryPlayer
struct UOnlineGameAccount_X_SetPrimaryPlayer_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameAccount_X.OnInit
struct UOnlineGameAccount_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameAccount_X.EventCurrentPlaylistSet
struct UOnlineGameAccount_X_EventCurrentPlaylistSet_Params
{
	class UOnlineGameAccount_X*                        InAccount;                                                // (CPF_Parm)
	class UGameSettingPlaylist_X*                      NewPlaylist;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameAccount_X.EventPrimaryPlayerIdChanged
struct UOnlineGameAccount_X_EventPrimaryPlayerIdChanged_Params
{
	class UOnlineGameAccount_X*                        InAccount;                                                // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.AddReservationMessagePrivate_X.GetDebugString
struct UAddReservationMessagePrivate_X_GetDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.AddReservationMessagePrivate_X.SetSettings
struct UAddReservationMessagePrivate_X_SetSettings_Params
{
	struct FCustomMatchSettings                        InSettings;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UAddReservationMessagePrivate_X*             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.AddReservationMessagePublic_X.AddPlayers
struct UAddReservationMessagePublic_X_AddPlayers_Params
{
	class UAddReservationMessage_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.AddReservationMessagePublic_X.SetPlayerPref
struct UAddReservationMessagePublic_X_SetPlayerPref_Params
{
	class UGameSettingPlaylist_X*                      Playlist;                                                 // (CPF_Parm)
	class UOnlinePlayer_X*                             OnlinePlayer;                                             // (CPF_Parm)
};

// Function ProjectX.AddReservationMessagePublic_X.GetPlayerMapPrefs
struct UAddReservationMessagePublic_X_GetPlayerMapPrefs_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	TArray<struct FName>                               Likes;                                                    // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FName>                               Dislikes;                                                 // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.AddReservationMessagePublic_X.AddPlayer
struct UAddReservationMessagePublic_X_AddPlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bRemotePlayer;                                            // (CPF_Parm)
	class UAddReservationMessage_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.AddReservationMessagePublic_X.GetDebugString
struct UAddReservationMessagePublic_X_GetDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.AddReservationMessagePublic_X.GetPlayerDebugString
struct UAddReservationMessagePublic_X_GetPlayerDebugString_Params
{
	struct FReservationPlayerData                      Player;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.AddReservationMessagePublic_X.SetSettings
struct UAddReservationMessagePublic_X_SetSettings_Params
{
	struct FJoinMatchSettings                          InSettings;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UAddReservationMessagePublic_X*              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkill_X.SkillsSynced
struct UOnlineGameSkill_X_SkillsSynced_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkill_X.GetHighestSkillTier
struct UOnlineGameSkill_X_GetHighestSkillTier_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkill_X.GetPlayerSeasonRewardProgress
struct UOnlineGameSkill_X_GetPlayerSeasonRewardProgress_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FPlayerSeasonRewardProgress                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkill_X.GetPlaylistSkillCache
struct UOnlineGameSkill_X_GetPlaylistSkillCache_Params
{
	int                                                Playlist;                                                 // (CPF_Parm)
	class UPlaylistSkillCache_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkill_X.HandleSkillsUpdateFailed
struct UOnlineGameSkill_X_HandleSkillsUpdateFailed_Params
{
	class URPC_X*                                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkill_X.SetPlayerSeasonReward
struct UOnlineGameSkill_X_SetPlayerSeasonReward_Params
{
	struct FPlayerSeasonRewardProgress                 Reward;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkill_X.ReplicateSeasonReward
struct UOnlineGameSkill_X_ReplicateSeasonReward_Params
{
	struct FPlayerSeasonRewardProgress                 Reward;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkill_X.HandleSkillsUpdated
struct UOnlineGameSkill_X_HandleSkillsUpdated_Params
{
	class URPC_X*                                      RPC;                                                      // (CPF_Parm)
	struct FPlayerSeasonRewardProgress                 StructInitializer_01EE021C4EE003C15F9DB2A7B026EC83;       // (CPF_Const, CPF_OutParm)
};

// Function ProjectX.OnlineGameSkill_X.SubmitMatch
struct UOnlineGameSkill_X_SubmitMatch_Params
{
	class UMatchRecorder_X*                            MatchRecorder;                                            // (CPF_Parm)
	struct FString                                     MatchGUID;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSkill_X.Clear
struct UOnlineGameSkill_X_Clear_Params
{
};

// Function ProjectX.OnlineGameSkill_X.GetMMR
struct UOnlineGameSkill_X_GetMMR_Params
{
	float                                              Mu;                                                       // (CPF_Parm)
	float                                              Sigma;                                                    // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkill_X.GetPlayerMMR
struct UOnlineGameSkill_X_GetPlayerMMR_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                Playlist;                                                 // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkill_X.GetPlayerRating
struct UOnlineGameSkill_X_GetPlayerRating_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                Playlist;                                                 // (CPF_Parm)
	struct FPlayerSkillRating                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkill_X.OnSkillSynced
struct UOnlineGameSkill_X_OnSkillSynced_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkill_X.CacheSeasonReward
struct UOnlineGameSkill_X_CacheSeasonReward_Params
{
	struct FPlayerSeasonRewardProgress                 Reward;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkill_X.HandleSkillRequestCompleteRPC
struct UOnlineGameSkill_X_HandleSkillRequestCompleteRPC_Params
{
	class URPC_GetPlayerSkill_X*                       RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkill_X.SyncPlayerSkill
struct UOnlineGameSkill_X_SyncPlayerSkill_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSkill_X.CacheSkill
struct UOnlineGameSkill_X_CacheSkill_Params
{
	struct FPlayerSkillRating                          Rating;                                                   // (CPF_Parm)
	int                                                Playlist;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkill_X.PreCacheSkill
struct UOnlineGameSkill_X_PreCacheSkill_Params
{
	struct FPlayerSkillRating                          Rating;                                                   // (CPF_Parm)
	int                                                Playlist;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkill_X.GetSkillPlaylistID
struct UOnlineGameSkill_X_GetSkillPlaylistID_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkill_X.EventSkillSynced
struct UOnlineGameSkill_X_EventSkillSynced_Params
{
	class UOnlineGameSkill_X*                          Skill;                                                    // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGamePlaylists_X.GetAccessiblePlaylists
struct UOnlineGamePlaylists_X_GetAccessiblePlaylists_Params
{
	TArray<struct FName>                               SelectedPlaylists;                                        // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePlaylists_X.IsRankedEnabled
struct UOnlineGamePlaylists_X_IsRankedEnabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePlaylists_X.IsRankedPlaylistID
struct UOnlineGamePlaylists_X_IsRankedPlaylistID_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePlaylists_X.IsRankedPlaylistName
struct UOnlineGamePlaylists_X_IsRankedPlaylistName_Params
{
	struct FName                                       PlaylistName;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePlaylists_X.NamesToIDs
struct UOnlineGamePlaylists_X_NamesToIDs_Params
{
	TArray<struct FName>                               Names;                                                    // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<int>                                        Ids;                                                      // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePlaylists_X.GetPlaylistFriendlyName
struct UOnlineGamePlaylists_X_GetPlaylistFriendlyName_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePlaylists_X.CopyPlaylistGameTags
struct UOnlineGamePlaylists_X_CopyPlaylistGameTags_Params
{
};

// Function ProjectX.OnlineGamePlaylists_X.HandlePlaylistsChanged
struct UOnlineGamePlaylists_X_HandlePlaylistsChanged_Params
{
	class UObjectProvider*                             Provider;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGamePlaylists_X.NameToID
struct UOnlineGamePlaylists_X_NameToID_Params
{
	struct FName                                       PlaylistName;                                             // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePlaylists_X.GetPlaylistByID
struct UOnlineGamePlaylists_X_GetPlaylistByID_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	class UGameSettingPlaylist_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePlaylists_X.GetPlaylistByName
struct UOnlineGamePlaylists_X_GetPlaylistByName_Params
{
	struct FName                                       PlaylistName;                                             // (CPF_Parm)
	class UGameSettingPlaylist_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePlaylists_X.IsPlaylistEnabled
struct UOnlineGamePlaylists_X_IsPlaylistEnabled_Params
{
	class UGameSettingPlaylist_X*                      Playlist;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePlaylists_X.NotifyWhenChanged
struct UOnlineGamePlaylists_X_NotifyWhenChanged_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePlaylists_X.OnInit
struct UOnlineGamePlaylists_X_OnInit_Params
{
};

// Function ProjectX.OnlineGamePlaylists_X.EventPlaylistsChanged
struct UOnlineGamePlaylists_X_EventPlaylistsChanged_Params
{
	class UOnlineGamePlaylists_X*                      PlaylistsObj;                                             // (CPF_Parm)
};

// Function ProjectX.GameSettingPlaylist_X.ShouldUpdateSkills
struct UGameSettingPlaylist_X_ShouldUpdateSkills_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameSettingPlaylist_X.IsValidID
struct UGameSettingPlaylist_X_IsValidID_Params
{
	int                                                InPlaylistID;                                             // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameSettingPlaylist_X.IsValid
struct UGameSettingPlaylist_X_IsValid_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GameSettingPlaylist_X.GetLocalizedDescription
struct UGameSettingPlaylist_X_GetLocalizedDescription_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.GameSettingPlaylist_X.GetLocalizedName
struct UGameSettingPlaylist_X_GetLocalizedName_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.GameSettingPlaylist_X.Setup
struct UGameSettingPlaylist_X_Setup_Params
{
	class UPlaylistSettings_X*                         Settings;                                                 // (CPF_Parm)
};

// Function ProjectX.SeqEvent_Spawned_X.TriggerFor
struct USeqEvent_Spawned_X_TriggerFor_Params
{
	class AActor*                                      A;                                                        // (CPF_Parm)
};

// Function ProjectX.CameraStateBlender_X.IsTransitioning
struct UCameraStateBlender_X_IsTransitioning_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CameraStateBlender_X.BlendCameraState
struct UCameraStateBlender_X_BlendCameraState_Params
{
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.CameraStateBlender_X.PostProcessPOV
struct UCameraStateBlender_X_PostProcessPOV_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.CameraStateBlender_X.UpdatePOV
struct UCameraStateBlender_X_UpdatePOV_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.CameraStateBlender_X.Tick
struct UCameraStateBlender_X_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.CameraStateBlender_X.ClearTransitionDelta
struct UCameraStateBlender_X_ClearTransitionDelta_Params
{
};

// Function ProjectX.CameraStateBlender_X.ClearTransition
struct UCameraStateBlender_X_ClearTransition_Params
{
};

// Function ProjectX.CameraStateBlender_X.TransitionToState
struct UCameraStateBlender_X_TransitionToState_Params
{
	class UCameraState_X*                              NewState;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CameraStateBlender_X.Snap
struct UCameraStateBlender_X_Snap_Params
{
};

// Function ProjectX.CameraStateBlender_X.EventBlenderStateChanged
struct UCameraStateBlender_X_EventBlenderStateChanged_Params
{
	class UCameraStateBlender_X*                       CameraBender;                                             // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.CameraState_X.OnSnap
struct UCameraState_X_OnSnap_Params
{
};

// Function ProjectX.CameraState_X.ModifyPostProcessSettings
struct UCameraState_X_ModifyPostProcessSettings_Params
{
	struct FPostProcessSettings                        PP;                                                       // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.CameraState_X.ProcessViewRotation
struct UCameraState_X_ProcessViewRotation_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FRotator                                    OutViewRotation;                                          // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    OutDeltaRot;                                              // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.CameraState_X.UpdatePOV
struct UCameraState_X_UpdatePOV_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.CameraState_X.Tick
struct UCameraState_X_Tick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.CameraState_X.EndCameraState
struct UCameraState_X_EndCameraState_Params
{
};

// Function ProjectX.CameraState_X.BeginCameraState
struct UCameraState_X_BeginCameraState_Params
{
};

// Function ProjectX.CameraState_X.GetEndBlendParams
struct UCameraState_X_GetEndBlendParams_Params
{
	class UCameraState_X*                              NewState;                                                 // (CPF_Parm)
	struct FViewTargetTransitionParams                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CameraState_X.GetStartBlendParams
struct UCameraState_X_GetStartBlendParams_Params
{
	class UCameraState_X*                              PreviousState;                                            // (CPF_Parm)
	struct FViewTargetTransitionParams                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CameraState_X.ShouldKeepExecuting
struct UCameraState_X_ShouldKeepExecuting_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CameraState_X.ShouldExecute
struct UCameraState_X_ShouldExecute_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CameraState_X.Init
struct UCameraState_X_Init_Params
{
	class ACamera_X*                                   InCamera;                                                 // (CPF_Parm)
};

// Function ProjectX.CameraUtils_X.BlendPOVs
struct UCameraUtils_X_BlendPOVs_Params
{
	struct FCameraOrientation                          FromPOV;                                                  // (CPF_Parm)
	struct FCameraOrientation                          ToPOV;                                                    // (CPF_Parm)
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
	float                                              Percent;                                                  // (CPF_Parm)
};

// Function ProjectX.CameraUtils_X.GetBlendPercent
struct UCameraUtils_X_GetBlendPercent_Params
{
	struct FViewTargetTransitionParams                 BlendParams;                                              // (CPF_Parm)
	float                                              Time;                                                     // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CameraUtils_X.GetFrustumSize
struct UCameraUtils_X_GetFrustumSize_Params
{
	float                                              Dist;                                                     // (CPF_Parm)
	float                                              FOV;                                                      // (CPF_Parm)
	float                                              AspectRatio;                                              // (CPF_Parm)
	float                                              OutWidth;                                                 // (CPF_Parm, CPF_OutParm)
	float                                              OutHeight;                                                // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.CameraUtils_X.CalculateDistanceRotation
struct UCameraUtils_X_CalculateDistanceRotation_Params
{
	struct FVector                                     Focus;                                                    // (CPF_Parm)
	struct FVector                                     Origin;                                                   // (CPF_Parm)
	float                                              OutDistance;                                              // (CPF_Parm, CPF_OutParm)
	struct FRotator                                    OutRotation;                                              // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.CameraModifier_CameraShake_X.ModifyCameraShakeScale
struct UCameraModifier_CameraShake_X_ModifyCameraShakeScale_Params
{
	class UCameraShake*                                Shake;                                                    // (CPF_Parm)
	float                                              NewScale;                                                 // (CPF_Parm)
};

// Function ProjectX.CameraModifier_CameraShake_X.RemoveCameraShake
struct UCameraModifier_CameraShake_X_RemoveCameraShake_Params
{
	class UCameraShake*                                Shake;                                                    // (CPF_Parm)
};

// Function ProjectX.CameraState_CamActor_X.UpdatePOV
struct UCameraState_CamActor_X_UpdatePOV_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.CameraState_CamActor_X.EndCameraState
struct UCameraState_CamActor_X_EndCameraState_Params
{
};

// Function ProjectX.CameraState_CamActor_X.BeginCameraState
struct UCameraState_CamActor_X_BeginCameraState_Params
{
};

// Function ProjectX.CameraState_CamActor_X.GetBlendParams
struct UCameraState_CamActor_X_GetBlendParams_Params
{
	class UCameraState_X*                              PrevState;                                                // (CPF_Parm)
	struct FViewTargetTransitionParams                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CameraState_CamActor_X.ShouldExecute
struct UCameraState_CamActor_X_ShouldExecute_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.HUD_X.SetShowDebugObject
struct AHUD_X_SetShowDebugObject_Params
{
	class UObject*                                     inObj;                                                    // (CPF_Parm)
};

// Function ProjectX.HUD_X.ShowDebugInfo
struct AHUD_X_ShowDebugInfo_Params
{
	float                                              out_YL;                                                   // (CPF_Parm, CPF_OutParm)
	float                                              out_YPos;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.HUD_X.ShowDebug
struct AHUD_X_ShowDebug_Params
{
	struct FName                                       DebugType;                                                // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.HUD_X.DebugCategorySwitch
struct AHUD_X_DebugCategorySwitch_Params
{
	bool                                               bForward;                                                 // (CPF_Parm)
};

// Function ProjectX.HUD_X.DrawPauseScreen
struct AHUD_X_DrawPauseScreen_Params
{
};

// Function ProjectX.HUD_X.ShouldShowConsoleMessage
struct AHUD_X_ShouldShowConsoleMessage_Params
{
	struct FConsoleMessage                             InConsoleMessage;                                         // (CPF_Const, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.HUD_X.DrawDebugTexture
struct AHUD_X_DrawDebugTexture_Params
{
};

// Function ProjectX.HUD_X.DrawHUD
struct AHUD_X_DrawHUD_Params
{
};

// Function ProjectX.HUD_X.PostBeginPlay
struct AHUD_X_PostBeginPlay_Params
{
};

// Function ProjectX.OnlineImageDownloaderWeb_X.OnDownloadComplete
struct UOnlineImageDownloaderWeb_X_OnDownloadComplete_Params
{
	class UHttpRequestInterface*                       Request;                                                  // (CPF_Parm)
	class UHttpResponseInterface*                      Response;                                                 // (CPF_Parm)
	bool                                               bDidSucceed;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineImageDownloaderWeb_X.RequestOnlineImage
struct UOnlineImageDownloaderWeb_X_RequestOnlineImage_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bSRGB;                                                    // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineImageDownloaderWeb_X.EventImageDownloaded
struct UOnlineImageDownloaderWeb_X_EventImageDownloaded_Params
{
	class UOnlineImageDownloaderWeb_X*                 Downloader;                                               // (CPF_Parm)
	struct FDownloadedImage                            Image;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.CustomAnimComponent_X.IsPlayingAnim
struct UCustomAnimComponent_X_IsPlayingAnim_Params
{
	struct FName                                       InAnimName;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CustomAnimComponent_X.GetCurrentAnimPosition
struct UCustomAnimComponent_X_GetCurrentAnimPosition_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CustomAnimComponent_X.Cleanup
struct UCustomAnimComponent_X_Cleanup_Params
{
};

// Function ProjectX.CustomAnimComponent_X.SetRootBoneRotationAxis
struct UCustomAnimComponent_X_SetRootBoneRotationAxis_Params
{
	TEnumAsByte<ERootRotationOption>                   Axis;                                                     // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.SetRootBoneAxis
struct UCustomAnimComponent_X_SetRootBoneAxis_Params
{
	TEnumAsByte<ERootBoneAxis>                         Axis;                                                     // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.SetRootMotionRotation
struct UCustomAnimComponent_X_SetRootMotionRotation_Params
{
	TEnumAsByte<ERootMotionRotationMode>               Mode;                                                     // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.SetRootMotion
struct UCustomAnimComponent_X_SetRootMotion_Params
{
	TEnumAsByte<ERootMotionMode>                       Mode;                                                     // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.SetMirrored
struct UCustomAnimComponent_X_SetMirrored_Params
{
	bool                                               bMirrored;                                                // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.SetRate
struct UCustomAnimComponent_X_SetRate_Params
{
	float                                              Rate;                                                     // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.SetBlendOutTime
struct UCustomAnimComponent_X_SetBlendOutTime_Params
{
	float                                              Time;                                                     // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.SetBlendInTime
struct UCustomAnimComponent_X_SetBlendInTime_Params
{
	float                                              Time;                                                     // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.SetLooping
struct UCustomAnimComponent_X_SetLooping_Params
{
	bool                                               bLooping;                                                 // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.SetStartTime
struct UCustomAnimComponent_X_SetStartTime_Params
{
	float                                              StartTime;                                                // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.Reset
struct UCustomAnimComponent_X_Reset_Params
{
};

// Function ProjectX.CustomAnimComponent_X.Stop
struct UCustomAnimComponent_X_Stop_Params
{
	float                                              BlendOutTime;                                             // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CustomAnimComponent_X.Que
struct UCustomAnimComponent_X_Que_Params
{
	struct FName                                       AnimName;                                                 // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.QueSettings
struct UCustomAnimComponent_X_QueSettings_Params
{
	struct FCustomAnimSettings                         Settings;                                                 // (CPF_Parm)
	class UCustomAnimComponent_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.Play_Internal
struct UCustomAnimComponent_X_Play_Internal_Params
{
	struct FName                                       AnimName;                                                 // (CPF_Parm)
	float                                              Priority;                                                 // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CustomAnimComponent_X.Play
struct UCustomAnimComponent_X_Play_Params
{
	struct FName                                       AnimName;                                                 // (CPF_Parm)
	float                                              Priority;                                                 // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CustomAnimComponent_X.PlayBlended
struct UCustomAnimComponent_X_PlayBlended_Params
{
	struct FCustomAnimSettings                         SettingsA;                                                // (CPF_Parm)
	struct FCustomAnimSettings                         SettingsB;                                                // (CPF_Parm)
	float                                              Blend;                                                    // (CPF_Parm)
	float                                              Priority;                                                 // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CustomAnimComponent_X.PlaySettings
struct UCustomAnimComponent_X_PlaySettings_Params
{
	struct FCustomAnimSettings                         Settings;                                                 // (CPF_Parm)
	float                                              Priority;                                                 // (CPF_OptionalParm, CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CustomAnimComponent_X.OnAnimComplete
struct UCustomAnimComponent_X_OnAnimComplete_Params
{
};

// Function ProjectX.CustomAnimComponent_X.HandleAnimEnd
struct UCustomAnimComponent_X_HandleAnimEnd_Params
{
	class APawn_X*                                     ForPawn;                                                  // (CPF_Parm)
	class UAnimNodeSequence*                           SeqNode;                                                  // (CPF_Parm)
};

// Function ProjectX.CustomAnimComponent_X.Init
struct UCustomAnimComponent_X_Init_Params
{
	class USkeletalMeshComponent*                      InMesh;                                                   // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.CustomAnimComponent_X.EventFinished
struct UCustomAnimComponent_X_EventFinished_Params
{
	class UCustomAnimComponent_X*                      AnimComponent;                                            // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.ITakeDamage_X.TakeDamage_X
struct UITakeDamage_X_TakeDamage_X_Params
{
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DebugDrawer_X.DrawHeader
struct UDebugDrawer_X_DrawHeader_Params
{
};

// Function ProjectX.DebugDrawer_X.DrawSpacer
struct UDebugDrawer_X_DrawSpacer_Params
{
	float                                              Height;                                                   // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.DebugDrawer_X.DrawBackground
struct UDebugDrawer_X_DrawBackground_Params
{
	float                                              Width;                                                    // (CPF_Parm)
	float                                              Height;                                                   // (CPF_Parm)
};

// Function ProjectX.DebugDrawer_X.FinishDrawDebug
struct UDebugDrawer_X_FinishDrawDebug_Params
{
};

// Function ProjectX.DebugDrawer_X.StartDrawDebug
struct UDebugDrawer_X_StartDrawDebug_Params
{
	class UCanvas*                                     C;                                                        // (CPF_Parm)
};

// Function ProjectX.DebugDrawer_X.PrintText
struct UDebugDrawer_X_PrintText_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FColor                                      InColor;                                                  // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.DebugDrawer_X.PrintProperty
struct UDebugDrawer_X_PrintProperty_Params
{
	struct FString                                     PropertyName;                                             // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	struct FString                                     Value;                                                    // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function ProjectX.DebugDrawer_X.PrintSeperater
struct UDebugDrawer_X_PrintSeperater_Params
{
};

// Function ProjectX.DebugDrawer_X.UpdateCanvasIndentation
struct UDebugDrawer_X_UpdateCanvasIndentation_Params
{
};

// Function ProjectX.DebugDrawer_X.EndSection
struct UDebugDrawer_X_EndSection_Params
{
};

// Function ProjectX.DebugDrawer_X.StartSection
struct UDebugDrawer_X_StartSection_Params
{
};

// Function ProjectX.DebugDrawer_X.SetPos
struct UDebugDrawer_X_SetPos_Params
{
	float                                              X;                                                        // (CPF_Parm)
	float                                              Y;                                                        // (CPF_Parm)
};

// Function ProjectX.DebugDrawer_X.ShouldDisplayDebug
struct UDebugDrawer_X_ShouldDisplayDebug_Params
{
	struct FName                                       Category;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanServer_X.StartReservationTimeout
struct UOnlineGameLanServer_X_StartReservationTimeout_Params
{
};

// Function ProjectX.OnlineGameLanServer_X.PlayerLoggedOut
struct UOnlineGameLanServer_X_PlayerLoggedOut_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanServer_X.AllowSplitscreenJoin
struct UOnlineGameLanServer_X_AllowSplitscreenJoin_Params
{
	class APlayerReplicationInfo*                      PrimaryPRI;                                               // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanServer_X.PlayerLoggedIn
struct UOnlineGameLanServer_X_PlayerLoggedIn_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanServer_X.AllowPlayerLogin
struct UOnlineGameLanServer_X_AllowPlayerLogin_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanServer_X.TravelToMap
struct UOnlineGameLanServer_X_TravelToMap_Params
{
	struct FString                                     ServerCommand;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLanServer_X.OnNewGameInfoCreated
struct UOnlineGameLanServer_X_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanServer_X.GoToNextMap
struct UOnlineGameLanServer_X_GoToNextMap_Params
{
};

// Function ProjectX.OnlineGameLanServer_X.ClearSettings
struct UOnlineGameLanServer_X_ClearSettings_Params
{
};

// Function ProjectX.OnlineGameLanServer_X.HandleReservationsTimeout
struct UOnlineGameLanServer_X_HandleReservationsTimeout_Params
{
};

// Function ProjectX.OnlineGameLanServer_X.GetCustomMatchSettings
struct UOnlineGameLanServer_X_GetCustomMatchSettings_Params
{
	struct FCustomMatchSettings                        OutSettings;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLanServer_X.GetCustomMatchOwner
struct UOnlineGameLanServer_X_GetCustomMatchOwner_Params
{
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanServer_X.UpdateCustomMatchOwner
struct UOnlineGameLanServer_X_UpdateCustomMatchOwner_Params
{
	struct FUniqueNetId                                NewOwner;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanServer_X.SetupPrivateMatch
struct UOnlineGameLanServer_X_SetupPrivateMatch_Params
{
	struct FCustomMatchSettings                        Settings;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                Creator;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanServer_X.OnInit
struct UOnlineGameLanServer_X_OnInit_Params
{
};

// Function ProjectX.IOnlineGameHost_X.GetCustomMatchOwner
struct UIOnlineGameHost_X_GetCustomMatchOwner_Params
{
	struct FUniqueNetId                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.IOnlineGameHost_X.GetCustomMatchSettings
struct UIOnlineGameHost_X_GetCustomMatchSettings_Params
{
	struct FCustomMatchSettings                        OutSettings;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.IOnlineGameHost_X.AllowSplitscreenJoin
struct UIOnlineGameHost_X_AllowSplitscreenJoin_Params
{
	class APlayerReplicationInfo*                      PrimaryPRI;                                               // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.IOnlineGameHost_X.PlayerLoggedOut
struct UIOnlineGameHost_X_PlayerLoggedOut_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.IOnlineGameHost_X.PlayerLoggedIn
struct UIOnlineGameHost_X_PlayerLoggedIn_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.IOnlineGameHost_X.AllowPlayerLogin
struct UIOnlineGameHost_X_AllowPlayerLogin_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_ReportCheater_X.SetReason
struct URPC_ReportCheater_X_SetReason_Params
{
	struct FString                                     InReason;                                                 // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
	class URPC_ReportCheater_X*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_ReportCheater_X.SetPlayerID
struct URPC_ReportCheater_X_SetPlayerID_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (CPF_Parm)
	class URPC_ReportCheater_X*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlayerController_X.DebugMode.PlayerTick
struct SPlayerController_X_DebugMode_PlayerTick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.DebugMode.ProcessMove
struct SPlayerController_X_DebugMode_ProcessMove_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FVector                                     NewInput;                                                 // (CPF_Parm)
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (CPF_Parm)
	struct FRotator                                    DeltaRot;                                                 // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.DebugMode.PlayerMove
struct SPlayerController_X_DebugMode_PlayerMove_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.DebugMode.GetAutoAimTarget
struct SPlayerController_X_DebugMode_GetAutoAimTarget_Params
{
	class AActor*                                      HitActor;                                                 // (CPF_Parm, CPF_OutParm)
	struct FVector                                     HitLoc;                                                   // (CPF_OptionalParm, CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlayerController_X.DebugMode.DebugKillAllExcept
struct SPlayerController_X_DebugMode_DebugKillAllExcept_Params
{
};

// Function ProjectX.PlayerController_X.DebugMode.DebugKill
struct SPlayerController_X_DebugMode_DebugKill_Params
{
};

// Function ProjectX.PlayerController_X.DebugMode.DebugCrosshair
struct SPlayerController_X_DebugMode_DebugCrosshair_Params
{
};

// Function ProjectX.PlayerController_X.DebugMode.ToggleDebugCamera
struct SPlayerController_X_DebugMode_ToggleDebugCamera_Params
{
};

// Function ProjectX.PlayerController_X.DebugMode.EndState
struct SPlayerController_X_DebugMode_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.DebugMode.BeginState
struct SPlayerController_X_DebugMode_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.PlayerController_X.DebugMode.ServerRestartPlayer
struct SPlayerController_X_DebugMode_ServerRestartPlayer_Params
{
};

// Function ProjectX.PlayerController_X.Profiling.BeginState
struct SPlayerController_X_Profiling_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.Recording.PlayerTick
struct SDemoPC_X_Recording_PlayerTick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.Playing.FollowPlayerNone
struct SDemoPC_X_Playing_FollowPlayerNone_Params
{
};

// Function ProjectX.DemoPC_X.Playing.FollowPlayerPrev
struct SDemoPC_X_Playing_FollowPlayerPrev_Params
{
};

// Function ProjectX.DemoPC_X.Playing.FollowPlayerNext
struct SDemoPC_X_Playing_FollowPlayerNext_Params
{
};

// Function ProjectX.DemoPC_X.Playing.PlayerTick
struct SDemoPC_X_Playing_PlayerTick_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.Playing.SetShowDebugObject
struct SDemoPC_X_Playing_SetShowDebugObject_Params
{
	class UObject*                                     O;                                                        // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.Playing.ProcessMove
struct SDemoPC_X_Playing_ProcessMove_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FVector                                     NewInput;                                                 // (CPF_Parm)
	TEnumAsByte<EDoubleClickDir>                       DoubleClickMove;                                          // (CPF_Parm)
	struct FRotator                                    DeltaRot;                                                 // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.Playing.PlayerMove
struct SDemoPC_X_Playing_PlayerMove_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.Playing.GetAutoAimTarget
struct SDemoPC_X_Playing_GetAutoAimTarget_Params
{
	class AActor*                                      HitActor;                                                 // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DemoPC_X.Playing.AllowAutoAimDebug
struct SDemoPC_X_Playing_AllowAutoAimDebug_Params
{
	class AActor*                                      HitActor;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DemoPC_X.Playing.DebugCrosshair
struct SDemoPC_X_Playing_DebugCrosshair_Params
{
};

// Function ProjectX.DemoPC_X.Playing.DebugCategorySwitch
struct SDemoPC_X_Playing_DebugCategorySwitch_Params
{
	bool                                               bForward;                                                 // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.Playing.DebugCategoryPrev
struct SDemoPC_X_Playing_DebugCategoryPrev_Params
{
};

// Function ProjectX.DemoPC_X.Playing.DebugCategoryNext
struct SDemoPC_X_Playing_DebugCategoryNext_Params
{
};

// Function ProjectX.DemoPC_X.Playing.ToggleDebugCamera
struct SDemoPC_X_Playing_ToggleDebugCamera_Params
{
};

// Function ProjectX.DemoPC_X.Playing.EndState
struct SDemoPC_X_Playing_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.Playing.BeginState
struct SDemoPC_X_Playing_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.DemoPC_X.Playing.ServerRestartPlayer
struct SDemoPC_X_Playing_ServerRestartPlayer_Params
{
};

// Function ProjectX.DemoPC_X.Playing.StartFire
struct SDemoPC_X_Playing_StartFire_Params
{
	unsigned char                                      FireModeNum;                                              // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.DrawDebugObject_X.Update
struct UDrawDebugObject_X_Update_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.DrawDebugObject_X.UpdateLifetime
struct UDrawDebugObject_X_UpdateLifetime_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DrawDebugObject_X.Destroy
struct UDrawDebugObject_X_Destroy_Params
{
};

// Function ProjectX.DrawDebugObject_X.ShutDown
struct UDrawDebugObject_X_ShutDown_Params
{
};

// Function ProjectX.DrawDebugObject_X.Initialize
struct UDrawDebugObject_X_Initialize_Params
{
	float                                              InLifetime;                                               // (CPF_Parm)
};

// Function ProjectX.DrawDebugObject_X.GetWorldInfo
struct UDrawDebugObject_X_GetWorldInfo_Params
{
	class AWorldInfo*                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.DrawDebugBox_X.Update
struct UDrawDebugBox_X_Update_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.DrawDebugLine_X.Update
struct UDrawDebugLine_X_Update_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.DrawDebugLineActors_X.Update
struct UDrawDebugLineActors_X_Update_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.DrawDebugLinePivot_X.Update
struct UDrawDebugLinePivot_X_Update_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.DrawDebugSphere_X.Update
struct UDrawDebugSphere_X_Update_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.Explosion_X.Destroyed
struct AExplosion_X_Destroyed_Params
{
};

// Function ProjectX.Explosion_X.ForceNetRelevant
struct AExplosion_X_ForceNetRelevant_Params
{
};

// Function ProjectX.Explosion_X.SetFXActorArchetype
struct AExplosion_X_SetFXActorArchetype_Params
{
	class AFXActor_X*                                  A;                                                        // (CPF_Parm)
};

// Function ProjectX.Explosion_X.SpawnFX
struct AExplosion_X_SpawnFX_Params
{
};

// Function ProjectX.Explosion_X.PostBeginPlay
struct AExplosion_X_PostBeginPlay_Params
{
};

// Function ProjectX.Explosion_X.ReplicatedEvent
struct AExplosion_X_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (CPF_Parm)
};

// Function ProjectX.FacebookAchievementManager_X.OnDeleteAchievementComplete
struct UFacebookAchievementManager_X_OnDeleteAchievementComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.FacebookAchievementManager_X.ResetNextAchievement
struct UFacebookAchievementManager_X_ResetNextAchievement_Params
{
};

// Function ProjectX.FacebookAchievementManager_X.ResetAchievements
struct UFacebookAchievementManager_X_ResetAchievements_Params
{
	TArray<int>                                        AchievementIDs;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.FacebookAchievementManager_X.OnAddAchievementComplete
struct UFacebookAchievementManager_X_OnAddAchievementComplete_Params
{
	struct FPlatformInterfaceDelegateResult            Result;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.FacebookAchievementManager_X.GetAchievementURL
struct UFacebookAchievementManager_X_GetAchievementURL_Params
{
	int                                                AchievementId;                                            // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.FacebookAchievementManager_X.SendFacebookRequest
struct UFacebookAchievementManager_X_SendFacebookRequest_Params
{
	int                                                AchievementId;                                            // (CPF_Parm)
};

// Function ProjectX.FacebookAchievementManager_X.UnlockAchievement
struct UFacebookAchievementManager_X_UnlockAchievement_Params
{
	int                                                AchievementId;                                            // (CPF_Parm)
};

// Function ProjectX.FacebookAchievementManager_X.CheckPendingAchievements
struct UFacebookAchievementManager_X_CheckPendingAchievements_Params
{
};

// Function ProjectX.FacebookAchievementManager_X.InitFacebook
struct UFacebookAchievementManager_X_InitFacebook_Params
{
};

// Function ProjectX.FacebookAchievementManager_X.Cleanup
struct UFacebookAchievementManager_X_Cleanup_Params
{
};

// Function ProjectX.FacebookAchievementManager_X.Reset
struct UFacebookAchievementManager_X_Reset_Params
{
};

// Function ProjectX.FacebookAchievementManager_X.EventFacebookAchievementsResetUpdate
struct UFacebookAchievementManager_X_EventFacebookAchievementsResetUpdate_Params
{
	struct FString                                     UpdateMessage;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.FacebookAchievementManager_X.EventFacebookAchievementsResetComplete
struct UFacebookAchievementManager_X_EventFacebookAchievementsResetComplete_Params
{
};

// Function ProjectX.GameInfo_MapProfiler_X.GenericPlayerInitialization
struct AGameInfo_MapProfiler_X_GenericPlayerInitialization_Params
{
	class AController*                                 C;                                                        // (CPF_Parm)
};

// Function ProjectX.GameInfo_MapProfiler_X.SpawnPlayerController
struct AGameInfo_MapProfiler_X_SpawnPlayerController_Params
{
	struct FVector                                     SpawnLocation;                                            // (CPF_Parm)
	struct FRotator                                    SpawnRotation;                                            // (CPF_Parm)
	class APlayerController*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.PrintDebugInfo
struct UOnlineGameJoinGame_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.IsInTransition
struct UOnlineGameJoinGame_X_IsInTransition_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.SendPing
struct UOnlineGameJoinGame_X_SendPing_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.HandleConnectionResponse
struct UOnlineGameJoinGame_X_HandleConnectionResponse_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.HandleReservationResponse
struct UOnlineGameJoinGame_X_HandleReservationResponse_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.NotifyConnectionFailed
struct UOnlineGameJoinGame_X_NotifyConnectionFailed_Params
{
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameJoinGame_X.OnJoinGameComplete
struct UOnlineGameJoinGame_X_OnJoinGameComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     BugItReason;                                              // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameJoinGame_X.SetServerBeaconAddress
struct UOnlineGameJoinGame_X_SetServerBeaconAddress_Params
{
	struct FString                                     NewValue;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameJoinGame_X.ClearServerData
struct UOnlineGameJoinGame_X_ClearServerData_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.HandleSpawned
struct UOnlineGameJoinGame_X_HandleSpawned_Params
{
	class AGameInfo_X*                                 InGameInfo;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.IsJoiningGame
struct UOnlineGameJoinGame_X_IsJoiningGame_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.CancelJoin
struct UOnlineGameJoinGame_X_CancelJoin_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.StartJoinPrivateMatch
struct UOnlineGameJoinGame_X_StartJoinPrivateMatch_Params
{
	struct FString                                     BeaconAddress;                                            // (CPF_Parm, CPF_NeedCtorLink)
	struct FCustomMatchSettings                        InSettings;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FJoinMatchSettings                          JoinSettings;                                             // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.StartJoin
struct UOnlineGameJoinGame_X_StartJoin_Params
{
	struct FString                                     BeaconAddress;                                            // (CPF_Parm, CPF_NeedCtorLink)
	struct FJoinMatchSettings                          JoinSettings;                                             // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.OnInit
struct UOnlineGameJoinGame_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.EventMaxPlayersChanged
struct UOnlineGameJoinGame_X_EventMaxPlayersChanged_Params
{
	class UOnlineGameJoinGame_X*                       OnlineGameJoinGame;                                       // (CPF_Parm)
	int                                                MaxPlayers;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.EventJoiningGame
struct UOnlineGameJoinGame_X_EventJoiningGame_Params
{
	class UOnlineGameJoinGame_X*                       OnlineGameJoinGame;                                       // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.EventPasswordRequired
struct UOnlineGameJoinGame_X_EventPasswordRequired_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.EventServerReserved
struct UOnlineGameJoinGame_X_EventServerReserved_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.EventServerBeaconAddressChanged
struct UOnlineGameJoinGame_X_EventServerBeaconAddressChanged_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.EventCountdownEnded
struct UOnlineGameJoinGame_X_EventCountdownEnded_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.EventCountdownStarted
struct UOnlineGameJoinGame_X_EventCountdownStarted_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.EventStatusUpdate
struct UOnlineGameJoinGame_X_EventStatusUpdate_Params
{
	struct FString                                     NewStatus;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameJoinGame_X.EventJoinGameComplete
struct UOnlineGameJoinGame_X_EventJoinGameComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxModal_X.Close
struct UGFxModal_X_Close_Params
{
};

// Function ProjectX.GFxModal_X.FlashAddButton
struct UGFxModal_X_FlashAddButton_Params
{
	struct FString                                     Label;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.GFxModal_X.HandleButtonClicked
struct UGFxModal_X_HandleButtonClicked_Params
{
	int                                                Index;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxModal_X.AddButton
struct UGFxModal_X_AddButton_Params
{
	struct FString                                     Label;                                                    // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             OnClick;                                                  // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	class UGFxModal_X*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxModal_X.SetDefaultSelectedButtonIndex
struct UGFxModal_X_SetDefaultSelectedButtonIndex_Params
{
	int                                                buttonIndex;                                              // (CPF_Parm)
	class UGFxModal_X*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxModal_X.SetBody
struct UGFxModal_X_SetBody_Params
{
	struct FString                                     LocalizedText;                                            // (CPF_Parm, CPF_NeedCtorLink)
	class UGFxModal_X*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxModal_X.SetTitle
struct UGFxModal_X_SetTitle_Params
{
	struct FString                                     LocalizedText;                                            // (CPF_Parm, CPF_NeedCtorLink)
	class UGFxModal_X*                                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GFxModal_X.SetGFxObject
struct UGFxModal_X_SetGFxObject_Params
{
	class UGFxObject*                                  Obj;                                                      // (CPF_Parm)
};

// Function ProjectX.GFxModal_X.EventClosed
struct UGFxModal_X_EventClosed_Params
{
	class UGFxModal_X*                                 Modal;                                                    // (CPF_Parm)
};

// Function ProjectX.GFxModal_X.ClickDelegate
struct UGFxModal_X_ClickDelegate_Params
{
	class UGFxModal_X*                                 Modal;                                                    // (CPF_Parm)
};

// Function ProjectX.GRI_X.PrintDebugInfo
struct AGRI_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.GRI_X.IsPlaylistRanked
struct AGRI_X_IsPlaylistRanked_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GRI_X.GetPlaylist
struct AGRI_X_GetPlaylist_Params
{
	class UGameSettingPlaylist_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GRI_X.PlayerIsInCurrentGame
struct AGRI_X_PlayerIsInCurrentGame_Params
{
	struct FUniqueNetId                                MemberId;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GRI_X.GetReservationDebugString
struct AGRI_X_GetReservationDebugString_Params
{
	struct FReplicatedReservationData                  Data;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.GRI_X.GetOnlineGameDedicated
struct AGRI_X_GetOnlineGameDedicated_Params
{
	class UOnlineGameDedicatedServer_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GRI_X.GetOnlineGameBase
struct AGRI_X_GetOnlineGameBase_Params
{
	class UOnlineGame_Base_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GRI_X.GetOnlineGame
struct AGRI_X_GetOnlineGame_Params
{
	class UOnlineGame_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GRI_X.HasSelectedGameData
struct AGRI_X_HasSelectedGameData_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.GRI_X.SetGameStarted
struct AGRI_X_SetGameStarted_Params
{
};

// Function ProjectX.GRI_X.SetOfflineGameData
struct AGRI_X_SetOfflineGameData_Params
{
	struct FName                                       PlaylistName;                                             // (CPF_Parm)
};

// Function ProjectX.GRI_X.SetGameData
struct AGRI_X_SetGameData_Params
{
	int                                                NewPlaylistID;                                            // (CPF_Parm)
	int                                                MutatorIndex;                                             // (CPF_Parm)
};

// Function ProjectX.GRI_X.HandleGamePlaylistSet
struct AGRI_X_HandleGamePlaylistSet_Params
{
	class UOnlineGameDedicatedServer_X*                DedicatedServer;                                          // (CPF_Parm)
};

// Function ProjectX.GRI_X.OnReservationsUpdated
struct AGRI_X_OnReservationsUpdated_Params
{
};

// Function ProjectX.GRI_X.UpdateReservations
struct AGRI_X_UpdateReservations_Params
{
};

// Function ProjectX.GRI_X.ReplicatedEvent
struct AGRI_X_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (CPF_Parm)
};

// Function ProjectX.GRI_X.PostBeginPlay
struct AGRI_X_PostBeginPlay_Params
{
};

// Function ProjectX.GRI_X.EventGameStarted
struct AGRI_X_EventGameStarted_Params
{
	class AGRI_X*                                      GRI;                                                      // (CPF_Parm)
};

// Function ProjectX.GRI_X.EventServerNameChanged
struct AGRI_X_EventServerNameChanged_Params
{
	class AGRI_X*                                      GRI;                                                      // (CPF_Parm)
};

// Function ProjectX.GRI_X.EventReservationsUpdated
struct AGRI_X_EventReservationsUpdated_Params
{
	class AGRI_X*                                      GRI;                                                      // (CPF_Parm)
};

// Function ProjectX.GRI_X.EventGameDataSelected
struct AGRI_X_EventGameDataSelected_Params
{
	int                                                PlaylistId;                                               // (CPF_Parm)
	int                                                MutatorIndex;                                             // (CPF_Parm)
};

// Function ProjectX.GRI_X.EventSpawned
struct AGRI_X_EventSpawned_Params
{
	class AGRI_X*                                      GRI;                                                      // (CPF_Parm)
};

// Function ProjectX.LanMessage_X.Broadcast
struct ULanMessage_X_Broadcast_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LanMessage_X.SetNonce
struct ULanMessage_X_SetNonce_Params
{
	class ULanMessage_X*                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LanMessage_HostQuery_X.SetHost
struct ULanMessage_HostQuery_X_SetHost_Params
{
	bool                                               bValue;                                                   // (CPF_Parm)
	class ULanMessage_HostQuery_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LanMessage_HostQuery_X.SetBuildID
struct ULanMessage_HostQuery_X_SetBuildID_Params
{
	int                                                InBuildID;                                                // (CPF_Parm)
	class ULanMessage_HostQuery_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LanMessage_HostQuery_X.SetFilter
struct ULanMessage_HostQuery_X_SetFilter_Params
{
	struct FCustomMatchSettings                        InFilter;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class ULanMessage_HostQuery_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LanMessage_HostResponse_X.GetDebugString
struct ULanMessage_HostResponse_X_GetDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.LanMessage_HostResponse_X.SetResult
struct ULanMessage_HostResponse_X_SetResult_Params
{
	struct FServerResult                               InResult;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class ULanMessage_HostResponse_X*                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.MapRenderProfiler_X.Finalize
struct UMapRenderProfiler_X_Finalize_Params
{
};

// Function ProjectX.MapRenderProfiler_X.LoadNextMap
struct UMapRenderProfiler_X_LoadNextMap_Params
{
};

// Function ProjectX.MapRenderProfiler_X.Start
struct UMapRenderProfiler_X_Start_Params
{
};

// Function ProjectX.MapRenderProfiler_X.LoadingMap.StartProfiling
struct SMapRenderProfiler_X_LoadingMap_StartProfiling_Params
{
};

// Function ProjectX.MapRenderProfiler_X.LoadingMap.HandleMapLoaded
struct SMapRenderProfiler_X_LoadingMap_HandleMapLoaded_Params
{
};

// Function ProjectX.MapRenderProfiler_X.LoadingMap.BeginState
struct SMapRenderProfiler_X_LoadingMap_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.MapRenderProfiler_X.FlythroughProfiling.HandleProfileFinished
struct SMapRenderProfiler_X_FlythroughProfiling_HandleProfileFinished_Params
{
	class AMapFlythroughProfiler_X*                    Profiler;                                                 // (CPF_Parm)
};

// Function ProjectX.MapRenderProfiler_X.FlythroughProfiling.BeginState
struct SMapRenderProfiler_X_FlythroughProfiling_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.MapRenderProfiler_X.RenderProfiling.UploadProfile
struct SMapRenderProfiler_X_RenderProfiling_UploadProfile_Params
{
	struct FString                                     MapName;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	class ARenderProfiler_X*                           Profile;                                                  // (CPF_Parm)
};

// Function ProjectX.MapRenderProfiler_X.RenderProfiling.HandleProfileFinished
struct SMapRenderProfiler_X_RenderProfiling_HandleProfileFinished_Params
{
	class ARenderProfiler_X*                           Profiler;                                                 // (CPF_Parm)
};

// Function ProjectX.MapRenderProfiler_X.RenderProfiling.BeginState
struct SMapRenderProfiler_X_RenderProfiling_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.MaterialEffect_X.GetActiveEffects
struct UMaterialEffect_X_GetActiveEffects_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.MaterialEffect_X.HasAnyEffectsActive
struct UMaterialEffect_X_HasAnyEffectsActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.MaterialEffect_X.GetMaterialParameterValue
struct UMaterialEffect_X_GetMaterialParameterValue_Params
{
	struct FName                                       MaterialParamName;                                        // (CPF_Parm)
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.MaterialEffect_X.SetMaterialParameterLinearColorValue
struct UMaterialEffect_X_SetMaterialParameterLinearColorValue_Params
{
	struct FName                                       MaterialParamName;                                        // (CPF_Parm)
	struct FLinearColor                                NewValue;                                                 // (CPF_Parm)
};

// Function ProjectX.MaterialEffect_X.SetMaterialParameterValue
struct UMaterialEffect_X_SetMaterialParameterValue_Params
{
	struct FName                                       MaterialParamName;                                        // (CPF_Parm)
	float                                              NewValue;                                                 // (CPF_Parm)
};

// Function ProjectX.MaterialEffect_X.HandleParametersChanged
struct UMaterialEffect_X_HandleParametersChanged_Params
{
};

// Function ProjectX.MaterialEffect_X.UpdateFade
struct UMaterialEffect_X_UpdateFade_Params
{
	float                                              Alpha;                                                    // (CPF_Parm)
};

// Function ProjectX.MaterialEffect_X.SetStage
struct UMaterialEffect_X_SetStage_Params
{
	TEnumAsByte<EMaterialEffectStage>                  NewStage;                                                 // (CPF_Parm)
};

// Function ProjectX.MaterialEffect_X.Tick
struct UMaterialEffect_X_Tick_Params
{
	float                                              dt;                                                       // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.MaterialEffect_X.End
struct UMaterialEffect_X_End_Params
{
};

// Function ProjectX.MaterialEffect_X.Start
struct UMaterialEffect_X_Start_Params
{
};

// Function ProjectX.MaterialEffect_X.Init
struct UMaterialEffect_X_Init_Params
{
};

// Function ProjectX.MaterialEffect_X.IsInitialized
struct UMaterialEffect_X_IsInitialized_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePlayerTitles_X.HandlePlayerTitlesSynced
struct UOnlineGamePlayerTitles_X_HandlePlayerTitlesSynced_Params
{
	class UOnlineGamePlayerTitles_X*                   TitlesObj;                                                // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGamePlayerTitles_X.SyncPlayerTitlesAndData
struct UOnlineGamePlayerTitles_X_SyncPlayerTitlesAndData_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGamePlayerTitles_X.GetTitleData
struct UOnlineGamePlayerTitles_X_GetTitleData_Params
{
	struct FName                                       TitleId;                                                  // (CPF_Parm)
	struct FPlayerTitleData                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePlayerTitles_X.GetContent
struct UOnlineGamePlayerTitles_X_GetContent_Params
{
	struct FString                                     Text;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePlayerTitles_X.HandleTitleText
struct UOnlineGamePlayerTitles_X_HandleTitleText_Params
{
	class UWebRequest_X*                               WebRequest;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGamePlayerTitles_X.SyncTitleData
struct UOnlineGamePlayerTitles_X_SyncTitleData_Params
{
	struct FName                                       TitleId;                                                  // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePlayerTitles_X.GetPlayerTitles
struct UOnlineGamePlayerTitles_X_GetPlayerTitles_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	TArray<struct FName>                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePlayerTitles_X.HandlePlayerTitlesRPC
struct UOnlineGamePlayerTitles_X_HandlePlayerTitlesRPC_Params
{
	class URPC_GetPlayerTitles_X*                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGamePlayerTitles_X.SyncPlayerTitles
struct UOnlineGamePlayerTitles_X_SyncPlayerTitles_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePlayerTitles_X.HandlePlayerPsyNetLogin
struct UOnlineGamePlayerTitles_X_HandlePlayerPsyNetLogin_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGamePlayerTitles_X.OnInit
struct UOnlineGamePlayerTitles_X_OnInit_Params
{
};

// Function ProjectX.OnlineGamePlayerTitles_X.EventTitleDataUpdated
struct UOnlineGamePlayerTitles_X_EventTitleDataUpdated_Params
{
	class UOnlineGamePlayerTitles_X*                   Titles;                                                   // (CPF_Parm)
	struct FName                                       TitleId;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGamePlayerTitles_X.EventPlayerTitledUpdated
struct UOnlineGamePlayerTitles_X_EventPlayerTitledUpdated_Params
{
	class UOnlineGamePlayerTitles_X*                   Titles;                                                   // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineConfigDispatcher_X.GetDebugString
struct UOnlineConfigDispatcher_X_GetDebugString_Params
{
	class UOnlineConfig_X*                             Config;                                                   // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineConfigDispatcher_X.UndoConfigObject
struct UOnlineConfigDispatcher_X_UndoConfigObject_Params
{
	class UOnlineConfig_X*                             Config;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineConfigDispatcher_X.ApplyConfigObject
struct UOnlineConfigDispatcher_X_ApplyConfigObject_Params
{
	class UOnlineConfig_X*                             Config;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineConfigDispatcher_X.Construct
struct UOnlineConfigDispatcher_X_Construct_Params
{
};

// Function ProjectX.WebCache_X.GetErrorDebugString
struct UWebCache_X_GetErrorDebugString_Params
{
	class UError*                                      Error;                                                    // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.WebCache_X.GetRequestDebugString
struct UWebCache_X_GetRequestDebugString_Params
{
	struct FCachedDataRequest                          Request;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.WebCache_X.HandleWebRequest
struct UWebCache_X_HandleWebRequest_Params
{
	class UWebRequest_X*                               WebRequest;                                               // (CPF_Parm)
};

// Function ProjectX.WebCache_X.DownloadData
struct UWebCache_X_DownloadData_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ETag;                                                     // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.WebCache_X.HandleLoadFromCache
struct UWebCache_X_HandleLoadFromCache_Params
{
	class ULocalCache_X*                               Cache;                                                    // (CPF_Parm)
	class UCachedWebData_X*                            CacheObject;                                              // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.WebCache_X.GetData
struct UWebCache_X_GetData_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.WebCache_X.GetCachedPath
struct UWebCache_X_GetCachedPath_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.WebCache_X.CachedTextCallback
struct UWebCache_X_CachedTextCallback_Params
{
	class UCachedWebData_X*                            CachedData;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameWordFilter_X.SanitizePhraseAndNotify
struct UOnlineGameWordFilter_X_SanitizePhraseAndNotify_Params
{
	struct FString                                     Comment;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameWordFilter_X.SanitizePhrase
struct UOnlineGameWordFilter_X_SanitizePhrase_Params
{
	struct FString                                     Comment;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameWordFilter_X.CreateError
struct UOnlineGameWordFilter_X_CreateError_Params
{
	struct FWordFilterResult                           Result;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TEnumAsByte<EWordFilterUsage>                      Usage;                                                    // (CPF_Parm)
	class UError*                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameWordFilter_X.HandleCommentSanitized
struct UOnlineGameWordFilter_X_HandleCommentSanitized_Params
{
	struct FWordFilterResult                           Result;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameWordFilter_X.UpdateUsage
struct UOnlineGameWordFilter_X_UpdateUsage_Params
{
	TEnumAsByte<EWordFilterUsage>                      OldUsage;                                                 // (CPF_Parm)
	TEnumAsByte<EWordFilterUsage>                      NewUsage;                                                 // (CPF_Parm)
	TEnumAsByte<EWordFilterUsage>                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameWordFilter_X.InternalSanitize
struct UOnlineGameWordFilter_X_InternalSanitize_Params
{
	struct FString                                     Comment;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             ErrorCallback;                                            // (CPF_Parm, CPF_NeedCtorLink)
	TEnumAsByte<EWordFilterUsage>                      Usage;                                                    // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameWordFilter_X.IsPending
struct UOnlineGameWordFilter_X_IsPending_Params
{
	struct FString                                     Comment;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameWordFilter_X.SanitizeChat
struct UOnlineGameWordFilter_X_SanitizeChat_Params
{
	struct FString                                     Comment;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             ErrorCallback;                                            // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameWordFilter_X.Sanitize
struct UOnlineGameWordFilter_X_Sanitize_Params
{
	struct FString                                     Comment;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             ErrorCallback;                                            // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_OptionalParm, CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameWordFilter_X.OnMainMenuOpened
struct UOnlineGameWordFilter_X_OnMainMenuOpened_Params
{
};

// Function ProjectX.OnlineGameWordFilter_X.EventCommentError
struct UOnlineGameWordFilter_X_EventCommentError_Params
{
	struct FString                                     OriginalPhrase;                                           // (CPF_Parm, CPF_NeedCtorLink)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameWordFilter_X.EventCommentSanitized
struct UOnlineGameWordFilter_X_EventCommentSanitized_Params
{
	struct FString                                     Original;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Sanitized;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSkillGroups_X.HandleSkillsUpdateFailed
struct UOnlineGameSkillGroups_X_HandleSkillsUpdateFailed_Params
{
	class URPC_X*                                      RPCObject;                                                // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkillGroups_X.HandleSkillsUpdated
struct UOnlineGameSkillGroups_X_HandleSkillsUpdated_Params
{
	class URPC_X*                                      RPCObject;                                                // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkillGroups_X.SubmitMatch
struct UOnlineGameSkillGroups_X_SubmitMatch_Params
{
	class UMatchRecorder_X*                            MatchRecorder;                                            // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkillGroups_X.ReverseMapPlayerIDs
struct UOnlineGameSkillGroups_X_ReverseMapPlayerIDs_Params
{
	TArray<int>                                        PlayerIndexes;                                            // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FUniqueNetId>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSkillGroups_X.ArraysEqual
struct UOnlineGameSkillGroups_X_ArraysEqual_Params
{
	TArray<int>                                        A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	TArray<int>                                        B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkillGroups_X.HashPlayerIndexes
struct UOnlineGameSkillGroups_X_HashPlayerIndexes_Params
{
	TArray<int>                                        PlayerIndexes;                                            // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkillGroups_X.MapPlayerID
struct UOnlineGameSkillGroups_X_MapPlayerID_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkillGroups_X.SortPlayerIndexes
struct UOnlineGameSkillGroups_X_SortPlayerIndexes_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkillGroups_X.MapPlayerIDs
struct UOnlineGameSkillGroups_X_MapPlayerIDs_Params
{
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                // (CPF_Parm, CPF_NeedCtorLink)
	TArray<int>                                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSkillGroups_X.GetOrCreatePlayerGroup
struct UOnlineGameSkillGroups_X_GetOrCreatePlayerGroup_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkillGroups_X.GetOrCreateGroupRating
struct UOnlineGameSkillGroups_X_GetOrCreateGroupRating_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Playlist;                                                 // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkillGroups_X.GetGroupSkillRating
struct UOnlineGameSkillGroups_X_GetGroupSkillRating_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Playlist;                                                 // (CPF_Parm)
	struct FTierSkillRating                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameSkillGroups_X.HandleSyncComplete
struct UOnlineGameSkillGroups_X_HandleSyncComplete_Params
{
	class URPC_X*                                      RPCObject;                                                // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkillGroups_X.SyncGroupSkill
struct UOnlineGameSkillGroups_X_SyncGroupSkill_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameSkillGroups_X.CacheSkill
struct UOnlineGameSkillGroups_X_CacheSkill_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Playlist;                                                 // (CPF_Parm)
	float                                              Mu;                                                       // (CPF_Parm)
	float                                              Sigma;                                                    // (CPF_Parm)
	int                                                Tier;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkillGroups_X.PreCacheSkill
struct UOnlineGameSkillGroups_X_PreCacheSkill_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Playlist;                                                 // (CPF_Parm)
	float                                              Mu;                                                       // (CPF_Parm)
	float                                              Sigma;                                                    // (CPF_Parm)
	int                                                Tier;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameSkillGroups_X.EventGroupSkillSynced
struct UOnlineGameSkillGroups_X_EventGroupSkillSynced_Params
{
	class UOnlineGameSkillGroups_X*                    Skill;                                                    // (CPF_Parm)
	TArray<struct FUniqueNetId>                        PlayerIDs;                                                // (CPF_Parm, CPF_NeedCtorLink)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.NetMetrics_X.RpcSignatureMismatch
struct UNetMetrics_X_RpcSignatureMismatch_Params
{
	int                                                ServiceID;                                                // (CPF_Parm)
};

// Function ProjectX.NetMetrics_X.ConnectionChangedIP
struct UNetMetrics_X_ConnectionChangedIP_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.NetMetrics_X.PlayerNetworkError
struct UNetMetrics_X_PlayerNetworkError_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.NetMetrics_X.PlayerTimeout
struct UNetMetrics_X_PlayerTimeout_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.NetMetrics_X.PlayerNetwork
struct UNetMetrics_X_PlayerNetwork_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                PingMin;                                                  // (CPF_Parm)
	int                                                PingMax;                                                  // (CPF_Parm)
	int                                                PingAvg;                                                  // (CPF_Parm)
	int                                                PktLossRateMin;                                           // (CPF_Parm)
	int                                                PktLossRateMax;                                           // (CPF_Parm)
	int                                                PktLossAvg;                                               // (CPF_Parm)
	int                                                InBpsMax;                                                 // (CPF_Parm)
	int                                                InBpsAvg;                                                 // (CPF_Parm)
	int                                                OutBpsMax;                                                // (CPF_Parm)
	int                                                OutBpsAvg;                                                // (CPF_Parm)
};

// Function ProjectX.NetMetrics_X.RecordPlayerNetwork
struct UNetMetrics_X_RecordPlayerNetwork_Params
{
	class APlayerController*                           PC;                                                       // (CPF_Parm)
};

// Function ProjectX.OnlineGameWordFilterProcessor_X.TriggerCallbacks
struct UOnlineGameWordFilterProcessor_X_TriggerCallbacks_Params
{
	int                                                Index;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameWordFilterProcessor_X.ProcessSanitizedDelayed
struct UOnlineGameWordFilterProcessor_X_ProcessSanitizedDelayed_Params
{
};

// Function ProjectX.OnlineGameWordFilterProcessor_X.HandleWordSanitized
struct UOnlineGameWordFilterProcessor_X_HandleWordSanitized_Params
{
	class UWebRequest_X*                               Request;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameWordFilterProcessor_X.SanitizeString
struct UOnlineGameWordFilterProcessor_X_SanitizeString_Params
{
	struct FString                                     Comment;                                                  // (CPF_Const, CPF_Parm, CPF_NeedCtorLink)
	struct FScriptDelegate                             SanitizeDelegate;                                         // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameWordFilterProcessor_X.OnSanitizeStringComplete
struct UOnlineGameWordFilterProcessor_X_OnSanitizeStringComplete_Params
{
	struct FString                                     Original;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Sanitized;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivileges_X.IsCheckingPrivileges
struct UOnlineGamePrivileges_X_IsCheckingPrivileges_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePrivileges_X.RemoveCallback
struct UOnlineGamePrivileges_X_RemoveCallback_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivileges_X.HandlePrivilegeCheckFinished
struct UOnlineGamePrivileges_X_HandlePrivilegeCheckFinished_Params
{
	class UPrivilegeCheck_X*                           PrivilegeCheck;                                           // (CPF_Parm)
};

// Function ProjectX.OnlineGamePrivileges_X.CreatePrivilegeCheck
struct UOnlineGamePrivileges_X_CreatePrivilegeCheck_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UPrivilegeCheck_X*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePrivileges_X.TryToUseUGC
struct UOnlineGamePrivileges_X_TryToUseUGC_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivileges_X.TryToPlayOnline
struct UOnlineGamePrivileges_X_TryToPlayOnline_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivileges_X.TryToUsePsyNet
struct UOnlineGamePrivileges_X_TryToUsePsyNet_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivileges_X.TryToViewLeaderboards
struct UOnlineGamePrivileges_X_TryToViewLeaderboards_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivileges_X.TryToBrowseInternet
struct UOnlineGamePrivileges_X_TryToBrowseInternet_Params
{
	int                                                ControllerId;                                             // (CPF_Parm)
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivileges_X.EventPrivilegeCheckRestriction
struct UOnlineGamePrivileges_X_EventPrivilegeCheckRestriction_Params
{
	class UPrivilegeCheck_X*                           Check;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGamePrivileges_X.EventCheckingPrivilegesChanged
struct UOnlineGamePrivileges_X_EventCheckingPrivilegesChanged_Params
{
	class UOnlineGamePrivileges_X*                     PrivilegesObject;                                         // (CPF_Parm)
};

// Function ProjectX.OnlineGameRegions_X.SetCachedRegionPings
struct UOnlineGameRegions_X_SetCachedRegionPings_Params
{
	TArray<struct FCachedRegionPing>                   InCachedRegionPings;                                      // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameRegions_X.PrintDebugInfo
struct UOnlineGameRegions_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameRegions_X.NotifyWhenSynced
struct UOnlineGameRegions_X_NotifyWhenSynced_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameRegions_X.GetRegionsDebugString
struct UOnlineGameRegions_X_GetRegionsDebugString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameRegions_X.GetFriendlyRegionsString
struct UOnlineGameRegions_X_GetFriendlyRegionsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameRegions_X.GetFriendlySortedRegionsString
struct UOnlineGameRegions_X_GetFriendlySortedRegionsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameRegions_X.GetSortedRegionsString
struct UOnlineGameRegions_X_GetSortedRegionsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameRegions_X.SortRegionDelegate
struct UOnlineGameRegions_X_SortRegionDelegate_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameRegions_X.OnAllRegionsPinged
struct UOnlineGameRegions_X_OnAllRegionsPinged_Params
{
};

// Function ProjectX.OnlineGameRegions_X.HandlePingMessage
struct UOnlineGameRegions_X_HandlePingMessage_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     PingMessage;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameRegions_X.HandleGetPingRegionListRPC
struct UOnlineGameRegions_X_HandleGetPingRegionListRPC_Params
{
	class URPC_GetGameServerPingList_X*                RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameRegions_X.PingRegions
struct UOnlineGameRegions_X_PingRegions_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameRegions_X.HandleSyncedRegionsRPC
struct UOnlineGameRegions_X_HandleSyncedRegionsRPC_Params
{
	class URPC_GetRegionList_X*                        RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameRegions_X.SyncRegions
struct UOnlineGameRegions_X_SyncRegions_Params
{
};

// Function ProjectX.OnlineGameRegions_X.OnInit
struct UOnlineGameRegions_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameRegions_X.EventRegionsError
struct UOnlineGameRegions_X_EventRegionsError_Params
{
	class UOnlineGameRegions_X*                        RegionsObj;                                               // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameRegions_X.EventRegionsPinged
struct UOnlineGameRegions_X_EventRegionsPinged_Params
{
	class UOnlineGameRegions_X*                        RegionsObj;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameRegions_X.EventRegionsSynced
struct UOnlineGameRegions_X_EventRegionsSynced_Params
{
	class UOnlineGameRegions_X*                        RegionsObj;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameInvite_X.OnGameInviteComplete
struct UOnlineGameInvite_X_OnGameInviteComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameInvite_X.JoinGameInviteGame
struct UOnlineGameInvite_X_JoinGameInviteGame_Params
{
	struct FJoinMatchSettings                          Settings;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameInvite_X.OnGameInviteAccepted
struct UOnlineGameInvite_X_OnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                             // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ErrorString;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameInvite_X.OnInit
struct UOnlineGameInvite_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameInvite_X.EventPasswordRequired
struct UOnlineGameInvite_X_EventPasswordRequired_Params
{
};

// Function ProjectX.OnlineGameInvite_X.EventConfirmationRequired
struct UOnlineGameInvite_X_EventConfirmationRequired_Params
{
	struct FName                                       ConfirmationReason;                                       // (CPF_Parm)
};

// Function ProjectX.OnlineGameInvite_X.EventGameInviteComplete
struct UOnlineGameInvite_X_EventGameInviteComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameInvite_X.EventGameInviteAccepted
struct UOnlineGameInvite_X_EventGameInviteAccepted_Params
{
};

// Function ProjectX.OnlineGameVoice_X.GetControllerId
struct UOnlineGameVoice_X_GetControllerId_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
	unsigned char                                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameVoice_X.GetNumTalkers
struct UOnlineGameVoice_X_GetNumTalkers_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameVoice_X.IsRemotePlayerTalking
struct UOnlineGameVoice_X_IsRemotePlayerTalking_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameVoice_X.HandlePlayerTalkingStateChange
struct UOnlineGameVoice_X_HandlePlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bTalking;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameVoice_X.UnregisterTalker
struct UOnlineGameVoice_X_UnregisterTalker_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameVoice_X.RegisterTalker
struct UOnlineGameVoice_X_RegisterTalker_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameVoice_X.OnInit
struct UOnlineGameVoice_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameVoice_X.EventPlayerTalking
struct UOnlineGameVoice_X_EventPlayerTalking_Params
{
	class UOnlineGameVoice_X*                          SelfRef;                                                  // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bTalking;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameCommunity_X.OnInit
struct UOnlineGameCommunity_X_OnInit_Params
{
};

// Function ProjectX.OnlineGamePopulation_X.HandleGotAllPopulationPlaylistsRPC
struct UOnlineGamePopulation_X_HandleGotAllPopulationPlaylistsRPC_Params
{
	class URPC_GetPopulation_X*                        RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGamePopulation_X.GetPlaylistPopulations
struct UOnlineGamePopulation_X_GetPlaylistPopulations_Params
{
	struct FScriptDelegate                             NewDelegate;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePopulation_X.EventGetPlaylistPopulations
struct UOnlineGamePopulation_X_EventGetPlaylistPopulations_Params
{
	class UOnlineGamePopulation_X*                     PopulationsObject;                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.CreateLanGame
struct UOnlineGameLanBrowser_X_CreateLanGame_Params
{
	struct FServerResult                               HostResponse;                                             // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FCustomMatchSettings                        MatchSettings;                                            // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLanBrowser_X.HandleHostResponse
struct UOnlineGameLanBrowser_X_HandleHostResponse_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.OnSearchComplete
struct UOnlineGameLanBrowser_X_OnSearchComplete_Params
{
	bool                                               bCancelled;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.OnSearchError
struct UOnlineGameLanBrowser_X_OnSearchError_Params
{
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLanBrowser_X.IsSearching
struct UOnlineGameLanBrowser_X_IsSearching_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.Cancel
struct UOnlineGameLanBrowser_X_Cancel_Params
{
};

// Function ProjectX.OnlineGameLanBrowser_X.StartSearch
struct UOnlineGameLanBrowser_X_StartSearch_Params
{
	struct FCustomMatchSettings                        InFilter;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bHostQuery;                                               // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.ClearCompleteDelegate
struct UOnlineGameLanBrowser_X_ClearCompleteDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameLanBrowser_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.ClearNewResponseDelegate
struct UOnlineGameLanBrowser_X_ClearNewResponseDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameLanBrowser_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.ClearStateChangedDelegate
struct UOnlineGameLanBrowser_X_ClearStateChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameLanBrowser_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.ClearStatusDelegate
struct UOnlineGameLanBrowser_X_ClearStatusDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameLanBrowser_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.ClearErrorDelegate
struct UOnlineGameLanBrowser_X_ClearErrorDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameLanBrowser_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.SetCompleteDelegate
struct UOnlineGameLanBrowser_X_SetCompleteDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameLanBrowser_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.SetNewResponseDelegate
struct UOnlineGameLanBrowser_X_SetNewResponseDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameLanBrowser_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.SetStateChangedDelegate
struct UOnlineGameLanBrowser_X_SetStateChangedDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameLanBrowser_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.SetStatusDelegate
struct UOnlineGameLanBrowser_X_SetStatusDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameLanBrowser_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.SetErrorDelegate
struct UOnlineGameLanBrowser_X_SetErrorDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameLanBrowser_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.OnInit
struct UOnlineGameLanBrowser_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameLanBrowser_X.EventSearchError
struct UOnlineGameLanBrowser_X_EventSearchError_Params
{
	struct FString                                     NewStatus;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLanBrowser_X.EventSearchComplete
struct UOnlineGameLanBrowser_X_EventSearchComplete_Params
{
	bool                                               bCancelled;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.EventSearchStateChanged
struct UOnlineGameLanBrowser_X_EventSearchStateChanged_Params
{
	struct FName                                       SearchState;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.EventSearchStatus
struct UOnlineGameLanBrowser_X_EventSearchStatus_Params
{
	struct FString                                     NewStatus;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLanBrowser_X.EventSearchNewResponse
struct UOnlineGameLanBrowser_X_EventSearchNewResponse_Params
{
	struct FServerResult                               Result;                                                   // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameServerBrowser_X.HandleGameServerList
struct UOnlineGameServerBrowser_X_HandleGameServerList_Params
{
	class URPC_CustomGameServerGet_X*                  RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameServerBrowser_X.GetFriendlyRegionString
struct UOnlineGameServerBrowser_X_GetFriendlyRegionString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameServerBrowser_X.GetRegionsString
struct UOnlineGameServerBrowser_X_GetRegionsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameServerBrowser_X.OnSearchComplete
struct UOnlineGameServerBrowser_X_OnSearchComplete_Params
{
	TArray<struct FServerResult>                       Results;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameServerBrowser_X.OnSearchError
struct UOnlineGameServerBrowser_X_OnSearchError_Params
{
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameServerBrowser_X.IsSearching
struct UOnlineGameServerBrowser_X_IsSearching_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameServerBrowser_X.Cancel
struct UOnlineGameServerBrowser_X_Cancel_Params
{
};

// Function ProjectX.OnlineGameServerBrowser_X.StartSearch
struct UOnlineGameServerBrowser_X_StartSearch_Params
{
	struct FCustomMatchSettings                        InFilter;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     InPreferredRegion;                                        // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameServerBrowser_X.SetCompleteDelegate
struct UOnlineGameServerBrowser_X_SetCompleteDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameServerBrowser_X*                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameServerBrowser_X.SetErrorDelegate
struct UOnlineGameServerBrowser_X_SetErrorDelegate_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameServerBrowser_X*                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameServerBrowser_X.EventBrowserError
struct UOnlineGameServerBrowser_X_EventBrowserError_Params
{
	class UOnlineGameServerBrowser_X*                  Browser;                                                  // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameServerBrowser_X.EventSearchError
struct UOnlineGameServerBrowser_X_EventSearchError_Params
{
	struct FString                                     NewStatus;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameServerBrowser_X.EventSearchComplete
struct UOnlineGameServerBrowser_X_EventSearchComplete_Params
{
	TArray<struct FServerResult>                       Results;                                                  // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.CreateCheckReservation
struct UOnlineGameMatchmakingBase_X_CreateCheckReservation_Params
{
	class UCheckReservation_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.GotoMatchmakingState
struct UOnlineGameMatchmakingBase_X_GotoMatchmakingState_Params
{
	struct FName                                       StateName;                                                // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.ClearStartMatchmakingRPC
struct UOnlineGameMatchmakingBase_X_ClearStartMatchmakingRPC_Params
{
};

// Function ProjectX.OnlineGameMatchmakingBase_X.ClearCheckReservation
struct UOnlineGameMatchmakingBase_X_ClearCheckReservation_Params
{
};

// Function ProjectX.OnlineGameMatchmakingBase_X.OnSearchComplete
struct UOnlineGameMatchmakingBase_X_OnSearchComplete_Params
{
	bool                                               bCanceled;                                                // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Cancel
struct UOnlineGameMatchmakingBase_X_Cancel_Params
{
};

// Function ProjectX.OnlineGameMatchmakingBase_X.IsSearching
struct UOnlineGameMatchmakingBase_X_IsSearching_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.AddFindGameStateChangedDelegate
struct UOnlineGameMatchmakingBase_X_AddFindGameStateChangedDelegate_Params
{
	struct FScriptDelegate                             NewDelegate;                                              // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameMatchmakingBase_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.AddFindGameCompleteDelegate
struct UOnlineGameMatchmakingBase_X_AddFindGameCompleteDelegate_Params
{
	struct FScriptDelegate                             HandleFindGameComplete;                                   // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameMatchmakingBase_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.AddFindGameErrorDelegate
struct UOnlineGameMatchmakingBase_X_AddFindGameErrorDelegate_Params
{
	struct FScriptDelegate                             HandleFindGameError;                                      // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameMatchmakingBase_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.AddFindGameStatusChangedDelegate
struct UOnlineGameMatchmakingBase_X_AddFindGameStatusChangedDelegate_Params
{
	struct FScriptDelegate                             HandleFindGameStatusChanged;                              // (CPF_Parm, CPF_NeedCtorLink)
	class UOnlineGameMatchmakingBase_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.EventFindGameStateChanged
struct UOnlineGameMatchmakingBase_X_EventFindGameStateChanged_Params
{
	struct FName                                       NewState;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.EventFindGameError
struct UOnlineGameMatchmakingBase_X_EventFindGameError_Params
{
	struct FString                                     NewStatus;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.EventFindGameStatus
struct UOnlineGameMatchmakingBase_X_EventFindGameStatus_Params
{
	struct FString                                     NewStatus;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.EventFindGameComplete
struct UOnlineGameMatchmakingBase_X_EventFindGameComplete_Params
{
	bool                                               bCancelled;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGamePrivateMatch_X.GetFriendlyRegionString
struct UOnlineGamePrivateMatch_X_GetFriendlyRegionString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivateMatch_X.GetRegionsString
struct UOnlineGamePrivateMatch_X_GetRegionsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivateMatch_X.OnPrivateMatchError
struct UOnlineGamePrivateMatch_X_OnPrivateMatchError_Params
{
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivateMatch_X.StartSearch
struct UOnlineGamePrivateMatch_X_StartSearch_Params
{
	struct FString                                     InPreferredRegion;                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FCustomMatchSettings                        InSettings;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePrivateMatch_X.EventPrivateMatchError
struct UOnlineGamePrivateMatch_X_EventPrivateMatchError_Params
{
	class UOnlineGamePrivateMatch_X*                   InPrivateMatch;                                           // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.PrintDebugInfo
struct UOnlineGameMatchmaking_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.IsMatchmakingDisabled
struct UOnlineGameMatchmaking_X_IsMatchmakingDisabled_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmaking_X.GetMetrics
struct UOnlineGameMatchmaking_X_GetMetrics_Params
{
	class UMatchmakingMetrics_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)
};

// Function ProjectX.OnlineGameMatchmaking_X.SetSkillIgnored
struct UOnlineGameMatchmaking_X_SetSkillIgnored_Params
{
	bool                                               bIgnore;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.ToggleSkill
struct UOnlineGameMatchmaking_X_ToggleSkill_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.ClearMatchmakingBanTime
struct UOnlineGameMatchmaking_X_ClearMatchmakingBanTime_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.HandlePartySizeChanged
struct UOnlineGameMatchmaking_X_HandlePartySizeChanged_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
	int                                                NewSize;                                                  // (CPF_Parm)
	int                                                OldSize;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.HandlePartyDestroyed
struct UOnlineGameMatchmaking_X_HandlePartyDestroyed_Params
{
	class UOnlineGameParty_X*                          PartyObject;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.OnFindGameWarning
struct UOnlineGameMatchmaking_X_OnFindGameWarning_Params
{
	struct FString                                     FailReason;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmaking_X.GetGameServerID
struct UOnlineGameMatchmaking_X_GetGameServerID_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.SortPlaylists
struct UOnlineGameMatchmaking_X_SortPlaylists_Params
{
	int                                                A;                                                        // (CPF_Parm)
	int                                                B;                                                        // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmaking_X.GetPartyMembersString
struct UOnlineGameMatchmaking_X_GetPartyMembersString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmaking_X.GetSkillsString
struct UOnlineGameMatchmaking_X_GetSkillsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmaking_X.GetLocalizedRegionsString
struct UOnlineGameMatchmaking_X_GetLocalizedRegionsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmaking_X.GetRegionsString
struct UOnlineGameMatchmaking_X_GetRegionsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmaking_X.GetLocalizedPlaylistsString
struct UOnlineGameMatchmaking_X_GetLocalizedPlaylistsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmaking_X.GetPlaylistsString
struct UOnlineGameMatchmaking_X_GetPlaylistsString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmaking_X.OnExit
struct UOnlineGameMatchmaking_X_OnExit_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.StartSearch
struct UOnlineGameMatchmaking_X_StartSearch_Params
{
	TArray<int>                                        InPreferredPlaylists;                                     // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             InPreferredRegions;                                       // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmaking_X.OnInit
struct UOnlineGameMatchmaking_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.EventMatchmakingError
struct UOnlineGameMatchmaking_X_EventMatchmakingError_Params
{
	class UOnlineGameMatchmaking_X*                    InMatchmaking;                                            // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameTrial_X.OnChanged
struct UOnlineGameTrial_X_OnChanged_Params
{
};

// Function ProjectX.OnlineGameTrial_X.HandleMapChanged
struct UOnlineGameTrial_X_HandleMapChanged_Params
{
};

// Function ProjectX.OnlineGameTrial_X.OverrideTrialMode
struct UOnlineGameTrial_X_OverrideTrialMode_Params
{
	bool                                               bTrial;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlineGameTrial_X.SetUpdateTimer
struct UOnlineGameTrial_X_SetUpdateTimer_Params
{
};

// Function ProjectX.OnlineGameTrial_X.SetTime
struct UOnlineGameTrial_X_SetTime_Params
{
	int                                                InMinutesRemaining;                                       // (CPF_Parm)
};

// Function ProjectX.OnlineGameTrial_X.CommitTimePlayed
struct UOnlineGameTrial_X_CommitTimePlayed_Params
{
};

// Function ProjectX.OnlineGameTrial_X.AccummulateTimePlayed
struct UOnlineGameTrial_X_AccummulateTimePlayed_Params
{
	int                                                InSecondsPlayed;                                          // (CPF_Parm)
};

// Function ProjectX.OnlineGameTrial_X.GetSecondsSinceLastPlayTime
struct UOnlineGameTrial_X_GetSecondsSinceLastPlayTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameTrial_X.HandleGetTrialDataRPC
struct UOnlineGameTrial_X_HandleGetTrialDataRPC_Params
{
	class URPC_GetTrialData_X*                         RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameTrial_X.SyncTrialData
struct UOnlineGameTrial_X_SyncTrialData_Params
{
};

// Function ProjectX.OnlineGameTrial_X.HandlePsyNetLogin
struct UOnlineGameTrial_X_HandlePsyNetLogin_Params
{
};

// Function ProjectX.OnlineGameTrial_X.UpdateTrialStatus
struct UOnlineGameTrial_X_UpdateTrialStatus_Params
{
};

// Function ProjectX.OnlineGameTrial_X.IsTrialExpired
struct UOnlineGameTrial_X_IsTrialExpired_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameTrial_X.IsFullVersion
struct UOnlineGameTrial_X_IsFullVersion_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameTrial_X.IsTrialVersion
struct UOnlineGameTrial_X_IsTrialVersion_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameTrial_X.OnInit
struct UOnlineGameTrial_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameTrial_X.EventUpdated
struct UOnlineGameTrial_X_EventUpdated_Params
{
	class UOnlineGameTrial_X*                          Trial;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameVersion_X.HandleError
struct UOnlineGameVersion_X_HandleError_Params
{
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameVersion_X.HandleServerBrowserError
struct UOnlineGameVersion_X_HandleServerBrowserError_Params
{
	class UOnlineGameServerBrowser_X*                  Browser;                                                  // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameVersion_X.HandlePrivateMatchError
struct UOnlineGameVersion_X_HandlePrivateMatchError_Params
{
	class UOnlineGamePrivateMatch_X*                   InPrivateMatch;                                           // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameVersion_X.HandleRegionsError
struct UOnlineGameVersion_X_HandleRegionsError_Params
{
	class UOnlineGameRegions_X*                        InRegions;                                                // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameVersion_X.HandleMatchmakingError
struct UOnlineGameVersion_X_HandleMatchmakingError_Params
{
	class UOnlineGameMatchmaking_X*                    InMatchmaking;                                            // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameVersion_X.OnInit
struct UOnlineGameVersion_X_OnInit_Params
{
};

// Function ProjectX.RPC_UpdatePlayerPlaylist_X.SetNumLocalPlayers
struct URPC_UpdatePlayerPlaylist_X_SetNumLocalPlayers_Params
{
	int                                                InNumLocalPlayers;                                        // (CPF_Parm)
	class URPC_UpdatePlayerPlaylist_X*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdatePlayerPlaylist_X.SetPlaylist
struct URPC_UpdatePlayerPlaylist_X_SetPlaylist_Params
{
	int                                                InPlaylist;                                               // (CPF_Parm)
	class URPC_UpdatePlayerPlaylist_X*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineStaticTextSync_X.OnTextChanged
struct UOnlineStaticTextSync_X_OnTextChanged_Params
{
};

// Function ProjectX.OnlineStaticTextSync_X.SetText
struct UOnlineStaticTextSync_X_SetText_Params
{
	struct FString                                     NewText;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineStaticTextSync_X.HandleTextSync
struct UOnlineStaticTextSync_X_HandleTextSync_Params
{
	class UWebRequest_X*                               Request;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineStaticTextSync_X.GetText
struct UOnlineStaticTextSync_X_GetText_Params
{
	struct FScriptDelegate                             Callback;                                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineStaticTextSync_X.GetDBEnvironment
struct UOnlineStaticTextSync_X_GetDBEnvironment_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineStaticTextSync_X.EventTextSynced
struct UOnlineStaticTextSync_X_EventTextSynced_Params
{
	class UOnlineStaticTextSync_X*                     TextSync;                                                 // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.OnlineStaticTextSync_X.EventTextChanged
struct UOnlineStaticTextSync_X_EventTextChanged_Params
{
	class UOnlineStaticTextSync_X*                     TextSync;                                                 // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.OnlineGameBlog_X.FormatMotD
struct UOnlineGameBlog_X_FormatMotD_Params
{
	struct FString                                     MotDText;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameBlog_X.GetKeyValue
struct UOnlineGameBlog_X_GetKeyValue_Params
{
	struct FString                                     SearchText;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Key;                                                      // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameBlog_X.GetSectionText
struct UOnlineGameBlog_X_GetSectionText_Params
{
	struct FString                                     Section;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameBlog_X.ParseText
struct UOnlineGameBlog_X_ParseText_Params
{
};

// Function ProjectX.OnlineGameBlog_X.OnTextChanged
struct UOnlineGameBlog_X_OnTextChanged_Params
{
};

// Function ProjectX.OnlineGameBlog_X.Init
struct UOnlineGameBlog_X_Init_Params
{
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.__OnlineGameDedicatedServerRegistration_X__HandleCreateServerSucces_1
struct UOnlineGameDedicatedServerRegistration_X___OnlineGameDedicatedServerRegistration_X__HandleCreateServerSucces_1_Params
{
	class UCacheTimer_X*                               Timer;                                                    // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.UpdateCustomGame
struct UOnlineGameDedicatedServerRegistration_X_UpdateCustomGame_Params
{
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.GetExclusivePlatformString
struct UOnlineGameDedicatedServerRegistration_X_GetExclusivePlatformString_Params
{
	TEnumAsByte<EOnlinePlatform>                       Platform;                                                 // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.UpdateGameTime
struct UOnlineGameDedicatedServerRegistration_X_UpdateGameTime_Params
{
	int                                                TimeSeconds;                                              // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.ShouldShutdownWhenEmpty
struct UOnlineGameDedicatedServerRegistration_X_ShouldShutdownWhenEmpty_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.TimerShutdownWhenEmpty
struct UOnlineGameDedicatedServerRegistration_X_TimerShutdownWhenEmpty_Params
{
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.HandleUpdateServerFailed
struct UOnlineGameDedicatedServerRegistration_X_HandleUpdateServerFailed_Params
{
	class URPC_UpdateGameServer_X*                     RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.HandleUpdateServerSucces
struct UOnlineGameDedicatedServerRegistration_X_HandleUpdateServerSucces_Params
{
	class URPC_UpdateGameServer_X*                     RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.HandleCreateServerFailed
struct UOnlineGameDedicatedServerRegistration_X_HandleCreateServerFailed_Params
{
	class URPC_CreateGameServer_X*                     RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.HandleCreateServerSucces
struct UOnlineGameDedicatedServerRegistration_X_HandleCreateServerSucces_Params
{
	class URPC_CreateGameServer_X*                     RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.SetServerNotJoinable
struct UOnlineGameDedicatedServerRegistration_X_SetServerNotJoinable_Params
{
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.SendUpdateServerRPC
struct UOnlineGameDedicatedServerRegistration_X_SendUpdateServerRPC_Params
{
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.GetServerType
struct UOnlineGameDedicatedServerRegistration_X_GetServerType_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.SendCreateServerRPC
struct UOnlineGameDedicatedServerRegistration_X_SendCreateServerRPC_Params
{
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.SendUpdateRequest
struct UOnlineGameDedicatedServerRegistration_X_SendUpdateRequest_Params
{
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.UpdateServer
struct UOnlineGameDedicatedServerRegistration_X_UpdateServer_Params
{
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.UnregisterServer
struct UOnlineGameDedicatedServerRegistration_X_UnregisterServer_Params
{
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.RegisterServer
struct UOnlineGameDedicatedServerRegistration_X_RegisterServer_Params
{
};

// Function ProjectX.OnlineGameDedicatedServerRegistration_X.OnInit
struct UOnlineGameDedicatedServerRegistration_X_OnInit_Params
{
};

// Function ProjectX.OnlinePlayerPermissions_X.HasPermission
struct UOnlinePlayerPermissions_X_HasPermission_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	TEnumAsByte<EOnlinePlayerPermission>               Permission;                                               // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerPermissions_X.HandlePlayerPermissions
struct UOnlinePlayerPermissions_X_HandlePlayerPermissions_Params
{
	class URPC_GetPlayerPermissions_X*                 RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerPermissions_X.SendRequest
struct UOnlinePlayerPermissions_X_SendRequest_Params
{
};

// Function ProjectX.OnlinePlayerPermissions_X.SyncPermissions
struct UOnlinePlayerPermissions_X_SyncPermissions_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerPermissions_X.EventUpdated
struct UOnlinePlayerPermissions_X_EventUpdated_Params
{
	class UOnlinePlayerPermissions_X*                  Permissions;                                              // (CPF_Parm)
};

// Function ProjectX.RPC_CheckReplacementDedicatedServer_X.GetServerAddress
struct URPC_CheckReplacementDedicatedServer_X_GetServerAddress_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_CheckReplacementDedicatedServer_X.SetServerID
struct URPC_CheckReplacementDedicatedServer_X_SetServerID_Params
{
	int                                                InServerID;                                               // (CPF_Parm)
	class URPC_CheckReplacementDedicatedServer_X*      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_AddQuitter_X.SetReason
struct URPC_AddQuitter_X_SetReason_Params
{
	struct FString                                     InReason;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_AddQuitter_X*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_AddQuitter_X.SetPlayerID
struct URPC_AddQuitter_X_SetPlayerID_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (CPF_Parm)
	class URPC_AddQuitter_X*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_RemoveQuitter_X.SetPlayerID
struct URPC_RemoveQuitter_X_SetPlayerID_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (CPF_Parm)
	class URPC_RemoveQuitter_X*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.Initializing.HandlePsyNetDataLoaded
struct SOnlineGameDedicatedServer_X_Initializing_HandlePsyNetDataLoaded_Params
{
	class UPsyNetStaticData_X*                         D;                                                        // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.OnlineGameDedicatedServer_X.Initializing.OnNewGameInfoCreated
struct SOnlineGameDedicatedServer_X_Initializing_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.Inactive.CreateMatchID
struct SOnlineGameDedicatedServer_X_Inactive_CreateMatchID_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.Inactive.HandleReservationsUpdated
struct SOnlineGameDedicatedServer_X_Inactive_HandleReservationsUpdated_Params
{
};

// Function ProjectX.OnlineGameDedicatedServer_X.Inactive.EndState
struct SOnlineGameDedicatedServer_X_Inactive_EndState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.Inactive.BeginState
struct SOnlineGameDedicatedServer_X_Inactive_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.StartingPrivateMatch.OnNewGameInfoCreated
struct SOnlineGameDedicatedServer_X_StartingPrivateMatch_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameDedicatedServer_X.BotTesting.HandleReservationsUpdated
struct SOnlineGameDedicatedServer_X_BotTesting_HandleReservationsUpdated_Params
{
};

// Function ProjectX.ClanforgeReservation_X.HandleRetry
struct UClanforgeReservation_X_HandleRetry_Params
{
};

// Function ProjectX.ClanforgeReservation_X.Retry
struct UClanforgeReservation_X_Retry_Params
{
};

// Function ProjectX.ClanforgeReservation_X.HandleSendComplete
struct UClanforgeReservation_X_HandleSendComplete_Params
{
	class UWebRequest_X*                               Request;                                                  // (CPF_Parm)
};

// Function ProjectX.ClanforgeReservation_X.ProcessNextRequest
struct UClanforgeReservation_X_ProcessNextRequest_Params
{
};

// Function ProjectX.ClanforgeReservation_X.Send
struct UClanforgeReservation_X_Send_Params
{
	struct FString                                     URL;                                                      // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.ClanforgeReservation_X.SetReserveState
struct UClanforgeReservation_X_SetReserveState_Params
{
	TEnumAsByte<EReserveState>                         NewState;                                                 // (CPF_Parm)
};

// Function ProjectX.ClanforgeReservation_X.HandleActivate
struct UClanforgeReservation_X_HandleActivate_Params
{
	class UOnlineGameDedicatedServer_X*                Server;                                                   // (CPF_Parm)
};

// Function ProjectX.ClanforgeReservation_X.HandleInactive
struct UClanforgeReservation_X_HandleInactive_Params
{
	class UOnlineGameDedicatedServer_X*                Server;                                                   // (CPF_Parm)
};

// Function ProjectX.ClanforgeReservation_X.Init
struct UClanforgeReservation_X_Init_Params
{
	class UOnlineGameDedicatedServer_X*                Server;                                                   // (CPF_Parm)
	struct FString                                     ReserveURL;                                               // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     UnreserveURL;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_DeactivateGameServer_X.SetServerID
struct URPC_DeactivateGameServer_X_SetServerID_Params
{
	int                                                InServerID;                                               // (CPF_Parm)
	class URPC_DeactivateGameServer_X*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CacheTimer_X.GetRandomCacheTimeoutTime
struct UCacheTimer_X_GetRandomCacheTimeoutTime_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CacheTimer_X.OnExpired
struct UCacheTimer_X_OnExpired_Params
{
};

// Function ProjectX.CacheTimer_X.OnDisabled
struct UCacheTimer_X_OnDisabled_Params
{
};

// Function ProjectX.CacheTimer_X.OnEnabled
struct UCacheTimer_X_OnEnabled_Params
{
};

// Function ProjectX.CacheTimer_X.SetEnabled
struct UCacheTimer_X_SetEnabled_Params
{
	bool                                               bEnableExpiration;                                        // (CPF_Parm)
};

// Function ProjectX.CacheTimer_X.Reset
struct UCacheTimer_X_Reset_Params
{
};

// Function ProjectX.CacheTimer_X.IsExpired
struct UCacheTimer_X_IsExpired_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CacheTimer_X.EventExpired
struct UCacheTimer_X_EventExpired_Params
{
	class UCacheTimer_X*                               Timer;                                                    // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.RPC_SetServerNotJoinable_X.SetServerID
struct URPC_SetServerNotJoinable_X_SetServerID_Params
{
	int                                                InServerID;                                               // (CPF_Parm)
	class URPC_SetServerNotJoinable_X*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateCustomGameServer_X.SetPassword
struct URPC_UpdateCustomGameServer_X_SetPassword_Params
{
	struct FString                                     InPassword;                                               // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_UpdateCustomGameServer_X*               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateCustomGameServer_X.SetServerName
struct URPC_UpdateCustomGameServer_X_SetServerName_Params
{
	struct FString                                     InServerName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_UpdateCustomGameServer_X*               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateCustomGameServer_X.SetServerID
struct URPC_UpdateCustomGameServer_X_SetServerID_Params
{
	int                                                InServerID;                                               // (CPF_Parm)
	class URPC_UpdateCustomGameServer_X*               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetPlayersPlatforms
struct URPC_UpdateGameServer_X_SetPlayersPlatforms_Params
{
	TArray<struct FString>                             InPlayersPlatforms;                                       // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetExclusivePlatform
struct URPC_UpdateGameServer_X_SetExclusivePlatform_Params
{
	struct FString                                     InExclusivePlatform;                                      // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetTimeRemaining
struct URPC_UpdateGameServer_X_SetTimeRemaining_Params
{
	int                                                InTimeRemaining;                                          // (CPF_Parm)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetIsPostGame
struct URPC_UpdateGameServer_X_SetIsPostGame_Params
{
	bool                                               bInIsPostGame;                                            // (CPF_Parm)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetAvgSkill
struct URPC_UpdateGameServer_X_SetAvgSkill_Params
{
	int                                                InAvgSkill;                                               // (CPF_Parm)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetReservationsTeam2
struct URPC_UpdateGameServer_X_SetReservationsTeam2_Params
{
	int                                                InReservationsTeam2;                                      // (CPF_Parm)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetReservationsTeam1
struct URPC_UpdateGameServer_X_SetReservationsTeam1_Params
{
	int                                                InReservationsTeam1;                                      // (CPF_Parm)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetNumPlayersTeam2
struct URPC_UpdateGameServer_X_SetNumPlayersTeam2_Params
{
	int                                                InNumPlayersTeam2;                                        // (CPF_Parm)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetNumPlayersTeam1
struct URPC_UpdateGameServer_X_SetNumPlayersTeam1_Params
{
	int                                                InNumPlayersTeam1;                                        // (CPF_Parm)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetMaxPlayers
struct URPC_UpdateGameServer_X_SetMaxPlayers_Params
{
	int                                                InMaxPlayers;                                             // (CPF_Parm)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetPlaylist
struct URPC_UpdateGameServer_X_SetPlaylist_Params
{
	int                                                InPlaylist;                                               // (CPF_Parm)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGameServer_X.SetServerID
struct URPC_UpdateGameServer_X_SetServerID_Params
{
	int                                                InServerID;                                               // (CPF_Parm)
	class URPC_UpdateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_CreateGameServer_X.SetBuildID
struct URPC_CreateGameServer_X_SetBuildID_Params
{
	int                                                InBuildID;                                                // (CPF_Parm)
	class URPC_CreateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_CreateGameServer_X.SetRegion
struct URPC_CreateGameServer_X_SetRegion_Params
{
	struct FString                                     InRegion;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_CreateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_CreateGameServer_X.SetIP
struct URPC_CreateGameServer_X_SetIP_Params
{
	struct FString                                     InIP;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_CreateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_CreateGameServer_X.SetMachineID
struct URPC_CreateGameServer_X_SetMachineID_Params
{
	int                                                InMachineID;                                              // (CPF_Parm)
	class URPC_CreateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_CreateGameServer_X.SetServerType
struct URPC_CreateGameServer_X_SetServerType_Params
{
	struct FString                                     InServerType;                                             // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_CreateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_CreateGameServer_X.SetServerName
struct URPC_CreateGameServer_X_SetServerName_Params
{
	struct FString                                     InServerName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_CreateGameServer_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameInvite_X.Joining.HandlePasswordRequired
struct SOnlineGameInvite_X_Joining_HandlePasswordRequired_Params
{
};

// Function ProjectX.OnlineGameInvite_X.Joining.HandleJoinGameComplete
struct SOnlineGameInvite_X_Joining_HandleJoinGameComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameInvite_X.Joining.EndState
struct SOnlineGameInvite_X_Joining_EndState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameInvite_X.Joining.BeginState
struct SOnlineGameInvite_X_Joining_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameInvite_X.Joining.OnGameInviteAccepted
struct SOnlineGameInvite_X_Joining_OnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                             // (CPF_Const, CPF_Parm, CPF_OutParm)
	struct FString                                     ErrorString;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.ReservationsWaitingMessage_X.SetWaitingForPlayers
struct UReservationsWaitingMessage_X_SetWaitingForPlayers_Params
{
	int                                                WaitingReserved;                                          // (CPF_Parm)
	int                                                WaitingMax;                                               // (CPF_Parm)
	class UReservationsWaitingMessage_X*               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ReservationsReadyMessage_X.SetProductIDs
struct UReservationsReadyMessage_X_SetProductIDs_Params
{
	TArray<int>                                        InProductIDs;                                             // (CPF_Parm, CPF_NeedCtorLink)
	class UReservationsReadyMessage_X*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ReservationsReadyMessage_X.SetServerAddress
struct UReservationsReadyMessage_X_SetServerAddress_Params
{
	struct FString                                     InAddress;                                                // (CPF_Parm, CPF_NeedCtorLink)
	class UReservationsReadyMessage_X*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ReservationsPasswordMessage_X.SetReason
struct UReservationsPasswordMessage_X_SetReason_Params
{
	TEnumAsByte<EPasswordFailureReason>                InReason;                                                 // (CPF_Parm)
	class UReservationsPasswordMessage_X*              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.ReservationsMaxPlayersMessage_X.SetMaxPlayerCount
struct UReservationsMaxPlayersMessage_X_SetMaxPlayerCount_Params
{
	int                                                inMaxPlayerCount;                                         // (CPF_Parm)
	class UReservationsMaxPlayersMessage_X*            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PingMessage_X.SetIsResponse
struct UPingMessage_X_SetIsResponse_Params
{
	class UPingMessage_X*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.JoiningBase.OnMainMenuOpened
struct SOnlineGameJoinGame_X_JoiningBase_OnMainMenuOpened_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.JoiningBase.IsJoiningGame
struct SOnlineGameJoinGame_X_JoiningBase_IsJoiningGame_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.JoiningBase.StartJoin
struct SOnlineGameJoinGame_X_JoiningBase_StartJoin_Params
{
	struct FString                                     BeaconAddress;                                            // (CPF_Parm, CPF_NeedCtorLink)
	struct FJoinMatchSettings                          InSettings;                                               // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.VerifyPrivileges.HandleCanPlayOnline
struct SOnlineGameJoinGame_X_VerifyPrivileges_HandleCanPlayOnline_Params
{
	class UPrivilegeCheck_X*                           PrivilegeCheck;                                           // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.VerifyPrivileges.EndState
struct SOnlineGameJoinGame_X_VerifyPrivileges_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.VerifyPrivileges.BeginState
struct SOnlineGameJoinGame_X_VerifyPrivileges_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.GoToNextState
struct SOnlineGameJoinGame_X_GenerateKeys_GoToNextState_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.SetNetworkKeys
struct SOnlineGameJoinGame_X_GenerateKeys_SetNetworkKeys_Params
{
	class URPC_GenerateKeys_X*                         RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.HandleGenerateKeys
struct SOnlineGameJoinGame_X_GenerateKeys_HandleGenerateKeys_Params
{
	class URPC_GenerateKeys_X*                         RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.SendGenerateKeysRPCs
struct SOnlineGameJoinGame_X_GenerateKeys_SendGenerateKeysRPCs_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.RemoveKeysRPC
struct SOnlineGameJoinGame_X_GenerateKeys_RemoveKeysRPC_Params
{
	class URPC_X*                                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.EndState
struct SOnlineGameJoinGame_X_GenerateKeys_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.GenerateKeys.BeginState
struct SOnlineGameJoinGame_X_GenerateKeys_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.RPC_KeysBase_X.SetPrimaryPlayer
struct URPC_KeysBase_X_SetPrimaryPlayer_Params
{
	class URPC_KeysBase_X*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_KeysBase_X.SetServerAddress
struct URPC_KeysBase_X_SetServerAddress_Params
{
	struct FString                                     ServerAddress;                                            // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_KeysBase_X*                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServer.SendServerReservedEvent
struct SOnlineGameJoinGame_X_ReservingServer_SendServerReservedEvent_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServer.TravelToServer
struct SOnlineGameJoinGame_X_ReservingServer_TravelToServer_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServer.JoinServer
struct SOnlineGameJoinGame_X_ReservingServer_JoinServer_Params
{
	class UReservationsReadyMessage_X*                 Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServer.HandleReservationResponse
struct SOnlineGameJoinGame_X_ReservingServer_HandleReservationResponse_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServer.HandleDisconnection
struct SOnlineGameJoinGame_X_ReservingServer_HandleDisconnection_Params
{
	class UTcpBeacon*                                  Beacon;                                                   // (CPF_Parm, CPF_EditInline)
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServer.CreateReservationMessage
struct SOnlineGameJoinGame_X_ReservingServer_CreateReservationMessage_Params
{
	class UAddReservationMessage_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServer.SendReservationMessage
struct SOnlineGameJoinGame_X_ReservingServer_SendReservationMessage_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServer.SendReservation
struct SOnlineGameJoinGame_X_ReservingServer_SendReservation_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServer.EndState
struct SOnlineGameJoinGame_X_ReservingServer_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServer.BeginState
struct SOnlineGameJoinGame_X_ReservingServer_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServerForPrivateMatch.SendServerReservedEvent
struct SOnlineGameJoinGame_X_ReservingServerForPrivateMatch_SendServerReservedEvent_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServerForPrivateMatch.TravelToServer
struct SOnlineGameJoinGame_X_ReservingServerForPrivateMatch_TravelToServer_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServerForPrivateMatch.HandleReservationResponse
struct SOnlineGameJoinGame_X_ReservingServerForPrivateMatch_HandleReservationResponse_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServerForPrivateMatch.CreateReservationMessage
struct SOnlineGameJoinGame_X_ReservingServerForPrivateMatch_CreateReservationMessage_Params
{
	class UAddReservationMessage_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServerForMatchmaking.SendServerReservedEvent
struct SOnlineGameJoinGame_X_ReservingServerForMatchmaking_SendServerReservedEvent_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServerForMatchmaking.HandleReservationResponse
struct SOnlineGameJoinGame_X_ReservingServerForMatchmaking_HandleReservationResponse_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.ReservingServerForMatchmaking.CreateReservationMessage
struct SOnlineGameJoinGame_X_ReservingServerForMatchmaking_CreateReservationMessage_Params
{
	class UAddReservationMessage_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.JoinCountdown.StartConnectToServer
struct SOnlineGameJoinGame_X_JoinCountdown_StartConnectToServer_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.JoinCountdown.EndState
struct SOnlineGameJoinGame_X_JoinCountdown_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.JoinCountdown.BeginState
struct SOnlineGameJoinGame_X_JoinCountdown_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.WaitForAllPlayers.OnJoinGameComplete
struct SOnlineGameJoinGame_X_WaitForAllPlayers_OnJoinGameComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     BugItReason;                                              // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameJoinGame_X.WaitForAllPlayers.OnAllPlayersJoined
struct SOnlineGameJoinGame_X_WaitForAllPlayers_OnAllPlayersJoined_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.WaitForAllPlayers.CheckAllLocalPlayersHaveJoined
struct SOnlineGameJoinGame_X_WaitForAllPlayers_CheckAllLocalPlayersHaveJoined_Params
{
	class UPlayer*                                     JoinedPlayer;                                             // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.WaitForAllPlayers.IsInTransition
struct SOnlineGameJoinGame_X_WaitForAllPlayers_IsInTransition_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameJoinGame_X.WaitForAllPlayers.EndState
struct SOnlineGameJoinGame_X_WaitForAllPlayers_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.WaitForAllPlayers.BeginState
struct SOnlineGameJoinGame_X_WaitForAllPlayers_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.OpeningLoadingScreen.HandleSpawned
struct SOnlineGameJoinGame_X_OpeningLoadingScreen_HandleSpawned_Params
{
	class AGameInfo_X*                                 InGameInfo;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.OpeningLoadingScreen.OnAllPlayersJoined
struct SOnlineGameJoinGame_X_OpeningLoadingScreen_OnAllPlayersJoined_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.OpeningLoadingScreen.CancelJoin
struct SOnlineGameJoinGame_X_OpeningLoadingScreen_CancelJoin_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.OpeningLoadingScreen.BeginState
struct SOnlineGameJoinGame_X_OpeningLoadingScreen_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.JoiningNewServer.NotifyConnectionFailed
struct SOnlineGameJoinGame_X_JoiningNewServer_NotifyConnectionFailed_Params
{
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameJoinGame_X.JoiningNewServer.OnAllPlayersJoined
struct SOnlineGameJoinGame_X_JoiningNewServer_OnAllPlayersJoined_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.JoiningNewServer.HandleInternetConnectionChanged
struct SOnlineGameJoinGame_X_JoiningNewServer_HandleInternetConnectionChanged_Params
{
	bool                                               bConnected;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.JoiningNewServer.EndState
struct SOnlineGameJoinGame_X_JoiningNewServer_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.JoiningNewServer.BeginState
struct SOnlineGameJoinGame_X_JoiningNewServer_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.RetryJoin.RetryJoinGame
struct SOnlineGameJoinGame_X_RetryJoin_RetryJoinGame_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.RetryJoin.BeginState
struct SOnlineGameJoinGame_X_RetryJoin_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameJoinGame_X.FailedJoin.OnNewGame
struct SOnlineGameJoinGame_X_FailedJoin_OnNewGame_Params
{
};

// Function ProjectX.OnlineGameJoinGame_X.FailedJoin.BeginState
struct SOnlineGameJoinGame_X_FailedJoin_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.Searching.HandleSearchTimeout
struct SOnlineGameLanBrowser_X_Searching_HandleSearchTimeout_Params
{
};

// Function ProjectX.OnlineGameLanBrowser_X.Searching.HandleHostResponse
struct SOnlineGameLanBrowser_X_Searching_HandleHostResponse_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.Searching.UpdateStatusMessage
struct SOnlineGameLanBrowser_X_Searching_UpdateStatusMessage_Params
{
};

// Function ProjectX.OnlineGameLanBrowser_X.Searching.PerformSearch
struct SOnlineGameLanBrowser_X_Searching_PerformSearch_Params
{
};

// Function ProjectX.OnlineGameLanBrowser_X.Searching.IsSearching
struct SOnlineGameLanBrowser_X_Searching_IsSearching_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanBrowser_X.Searching.HandleGameStarted
struct SOnlineGameLanBrowser_X_Searching_HandleGameStarted_Params
{
	class AGRI_X*                                      GRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.Searching.EndState
struct SOnlineGameLanBrowser_X_Searching_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.Searching.BeginState
struct SOnlineGameLanBrowser_X_Searching_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.Joining.HandleJoinGameComplete
struct SOnlineGameLanBrowser_X_Joining_HandleJoinGameComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLanBrowser_X.Joining.Cancel
struct SOnlineGameLanBrowser_X_Joining_Cancel_Params
{
};

// Function ProjectX.OnlineGameLanBrowser_X.Joining.HandleStatusUpdate
struct SOnlineGameLanBrowser_X_Joining_HandleStatusUpdate_Params
{
	struct FString                                     NewStatus;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameLanBrowser_X.Joining.EndState
struct SOnlineGameLanBrowser_X_Joining_EndState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanBrowser_X.Joining.BeginState
struct SOnlineGameLanBrowser_X_Joining_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.HackForceNotServerTravelling
struct UOnlineGameLanReservations_X_HackForceNotServerTravelling_Params
{
};

// Function ProjectX.OnlineGameLanReservations_X.SetServerTraveling
struct UOnlineGameLanReservations_X_SetServerTraveling_Params
{
	bool                                               bTraveling;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.OnNewGameInfoCreated
struct UOnlineGameLanReservations_X_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.GetNumPlayers
struct UOnlineGameLanReservations_X_GetNumPlayers_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanReservations_X.AllowPlayerLogin
struct UOnlineGameLanReservations_X_AllowPlayerLogin_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanReservations_X.PlayerLoggedOut
struct UOnlineGameLanReservations_X_PlayerLoggedOut_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.PlayerLoggedIn
struct UOnlineGameLanReservations_X_PlayerLoggedIn_Params
{
	class APlayerReplicationInfo*                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.Reset
struct UOnlineGameLanReservations_X_Reset_Params
{
};

// Function ProjectX.OnlineGameLanReservations_X.CheckReservationTimeout
struct UOnlineGameLanReservations_X_CheckReservationTimeout_Params
{
};

// Function ProjectX.OnlineGameLanReservations_X.HandlePublicReservation
struct UOnlineGameLanReservations_X_HandlePublicReservation_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessagePublic_X*              Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanReservations_X.HandlePublicReservationMessage
struct UOnlineGameLanReservations_X_HandlePublicReservationMessage_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.StartReservationTimeout
struct UOnlineGameLanReservations_X_StartReservationTimeout_Params
{
};

// Function ProjectX.OnlineGameLanReservations_X.HandlePrivateReservation
struct UOnlineGameLanReservations_X_HandlePrivateReservation_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessagePrivate_X*             Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanReservations_X.HandlePrivateReservationMessage
struct UOnlineGameLanReservations_X_HandlePrivateReservationMessage_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.HandlePingMessage
struct UOnlineGameLanReservations_X_HandlePingMessage_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.HandleLanQueryMessage
struct UOnlineGameLanReservations_X_HandleLanQueryMessage_Params
{
	class UOnlineMessageComponent_X*                   Component;                                                // (CPF_Parm, CPF_EditInline)
	class UObject*                                     Message;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.OnInit
struct UOnlineGameLanReservations_X_OnInit_Params
{
};

// Function ProjectX.OnlineGameLanReservations_X.EventReservationsTimeout
struct UOnlineGameLanReservations_X_EventReservationsTimeout_Params
{
};

// Function ProjectX.OnlineGameLanReservations_X.PrivateMatchStarting.HandlePrivateReservation
struct SOnlineGameLanReservations_X_PrivateMatchStarting_HandlePrivateReservation_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessagePrivate_X*             Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanReservations_X.PrivateMatchStarting.AllowPlayerLogin
struct SOnlineGameLanReservations_X_PrivateMatchStarting_AllowPlayerLogin_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanReservations_X.PrivateMatchStarting.HandleReservationDisconnected
struct SOnlineGameLanReservations_X_PrivateMatchStarting_HandleReservationDisconnected_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.PrivateMatchStarting.OnNewGameInfoCreated
struct SOnlineGameLanReservations_X_PrivateMatchStarting_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanReservations_X.PrivateMatch.HandlePrivateReservation
struct SOnlineGameLanReservations_X_PrivateMatch_HandlePrivateReservation_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessagePrivate_X*             Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanReservations_X.PrivateMatch.HandlePublicReservation
struct SOnlineGameLanReservations_X_PrivateMatch_HandlePublicReservation_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessagePublic_X*              Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameLanServer_X.Initializing.OnNewGameInfoCreated
struct SOnlineGameLanServer_X_Initializing_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanServer_X.Inactive.BeginState
struct SOnlineGameLanServer_X_Inactive_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameLanServer_X.StartingPrivateMatch.OnNewGameInfoCreated
struct SOnlineGameLanServer_X_StartingPrivateMatch_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.RPC_GetLeaderboardValueForUserBase_X.SetPlayerID
struct URPC_GetLeaderboardValueForUserBase_X_SetPlayerID_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (CPF_Parm)
	class URPC_GetLeaderboardValueForUserBase_X*       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_GetSkillLeaderboardValueForUser_X.SetPlaylist
struct URPC_GetSkillLeaderboardValueForUser_X_SetPlaylist_Params
{
	int                                                InPlaylist;                                               // (CPF_Parm)
	class URPC_GetSkillLeaderboardValueForUser_X*      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_GetLeaderboardValueForUser_X.SetStat
struct URPC_GetLeaderboardValueForUser_X_SetStat_Params
{
	struct FString                                     InStat;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_GetLeaderboardValueForUser_X*           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_GetLeaderboardBase_X.SetDisableCrossPlay
struct URPC_GetLeaderboardBase_X_SetDisableCrossPlay_Params
{
	bool                                               InDisableCrossPlay;                                       // (CPF_Parm)
	class URPC_GetLeaderboardBase_X*                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_GetSkillLeaderboard_X.SetPlaylist
struct URPC_GetSkillLeaderboard_X_SetPlaylist_Params
{
	int                                                InPlaylist;                                               // (CPF_Parm)
	class URPC_GetSkillLeaderboard_X*                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_GetLeaderboard_X.SetStat
struct URPC_GetLeaderboard_X_SetStat_Params
{
	struct FString                                     InStat;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_GetLeaderboard_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerFriends_X.ShowPlayerCard
struct UOnlinePlayerFriends_X_ShowPlayerCard_Params
{
	struct FUniqueNetId                                FriendId;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerFriends_X.SetRichPresence
struct UOnlinePlayerFriends_X_SetRichPresence_Params
{
	unsigned char                                      LocalUserNum;                                             // (CPF_Parm)
	struct FString                                     PresenceString;                                           // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     GameDataString;                                           // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayerFriends_X.RemoveFriend
struct UOnlinePlayerFriends_X_RemoveFriend_Params
{
	struct FUniqueNetId                                FriendId;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerFriends_X.AddFriend
struct UOnlinePlayerFriends_X_AddFriend_Params
{
	struct FUniqueNetId                                FriendId;                                                 // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerFriends_X.GetFriendPresence
struct UOnlinePlayerFriends_X_GetFriendPresence_Params
{
	struct FOnlineFriend                               Friend;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayerFriends_X.IsFriendJoinable
struct UOnlinePlayerFriends_X_IsFriendJoinable_Params
{
	struct FUniqueNetId                                FriendId;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerFriends_X.GetFriendName
struct UOnlinePlayerFriends_X_GetFriendName_Params
{
	struct FUniqueNetId                                FriendId;                                                 // (CPF_Parm)
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayerFriends_X.IsFriend
struct UOnlinePlayerFriends_X_IsFriend_Params
{
	struct FUniqueNetId                                FriendId;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlinePlayerFriends_X.HandleFriendsChange
struct UOnlinePlayerFriends_X_HandleFriendsChange_Params
{
};

// Function ProjectX.OnlinePlayerFriends_X.GetFriendsFromOnlineSub
struct UOnlinePlayerFriends_X_GetFriendsFromOnlineSub_Params
{
};

// Function ProjectX.OnlinePlayerFriends_X.UpdateFriendsList
struct UOnlinePlayerFriends_X_UpdateFriendsList_Params
{
	struct FScriptDelegate                             HandleFriendsListChanged;                                 // (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlinePlayerFriends_X.HandleDownloadFriendsComplete
struct UOnlinePlayerFriends_X_HandleDownloadFriendsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerFriends_X.DownloadFriendsList
struct UOnlinePlayerFriends_X_DownloadFriendsList_Params
{
};

// Function ProjectX.OnlinePlayerFriends_X.HandleLoginStatusChanged
struct UOnlinePlayerFriends_X_HandleLoginStatusChanged_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
};

// Function ProjectX.OnlinePlayerFriends_X.OnInit
struct UOnlinePlayerFriends_X_OnInit_Params
{
};

// Function ProjectX.OnlinePlayerFriends_X.EventFriendsListChanged
struct UOnlinePlayerFriends_X_EventFriendsListChanged_Params
{
	class UOnlinePlayerFriends_X*                      FriendsRef;                                               // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.RPC_GetLeaderboardRankForUsersBase_X.SetPlayerIDs
struct URPC_GetLeaderboardRankForUsersBase_X_SetPlayerIDs_Params
{
	TArray<struct FUniqueNetId>                        InPlayerIDs;                                              // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_GetLeaderboardRankForUsersBase_X*       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_GetSkillLeaderboardRankForUsers_X.SetPlaylist
struct URPC_GetSkillLeaderboardRankForUsers_X_SetPlaylist_Params
{
	int                                                InPlaylist;                                               // (CPF_Parm)
	class URPC_GetSkillLeaderboardRankForUsers_X*      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_GetLeaderboardRankForUsers_X.SetStat
struct URPC_GetLeaderboardRankForUsers_X_SetStat_Params
{
	struct FString                                     InStat;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_GetLeaderboardRankForUsers_X*           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Searching.HandleGameStarted
struct SOnlineGameMatchmakingBase_X_Searching_HandleGameStarted_Params
{
	class AGRI_X*                                      GRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Searching.IsSearching
struct SOnlineGameMatchmakingBase_X_Searching_IsSearching_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Searching.HandleRegionsPinged
struct SOnlineGameMatchmakingBase_X_Searching_HandleRegionsPinged_Params
{
	class UOnlineGameRegions_X*                        InRegions;                                                // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Searching.StopListeningRegionsPinged
struct SOnlineGameMatchmakingBase_X_Searching_StopListeningRegionsPinged_Params
{
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Searching.WaitForRegionsPinged
struct SOnlineGameMatchmakingBase_X_Searching_WaitForRegionsPinged_Params
{
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Searching.EndState
struct SOnlineGameMatchmakingBase_X_Searching_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Searching.BeginState
struct SOnlineGameMatchmakingBase_X_Searching_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Joining.HandleJoinGameComplete
struct SOnlineGameMatchmakingBase_X_Joining_HandleJoinGameComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Joining.Cancel
struct SOnlineGameMatchmakingBase_X_Joining_Cancel_Params
{
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Joining.HandleStatusUpdate
struct SOnlineGameMatchmakingBase_X_Joining_HandleStatusUpdate_Params
{
	struct FString                                     NewStatus;                                                // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Joining.IsSearching
struct SOnlineGameMatchmakingBase_X_Joining_IsSearching_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Joining.EndState
struct SOnlineGameMatchmakingBase_X_Joining_EndState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmakingBase_X.Joining.BeginState
struct SOnlineGameMatchmakingBase_X_Joining_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.CheckReservation_X.HandleCheckReservation
struct UCheckReservation_X_HandleCheckReservation_Params
{
	class URPC_CheckReservation_X*                     RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.CheckReservation_X.SendRequest
struct UCheckReservation_X_SendRequest_Params
{
};

// Function ProjectX.CheckReservation_X.Cancel
struct UCheckReservation_X_Cancel_Params
{
};

// Function ProjectX.CheckReservation_X.IsSearching
struct UCheckReservation_X_IsSearching_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CheckReservation_X.StartSearch
struct UCheckReservation_X_StartSearch_Params
{
};

// Function ProjectX.CheckReservation_X.NotifyOnError
struct UCheckReservation_X_NotifyOnError_Params
{
	struct FScriptDelegate                             NewDelegate;                                              // (CPF_Parm, CPF_NeedCtorLink)
	class UCheckReservation_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CheckReservation_X.NotifyOnSuccess
struct UCheckReservation_X_NotifyOnSuccess_Params
{
	struct FScriptDelegate                             NewDelegate;                                              // (CPF_Parm, CPF_NeedCtorLink)
	class UCheckReservation_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.CheckReservation_X.EventSuccess
struct UCheckReservation_X_EventSuccess_Params
{
	class UCheckReservation_X*                         ReservationObj;                                           // (CPF_Parm)
	struct FCheckReservationData                       Reservation;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.CheckReservation_X.EventError
struct UCheckReservation_X_EventError_Params
{
	class UCheckReservation_X*                         ReservationObj;                                           // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.MatchmakingMetrics_X.RankedReconnect
struct UMatchmakingMetrics_X_RankedReconnect_Params
{
	struct FString                                     Address;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.MatchmakingMetrics_X.End
struct UMatchmakingMetrics_X_End_Params
{
};

// Function ProjectX.MatchmakingMetrics_X.FoundServer
struct UMatchmakingMetrics_X_FoundServer_Params
{
	struct FString                                     Address;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     ServerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	int                                                Playlist;                                                 // (CPF_Parm)
};

// Function ProjectX.MatchmakingMetrics_X.RecordFoundServer
struct UMatchmakingMetrics_X_RecordFoundServer_Params
{
	struct FCheckReservationData                       Reservation;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.MatchmakingMetrics_X.Cancel
struct UMatchmakingMetrics_X_Cancel_Params
{
};

// Function ProjectX.MatchmakingMetrics_X.ErrorID
struct UMatchmakingMetrics_X_ErrorID_Params
{
	int                                                Error;                                                    // (CPF_Parm)
};

// Function ProjectX.MatchmakingMetrics_X.ErrorUnknown
struct UMatchmakingMetrics_X_ErrorUnknown_Params
{
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.MatchmakingMetrics_X.RecordError
struct UMatchmakingMetrics_X_RecordError_Params
{
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.MatchmakingMetrics_X.Start
struct UMatchmakingMetrics_X_Start_Params
{
	TArray<struct FString>                             Regions;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	TArray<int>                                        Playlists;                                                // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               bDisableCrossPlay;                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.OnReceiveGameServer
struct SOnlineGameMatchmaking_X_Searching_OnReceiveGameServer_Params
{
	class UCheckReservation_X*                         ReservationObj;                                           // (CPF_Parm)
	struct FCheckReservationData                       Reservation;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.HandleMatchmakingStartSuccessRPC
struct SOnlineGameMatchmaking_X_Searching_HandleMatchmakingStartSuccessRPC_Params
{
	class URPC_StartMatchmaking_X*                     RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.HandleError
struct SOnlineGameMatchmaking_X_Searching_HandleError_Params
{
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.OnCheckReservationError
struct SOnlineGameMatchmaking_X_Searching_OnCheckReservationError_Params
{
	class UCheckReservation_X*                         ReservationObj;                                           // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.HandleMatchmakingFailRPC
struct SOnlineGameMatchmaking_X_Searching_HandleMatchmakingFailRPC_Params
{
	class URPC_X*                                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.SendMatchmakingState
struct SOnlineGameMatchmaking_X_Searching_SendMatchmakingState_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.UpdateMatchmaking
struct SOnlineGameMatchmaking_X_Searching_UpdateMatchmaking_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.StartMatchmaking
struct SOnlineGameMatchmaking_X_Searching_StartMatchmaking_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.HandleRegionsPinged
struct SOnlineGameMatchmaking_X_Searching_HandleRegionsPinged_Params
{
	class UOnlineGameRegions_X*                        InRegions;                                                // (CPF_Parm)
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.OnMainMenuOpened
struct SOnlineGameMatchmaking_X_Searching_OnMainMenuOpened_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.OnNewGame
struct SOnlineGameMatchmaking_X_Searching_OnNewGame_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.RecordStart
struct SOnlineGameMatchmaking_X_Searching_RecordStart_Params
{
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.AddRecommendedServers
struct SOnlineGameMatchmaking_X_Searching_AddRecommendedServers_Params
{
	float                                              PingThreshold;                                            // (CPF_OptionalParm, CPF_Parm)
	float                                              PingIncrement;                                            // (CPF_OptionalParm, CPF_Parm)
	float                                              MaxPing;                                                  // (CPF_OptionalParm, CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmaking_X.Searching.EndState
struct SOnlineGameMatchmaking_X_Searching_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.RPC_StartMatchmaking_X.SetIgnoreSkill
struct URPC_StartMatchmaking_X_SetIgnoreSkill_Params
{
	bool                                               bInIgnoreSkill;                                           // (CPF_Parm)
	class URPC_StartMatchmaking_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_StartMatchmaking_X.SetPartyMembers
struct URPC_StartMatchmaking_X_SetPartyMembers_Params
{
	TArray<struct FUniqueNetId>                        InPartyMembers;                                           // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_StartMatchmaking_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_StartMatchmaking_X.SetDisableCrossPlay
struct URPC_StartMatchmaking_X_SetDisableCrossPlay_Params
{
	bool                                               bInDisableCrossplay;                                      // (CPF_Parm)
	class URPC_StartMatchmaking_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_StartMatchmaking_X.SetCurrentServerID
struct URPC_StartMatchmaking_X_SetCurrentServerID_Params
{
	class URPC_StartMatchmaking_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_StartMatchmaking_X.SetSecondsSearching
struct URPC_StartMatchmaking_X_SetSecondsSearching_Params
{
	int                                                InSecondsSearching;                                       // (CPF_Parm)
	class URPC_StartMatchmaking_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_StartMatchmaking_X.SetPlaylists
struct URPC_StartMatchmaking_X_SetPlaylists_Params
{
	TArray<int>                                        InPlaylists;                                              // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_StartMatchmaking_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_StartMatchmaking_X.SetRegions
struct URPC_StartMatchmaking_X_SetRegions_Params
{
	TArray<struct FString>                             InRegions;                                                // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_StartMatchmaking_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameMatchmaking_X.Joining.HandleJoinGameComplete
struct SOnlineGameMatchmaking_X_Joining_HandleJoinGameComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PartyMessage_X.Broadcast
struct UPartyMessage_X_Broadcast_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_SearchStatus_X.SetIsSearching
struct UPartyMessage_SearchStatus_X_SetIsSearching_Params
{
	bool                                               bValue;                                                   // (CPF_Parm)
	class UPartyMessage_SearchStatus_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_SearchStatus_X.SetSearchState
struct UPartyMessage_SearchStatus_X_SetSearchState_Params
{
	struct FName                                       InSearchState;                                            // (CPF_Parm)
	class UPartyMessage_SearchStatus_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_Kick_X.SetReason
struct UPartyMessage_Kick_X_SetReason_Params
{
	TEnumAsByte<ELobbyKickReason>                      InKickReason;                                             // (CPF_Parm)
	class UPartyMessage_Kick_X*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_Kick_X.SetInstigator
struct UPartyMessage_Kick_X_SetInstigator_Params
{
	struct FUniqueNetId                                InPlayer;                                                 // (CPF_Parm)
	class UPartyMessage_Kick_X*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_Kick_X.SetKicked
struct UPartyMessage_Kick_X_SetKicked_Params
{
	struct FUniqueNetId                                InPlayer;                                                 // (CPF_Parm)
	class UPartyMessage_Kick_X*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_NewLeader_X.SetLeader
struct UPartyMessage_NewLeader_X_SetLeader_Params
{
	struct FUniqueNetId                                InLeader;                                                 // (CPF_Parm)
	class UPartyMessage_NewLeader_X*                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_LocalPlayers_X.SetFromLeader
struct UPartyMessage_LocalPlayers_X_SetFromLeader_Params
{
	bool                                               bIsLeader;                                                // (CPF_Parm)
	class UPartyMessage_LocalPlayers_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_LocalPlayers_X.AddMember
struct UPartyMessage_LocalPlayers_X_AddMember_Params
{
	struct FPartyMember                                Member;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PartyMessage_LocalPlayers_X.AddPlayer
struct UPartyMessage_LocalPlayers_X_AddPlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	class UPartyMessage_LocalPlayers_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_LocalPlayers_X.AddOnlinePlayer
struct UPartyMessage_LocalPlayers_X_AddOnlinePlayer_Params
{
	class UOnlinePlayer_X*                             Player;                                                   // (CPF_Parm)
	class UPartyMessage_LocalPlayers_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_LocalPlayers_X.SetPrimaryMemberId
struct UPartyMessage_LocalPlayers_X_SetPrimaryMemberId_Params
{
	struct FUniqueNetId                                InPrimaryMemberId;                                        // (CPF_Parm)
	class UPartyMessage_LocalPlayers_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_LocalPlayers_X.AddOnlinePlayers
struct UPartyMessage_LocalPlayers_X_AddOnlinePlayers_Params
{
	class UPartyMessage_LocalPlayers_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_MatchmakingAvailability_X.SetMatchmakeRestrictions
struct UPartyMessage_MatchmakingAvailability_X_SetMatchmakeRestrictions_Params
{
	int                                                InRestrictions;                                           // (CPF_Parm)
	class UPartyMessage_MatchmakingAvailability_X*     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_MatchmakingAvailability_X.SetMemberId
struct UPartyMessage_MatchmakingAvailability_X_SetMemberId_Params
{
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
	class UPartyMessage_MatchmakingAvailability_X*     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_JoinGame_X.SetSettings
struct UPartyMessage_JoinGame_X_SetSettings_Params
{
	struct FPartyJoinMatchSettings                     InSettings;                                               // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UPartyMessage_JoinGame_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_PartyMemberJoinGame_X.SetPartyMemberID
struct UPartyMessage_PartyMemberJoinGame_X_SetPartyMemberID_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (CPF_Parm)
	class UPartyMessage_PartyMemberJoinGame_X*         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_PartyMemberJoinGame_X.SetPartyMemberServer
struct UPartyMessage_PartyMemberJoinGame_X_SetPartyMemberServer_Params
{
	struct FPartyMemberServer                          InServer;                                                 // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class UPartyMessage_PartyMemberJoinGame_X*         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_BugIt_X.SetReason
struct UPartyMessage_BugIt_X_SetReason_Params
{
	struct FString                                     InReason;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class UPartyMessage_BugIt_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_DisableCrossPlay_X.SetDisableCrossPlay
struct UPartyMessage_DisableCrossPlay_X_SetDisableCrossPlay_Params
{
	bool                                               InDisableCrossPlay;                                       // (CPF_Parm)
	class UPartyMessage_DisableCrossPlay_X*            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_DisableCrossPlay_X.SetMemberId
struct UPartyMessage_DisableCrossPlay_X_SetMemberId_Params
{
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
	class UPartyMessage_DisableCrossPlay_X*            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_InviteToTrade_X.SetInviteMemberId
struct UPartyMessage_InviteToTrade_X_SetInviteMemberId_Params
{
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
	class UPartyMessage_InviteToTrade_X*               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_AcceptInviteToTrade_X.SetTradeId
struct UPartyMessage_AcceptInviteToTrade_X_SetTradeId_Params
{
	struct FGuid                                       InTradeId;                                                // (CPF_Parm)
	class UPartyMessage_AcceptInviteToTrade_X*         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_AcceptInviteToTrade_X.SetInviteAccepted
struct UPartyMessage_AcceptInviteToTrade_X_SetInviteAccepted_Params
{
	bool                                               bInInviteAccepted;                                        // (CPF_Parm)
	class UPartyMessage_AcceptInviteToTrade_X*         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_AcceptInviteToTrade_X.SetInviteMemberId
struct UPartyMessage_AcceptInviteToTrade_X_SetInviteMemberId_Params
{
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
	class UPartyMessage_AcceptInviteToTrade_X*         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_PlayerTradeComplete_X.SetTradingMemberId
struct UPartyMessage_PlayerTradeComplete_X_SetTradingMemberId_Params
{
	struct FUniqueNetId                                InMemberId;                                               // (CPF_Parm)
	class UPartyMessage_PlayerTradeComplete_X*         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMetrics_X.PartyMessage
struct UPartyMetrics_X_PartyMessage_Params
{
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
	struct FName                                       MessageType;                                              // (CPF_Parm)
};

// Function ProjectX.PartyMetrics_X.PartyChanged
struct UPartyMetrics_X_PartyChanged_Params
{
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
	bool                                               bLeader;                                                  // (CPF_Parm)
	int                                                PartySize;                                                // (CPF_Parm)
	int                                                LocalPlayers;                                             // (CPF_Parm)
	int                                                RemotePlayers;                                            // (CPF_Parm)
};

// Function ProjectX.PartyMetrics_X.CreatePartyMetricsData
struct UPartyMetrics_X_CreatePartyMetricsData_Params
{
	class UOnlineGameParty_X*                          Party;                                                    // (CPF_Parm)
	struct FPartyMetricsData                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMetrics_X.RecordPartyChanged
struct UPartyMetrics_X_RecordPartyChanged_Params
{
	class UOnlineGameParty_X*                          Party;                                                    // (CPF_Parm)
};

// Function ProjectX.PartyMetrics_X.PartyError
struct UPartyMetrics_X_PartyError_Params
{
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
	struct FString                                     Error;                                                    // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PartyMetrics_X.PartyKickRemotePlayer
struct UPartyMetrics_X_PartyKickRemotePlayer_Params
{
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function ProjectX.PartyMetrics_X.PartyKickLocalPlayer
struct UPartyMetrics_X_PartyKickLocalPlayer_Params
{
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
};

// Function ProjectX.PartyMetrics_X.PartyLeave
struct UPartyMetrics_X_PartyLeave_Params
{
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PartyMetrics_X.PartyCreationFailed
struct UPartyMetrics_X_PartyCreationFailed_Params
{
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
};

// Function ProjectX.PartyMetrics_X.PartyCreated
struct UPartyMetrics_X_PartyCreated_Params
{
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
};

// Function ProjectX.PartyMessage_ReadyToTrade_X.SetReadyToTrade
struct UPartyMessage_ReadyToTrade_X_SetReadyToTrade_Params
{
	bool                                               bInReadyToTrade;                                          // (CPF_Parm)
	class UPartyMessage_ReadyToTrade_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PartyMessage_ReadyToTrade_X.SetTradingMemberId
struct UPartyMessage_ReadyToTrade_X_SetTradingMemberId_Params
{
	struct FUniqueNetId                                InTradingMemberId;                                        // (CPF_Parm)
	class UPartyMessage_ReadyToTrade_X*                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RankedConfig_X.HasSeasonEnded
struct URankedConfig_X_HasSeasonEnded_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RankedConfig_X.GetSeasonTimeRemaining
struct URankedConfig_X_GetSeasonTimeRemaining_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RankedConfig_X.Apply
struct URankedConfig_X_Apply_Params
{
};

// Function ProjectX.RPC_GetPlayerTitles_X.SetPlayerID
struct URPC_GetPlayerTitles_X_SetPlayerID_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (CPF_Parm)
	class URPC_GetPlayerTitles_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePrivateMatch_X.Searching.HandleSearchTimeout
struct SOnlineGamePrivateMatch_X_Searching_HandleSearchTimeout_Params
{
};

// Function ProjectX.OnlineGamePrivateMatch_X.Searching.OnReceiveGameServer
struct SOnlineGamePrivateMatch_X_Searching_OnReceiveGameServer_Params
{
	class UCheckReservation_X*                         ReservationObj;                                           // (CPF_Parm)
	struct FCheckReservationData                       Reservation;                                              // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.OnlineGamePrivateMatch_X.Searching.OnStartMatchmakingSucceededRPC
struct SOnlineGamePrivateMatch_X_Searching_OnStartMatchmakingSucceededRPC_Params
{
	class URPC_PlayerSearchPrivateMatch_X*             RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGamePrivateMatch_X.Searching.HandleError
struct SOnlineGamePrivateMatch_X_Searching_HandleError_Params
{
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGamePrivateMatch_X.Searching.OnCheckReservationError
struct SOnlineGamePrivateMatch_X_Searching_OnCheckReservationError_Params
{
	class UCheckReservation_X*                         ReservationObj;                                           // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineGamePrivateMatch_X.Searching.OnMatchmakingFailedRPC
struct SOnlineGamePrivateMatch_X_Searching_OnMatchmakingFailedRPC_Params
{
	class URPC_X*                                      RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGamePrivateMatch_X.Searching.UpdateStatusMessage
struct SOnlineGamePrivateMatch_X_Searching_UpdateStatusMessage_Params
{
};

// Function ProjectX.OnlineGamePrivateMatch_X.Searching.HandleRegionsPinged
struct SOnlineGamePrivateMatch_X_Searching_HandleRegionsPinged_Params
{
	class UOnlineGameRegions_X*                        InRegions;                                                // (CPF_Parm)
};

// Function ProjectX.OnlineGamePrivateMatch_X.Searching.EndState
struct SOnlineGamePrivateMatch_X_Searching_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGamePrivateMatch_X.Searching.BeginState
struct SOnlineGamePrivateMatch_X_Searching_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.RPC_PlayerSearchPrivateMatch_X.SetRegion
struct URPC_PlayerSearchPrivateMatch_X_SetRegion_Params
{
	struct FString                                     InRegion;                                                 // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_PlayerSearchPrivateMatch_X*             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGamePrivateMatch_X.Joining.HandleJoinGameComplete
struct SOnlineGamePrivateMatch_X_Joining_HandleJoinGameComplete_Params
{
	bool                                               bSuccess;                                                 // (CPF_Parm)
	struct FString                                     FailReason;                                               // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_GetGameServerPingList_X.OnSuccess
struct URPC_GetGameServerPingList_X_OnSuccess_Params
{
};

// Function ProjectX.OnlineGameReservations_AssignTeamsByParty_X.PartySort
struct UOnlineGameReservations_AssignTeamsByParty_X_PartySort_Params
{
	struct FPartyByTeam                                Left;                                                     // (CPF_Parm)
	struct FPartyByTeam                                Right;                                                    // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_AssignTeamsByParty_X.AssignTeams
struct UOnlineGameReservations_AssignTeamsByParty_X_AssignTeams_Params
{
	int                                                TeamSize;                                                 // (CPF_Parm)
	TArray<struct FReservationData>                    TestPlayers;                                              // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.ReservationsMetrics_X.NotAllPlayersJoined
struct UReservationsMetrics_X_NotAllPlayersJoined_Params
{
};

// Function ProjectX.ReservationsMetrics_X.GetKeysInvalidOrigin
struct UReservationsMetrics_X_GetKeysInvalidOrigin_Params
{
};

// Function ProjectX.ReservationsMetrics_X.GetKeysFailed
struct UReservationsMetrics_X_GetKeysFailed_Params
{
};

// Function ProjectX.ReservationsMetrics_X.ReservationsFull
struct UReservationsMetrics_X_ReservationsFull_Params
{
};

// Function ProjectX.ReservationsMetrics_X.PlatformExclusiveReservation
struct UReservationsMetrics_X_PlatformExclusiveReservation_Params
{
};

// Function ProjectX.ReservationsMetrics_X.WrongReservationPlaylist
struct UReservationsMetrics_X_WrongReservationPlaylist_Params
{
};

// Function ProjectX.ReservationsMetrics_X.InvalidReservationPlaylist
struct UReservationsMetrics_X_InvalidReservationPlaylist_Params
{
};

// Function ProjectX.ReservationsMetrics_X.RankedReconnect
struct UReservationsMetrics_X_RankedReconnect_Params
{
};

// Function ProjectX.ReservationsMetrics_X.RankedReconnectFinished
struct UReservationsMetrics_X_RankedReconnectFinished_Params
{
};

// Function ProjectX.ReservationsMetrics_X.FriendJoin
struct UReservationsMetrics_X_FriendJoin_Params
{
};

// Function ProjectX.ReservationsMetrics_X.FriendJoinEmpty
struct UReservationsMetrics_X_FriendJoinEmpty_Params
{
};

// Function ProjectX.ReservationsMetrics_X.FriendJoinRanked
struct UReservationsMetrics_X_FriendJoinRanked_Params
{
};

// Function ProjectX.ReservationsMetrics_X.FirstReservation
struct UReservationsMetrics_X_FirstReservation_Params
{
	int                                                Playlist;                                                 // (CPF_Parm)
};

// Function ProjectX.PRI_X.OnUniqueIdChanged
struct APRI_X_OnUniqueIdChanged_Params
{
};

// Function ProjectX.PRI_X.SetUniqueId
struct APRI_X_SetUniqueId_Params
{
	struct FUniqueNetId                                PlayerUniqueId;                                           // (CPF_Parm)
};

// Function ProjectX.PRI_X.RegisterPlayerWithSession
struct APRI_X_RegisterPlayerWithSession_Params
{
};

// Function ProjectX.PRI_X.OnTeamChanged
struct APRI_X_OnTeamChanged_Params
{
};

// Function ProjectX.PRI_X.SetPlayerTeam
struct APRI_X_SetPlayerTeam_Params
{
	class ATeamInfo*                                   NewTeam;                                                  // (CPF_Parm)
};

// Function ProjectX.PRI_X.OnOwnerChanged
struct APRI_X_OnOwnerChanged_Params
{
};

// Function ProjectX.PRI_X.SetPlayerName
struct APRI_X_SetPlayerName_Params
{
	struct FString                                     S;                                                        // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PRI_X.ReplicatedEvent
struct APRI_X_ReplicatedEvent_Params
{
	struct FName                                       VarName;                                                  // (CPF_Parm)
};

// Function ProjectX.PRI_X.EventTeamChanged
struct APRI_X_EventTeamChanged_Params
{
	class APRI_X*                                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.PRI_X.EventUniqueIdChanged
struct APRI_X_EventUniqueIdChanged_Params
{
	class APRI_X*                                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.PRI_X.EventPlayerNameChanged
struct APRI_X_EventPlayerNameChanged_Params
{
	class APRI_X*                                      PRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.PrivateMatchBase.IsCustomMatch
struct SOnlineGameReservations_X_PrivateMatchBase_IsCustomMatch_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.PrivateMatchStarting.AllowPlayerLogin
struct SOnlineGameReservations_X_PrivateMatchStarting_AllowPlayerLogin_Params
{
	struct FString                                     Options;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.PrivateMatchStarting.HandleReservationDisconnected
struct SOnlineGameReservations_X_PrivateMatchStarting_HandleReservationDisconnected_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.PrivateMatchStarting.OnNewGameInfoCreated
struct SOnlineGameReservations_X_PrivateMatchStarting_OnNewGameInfoCreated_Params
{
	class AGameInfo_X*                                 Game;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineGameReservations_X.PrivateMatch.AllPlayersInGame
struct SOnlineGameReservations_X_PrivateMatch_AllPlayersInGame_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.PrivateMatch.AllowSplitscreenJoin
struct SOnlineGameReservations_X_PrivateMatch_AllowSplitscreenJoin_Params
{
	class APlayerReplicationInfo*                      PrimaryPRI;                                               // (CPF_Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FString                                     PlayerName;                                               // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameReservations_X.PrivateMatch.HandlePublicReservation
struct SOnlineGameReservations_X_PrivateMatch_HandlePublicReservation_Params
{
	class UTcpConnection*                              Connection;                                               // (CPF_Parm)
	class UAddReservationMessagePublic_X*              Message;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_GetKeys_X.SetPlayer
struct URPC_GetKeys_X_SetPlayer_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (CPF_Parm)
	class URPC_GetKeys_X*                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameServerBrowser_X.Searching.HandleSearchTimeout
struct SOnlineGameServerBrowser_X_Searching_HandleSearchTimeout_Params
{
};

// Function ProjectX.OnlineGameServerBrowser_X.Searching.HandleGameServerList
struct SOnlineGameServerBrowser_X_Searching_HandleGameServerList_Params
{
	class URPC_CustomGameServerGet_X*                  RPC;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameServerBrowser_X.Searching.PerformSearch
struct SOnlineGameServerBrowser_X_Searching_PerformSearch_Params
{
};

// Function ProjectX.OnlineGameServerBrowser_X.Searching.IsSearching
struct SOnlineGameServerBrowser_X_Searching_IsSearching_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineGameServerBrowser_X.Searching.HandleGameStarted
struct SOnlineGameServerBrowser_X_Searching_HandleGameStarted_Params
{
	class AGRI_X*                                      GRI;                                                      // (CPF_Parm)
};

// Function ProjectX.OnlineGameServerBrowser_X.Searching.EndState
struct SOnlineGameServerBrowser_X_Searching_EndState_Params
{
	struct FName                                       N;                                                        // (CPF_Parm)
};

// Function ProjectX.OnlineGameServerBrowser_X.Searching.BeginState
struct SOnlineGameServerBrowser_X_Searching_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.RPC_CustomGameServerGet_X.OnSuccess
struct URPC_CustomGameServerGet_X_OnSuccess_Params
{
};

// Function ProjectX.RPC_CustomGameServerGet_X.SetPassword
struct URPC_CustomGameServerGet_X_SetPassword_Params
{
	struct FString                                     InPassword;                                               // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_CustomGameServerGet_X*                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_CustomGameServerGet_X.SetServerName
struct URPC_CustomGameServerGet_X_SetServerName_Params
{
	struct FString                                     InServerName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_CustomGameServerGet_X*                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlaylistSkillCache_X.GetPlayerIndex
struct UPlaylistSkillCache_X_GetPlayerIndex_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlaylistSkillCache_X.GetPlayerRating
struct UPlaylistSkillCache_X_GetPlayerRating_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FPlayerSkillRating                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PlaylistSkillCache_X.ClearSkill
struct UPlaylistSkillCache_X_ClearSkill_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
};

// Function ProjectX.PlaylistSkillCache_X.CacheSkill
struct UPlaylistSkillCache_X_CacheSkill_Params
{
	struct FPlayerSkillRating                          Rating;                                                   // (CPF_Parm)
};

// Function ProjectX.PlaylistSkillCache_X.PreCacheSkill
struct UPlaylistSkillCache_X_PreCacheSkill_Params
{
	struct FPlayerSkillRating                          Rating;                                                   // (CPF_Parm)
};

// Function ProjectX.RPC_GetPlayerSkill_X.SetPlayerID
struct URPC_GetPlayerSkill_X_SetPlayerID_Params
{
	struct FUniqueNetId                                InPlayerId;                                               // (CPF_Parm)
	class URPC_GetPlayerSkill_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateSkills_X.CreateSkillMatchPlayer
struct URPC_UpdateSkills_X_CreateSkillMatchPlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	float                                              PctTimePlayed;                                            // (CPF_Parm)
	bool                                               bQuitter;                                                 // (CPF_Parm)
	struct FSkillMatchPlayer                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateSkills_X.SetMetrics
struct URPC_UpdateSkills_X_SetMetrics_Params
{
	class UMetricsSystem_X*                            MetricsSystem;                                            // (CPF_Parm, CPF_EditInline)
	class URPC_UpdateSkills_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateSkills_X.SetMatch
struct URPC_UpdateSkills_X_SetMatch_Params
{
	class UMatchRecorder_X*                            InRecorder;                                               // (CPF_Parm)
	class URPC_UpdateSkills_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateSkills_X.SetMatchGUID
struct URPC_UpdateSkills_X_SetMatchGUID_Params
{
	struct FString                                     InGuid;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_UpdateSkills_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.MatchRecorder_X.GetSkillMatchPlayers
struct UMatchRecorder_X_GetSkillMatchPlayers_Params
{
	TArray<struct FSkillMatchPlayer>                   Winners;                                                  // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	TArray<struct FSkillMatchPlayer>                   Losers;                                                   // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.MatchRecorder_X.GetSkillMatchPlayer
struct UMatchRecorder_X_GetSkillMatchPlayer_Params
{
	struct FRecordedMatchPlayer                        Player;                                                   // (CPF_Parm)
	struct FSkillMatchPlayer                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.MatchRecorder_X.Finish
struct UMatchRecorder_X_Finish_Params
{
	int                                                InWinningTeam;                                            // (CPF_Parm)
	int                                                InTeam0Score;                                             // (CPF_Parm)
	int                                                InTeam1Score;                                             // (CPF_Parm)
	int                                                InPlaylist;                                               // (CPF_Parm)
	bool                                               bInOvertime;                                              // (CPF_Parm)
};

// Function ProjectX.MatchRecorder_X.AccumulateTime
struct UMatchRecorder_X_AccumulateTime_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.MatchRecorder_X.RemovePlayer
struct UMatchRecorder_X_RemovePlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bPenalize;                                                // (CPF_Parm)
};

// Function ProjectX.MatchRecorder_X.AddPlayer
struct UMatchRecorder_X_AddPlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                Team;                                                     // (CPF_Parm)
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
};

// Function ProjectX.RPC_UpdateLeaderboard_X.SetUpdates
struct URPC_UpdateLeaderboard_X_SetUpdates_Params
{
	TArray<struct FUploadStatDataSet>                  InUpdates;                                                // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class URPC_UpdateLeaderboard_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_LoginAuthPlayer_X.SetTrial
struct URPC_LoginAuthPlayer_X_SetTrial_Params
{
	bool                                               bIsTrial;                                                 // (CPF_Parm)
	class URPC_LoginAuthPlayer_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_LoginAuthPlayer_X.SetBuildRegion
struct URPC_LoginAuthPlayer_X_SetBuildRegion_Params
{
	struct FString                                     InBuildRegion;                                            // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_LoginAuthPlayer_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_LoginAuthPlayer_X.SetAuthTicket
struct URPC_LoginAuthPlayer_X_SetAuthTicket_Params
{
	struct FString                                     InAuthTicket;                                             // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_LoginAuthPlayer_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_LoginAuthPlayer_X.SetLanguage
struct URPC_LoginAuthPlayer_X_SetLanguage_Params
{
	struct FString                                     InLanguage;                                               // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_LoginAuthPlayer_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_LoginAuthPlayer_X.SetGameVersion
struct URPC_LoginAuthPlayer_X_SetGameVersion_Params
{
	int                                                InGameVersion;                                            // (CPF_Parm)
	class URPC_LoginAuthPlayer_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_LoginAuthPlayer_X.SetPlayerID
struct URPC_LoginAuthPlayer_X_SetPlayerID_Params
{
	class URPC_LoginAuthPlayer_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_LoginAuthPlayer_X.SetPlayerName
struct URPC_LoginAuthPlayer_X_SetPlayerName_Params
{
	struct FString                                     InPlayerName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_LoginAuthPlayer_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_LoginAuthPlayer_X.SetPlatform
struct URPC_LoginAuthPlayer_X_SetPlatform_Params
{
	struct FString                                     InPlatform;                                               // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_LoginAuthPlayer_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Pawn_X.Dying.TakeDamage
struct SPawn_X_Dying_TakeDamage_Params
{
	int                                                Damage;                                                   // (CPF_Parm)
	class AController*                                 EventInstigator;                                          // (CPF_Parm)
	struct FVector                                     HitLocation;                                              // (CPF_Parm)
	struct FVector                                     Momentum;                                                 // (CPF_Parm)
	class UClass*                                      DamageType;                                               // (CPF_Parm)
	struct FTraceHitInfo                               HitInfo;                                                  // (CPF_OptionalParm, CPF_Parm)
	class AActor*                                      DamageCauser;                                             // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.Pawn_X.Dying.TakeDamage_X
struct SPawn_X_Dying_TakeDamage_X_Params
{
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Pawn_X.Dying.Died_X
struct SPawn_X_Dying_Died_X_Params
{
	class AController*                                 Killer;                                                   // (CPF_Parm)
	class UDamageComponent_X*                          Damage;                                                   // (CPF_Parm, CPF_EditInline)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Pawn_X.Dying.BeginState
struct SPawn_X_Dying_BeginState_Params
{
	struct FName                                       P;                                                        // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.GetNextPostProcessOverride
struct UPostProcessManager_X_GetNextPostProcessOverride_Params
{
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PostProcessManager_X.TogglePostProcessSettings
struct UPostProcessManager_X_TogglePostProcessSettings_Params
{
	struct FName                                       Id;                                                       // (CPF_Parm)
	bool                                               bEnabled;                                                 // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.SetMaterialEffectValue
struct UPostProcessManager_X_SetMaterialEffectValue_Params
{
	struct FName                                       EffectName;                                               // (CPF_Parm)
	float                                              NewValue;                                                 // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.ResetEffectsToDefaults
struct UPostProcessManager_X_ResetEffectsToDefaults_Params
{
	bool                                               bRebuildPostProcessChains;                                // (CPF_OptionalParm, CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.ToggleChainNamed
struct UPostProcessManager_X_ToggleChainNamed_Params
{
	class UPostProcessChain*                           Chain;                                                    // (CPF_Parm)
	struct FName                                       ChainName;                                                // (CPF_Parm)
	bool                                               bEnabled;                                                 // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.StopChainNamed
struct UPostProcessManager_X_StopChainNamed_Params
{
	struct FName                                       ChainName;                                                // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.StartChainNamed
struct UPostProcessManager_X_StartChainNamed_Params
{
	class UPostProcessChain*                           Chain;                                                    // (CPF_Parm)
	struct FName                                       ChainName;                                                // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.RemovePostProcessChain
struct UPostProcessManager_X_RemovePostProcessChain_Params
{
	int                                                OldChain;                                                 // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PostProcessManager_X.AddPostProcessChain
struct UPostProcessManager_X_AddPostProcessChain_Params
{
	class UPostProcessChain*                           NewChain;                                                 // (CPF_Parm)
	struct FName                                       ChainName;                                                // (CPF_Parm)
	int                                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PostProcessManager_X.GetEffect
struct UPostProcessManager_X_GetEffect_Params
{
	struct FName                                       EffectName;                                               // (CPF_Parm)
	class UMaterialEffect_X*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PostProcessManager_X.TickPostProcess
struct UPostProcessManager_X_TickPostProcess_Params
{
	float                                              dt;                                                       // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.ToggleEffect
struct UPostProcessManager_X_ToggleEffect_Params
{
	class UMaterialEffect_X*                           Effect;                                                   // (CPF_Parm)
	bool                                               bEnabled;                                                 // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.StopEffectNamed
struct UPostProcessManager_X_StopEffectNamed_Params
{
	struct FName                                       EffectName;                                               // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.StartEffectNamed
struct UPostProcessManager_X_StartEffectNamed_Params
{
	struct FName                                       EffectName;                                               // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.ToggleEffectNamed
struct UPostProcessManager_X_ToggleEffectNamed_Params
{
	struct FName                                       EffectName;                                               // (CPF_Parm)
	bool                                               bEnabled;                                                 // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.PrintDebugInfo
struct UPostProcessManager_X_PrintDebugInfo_Params
{
	class UDebugDrawer*                                Drawer;                                                   // (CPF_Parm)
};

// Function ProjectX.PostProcessManager_X.GetUberPostProcessEffect
struct UPostProcessManager_X_GetUberPostProcessEffect_Params
{
	class UUberPostProcessEffect*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PostProcessManager_X.GetPlayerChain
struct UPostProcessManager_X_GetPlayerChain_Params
{
	class UPostProcessChain*                           ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PostProcessManager_X.Exit
struct UPostProcessManager_X_Exit_Params
{
};

// Function ProjectX.PostProcessManager_X.Init
struct UPostProcessManager_X_Init_Params
{
	class APlayerController_X*                         NewOwner;                                                 // (CPF_Parm)
};

// Function ProjectX.__RPC_X__CreateTask_1.LambdaCallback
struct U__RPC_X__CreateTask_1_LambdaCallback_Params
{
	class UScriptAsyncTask_X*                          T;                                                        // (CPF_Parm)
};

// Function ProjectX.RPC_Test_X.Check
struct URPC_Test_X_Check_Params
{
	bool                                               Assertion;                                                // (CPF_Parm)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_Test_X.CheckParamArraysMatch
struct URPC_Test_X_CheckParamArraysMatch_Params
{
	TArray<struct FRPCTestParam>                       A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FRPCTestParam>                       B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_Test_X.CheckItemArraysMatch
struct URPC_Test_X_CheckItemArraysMatch_Params
{
	TArray<struct FRPCTestItem>                        A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FRPCTestItem>                        B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_Test_X.CheckStringArraysMatch
struct URPC_Test_X_CheckStringArraysMatch_Params
{
	TArray<struct FString>                             A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_Test_X.CheckItemsMatch
struct URPC_Test_X_CheckItemsMatch_Params
{
	struct FRPCTestItem                                A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FRPCTestItem                                B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_Test_X.CheckParamsMatch
struct URPC_Test_X_CheckParamsMatch_Params
{
	struct FRPCTestParam                               A;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FRPCTestParam                               B;                                                        // (CPF_Parm, CPF_NeedCtorLink)
	struct FString                                     Message;                                                  // (CPF_Parm, CPF_NeedCtorLink)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_Test_X.ValidateResults
struct URPC_Test_X_ValidateResults_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_Test_X.OnComplete
struct URPC_Test_X_OnComplete_Params
{
};

// Function ProjectX.RPC_Test_X.GetRandomTestParams
struct URPC_Test_X_GetRandomTestParams_Params
{
	TArray<struct FRPCTestParam>                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_Test_X.GetRandomTestParam
struct URPC_Test_X_GetRandomTestParam_Params
{
	struct FRPCTestParam                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_Test_X.GetRandomTestItems
struct URPC_Test_X_GetRandomTestItems_Params
{
	TArray<struct FRPCTestItem>                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_Test_X.GetRandomTestItem
struct URPC_Test_X_GetRandomTestItem_Params
{
	struct FRPCTestItem                                ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_Test_X.Init
struct URPC_Test_X_Init_Params
{
};

// Function ProjectX.TestsHelper_X.GetRandomStringArray
struct UTestsHelper_X_GetRandomStringArray_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.TestsHelper_X.GetRandomString
struct UTestsHelper_X_GetRandomString_Params
{
	struct FString                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.SeqAct_SpawnArchetype_X.Init
struct USeqAct_SpawnArchetype_X_Init_Params
{
	class AActor*                                      SpawnedActor;                                             // (CPF_Parm)
};

// Function ProjectX.SeqAct_SpawnArchetype_X.Activated
struct USeqAct_SpawnArchetype_X_Activated_Params
{
};

// Function ProjectX.Task_X.Reset
struct UTask_X_Reset_Params
{
};

// Function ProjectX.Task_X.Execute
struct UTask_X_Execute_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.Task_X.TaskToExecute
struct UTask_X_TaskToExecute_Params
{
};

// Function ProjectX.RPC_GetGroupSkills_X.SetPlayers
struct URPC_GetGroupSkills_X_SetPlayers_Params
{
	TArray<struct FUniqueNetId>                        InPlayers;                                                // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_GetGroupSkills_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGroupSkills_X.CreateGroupSkillsFor
struct URPC_UpdateGroupSkills_X_CreateGroupSkillsFor_Params
{
	TArray<struct FSkillMatchParty>                    MatchParties;                                             // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_UpdateGroupSkills_X.CreateGroupSkills
struct URPC_UpdateGroupSkills_X_CreateGroupSkills_Params
{
};

// Function ProjectX.RPC_UpdateGroupSkills_X.OnSuccess
struct URPC_UpdateGroupSkills_X_OnSuccess_Params
{
};

// Function ProjectX.RPC_UpdateGroupSkills_X.AddToGroup
struct URPC_UpdateGroupSkills_X_AddToGroup_Params
{
	TArray<struct FSkillMatchParty>                    Groups;                                                   // (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                PartyID;                                                  // (CPF_Parm)
	float                                              PctTimePlayed;                                            // (CPF_Parm)
	bool                                               bQuitter;                                                 // (CPF_Parm)
};

// Function ProjectX.RPC_UpdateGroupSkills_X.AddLoser
struct URPC_UpdateGroupSkills_X_AddLoser_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                PartyID;                                                  // (CPF_Parm)
	float                                              PctTimePlayed;                                            // (CPF_Parm)
	bool                                               bQuitter;                                                 // (CPF_Parm)
	class URPC_UpdateGroupSkills_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGroupSkills_X.AddWinner
struct URPC_UpdateGroupSkills_X_AddWinner_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                PartyID;                                                  // (CPF_Parm)
	float                                              PctTimePlayed;                                            // (CPF_Parm)
	bool                                               bQuitter;                                                 // (CPF_Parm)
	class URPC_UpdateGroupSkills_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateGroupSkills_X.SetMatch
struct URPC_UpdateGroupSkills_X_SetMatch_Params
{
	class UMatchRecorder_X*                            InRecorder;                                               // (CPF_Parm)
	class URPC_UpdateGroupSkills_X*                    ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_SetGroupSkills_X.SetSkills
struct URPC_SetGroupSkills_X_SetSkills_Params
{
	TArray<struct FUniqueNetId>                        InPlayers;                                                // (CPF_Parm, CPF_NeedCtorLink)
	TArray<int>                                        InPlaylists;                                              // (CPF_Parm, CPF_NeedCtorLink)
	float                                              InMu;                                                     // (CPF_Parm)
	float                                              InSigma;                                                  // (CPF_Parm)
	class URPC_SetGroupSkills_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_SetGroupTiers_X.SetTiers
struct URPC_SetGroupTiers_X_SetTiers_Params
{
	TArray<struct FUniqueNetId>                        InPlayers;                                                // (CPF_Parm, CPF_NeedCtorLink)
	TArray<int>                                        InPlaylists;                                              // (CPF_Parm, CPF_NeedCtorLink)
	int                                                InTier;                                                   // (CPF_Parm)
	int                                                InMatchesPlayed;                                          // (CPF_Parm)
	class URPC_SetGroupTiers_X*                        ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_TestPlayerID_X.OnSuccess
struct URPC_TestPlayerID_X_OnSuccess_Params
{
};

// Function ProjectX.RPC_TestPlayerID_X.Init
struct URPC_TestPlayerID_X_Init_Params
{
};

// Function ProjectX.MatchRecorder_X.Finished.Finish
struct SMatchRecorder_X_Finished_Finish_Params
{
	int                                                InWinningTeam;                                            // (CPF_Parm)
	int                                                InTeam0Score;                                             // (CPF_Parm)
	int                                                InTeam1Score;                                             // (CPF_Parm)
	int                                                InPlaylist;                                               // (CPF_Parm)
	bool                                               bInOvertime;                                              // (CPF_Parm)
};

// Function ProjectX.MatchRecorder_X.Finished.AccumulateTime
struct SMatchRecorder_X_Finished_AccumulateTime_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
};

// Function ProjectX.MatchRecorder_X.Finished.RemovePlayer
struct SMatchRecorder_X_Finished_RemovePlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	bool                                               bPenalize;                                                // (CPF_Parm)
};

// Function ProjectX.MatchRecorder_X.Finished.AddPlayer
struct SMatchRecorder_X_Finished_AddPlayer_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	int                                                Team;                                                     // (CPF_Parm)
	struct FUniqueNetId                                PartyID;                                                  // (CPF_Parm)
};

// Function ProjectX.RPC_RecordMatch_X.SetMatchName
struct URPC_RecordMatch_X_SetMatchName_Params
{
	struct FString                                     InName;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_RecordMatch_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_RecordMatch_X.SetMatch
struct URPC_RecordMatch_X_SetMatch_Params
{
	class UMatchRecorder_X*                            InRecorder;                                               // (CPF_Parm)
	class URPC_RecordMatch_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_RecordMatch_X.SetMatchGUID
struct URPC_RecordMatch_X_SetMatchGUID_Params
{
	struct FString                                     InGuid;                                                   // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_RecordMatch_X*                          ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.LocalCacheTests_X.HandleLocalCacheImported
struct ULocalCacheTests_X_HandleLocalCacheImported_Params
{
	class ULocalCache_X*                               Cache;                                                    // (CPF_Parm)
	class UObject*                                     CacheObject;                                              // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.LocalCacheTests_X.ImportTest
struct ULocalCacheTests_X_ImportTest_Params
{
};

// Function ProjectX.LocalCacheTests_X.HandleLocalCacheExported
struct ULocalCacheTests_X_HandleLocalCacheExported_Params
{
	class ULocalCache_X*                               Cache;                                                    // (CPF_Parm)
	class UObject*                                     CacheObject;                                              // (CPF_Parm)
	class UError*                                      Error;                                                    // (CPF_Parm)
};

// Function ProjectX.LocalCacheTests_X.ToCacheAndBack
struct ULocalCacheTests_X_ToCacheAndBack_Params
{
	int                                                RandomSeed;                                               // (CPF_Parm)
};

// Function ProjectX.SkelControlBlendTargetComponent_X.SetControlActiveInComponent
struct USkelControlBlendTargetComponent_X_SetControlActiveInComponent_Params
{
	class USkeletalMeshComponent*                      SKC;                                                      // (CPF_Parm, CPF_EditInline)
	bool                                               bActive;                                                  // (CPF_Parm)
};

// Function ProjectX.SkelControlBlendTargetComponent_X.SetControlActive
struct USkelControlBlendTargetComponent_X_SetControlActive_Params
{
	bool                                               bActive;                                                  // (CPF_Parm)
};

// Function ProjectX.SkelControlBlendTargetComponent_X.Detached
struct USkelControlBlendTargetComponent_X_Detached_Params
{
};

// Function ProjectX.SkelControlBlendTargetComponent_X.Attached
struct USkelControlBlendTargetComponent_X_Attached_Params
{
};

// Function ProjectX.AprilConfig_X.IsActive
struct UAprilConfig_X_IsActive_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.AprilConfig_X.Apply
struct UAprilConfig_X_Apply_Params
{
};

// Function ProjectX.ArrayFuncs_X.ShuffleStringArray
struct UArrayFuncs_X_ShuffleStringArray_Params
{
	TArray<struct FString>                             ArrayToShuffle;                                           // (CPF_Parm, CPF_NeedCtorLink)
	TArray<struct FString>                             ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.CameraState_CamActorCinematic_X.UpdatePOV
struct UCameraState_CamActorCinematic_X_UpdatePOV_Params
{
	float                                              DeltaTime;                                                // (CPF_Parm)
	struct FCameraOrientation                          OutPOV;                                                   // (CPF_Parm, CPF_OutParm)
};

// Function ProjectX.CameraState_CamActorCinematic_X.EndCameraState
struct UCameraState_CamActorCinematic_X_EndCameraState_Params
{
};

// Function ProjectX.RPC_CheckReservation_X.GetReservation
struct URPC_CheckReservation_X_GetReservation_Params
{
	struct FCheckReservationData                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_CheckReservation_X.SetIsHeartbeat
struct URPC_CheckReservation_X_SetIsHeartbeat_Params
{
	bool                                               bInIsHeartbeat;                                           // (CPF_Parm)
	class URPC_CheckReservation_X*                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.NetworkConfig_X.Undo
struct UNetworkConfig_X_Undo_Params
{
};

// Function ProjectX.NetworkConfig_X.Apply
struct UNetworkConfig_X_Apply_Params
{
};

// Function ProjectX.OnlineResource_X.SetCachedData
struct UOnlineResource_X_SetCachedData_Params
{
	class UCachedWebData_X*                            NewData;                                                  // (CPF_Parm)
};

// Function ProjectX.OnlineResource_X.IsValidNewData
struct UOnlineResource_X_IsValidNewData_Params
{
	class UCachedWebData_X*                            Data;                                                     // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.OnlineResource_X.ClearRetryTimer
struct UOnlineResource_X_ClearRetryTimer_Params
{
};

// Function ProjectX.OnlineResource_X.SetRetryTimer
struct UOnlineResource_X_SetRetryTimer_Params
{
	float                                              Delay;                                                    // (CPF_Parm)
};

// Function ProjectX.OnlineResource_X.HandleSync
struct UOnlineResource_X_HandleSync_Params
{
	class UCachedWebData_X*                            Data;                                                     // (CPF_Parm)
};

// Function ProjectX.OnlineResource_X.SyncData
struct UOnlineResource_X_SyncData_Params
{
};

// Function ProjectX.OnlineResource_X.EventDataChanged
struct UOnlineResource_X_EventDataChanged_Params
{
	class UOnlineResource_X*                           DataSync;                                                 // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.RPC_UpdateTrialData_X.SetAdditionalMinutesToRemove
struct URPC_UpdateTrialData_X_SetAdditionalMinutesToRemove_Params
{
	int                                                InAdditionalMinutesToRemove;                              // (CPF_Parm)
	class URPC_UpdateTrialData_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_UpdateTrialData_X.SetMinutesToRemove
struct URPC_UpdateTrialData_X_SetMinutesToRemove_Params
{
	int                                                InMinutesToRemove;                                        // (CPF_Parm)
	class URPC_UpdateTrialData_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.PhysicsConfig_X.DisableFeature
struct UPhysicsConfig_X_DisableFeature_Params
{
	struct FString                                     Feature;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PhysicsConfig_X.EnableFeature
struct UPhysicsConfig_X_EnableFeature_Params
{
	struct FString                                     Feature;                                                  // (CPF_Parm, CPF_NeedCtorLink)
};

// Function ProjectX.PhysicsConfig_X.Reset
struct UPhysicsConfig_X_Reset_Params
{
};

// Function ProjectX.PhysicsConfig_X.Apply
struct UPhysicsConfig_X_Apply_Params
{
};

// Function ProjectX.PsyNetConfig_X.ResetProperties
struct UPsyNetConfig_X_ResetProperties_Params
{
	class UPsyNet_X*                                   PsyNet;                                                   // (CPF_Parm)
};

// Function ProjectX.PsyNetConfig_X.SetProperties
struct UPsyNetConfig_X_SetProperties_Params
{
	class UPsyNet_X*                                   PsyNet;                                                   // (CPF_Parm)
};

// Function ProjectX.PsyNetConfig_X.Apply
struct UPsyNetConfig_X_Apply_Params
{
};

// Function ProjectX.RPC_CheckKeys_X.KeysMatch
struct URPC_CheckKeys_X_KeysMatch_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_CheckKeys_X.SetKeyToCheck
struct URPC_CheckKeys_X_SetKeyToCheck_Params
{
	struct FString                                     InKey;                                                    // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_CheckKeys_X*                            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_ReportLowFPS_X.SetNumBots
struct URPC_ReportLowFPS_X_SetNumBots_Params
{
	int                                                InNumBots;                                                // (CPF_Parm)
	class URPC_ReportLowFPS_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_ReportLowFPS_X.SetNumHumans
struct URPC_ReportLowFPS_X_SetNumHumans_Params
{
	int                                                InNumHumans;                                              // (CPF_Parm)
	class URPC_ReportLowFPS_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_ReportLowFPS_X.SetServerName
struct URPC_ReportLowFPS_X_SetServerName_Params
{
	struct FString                                     InServerName;                                             // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_ReportLowFPS_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_ReportLowFPS_X.SetServerID
struct URPC_ReportLowFPS_X_SetServerID_Params
{
	int                                                InServerID;                                               // (CPF_Parm)
	class URPC_ReportLowFPS_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_ReportLowFPS_X.SetMachineID
struct URPC_ReportLowFPS_X_SetMachineID_Params
{
	int                                                InMachineID;                                              // (CPF_Parm)
	class URPC_ReportLowFPS_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_ReportLowFPS_X.SetIP
struct URPC_ReportLowFPS_X_SetIP_Params
{
	struct FString                                     InIP;                                                     // (CPF_Parm, CPF_NeedCtorLink)
	class URPC_ReportLowFPS_X*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_SetPlayerSkill_X.SetSigma
struct URPC_SetPlayerSkill_X_SetSigma_Params
{
	float                                              InSigma;                                                  // (CPF_Parm)
	class URPC_SetPlayerSkill_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_SetPlayerSkill_X.SetMu
struct URPC_SetPlayerSkill_X_SetMu_Params
{
	float                                              InMu;                                                     // (CPF_Parm)
	class URPC_SetPlayerSkill_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_SetPlayerSkill_X.SetPlaylist
struct URPC_SetPlayerSkill_X_SetPlaylist_Params
{
	int                                                InPlaylist;                                               // (CPF_Parm)
	class URPC_SetPlayerSkill_X*                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_SetPlayerSkillTier_X.SetMatchesPlayed
struct URPC_SetPlayerSkillTier_X_SetMatchesPlayed_Params
{
	int                                                InMatchesPlayed;                                          // (CPF_Parm)
	class URPC_SetPlayerSkillTier_X*                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_SetPlayerSkillTier_X.SetTier
struct URPC_SetPlayerSkillTier_X_SetTier_Params
{
	int                                                InTier;                                                   // (CPF_Parm)
	class URPC_SetPlayerSkillTier_X*                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_SetPlayerSkillTier_X.SetPlaylist
struct URPC_SetPlayerSkillTier_X_SetPlaylist_Params
{
	int                                                InPlaylist;                                               // (CPF_Parm)
	class URPC_SetPlayerSkillTier_X*                   ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.__ScriptAsyncTask_X__CompleteAll_1.LambdaCallback
struct U__ScriptAsyncTask_X__CompleteAll_1_LambdaCallback_Params
{
	class UScriptAsyncTask_X*                          T;                                                        // (CPF_Parm)
};

// Function ProjectX.EventRecorderConfig_X.ResetProperties
struct UEventRecorderConfig_X_ResetProperties_Params
{
	class UEventRecorder_X*                            EventRecorder;                                            // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.EventRecorderConfig_X.SetProperties
struct UEventRecorderConfig_X_SetProperties_Params
{
	class UEventRecorder_X*                            EventRecorder;                                            // (CPF_Parm, CPF_EditInline)
};

// Function ProjectX.EventRecorderConfig_X.Apply
struct UEventRecorderConfig_X_Apply_Params
{
};

// Function ProjectX.RPC_GetPlayerPermissions_X.__RPC_GetPlayerPermissions_X__GetPlayerPermissions_1
struct URPC_GetPlayerPermissions_X___RPC_GetPlayerPermissions_X__GetPlayerPermissions_1_Params
{
	struct FUniqueNetId                                P;                                                        // (CPF_Parm)
	struct FPlayerPermissionsList                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_GetPlayerPermissions_X.GetPermissionFromString
struct URPC_GetPlayerPermissions_X_GetPermissionFromString_Params
{
	struct FName                                       PermissionName;                                           // (CPF_Parm)
	TEnumAsByte<EOnlinePlayerPermission>               Permission;                                               // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_GetPlayerPermissions_X.ConvertPermissions
struct URPC_GetPlayerPermissions_X_ConvertPermissions_Params
{
	TArray<struct FName>                               PermissionNames;                                          // (CPF_Parm, CPF_NeedCtorLink)
	TArray<TEnumAsByte<EOnlinePlayerPermission>>       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_GetPlayerPermissions_X.ConvertPlayerPermissions
struct URPC_GetPlayerPermissions_X_ConvertPlayerPermissions_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (CPF_Parm)
	struct FPlayerPermissionsList                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_GetPlayerPermissions_X.GetPlayerPermissions
struct URPC_GetPlayerPermissions_X_GetPlayerPermissions_Params
{
	TArray<struct FPlayerPermissionsList>              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)
	TArray<struct FPlayerPermissionsList>              MapLocal_6AD13AFD42F212F5AF39E7B76199A2A2;                // (CPF_Const, CPF_OutParm, CPF_NeedCtorLink)
};

// Function ProjectX.RPC_GetPlayerPermissions_X.SetPlayers
struct URPC_GetPlayerPermissions_X_SetPlayers_Params
{
	TArray<struct FUniqueNetId>                        InPlayerIDs;                                              // (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
	class URPC_GetPlayerPermissions_X*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_AddPlayerToRole_X.SetRole
struct URPC_AddPlayerToRole_X_SetRole_Params
{
	TEnumAsByte<EOnlinePlayerRole>                     Role;                                                     // (CPF_Parm)
	class URPC_AddPlayerToRole_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_RemovePlayerFromRole_X.SetRole
struct URPC_RemovePlayerFromRole_X_SetRole_Params
{
	TEnumAsByte<EOnlinePlayerRole>                     Role;                                                     // (CPF_Parm)
	class URPC_RemovePlayerFromRole_X*                 ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function ProjectX.RPC_SetSeasonReward_X.SetReward
struct URPC_SetSeasonReward_X_SetReward_Params
{
	int                                                Level;                                                    // (CPF_Parm)
	int                                                Wins;                                                     // (CPF_Parm)
	class URPC_SetSeasonReward_X*                      ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
