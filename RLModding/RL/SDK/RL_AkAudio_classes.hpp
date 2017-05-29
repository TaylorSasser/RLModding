#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AkAudio.AkPlaySoundComponent.EAkPlaySoundReceiver
enum class EAkPlaySoundReceiver
{
	PlaySoundReceiver_All          = 0,
	PlaySoundReceiver_Local        = 1,
	PlaySoundReceiver_NonLocal     = 2,
	PlaySoundReceiver_MAX          = 3
};


// Enum AkAudio.AkDevice.EAkOutputType
enum class EAkOutputType
{
	AkOT_Speakers                  = 0,
	AKOT_Headphones                = 1,
	EAkOutputType_MAX              = 2
};


// Enum AkAudio.AkDevice.EAkListenerSpacialization
enum class EAkListenerSpacialization
{
	AkLS_3D                        = 0,
	AkLS_Left                      = 1,
	AkLS_Right                     = 2,
	AkLS_MAX                       = 3
};



//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0004 (0x006C - 0x0068)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                     		// 0x0068(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.ActorFactoryAkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x0008 (0x01F8 - 0x01F0)
class AAkAmbientSound : public AKeypoint
{
public:
	unsigned long                                      bAutoPlay : 1;                                    		// 0x01F0(0x0004)
	unsigned long                                      StopWhenOwnerIsDestroyed : 1;                     		// 0x01F0(0x0004) (CPF_Edit)
	unsigned long                                      bIsPlaying : 1;                                   		// 0x01F0(0x0004) (CPF_Transient)
	class UAkEvent*                                    PlayEvent;                                        		// 0x01F4(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkComponent
// 0x0013 (0x0078 - 0x0065)
class UAkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                               		// 0x0065(0x0003) MISSED OFFSET
	struct FName                                       BoneName;                                         		// 0x0068(0x0008) (CPF_Edit)
	class UAkEvent*                                    AutoPlayEvent;                                    		// 0x0070(0x0004)
	unsigned long                                      bStopWhenOwnerDestroyed : 1;                      		// 0x0074(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}

};


// Class AkAudio.AkDevice
// 0x0030 (0x006C - 0x003C)
class UAkDevice : public UObject
{
public:
	struct FScriptDelegate                             __EventInitialized__Delegate;                     		// 0x003C(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData00[0x4];                               		// 0x003C(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMusicTrackStart__Delegate;                 		// 0x004C(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData01[0x4];                               		// 0x004C(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __EventMusicTrackEnd__Delegate;                   		// 0x005C(0x000C) (CPF_NeedCtorLink)
	unsigned char                                      UnknownData02[0x4];                               		// 0x005C(0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDevice");
		return ptr;
	}


	void STATIC_NotifyWhenInitialized(const struct FScriptDelegate& Callback);
	void STATIC_ProfileStop();
	void STATIC_ProfileStart();
	void STATIC_PrintData();
	void STATIC_SetOutputType(TEnumAsByte<enum class EAkOutputType> Type);
	void STATIC_SetListenerSpatialization(class ULocalPlayer* Player, TEnumAsByte<enum class EAkListenerSpacialization> Value);
	void STATIC_RemoveListener(class ULocalPlayer* Player);
	void STATIC_AddListener(class ULocalPlayer* Player);
	void STATIC_SetMusicRTCP(const struct FName& Key, float Value);
	void STATIC_SetGlobalRTCP(const struct FName& Key, float Value);
	void STATIC_StopPlayingID(int PlayingID);
	void STATIC_StopBGMusic(class UAkSoundCue* Sound);
	int STATIC_PlayBGMusic(class UAkSoundCue* Sound);
	void STATIC_StopGlobalSound(class UAkSoundCue* Sound);
	void STATIC_PlayGlobalSound(class UAkSoundCue* Sound);
	void STATIC_SetState(const struct FName& InStateGroup, const struct FName& InState);
	void STATIC_SetSwitch(class AActor* SourceActor, const struct FName& Key, const struct FName& Value);
	void STATIC_SetRTCP(class AActor* SourceActor, const struct FName& Key, float Value);
	void STATIC_StopAllSounds(class AActor* SourceActor);
	void STATIC_StopSound(class AActor* SourceActor, class UAkSoundCue* Sound);
	class UAkSoundSource* STATIC_PlaySound(class AActor* SourceActor, class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation);
	void EventMusicTrackEnd(int PlayingID);
	void EventMusicTrackStart(int PlayingID, const struct FString& FileMarker);
	void EventInitialized();
};


