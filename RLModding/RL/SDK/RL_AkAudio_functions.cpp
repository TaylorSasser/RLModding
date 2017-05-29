#pragma once

// Rocket League (1.31) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.AkDevice.NotifyWhenInitialized
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FScriptDelegate         Callback                       (CPF_Parm, CPF_NeedCtorLink)

void UAkDevice::STATIC_NotifyWhenInitialized(const struct FScriptDelegate& Callback)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.NotifyWhenInitialized");

	struct
	{
		struct FScriptDelegate         Callback;
	} params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.ProfileStop
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)

void UAkDevice::STATIC_ProfileStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.ProfileStop");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.ProfileStart
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)

void UAkDevice::STATIC_ProfileStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.ProfileStart");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PrintData
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)

void UAkDevice::STATIC_PrintData()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PrintData");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetOutputType
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// TEnumAsByte<enum class EAkOutputType> Type                           (CPF_Parm)

void UAkDevice::STATIC_SetOutputType(TEnumAsByte<enum class EAkOutputType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetOutputType");

	struct
	{
		TEnumAsByte<enum class EAkOutputType> Type;
	} params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetListenerSpatialization
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class ULocalPlayer*            Player                         (CPF_Parm)
// TEnumAsByte<enum class EAkListenerSpacialization> Value                          (CPF_Parm)

void UAkDevice::STATIC_SetListenerSpatialization(class ULocalPlayer* Player, TEnumAsByte<enum class EAkListenerSpacialization> Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetListenerSpatialization");

	struct
	{
		class ULocalPlayer*            Player;
		TEnumAsByte<enum class EAkListenerSpacialization> Value;
	} params;
	params.Player = Player;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.RemoveListener
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class ULocalPlayer*            Player                         (CPF_Parm)

void UAkDevice::STATIC_RemoveListener(class ULocalPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.RemoveListener");

	struct
	{
		class ULocalPlayer*            Player;
	} params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.AddListener
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class ULocalPlayer*            Player                         (CPF_Parm)

void UAkDevice::STATIC_AddListener(class ULocalPlayer* Player)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.AddListener");

	struct
	{
		class ULocalPlayer*            Player;
	} params;
	params.Player = Player;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetMusicRTCP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::STATIC_SetMusicRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetMusicRTCP");

	struct
	{
		struct FName                   Key;
		float                          Value;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetGlobalRTCP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::STATIC_SetGlobalRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetGlobalRTCP");

	struct
	{
		struct FName                   Key;
		float                          Value;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopPlayingID
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// int                            PlayingID                      (CPF_Parm)

void UAkDevice::STATIC_StopPlayingID(int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopPlayingID");

	struct
	{
		int                            PlayingID;
	} params;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopBGMusic
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::STATIC_StopBGMusic(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopBGMusic");

	struct
	{
		class UAkSoundCue*             Sound;
	} params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PlayBGMusic
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UAkDevice::STATIC_PlayBGMusic(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PlayBGMusic");

	struct
	{
		class UAkSoundCue*             Sound;
		int                            ReturnValue;
	} params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkDevice.StopGlobalSound
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::STATIC_StopGlobalSound(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopGlobalSound");

	struct
	{
		class UAkSoundCue*             Sound;
	} params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PlayGlobalSound
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::STATIC_PlayGlobalSound(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PlayGlobalSound");

	struct
	{
		class UAkSoundCue*             Sound;
	} params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetState
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   InStateGroup                   (CPF_Parm)
// struct FName                   InState                        (CPF_Parm)

void UAkDevice::STATIC_SetState(const struct FName& InStateGroup, const struct FName& InState)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetState");

	struct
	{
		struct FName                   InStateGroup;
		struct FName                   InState;
	} params;
	params.InStateGroup = InStateGroup;
	params.InState = InState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetSwitch
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkDevice::STATIC_SetSwitch(class AActor* SourceActor, const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetSwitch");

	struct
	{
		class AActor*                  SourceActor;
		struct FName                   Key;
		struct FName                   Value;
	} params;
	params.SourceActor = SourceActor;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.SetRTCP
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  SourceActor                    (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkDevice::STATIC_SetRTCP(class AActor* SourceActor, const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.SetRTCP");

	struct
	{
		class AActor*                  SourceActor;
		struct FName                   Key;
		float                          Value;
	} params;
	params.SourceActor = SourceActor;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopAllSounds
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  SourceActor                    (CPF_Parm)

void UAkDevice::STATIC_StopAllSounds(class AActor* SourceActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopAllSounds");

	struct
	{
		class AActor*                  SourceActor;
	} params;
	params.SourceActor = SourceActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.StopSound
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  SourceActor                    (CPF_Parm)
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkDevice::STATIC_StopSound(class AActor* SourceActor, class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.StopSound");

	struct
	{
		class AActor*                  SourceActor;
		class UAkSoundCue*             Sound;
	} params;
	params.SourceActor = SourceActor;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.PlaySound
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public, FUNC_K2Call)
// Parameters:
// class AActor*                  SourceActor                    (CPF_Parm)
// class UAkSoundCue*             Sound                          (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm, CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm, CPF_Parm)
// class UAkSoundSource*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)

class UAkSoundSource* UAkDevice::STATIC_PlaySound(class AActor* SourceActor, class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.PlaySound");

	struct
	{
		class AActor*                  SourceActor;
		class UAkSoundCue*             Sound;
		struct FVector                 Translation;
		struct FRotator                Rotation;
		class UAkSoundSource*          ReturnValue;
	} params;
	params.SourceActor = SourceActor;
	params.Sound = Sound;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkDevice.EventMusicTrackEnd
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            PlayingID                      (CPF_Parm)

void UAkDevice::EventMusicTrackEnd(int PlayingID)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.EventMusicTrackEnd");

	struct
	{
		int                            PlayingID;
	} params;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.EventMusicTrackStart
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            PlayingID                      (CPF_Parm)
// struct FString                 FileMarker                     (CPF_Parm, CPF_NeedCtorLink)

void UAkDevice::EventMusicTrackStart(int PlayingID, const struct FString& FileMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.EventMusicTrackStart");

	struct
	{
		int                            PlayingID;
		struct FString                 FileMarker;
	} params;
	params.PlayingID = PlayingID;
	params.FileMarker = FileMarker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkDevice.EventInitialized
// (FUNC_Public, FUNC_Delegate)

void UAkDevice::EventInitialized()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkDevice.EventInitialized");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.PrintDebugInfo
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class UDebugDrawer*            Drawer                         (CPF_Parm)

void UAkParamGroup::PrintDebugInfo(class UDebugDrawer* Drawer)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.PrintDebugInfo");

	struct
	{
		class UDebugDrawer*            Drawer;
	} params;
	params.Drawer = Drawer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.GetDebugData
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms, FUNC_K2Call)
// Parameters:
// TArray<struct FName>           RTCPKeys                       (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TArray<float>                  RTCPValues                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TArray<struct FName>           SwitchKeys                     (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// TArray<struct FName>           SwitchValues                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UAkParamGroup::GetDebugData(TArray<struct FName>* RTCPKeys, TArray<float>* RTCPValues, TArray<struct FName>* SwitchKeys, TArray<struct FName>* SwitchValues)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.GetDebugData");

	struct
	{
		TArray<struct FName>           RTCPKeys;
		TArray<float>                  RTCPValues;
		TArray<struct FName>           SwitchKeys;
		TArray<struct FName>           SwitchValues;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (RTCPKeys != nullptr)
		*RTCPKeys = params.RTCPKeys;
	if (RTCPValues != nullptr)
		*RTCPValues = params.RTCPValues;
	if (SwitchKeys != nullptr)
		*SwitchKeys = params.SwitchKeys;
	if (SwitchValues != nullptr)
		*SwitchValues = params.SwitchValues;
}


// Function AkAudio.AkParamGroup.StopSound
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkParamGroup::StopSound(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.StopSound");

	struct
	{
		class UAkSoundCue*             Sound;
	} params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.PlaySound
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// struct FVector                 Translation                    (CPF_OptionalParm, CPF_Parm)
// struct FRotator                Rotation                       (CPF_OptionalParm, CPF_Parm)
// class UAkSoundSource*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_EditInline)

class UAkSoundSource* UAkParamGroup::PlaySound(class UAkSoundCue* Sound, const struct FVector& Translation, const struct FRotator& Rotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.PlaySound");

	struct
	{
		class UAkSoundCue*             Sound;
		struct FVector                 Translation;
		struct FRotator                Rotation;
		class UAkSoundSource*          ReturnValue;
	} params;
	params.Sound = Sound;
	params.Translation = Translation;
	params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkParamGroup.SetSwitch
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkParamGroup::SetSwitch(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetSwitch");

	struct
	{
		struct FName                   Key;
		struct FName                   Value;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkParamGroup.SetRTCP
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkParamGroup::SetRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkParamGroup.SetRTCP");

	struct
	{
		struct FName                   Key;
		float                          Value;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FLinearColor            Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetLinearColorParameter(const struct FName& Key, const struct FLinearColor& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetLinearColorParameter");

	struct
	{
		struct FName                   Key;
		struct FLinearColor            Value;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetVectorParameter
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FVector                 Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetVectorParameter(const struct FName& Key, const struct FVector& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetVectorParameter");

	struct
	{
		struct FName                   Key;
		struct FVector                 Value;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetFloatParameter
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetFloatParameter(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetFloatParameter");

	struct
	{
		struct FName                   Key;
		float                          Value;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetNameParameter
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetNameParameter(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetNameParameter");

	struct
	{
		struct FName                   Key;
		struct FName                   Value;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetRTCP
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetRTCP(const struct FName& Key, float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetRTCP");

	struct
	{
		struct FName                   Key;
		float                          Value;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.SetSwitch
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// struct FName                   Value                          (CPF_Parm)

void UAkPlaySoundComponent::SetSwitch(const struct FName& Key, const struct FName& Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.SetSwitch");

	struct
	{
		struct FName                   Key;
		struct FName                   Value;
	} params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UAkPlaySoundComponent::IsPlaying()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.IsPlaying");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkPlaySoundComponent.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAkPlaySoundComponent::Stop()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.Stop");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkPlaySoundComponent.Play
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UAkPlaySoundComponent::Play()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkPlaySoundComponent.Play");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.IsPlayingAny
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UAkSoundSource::IsPlayingAny()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.IsPlayingAny");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSoundSource.IsPlaying
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UAkSoundSource::IsPlaying(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.IsPlaying");

	struct
	{
		class UAkSoundCue*             Sound;
		bool                           ReturnValue;
	} params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.AkSoundSource.StopAll
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)

void UAkSoundSource::StopAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.StopAll");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.Stop
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkSoundSource::Stop(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.Stop");

	struct
	{
		class UAkSoundCue*             Sound;
	} params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkSoundSource.Play
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_K2Call)
// Parameters:
// class UAkSoundCue*             Sound                          (CPF_Parm)

void UAkSoundSource::Play(class UAkSoundCue* Sound)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkSoundSource.Play");

	struct
	{
		class UAkSoundCue*             Sound;
	} params;
	params.Sound = Sound;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.AkAmbientSoundActor.OnToggle
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AAkAmbientSoundActor::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSoundActor.OnToggle");

	struct
	{
		class USeqAct_Toggle*          Action;
	} params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  A                              (CPF_Parm)
// bool                           bPlay                          (CPF_Parm)

void USeqAct_AkPlaySound::ToggleSoundFor(class AActor* A, bool bPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPlaySound.ToggleSoundFor");

	struct
	{
		class AActor*                  A;
		bool                           bPlay;
	} params;
	params.A = A;
	params.bPlay = bPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPlaySound.ToggleSound
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           bPlay                          (CPF_Parm)

void USeqAct_AkPlaySound::ToggleSound(bool bPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPlaySound.ToggleSound");

	struct
	{
		bool                           bPlay;
	} params;
	params.bPlay = bPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.SeqAct_AkPlaySound.Activated
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void USeqAct_AkPlaySound::Activated()
{
	static auto fn = UObject::FindObject<UFunction>("Function AkAudio.SeqAct_AkPlaySound.Activated");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