// Class AkAudio.AkDialogueEvent
// 0x000C (0x0048 - 0x003C)
class UAkDialogueEvent : public UObject
{
public:
	TArray<class UAkSwitch*>                           Arguments;                                        		// 0x003C(0x000C) (CPF_Edit, CPF_Const, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDialogueEvent");
		return ptr;
	}

};


// Class AkAudio.AkEnvironmentVolume
// 0x0018 (0x0230 - 0x0218)
class AAkEnvironmentVolume : public AVolume
{
public:
	struct FString                                     EnvironmentID;                                    		// 0x0218(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	int                                                Priority;                                         		// 0x0224(0x0004) (CPF_Edit)
	float                                              Value;                                            		// 0x0228(0x0004) (CPF_Edit)
	struct Fuint                                       HashedEnvID;                                      		// 0x022C(0x0004) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkEnvironmentVolume");
		return ptr;
	}

};


// Class AkAudio.AkParamGroup
// 0x0087 (0x00EC - 0x0065)
class UAkParamGroup : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                               		// 0x0065(0x0003) MISSED OFFSET
	struct FAkParamSet                                 StoredParameters;                                 		// 0x0068(0x0078) (CPF_Const, CPF_Transient)
	TArray<class UAkSoundSource*>                      SoundSources;                                     		// 0x00E0(0x000C) (CPF_Const, CPF_ExportObject, CPF_Transient, CPF_Component, CPF_NeedCtorLink, CPF_EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkParamGroup");
		return ptr;
	}


	void PrintDebugInfo(class UDebugDrawer* Drawer);
	void GetDebugData(TArray<struct FName>* RTCPKeys, TArray<float>* RTCPValues, TArray<struct FName>* SwitchKeys, TArray<struct FName>* SwitchValues);
	void StopSound(class UAkSoundCue* Sound);
	class UAkSoundSource* PlaySound(class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation);
	void SetSwitch(const struct FName& Key, const struct FName& Value);
	void SetRTCP(const struct FName& Key, float Value);
};


// Class AkAudio.AkPlaySoundComponent
// 0x00BB (0x0120 - 0x0065)
class UAkPlaySoundComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                               		// 0x0065(0x0003) MISSED OFFSET
	struct FPointer                                    VfTable_IISetParameter;                           		// 0x0068(0x0004) (CPF_Const, CPF_Native, CPF_NoExport)
	class UAkSoundCue*                                 SoundCue;                                         		// 0x006C(0x0004) (CPF_Edit)
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bKillSoundOnDetach : 1;                           		// 0x0070(0x0004) (CPF_Edit)
	unsigned long                                      bWasAttached : 1;                                 		// 0x0070(0x0004) (CPF_Const, CPF_Transient)
	struct FVector                                     Translation;                                      		// 0x0074(0x000C) (CPF_Edit, CPF_Const)
	struct FRotator                                    Rotation;                                         		// 0x0080(0x000C) (CPF_Edit, CPF_Const)
	float                                              ReFireDelay;                                      		// 0x008C(0x0004) (CPF_Edit)
	TEnumAsByte<enum class EAkPlaySoundReceiver>       Receiver;                                         		// 0x0090(0x0001) (CPF_Edit)
	unsigned char                                      UnknownData01[0x3];                               		// 0x0091(0x0003) MISSED OFFSET
	TArray<struct FName>                               RestartSwitches;                                  		// 0x0094(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	class UAkSoundSource*                              SoundSource;                                      		// 0x00A0(0x0004) (CPF_Const, CPF_ExportObject, CPF_Transient, CPF_Component, CPF_EditInline)
	float                                              LastPlayTime;                                     		// 0x00A4(0x0004) (CPF_Const, CPF_Transient)
	struct FAkParamSet                                 StoredParameters;                                 		// 0x00A8(0x0078) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPlaySoundComponent");
		return ptr;
	}


	void SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value);
	void SetVectorParameter(const struct FName& Key, const struct FVector& Value);
	void SetFloatParameter(const struct FName& Key, float Value);
	void SetNameParameter(const struct FName& Key, const struct FName& Value);
	void SetRTCP(const struct FName& Key, float Value);
	void SetSwitch(const struct FName& Key, const struct FName& Value);
	bool IsPlaying();
	void Stop();
	void Play();
};


// Class AkAudio.AkRTPCDecayComponent
// 0x0033 (0x0098 - 0x0065)
class UAkRTPCDecayComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                               		// 0x0065(0x0003) MISSED OFFSET
	struct FName                                       RTPC;                                             		// 0x0068(0x0008) (CPF_Edit)
	float                                              GrowValue;                                        		// 0x0070(0x0004) (CPF_Edit)
	float                                              MaxValue;                                         		// 0x0074(0x0004) (CPF_Edit)
	struct FInterpCurveFloat                           DecayPerSecond;                                   		// 0x0078(0x0010) (CPF_Edit, CPF_NeedCtorLink)
	class UAkSoundSource*                              SoundSource;                                      		// 0x0088(0x0004) (CPF_Const, CPF_ExportObject, CPF_Transient, CPF_Component, CPF_EditInline)
	float                                              CurrentValue;                                     		// 0x008C(0x0004) (CPF_Const, CPF_Transient)
	float                                              LastAttachTime;                                   		// 0x0090(0x0004) (CPF_Const, CPF_Transient)
	unsigned long                                      bWasAttached : 1;                                 		// 0x0094(0x0004) (CPF_Const, CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRTPCDecayComponent");
		return ptr;
	}

};


// Class AkAudio.AkSoundCue
// 0x001C (0x0058 - 0x003C)
class UAkSoundCue : public UObject
{
public:
	class UAkBank*                                     RequiredBank;                                     		// 0x003C(0x0004) (CPF_Edit)
	struct FString                                     StartEvent;                                       		// 0x0040(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     StopEvent;                                        		// 0x004C(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSoundCue");
		return ptr;
	}

};


// Class AkAudio.AkSoundSource
// 0x0093 (0x00F8 - 0x0065)
class UAkSoundSource : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x3];                               		// 0x0065(0x0003) MISSED OFFSET
	struct FVector                                     Translation;                                      		// 0x0068(0x000C) (CPF_Edit, CPF_Const)
	struct FRotator                                    Rotation;                                         		// 0x0074(0x000C) (CPF_Edit, CPF_Const)
	unsigned long                                      bDetachOnComplete : 1;                            		// 0x0080(0x0004) (CPF_Edit, CPF_Const)
	unsigned long                                      bRegistered : 1;                                  		// 0x0080(0x0004) (CPF_Const, CPF_Transient)
	unsigned long                                      bUpdateOrientation : 1;                           		// 0x0080(0x0004) (CPF_Const, CPF_Transient)
	unsigned char                                      UnknownData01[0xC];                               		// 0x0084(0x000C) MISSED OFFSET
	struct FMatrix                                     CachedParentToWorld;                              		// 0x0090(0x0040) (CPF_Const, CPF_Transient)
	struct FVector                                     WorldLocation;                                    		// 0x00D0(0x000C) (CPF_Const, CPF_Transient)
	struct FRotator                                    WorldRotation;                                    		// 0x00DC(0x000C) (CPF_Const, CPF_Transient)
	class UAkParamGroup*                               Params;                                           		// 0x00E8(0x0004) (CPF_Const, CPF_ExportObject, CPF_Transient, CPF_Component, CPF_EditInline)
	TArray<struct FActiveSound>                        ActiveSounds;                                     		// 0x00EC(0x000C) (CPF_Const, CPF_Transient, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSoundSource");
		return ptr;
	}


	bool IsPlayingAny();
	bool IsPlaying(class UAkSoundCue* Sound);
	void StopAll();
	void Stop(class UAkSoundCue* Sound);
	void Play(class UAkSoundCue* Sound);
};


// Class AkAudio.AkSwitch
// 0x0000 (0x003C - 0x003C)
class UAkSwitch : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSwitch");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkEvent
// 0x000C (0x008C - 0x0080)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray<struct FAkEventTrackKey>                    AkEvents;                                         		// 0x0080(0x000C) (CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkRTPC
// 0x000C (0x00A0 - 0x0094)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	struct FString                                     Param;                                            		// 0x0094(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x0040 - 0x003C)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x003C - 0x003C)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkRTPC");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkClearBanks");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkLoadBank
// 0x000C (0x011C - 0x0110)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:
	unsigned long                                      Async : 1;                                        		// 0x0110(0x0004) (CPF_Edit)
	unsigned long                                      bWaitingCallback : 1;                             		// 0x0110(0x0004) (CPF_Transient)
	class UAkBank*                                     Bank;                                             		// 0x0114(0x0004) (CPF_Edit)
	int                                                Signal;                                           		// 0x0118(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkLoadBank");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostEvent
// 0x0008 (0x0118 - 0x0110)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	int                                                Signal;                                           		// 0x0110(0x0004) (CPF_Transient)
	class UAkEvent*                                    Event;                                            		// 0x0114(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostEvent");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostTrigger
// 0x000C (0x0108 - 0x00FC)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	struct FString                                     Trigger;                                          		// 0x00FC(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPostTrigger");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x0014 (0x0124 - 0x0110)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	struct FString                                     Param;                                            		// 0x0110(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	float                                              Value;                                            		// 0x011C(0x0004) (CPF_Edit)
	unsigned long                                      Running : 1;                                      		// 0x0120(0x0004) (CPF_Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetRTPCValue");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetState
// 0x0018 (0x0114 - 0x00FC)
class USeqAct_AkSetState : public USequenceAction
{
public:
	struct FString                                     StateGroup;                                       		// 0x00FC(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     State;                                            		// 0x0108(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetState");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetSwitch
// 0x0018 (0x0114 - 0x00FC)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	struct FString                                     SwitchGroup;                                      		// 0x00FC(0x000C) (CPF_Edit, CPF_NeedCtorLink)
	struct FString                                     Switch;                                           		// 0x0108(0x000C) (CPF_Edit, CPF_NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkSetSwitch");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStartAmbientSound
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_AkStartAmbientSound : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStartAmbientSound");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x00FC - 0x00FC)
class USeqAct_AkStopAll : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkStopAll");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSoundActor
// 0x0004 (0x01F4 - 0x01F0)
class AAkAmbientSoundActor : public AKeypoint
{
public:
	class UAkPlaySoundComponent*                       PlaySoundComponent;                               		// 0x01F0(0x0004) (CPF_Edit, CPF_ExportObject, CPF_Component, CPF_EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSoundActor");
		return ptr;
	}


	void OnToggle(class USeqAct_Toggle* Action);
};


// Class AkAudio.SeqAct_AkPlaySound
// 0x0008 (0x0104 - 0x00FC)
class USeqAct_AkPlaySound : public USequenceAction
{
public:
	class UAkSoundCue*                                 SoundCue;                                         		// 0x00FC(0x0004) (CPF_Edit)
	unsigned long                                      bBGMusic : 1;                                     		// 0x0100(0x0004) (CPF_Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SeqAct_AkPlaySound");
		return ptr;
	}


	void ToggleSoundFor(class AActor* A, bool bPlay);
	void ToggleSound(bool bPlay);
	void Activated();
};


// Class AkAudio.AkAudioDevice
// 0x014C (0x018C - 0x0040)
class UAkAudioDevice : public USubsystem
{
public:
	unsigned char                                      UnknownData00[0xC];                               		// 0x0040(0x000C) MISSED OFFSET
	int                                                DefaultMemoryPoolKB;                              		// 0x004C(0x0004) (CPF_Config)
	int                                                DefaultEngineMemoryPoolKB;                        		// 0x0050(0x0004) (CPF_Config)
	float                                              LowMemoryThreshold;                               		// 0x0054(0x0004) (CPF_Config)
	unsigned char                                      UnknownData01[0x134];                             		// 0x0058(0x0134) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioDevice");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
