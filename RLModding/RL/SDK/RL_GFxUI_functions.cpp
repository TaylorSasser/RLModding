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

// Function GFxUI.GFxEngine.UpdateMovieLoadingInfo
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FLoadingMovieMapInfo    LoadingInfo                    (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UGFxEngine::UpdateMovieLoadingInfo(struct FLoadingMovieMapInfo* LoadingInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxEngine.UpdateMovieLoadingInfo");

	struct
	{
		struct FLoadingMovieMapInfo    LoadingInfo;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadingInfo != nullptr)
		*LoadingInfo = params.LoadingInfo;
}


// Function GFxUI.GFxEngine.Tick
// (FUNC_Event, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UGFxEngine::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxEngine.Tick");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxFSCmdHandler.FSCommand
// (FUNC_Event, FUNC_Public)
// Parameters:
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// struct FString                 Cmd                            (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Arg                            (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxFSCmdHandler::FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxFSCmdHandler.FSCommand");

	struct
	{
		class UGFxMoviePlayer*         Movie;
		class UGFxEvent_FSCommand*     Event;
		struct FString                 Cmd;
		struct FString                 Arg;
		bool                           ReturnValue;
	} params;
	params.Movie = Movie;
	params.Event = Event;
	params.Cmd = Cmd;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxInteraction.DebugInputKey
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ControllerId                   (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// TEnumAsByte<enum class EInputEvent> Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_Parm)
// bool                           bGamepad                       (CPF_Parm)

void UGFxInteraction::DebugInputKey(int ControllerId, const struct FName& Key, TEnumAsByte<enum class EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.DebugInputKey");

	struct
	{
		int                            ControllerId;
		struct FName                   Key;
		TEnumAsByte<enum class EInputEvent> Event;
		float                          AmountDepressed;
		bool                           bGamepad;
	} params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.CloseAllMoviePlayers
// (FUNC_Native, FUNC_Public)

void UGFxInteraction::CloseAllMoviePlayers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.CloseAllMoviePlayers");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged
// (FUNC_Native, FUNC_Public)

void UGFxInteraction::NotifySplitscreenLayoutChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifySplitscreenLayoutChanged");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyPlayerRemoved
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            RemovedPlayer                  (CPF_Parm)

void UGFxInteraction::NotifyPlayerRemoved(int PlayerIndex, class ULocalPlayer* RemovedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyPlayerRemoved");

	struct
	{
		int                            PlayerIndex;
		class ULocalPlayer*            RemovedPlayer;
	} params;
	params.PlayerIndex = PlayerIndex;
	params.RemovedPlayer = RemovedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyPlayerAdded
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            PlayerIndex                    (CPF_Parm)
// class ULocalPlayer*            AddedPlayer                    (CPF_Parm)

void UGFxInteraction::NotifyPlayerAdded(int PlayerIndex, class ULocalPlayer* AddedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyPlayerAdded");

	struct
	{
		int                            PlayerIndex;
		class ULocalPlayer*            AddedPlayer;
	} params;
	params.PlayerIndex = PlayerIndex;
	params.AddedPlayer = AddedPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.NotifyGameSessionEnded
// (FUNC_Native, FUNC_Public)

void UGFxInteraction::NotifyGameSessionEnded()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.NotifyGameSessionEnded");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxInteraction.GetFocusMovie
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ControllerId                   (CPF_Parm)
// class UGFxMoviePlayer*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxMoviePlayer* UGFxInteraction::GetFocusMovie(int ControllerId)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxInteraction.GetFocusMovie");

	struct
	{
		int                            ControllerId;
		class UGFxMoviePlayer*         ReturnValue;
	} params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetFullScreen
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bFullScreen                    (CPF_Parm)

void UGFxMoviePlayer::SetFullScreen(bool bFullScreen)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetFullScreen");

	struct
	{
		bool                           bFullScreen;
	} params;
	params.bFullScreen = bFullScreen;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.IsHidden
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::IsHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.IsHidden");

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


// Function GFxUI.GFxMoviePlayer.SetHidden
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bHidden                        (CPF_Parm)

void UGFxMoviePlayer::SetHidden(bool bHidden)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetHidden");

	struct
	{
		bool                           bHidden;
	} params;
	params.bHidden = bHidden;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.RenderOnce
// (FUNC_Native, FUNC_Public)

void UGFxMoviePlayer::RenderOnce()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.RenderOnce");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout
// (FUNC_Native, FUNC_Public)

void UGFxMoviePlayer::UpdateSplitscreenLayout()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.UpdateSplitscreenLayout");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect
// (FUNC_Public)
// Parameters:
// bool                           bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityVisibilityEffect(bool bRemoveEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityVisibilityEffect");

	struct
	{
		bool                           bRemoveEffect;
	} params;
	params.bRemoveEffect = bRemoveEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect
// (FUNC_Public)
// Parameters:
// bool                           bRemoveEffect                  (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityBlurEffect(bool bRemoveEffect)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityBlurEffect");

	struct
	{
		bool                           bRemoveEffect;
	} params;
	params.bRemoveEffect = bRemoveEffect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bRequestedBlurState            (CPF_Parm)
// bool                           bRequestedHiddenState          (CPF_Parm)

void UGFxMoviePlayer::ApplyPriorityEffect(bool bRequestedBlurState, bool bRequestedHiddenState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ApplyPriorityEffect");

	struct
	{
		bool                           bRequestedBlurState;
		bool                           bRequestedHiddenState;
	} params;
	params.bRequestedBlurState = bRequestedBlurState;
	params.bRequestedHiddenState = bRequestedHiddenState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme
// (FUNC_Defined, FUNC_Event, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FName                   EventName                      (CPF_Parm)
// struct FName                   SoundThemeName                 (CPF_OptionalParm, CPF_Parm)

void UGFxMoviePlayer::PlaySoundFromTheme(const struct FName& EventName, const struct FName& SoundThemeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PlaySoundFromTheme");

	struct
	{
		struct FName                   EventName;
		struct FName                   SoundThemeName;
	} params;
	params.EventName = EventName;
	params.SoundThemeName = SoundThemeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnFocusLost
// (FUNC_Event, FUNC_Public)
// Parameters:
// int                            LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::OnFocusLost(int LocalPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnFocusLost");

	struct
	{
		int                            LocalPlayerIndex;
	} params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnFocusGained
// (FUNC_Event, FUNC_Public)
// Parameters:
// int                            LocalPlayerIndex               (CPF_Parm)

void UGFxMoviePlayer::OnFocusGained(int LocalPlayerIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnFocusGained");

	struct
	{
		int                            LocalPlayerIndex;
	} params;
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ConsoleCommand
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Command                        (CPF_Parm, CPF_NeedCtorLink)

void UGFxMoviePlayer::ConsoleCommand(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ConsoleCommand");

	struct
	{
		struct FString                 Command;
	} params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetPC
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class APlayerController*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class APlayerController* UGFxMoviePlayer::GetPC()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetPC");

	struct
	{
		class APlayerController*       ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetLP
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class ULocalPlayer* UGFxMoviePlayer::GetLP()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetLP");

	struct
	{
		class ULocalPlayer*            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.Init
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class ULocalPlayer*            LocPlay                        (CPF_OptionalParm, CPF_Parm)

void UGFxMoviePlayer::Init(class ULocalPlayer* LocPlay)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Init");

	struct
	{
		class ULocalPlayer*            LocPlay;
	} params;
	params.LocPlay = LocPlay;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UGFxObject*              WidgetToBind                   (CPF_Parm)
// struct FName                   Path                           (CPF_Parm)

void UGFxMoviePlayer::SetWidgetPathBinding(class UGFxObject* WidgetToBind, const struct FName& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetWidgetPathBinding");

	struct
	{
		class UGFxObject*              WidgetToBind;
		struct FName                   Path;
	} params;
	params.WidgetToBind = WidgetToBind;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PostWidgetInit
// (FUNC_Event, FUNC_Public)

void UGFxMoviePlayer::PostWidgetInit()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PostWidgetInit");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.WidgetUnloaded
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.WidgetUnloaded");

	struct
	{
		struct FName                   WidgetName;
		struct FName                   WidgetPath;
		class UGFxObject*              Widget;
		bool                           ReturnValue;
	} params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.WidgetInitialized
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.WidgetInitialized");

	struct
	{
		struct FName                   WidgetName;
		struct FName                   WidgetPath;
		class UGFxObject*              Widget;
		bool                           ReturnValue;
	} params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptConstructor
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ClassName                      (CPF_Parm, CPF_NeedCtorLink)
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxMoviePlayer::ActionScriptConstructor(const struct FString& ClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptConstructor");

	struct
	{
		struct FString                 ClassName;
		class UGFxObject*              ReturnValue;
	} params;
	params.ClassName = ClassName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptObject
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxMoviePlayer::ActionScriptObject(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptObject");

	struct
	{
		struct FString                 Path;
		class UGFxObject*              ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptString
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGFxMoviePlayer::ActionScriptString(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptString");

	struct
	{
		struct FString                 Path;
		struct FString                 ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptFloat
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UGFxMoviePlayer::ActionScriptFloat(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptFloat");

	struct
	{
		struct FString                 Path;
		float                          ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptInt
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UGFxMoviePlayer::ActionScriptInt(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptInt");

	struct
	{
		struct FString                 Path;
		int                            ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptVoid
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)

void UGFxMoviePlayer::ActionScriptVoid(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptVoid");

	struct
	{
		struct FString                 Path;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Invoke
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 method                         (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FASValue>        args                           (CPF_Parm, CPF_NeedCtorLink)
// struct FASValue                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FASValue UGFxMoviePlayer::Invoke(const struct FString& method, TArray<struct FASValue> args)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Invoke");

	struct
	{
		struct FString                 method;
		TArray<struct FASValue>        args;
		struct FASValue                ReturnValue;
	} params;
	params.method = method;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UGFxObject*              Object                         (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)

void UGFxMoviePlayer::ActionScriptSetFunction(class UGFxObject* Object, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ActionScriptSetFunction");

	struct
	{
		class UGFxObject*              Object;
		struct FString                 Member;
	} params;
	params.Object = Object;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.CreateArray
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxMoviePlayer::CreateArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.CreateArray");

	struct
	{
		class UGFxObject*              ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.CreateObject
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 ASClass                        (CPF_Parm, CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm, CPF_Parm)
// TArray<struct FASValue>        args                           (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxMoviePlayer::CreateObject(const struct FString& ASClass, class UClass* Type, TArray<struct FASValue> args)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.CreateObject");

	struct
	{
		struct FString                 ASClass;
		class UClass*                  Type;
		TArray<struct FASValue>        args;
		class UGFxObject*              ReturnValue;
	} params;
	params.ASClass = ASClass;
	params.Type = Type;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableStringArray
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<struct FString>         Arg                            (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::SetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString> Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableStringArray");

	struct
	{
		struct FString                 Path;
		int                            Index;
		TArray<struct FString>         Arg;
		bool                           ReturnValue;
	} params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableFloatArray
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<float>                  Arg                            (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::SetVariableFloatArray(const struct FString& Path, int Index, TArray<float> Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableFloatArray");

	struct
	{
		struct FString                 Path;
		int                            Index;
		TArray<float>                  Arg;
		bool                           ReturnValue;
	} params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableIntArray
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<int>                    Arg                            (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::SetVariableIntArray(const struct FString& Path, int Index, TArray<int> Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableIntArray");

	struct
	{
		struct FString                 Path;
		int                            Index;
		TArray<int>                    Arg;
		bool                           ReturnValue;
	} params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableArray
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<struct FASValue>        Arg                            (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::SetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue> Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableArray");

	struct
	{
		struct FString                 Path;
		int                            Index;
		TArray<struct FASValue>        Arg;
		bool                           ReturnValue;
	} params;
	params.Path = Path;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableStringArray
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<struct FString>         Arg                            (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::GetVariableStringArray(const struct FString& Path, int Index, TArray<struct FString>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableStringArray");

	struct
	{
		struct FString                 Path;
		int                            Index;
		TArray<struct FString>         Arg;
		bool                           ReturnValue;
	} params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableFloatArray
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<float>                  Arg                            (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::GetVariableFloatArray(const struct FString& Path, int Index, TArray<float>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableFloatArray");

	struct
	{
		struct FString                 Path;
		int                            Index;
		TArray<float>                  Arg;
		bool                           ReturnValue;
	} params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableIntArray
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<int>                    Arg                            (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::GetVariableIntArray(const struct FString& Path, int Index, TArray<int>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableIntArray");

	struct
	{
		struct FString                 Path;
		int                            Index;
		TArray<int>                    Arg;
		bool                           ReturnValue;
	} params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableArray
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            Index                          (CPF_Parm)
// TArray<struct FASValue>        Arg                            (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::GetVariableArray(const struct FString& Path, int Index, TArray<struct FASValue>* Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableArray");

	struct
	{
		struct FString                 Path;
		int                            Index;
		TArray<struct FASValue>        Arg;
		bool                           ReturnValue;
	} params;
	params.Path = Path;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetVariableObject
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// class UGFxObject*              Object                         (CPF_Parm)

void UGFxMoviePlayer::SetVariableObject(const struct FString& Path, class UGFxObject* Object)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableObject");

	struct
	{
		struct FString                 Path;
		class UGFxObject*              Object;
	} params;
	params.Path = Path;
	params.Object = Object;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableString
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm, CPF_NeedCtorLink)

void UGFxMoviePlayer::SetVariableString(const struct FString& Path, const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableString");

	struct
	{
		struct FString                 Path;
		struct FString                 S;
	} params;
	params.Path = Path;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableInt
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableInt(const struct FString& Path, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableInt");

	struct
	{
		struct FString                 Path;
		int                            I;
	} params;
	params.Path = Path;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableNumber
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableNumber(const struct FString& Path, float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableNumber");

	struct
	{
		struct FString                 Path;
		float                          F;
	} params;
	params.Path = Path;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariableBool
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// bool                           B                              (CPF_Parm)

void UGFxMoviePlayer::SetVariableBool(const struct FString& Path, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariableBool");

	struct
	{
		struct FString                 Path;
		bool                           B;
	} params;
	params.Path = Path;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetVariable
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm, CPF_NeedCtorLink)

void UGFxMoviePlayer::SetVariable(const struct FString& Path, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetVariable");

	struct
	{
		struct FString                 Path;
		struct FASValue                Arg;
	} params;
	params.Path = Path;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetVariableObject
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm, CPF_Parm)
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxMoviePlayer::GetVariableObject(const struct FString& Path, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableObject");

	struct
	{
		struct FString                 Path;
		class UClass*                  Type;
		class UGFxObject*              ReturnValue;
	} params;
	params.Path = Path;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableString
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGFxMoviePlayer::GetVariableString(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableString");

	struct
	{
		struct FString                 Path;
		struct FString                 ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableInt
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UGFxMoviePlayer::GetVariableInt(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableInt");

	struct
	{
		struct FString                 Path;
		int                            ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableNumber
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UGFxMoviePlayer::GetVariableNumber(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableNumber");

	struct
	{
		struct FString                 Path;
		float                          ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariableBool
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::GetVariableBool(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariableBool");

	struct
	{
		struct FString                 Path;
		bool                           ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetVariable
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// struct FASValue                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FASValue UGFxMoviePlayer::GetVariable(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVariable");

	struct
	{
		struct FString                 Path;
		struct FASValue                ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.GetAVMVersion
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UGFxMoviePlayer::GetAVMVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetAVMVersion");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.FilterButtonInput
// (FUNC_Event, FUNC_Public)
// Parameters:
// int                            ControllerId                   (CPF_Parm)
// struct FName                   ButtonName                     (CPF_Parm)
// TEnumAsByte<enum class EInputEvent> InputEvent                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::FilterButtonInput(int ControllerId, const struct FName& ButtonName, TEnumAsByte<enum class EInputEvent> InputEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.FilterButtonInput");

	struct
	{
		int                            ControllerId;
		struct FName                   ButtonName;
		TEnumAsByte<enum class EInputEvent> InputEvent;
		bool                           ReturnValue;
	} params;
	params.ControllerId = ControllerId;
	params.ButtonName = ButtonName;
	params.InputEvent = InputEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.FlushPlayerInput
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           capturekeysonly                (CPF_Parm)

void UGFxMoviePlayer::FlushPlayerInput(bool capturekeysonly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.FlushPlayerInput");

	struct
	{
		bool                           capturekeysonly;
	} params;
	params.capturekeysonly = capturekeysonly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UGFxMoviePlayer::ClearFocusIgnoreKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ClearFocusIgnoreKeys");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)

void UGFxMoviePlayer::AddFocusIgnoreKey(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.AddFocusIgnoreKey");

	struct
	{
		struct FName                   Key;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ClearCaptureKeys
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UGFxMoviePlayer::ClearCaptureKeys()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ClearCaptureKeys");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.AddCaptureKey
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)

void UGFxMoviePlayer::AddCaptureKey(const struct FName& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.AddCaptureKey");

	struct
	{
		struct FName                   Key;
	} params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bCanReceiveInput               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveInput");

	struct
	{
		bool                           bCanReceiveInput;
	} params;
	params.bCanReceiveInput = bCanReceiveInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bCanReceiveFocus               (CPF_Parm)

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieCanReceiveFocus");

	struct
	{
		bool                           bCanReceiveFocus;
	} params;
	params.bCanReceiveFocus = bCanReceiveFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPerspective3D
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FMatrix                 matPersp                       (CPF_Const, CPF_Parm, CPF_OutParm)

void UGFxMoviePlayer::SetPerspective3D(struct FMatrix* matPersp)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPerspective3D");

	struct
	{
		struct FMatrix                 matPersp;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (matPersp != nullptr)
		*matPersp = params.matPersp;
}


// Function GFxUI.GFxMoviePlayer.SetView3D
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FMatrix                 matView                        (CPF_Const, CPF_Parm, CPF_OutParm)

void UGFxMoviePlayer::SetView3D(struct FMatrix* matView)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetView3D");

	struct
	{
		struct FMatrix                 matView;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (matView != nullptr)
		*matView = params.matView;
}


// Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          x0                             (CPF_Parm, CPF_OutParm)
// float                          y0                             (CPF_Parm, CPF_OutParm)
// float                          X1                             (CPF_Parm, CPF_OutParm)
// float                          Y1                             (CPF_Parm, CPF_OutParm)

void UGFxMoviePlayer::GetVisibleFrameRect(float* x0, float* y0, float* X1, float* Y1)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetVisibleFrameRect");

	struct
	{
		float                          x0;
		float                          y0;
		float                          X1;
		float                          Y1;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (x0 != nullptr)
		*x0 = params.x0;
	if (y0 != nullptr)
		*y0 = params.y0;
	if (X1 != nullptr)
		*X1 = params.X1;
	if (Y1 != nullptr)
		*Y1 = params.Y1;
}


// Function GFxUI.GFxMoviePlayer.SetAlignment
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class GFxAlign> A                              (CPF_Parm)

void UGFxMoviePlayer::SetAlignment(TEnumAsByte<enum class GFxAlign> A)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetAlignment");

	struct
	{
		TEnumAsByte<enum class GFxAlign> A;
	} params;
	params.A = A;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetViewScaleMode
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class GFxScaleMode> SM                             (CPF_Parm)

void UGFxMoviePlayer::SetViewScaleMode(TEnumAsByte<enum class GFxScaleMode> SM)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetViewScaleMode");

	struct
	{
		TEnumAsByte<enum class GFxScaleMode> SM;
	} params;
	params.SM = SM;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetViewport
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            X                              (CPF_Parm)
// int                            Y                              (CPF_Parm)
// int                            Width                          (CPF_Parm)
// int                            Height                         (CPF_Parm)

void UGFxMoviePlayer::SetViewport(int X, int Y, int Width, int Height)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetViewport");

	struct
	{
		int                            X;
		int                            Y;
		int                            Width;
		int                            Height;
	} params;
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.GetGameViewportClient
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UGameViewportClient*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGameViewportClient* UGFxMoviePlayer::GetGameViewportClient()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.GetGameViewportClient");

	struct
	{
		class UGameViewportClient*     ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetPriority
// (FUNC_Native, FUNC_Public)
// Parameters:
// unsigned char                  NewPriority                    (CPF_Parm)

void UGFxMoviePlayer::SetPriority(unsigned char NewPriority)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPriority");

	struct
	{
		unsigned char                  NewPriority;
	} params;
	params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetExternalTexture
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Resource                       (CPF_Parm, CPF_NeedCtorLink)
// class UTexture*                Texture                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::SetExternalTexture(const struct FString& Resource, class UTexture* Texture)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetExternalTexture");

	struct
	{
		struct FString                 Resource;
		class UTexture*                Texture;
		bool                           ReturnValue;
	} params;
	params.Resource = Resource;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxMoviePlayer.SetExternalInterface
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UObject*                 H                              (CPF_Parm)

void UGFxMoviePlayer::SetExternalInterface(class UObject* H)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetExternalInterface");

	struct
	{
		class UObject*                 H;
	} params;
	params.H = H;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetTimingMode
// (FUNC_Native, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class GFxTimingMode> Mode                           (CPF_Parm)

void UGFxMoviePlayer::SetTimingMode(TEnumAsByte<enum class GFxTimingMode> Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetTimingMode");

	struct
	{
		TEnumAsByte<enum class GFxTimingMode> Mode;
	} params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetMovieInfo
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class USwfMovie*               Data                           (CPF_Parm)

void UGFxMoviePlayer::SetMovieInfo(class USwfMovie* Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetMovieInfo");

	struct
	{
		class USwfMovie*               Data;
	} params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.ConditionalClearPause
// (FUNC_Final, FUNC_Defined, FUNC_Event, FUNC_Public)

void UGFxMoviePlayer::ConditionalClearPause()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.ConditionalClearPause");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnCleanup
// (FUNC_Event, FUNC_Public)

void UGFxMoviePlayer::OnCleanup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnCleanup");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnClose
// (FUNC_Event, FUNC_Public)

void UGFxMoviePlayer::OnClose()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnClose");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Close
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// bool                           Unload                         (CPF_OptionalParm, CPF_Parm)

void UGFxMoviePlayer::Close(bool Unload)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Close");

	struct
	{
		bool                           Unload;
	} params;
	params.Unload = Unload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.SetPause
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// bool                           bPausePlayback                 (CPF_OptionalParm, CPF_Parm)

void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.SetPause");

	struct
	{
		bool                           bPausePlayback;
	} params;
	params.bPausePlayback = bPausePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.OnPostAdvance
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::OnPostAdvance(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.OnPostAdvance");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.PostAdvance
// (FUNC_Native, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UGFxMoviePlayer::PostAdvance(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.PostAdvance");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Advance
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          Time                           (CPF_Parm)

void UGFxMoviePlayer::Advance(float Time)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Advance");

	struct
	{
		float                          Time;
	} params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxMoviePlayer.Start
// (FUNC_Native, FUNC_Event, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// bool                           StartPaused                    (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxMoviePlayer::Start(bool StartPaused)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxMoviePlayer.Start");

	struct
	{
		bool                           StartPaused;
		bool                           ReturnValue;
	} params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.WidgetUnloaded
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxObject::WidgetUnloaded(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.WidgetUnloaded");

	struct
	{
		struct FName                   WidgetName;
		struct FName                   WidgetPath;
		class UGFxObject*              Widget;
		bool                           ReturnValue;
	} params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.WidgetInitialized
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   WidgetName                     (CPF_Parm)
// struct FName                   WidgetPath                     (CPF_Parm)
// class UGFxObject*              Widget                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxObject::WidgetInitialized(const struct FName& WidgetName, const struct FName& WidgetPath, class UGFxObject* Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.WidgetInitialized");

	struct
	{
		struct FName                   WidgetName;
		struct FName                   WidgetPath;
		class UGFxObject*              Widget;
		bool                           ReturnValue;
	} params;
	params.WidgetName = WidgetName;
	params.WidgetPath = WidgetPath;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.AttachMovie
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 symbolname                     (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 instancename                   (CPF_Parm, CPF_NeedCtorLink)
// int                            Depth                          (CPF_OptionalParm, CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm, CPF_Parm)
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxObject::AttachMovie(const struct FString& symbolname, const struct FString& instancename, int Depth, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.AttachMovie");

	struct
	{
		struct FString                 symbolname;
		struct FString                 instancename;
		int                            Depth;
		class UClass*                  Type;
		class UGFxObject*              ReturnValue;
	} params;
	params.symbolname = symbolname;
	params.instancename = instancename;
	params.Depth = Depth;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.CreateEmptyMovieClip
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 instancename                   (CPF_Parm, CPF_NeedCtorLink)
// int                            Depth                          (CPF_OptionalParm, CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm, CPF_Parm)
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxObject::CreateEmptyMovieClip(const struct FString& instancename, int Depth, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.CreateEmptyMovieClip");

	struct
	{
		struct FString                 instancename;
		int                            Depth;
		class UClass*                  Type;
		class UGFxObject*              ReturnValue;
	} params;
	params.instancename = instancename;
	params.Depth = Depth;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GotoAndStopI
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            frame                          (CPF_Parm)

void UGFxObject::GotoAndStopI(int frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndStopI");

	struct
	{
		int                            frame;
	} params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndStop
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 frame                          (CPF_Parm, CPF_NeedCtorLink)

void UGFxObject::GotoAndStop(const struct FString& frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndStop");

	struct
	{
		struct FString                 frame;
	} params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndPlayI
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            frame                          (CPF_Parm)

void UGFxObject::GotoAndPlayI(int frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndPlayI");

	struct
	{
		int                            frame;
	} params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GotoAndPlay
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 frame                          (CPF_Parm, CPF_NeedCtorLink)

void UGFxObject::GotoAndPlay(const struct FString& frame)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GotoAndPlay");

	struct
	{
		struct FString                 frame;
	} params;
	params.frame = frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptArray
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// TArray<class UGFxObject*>      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<class UGFxObject*> UGFxObject::ActionScriptArray(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptArray");

	struct
	{
		struct FString                 Path;
		TArray<class UGFxObject*>      ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptObject
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Path                           (CPF_Parm, CPF_NeedCtorLink)
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxObject::ActionScriptObject(const struct FString& Path)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptObject");

	struct
	{
		struct FString                 Path;
		class UGFxObject*              ReturnValue;
	} params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptString
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 method                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGFxObject::ActionScriptString(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptString");

	struct
	{
		struct FString                 method;
		struct FString                 ReturnValue;
	} params;
	params.method = method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptFloat
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 method                         (CPF_Parm, CPF_NeedCtorLink)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UGFxObject::ActionScriptFloat(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptFloat");

	struct
	{
		struct FString                 method;
		float                          ReturnValue;
	} params;
	params.method = method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptInt
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 method                         (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UGFxObject::ActionScriptInt(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptInt");

	struct
	{
		struct FString                 method;
		int                            ReturnValue;
	} params;
	params.method = method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptVoid
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 method                         (CPF_Parm, CPF_NeedCtorLink)

void UGFxObject::ActionScriptVoid(const struct FString& method)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptVoid");

	struct
	{
		struct FString                 method;
	} params;
	params.method = method;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.Invoke
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// TArray<struct FASValue>        args                           (CPF_Parm, CPF_NeedCtorLink)
// struct FASValue                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FASValue UGFxObject::Invoke(const struct FString& Member, TArray<struct FASValue> args)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.Invoke");

	struct
	{
		struct FString                 Member;
		TArray<struct FASValue>        args;
		struct FASValue                ReturnValue;
	} params;
	params.Member = Member;
	params.args = args;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.ActionScriptSetFunctionOn
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// class UGFxObject*              Target                         (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)

void UGFxObject::ActionScriptSetFunctionOn(class UGFxObject* Target, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptSetFunctionOn");

	struct
	{
		class UGFxObject*              Target;
		struct FString                 Member;
	} params;
	params.Target = Target;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.ActionScriptSetFunction
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)

void UGFxObject::ActionScriptSetFunction(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.ActionScriptSetFunction");

	struct
	{
		struct FString                 Member;
	} params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberString
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm, CPF_NeedCtorLink)

void UGFxObject::SetElementMemberString(int Index, const struct FString& Member, const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberString");

	struct
	{
		int                            Index;
		struct FString                 Member;
		struct FString                 S;
	} params;
	params.Index = Index;
	params.Member = Member;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberInt
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)

void UGFxObject::SetElementMemberInt(int Index, const struct FString& Member, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberInt");

	struct
	{
		int                            Index;
		struct FString                 Member;
		int                            I;
	} params;
	params.Index = Index;
	params.Member = Member;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberFloat
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementMemberFloat(int Index, const struct FString& Member, float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberFloat");

	struct
	{
		int                            Index;
		struct FString                 Member;
		float                          F;
	} params;
	params.Index = Index;
	params.Member = Member;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberBool
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// bool                           B                              (CPF_Parm)

void UGFxObject::SetElementMemberBool(int Index, const struct FString& Member, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberBool");

	struct
	{
		int                            Index;
		struct FString                 Member;
		bool                           B;
	} params;
	params.Index = Index;
	params.Member = Member;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMemberObject
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementMemberObject(int Index, const struct FString& Member, class UGFxObject* val)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMemberObject");

	struct
	{
		int                            Index;
		struct FString                 Member;
		class UGFxObject*              val;
	} params;
	params.Index = Index;
	params.Member = Member;
	params.val = val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementMember
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm, CPF_NeedCtorLink)

void UGFxObject::SetElementMember(int Index, const struct FString& Member, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementMember");

	struct
	{
		int                            Index;
		struct FString                 Member;
		struct FASValue                Arg;
	} params;
	params.Index = Index;
	params.Member = Member;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementMemberString
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGFxObject::GetElementMemberString(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberString");

	struct
	{
		int                            Index;
		struct FString                 Member;
		struct FString                 ReturnValue;
	} params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberInt
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UGFxObject::GetElementMemberInt(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberInt");

	struct
	{
		int                            Index;
		struct FString                 Member;
		int                            ReturnValue;
	} params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberFloat
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UGFxObject::GetElementMemberFloat(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberFloat");

	struct
	{
		int                            Index;
		struct FString                 Member;
		float                          ReturnValue;
	} params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberBool
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxObject::GetElementMemberBool(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberBool");

	struct
	{
		int                            Index;
		struct FString                 Member;
		bool                           ReturnValue;
	} params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMemberObject
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm, CPF_Parm)
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxObject::GetElementMemberObject(int Index, const struct FString& Member, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMemberObject");

	struct
	{
		int                            Index;
		struct FString                 Member;
		class UClass*                  Type;
		class UGFxObject*              ReturnValue;
	} params;
	params.Index = Index;
	params.Member = Member;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementMember
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// struct FASValue                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FASValue UGFxObject::GetElementMember(int Index, const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementMember");

	struct
	{
		int                            Index;
		struct FString                 Member;
		struct FASValue                ReturnValue;
	} params;
	params.Index = Index;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetElementColorTransform
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FASColorTransform       cxform                         (CPF_Parm)

void UGFxObject::SetElementColorTransform(int Index, const struct FASColorTransform& cxform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementColorTransform");

	struct
	{
		int                            Index;
		struct FASColorTransform       cxform;
	} params;
	params.Index = Index;
	params.cxform = cxform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementPosition
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetElementPosition(int Index, float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementPosition");

	struct
	{
		int                            Index;
		float                          X;
		float                          Y;
	} params;
	params.Index = Index;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementVisible
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// bool                           Visible                        (CPF_Parm)

void UGFxObject::SetElementVisible(int Index, bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementVisible");

	struct
	{
		int                            Index;
		bool                           Visible;
	} params;
	params.Index = Index;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementDisplayMatrix
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetElementDisplayMatrix(int Index, const struct FMatrix& M)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementDisplayMatrix");

	struct
	{
		int                            Index;
		struct FMatrix                 M;
	} params;
	params.Index = Index;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementDisplayInfo
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FASDisplayInfo          D                              (CPF_Parm)

void UGFxObject::SetElementDisplayInfo(int Index, const struct FASDisplayInfo& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementDisplayInfo");

	struct
	{
		int                            Index;
		struct FASDisplayInfo          D;
	} params;
	params.Index = Index;
	params.D = D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementDisplayMatrix
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FMatrix                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMatrix UGFxObject::GetElementDisplayMatrix(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementDisplayMatrix");

	struct
	{
		int                            Index;
		struct FMatrix                 ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementDisplayInfo
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FASDisplayInfo UGFxObject::GetElementDisplayInfo(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementDisplayInfo");

	struct
	{
		int                            Index;
		struct FASDisplayInfo          ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetElementString
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 S                              (CPF_Parm, CPF_NeedCtorLink)

void UGFxObject::SetElementString(int Index, const struct FString& S)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementString");

	struct
	{
		int                            Index;
		struct FString                 S;
	} params;
	params.Index = Index;
	params.S = S;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementInt
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// int                            I                              (CPF_Parm)

void UGFxObject::SetElementInt(int Index, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementInt");

	struct
	{
		int                            Index;
		int                            I;
	} params;
	params.Index = Index;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementFloat
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// float                          F                              (CPF_Parm)

void UGFxObject::SetElementFloat(int Index, float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementFloat");

	struct
	{
		int                            Index;
		float                          F;
	} params;
	params.Index = Index;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementBool
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// bool                           B                              (CPF_Parm)

void UGFxObject::SetElementBool(int Index, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementBool");

	struct
	{
		int                            Index;
		bool                           B;
	} params;
	params.Index = Index;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElementObject
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetElementObject(int Index, class UGFxObject* val)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElementObject");

	struct
	{
		int                            Index;
		class UGFxObject*              val;
	} params;
	params.Index = Index;
	params.val = val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetElement
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FASValue                Arg                            (CPF_Parm, CPF_NeedCtorLink)

void UGFxObject::SetElement(int Index, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetElement");

	struct
	{
		int                            Index;
		struct FASValue                Arg;
	} params;
	params.Index = Index;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetElementString
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGFxObject::GetElementString(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementString");

	struct
	{
		int                            Index;
		struct FString                 ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementInt
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UGFxObject::GetElementInt(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementInt");

	struct
	{
		int                            Index;
		int                            ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementFloat
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UGFxObject::GetElementFloat(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementFloat");

	struct
	{
		int                            Index;
		float                          ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementBool
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxObject::GetElementBool(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementBool");

	struct
	{
		int                            Index;
		bool                           ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElementObject
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// class UClass*                  Type                           (CPF_OptionalParm, CPF_Parm)
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxObject::GetElementObject(int Index, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElementObject");

	struct
	{
		int                            Index;
		class UClass*                  Type;
		class UGFxObject*              ReturnValue;
	} params;
	params.Index = Index;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetElement
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// int                            Index                          (CPF_Parm)
// struct FASValue                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FASValue UGFxObject::GetElement(int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetElement");

	struct
	{
		int                            Index;
		struct FASValue                ReturnValue;
	} params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetText
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Text                           (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm, CPF_Parm)

void UGFxObject::SetText(const struct FString& Text, class UTranslationContext* InContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetText");

	struct
	{
		struct FString                 Text;
		class UTranslationContext*     InContext;
	} params;
	params.Text = Text;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetText
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGFxObject::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetText");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetVisible
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           Visible                        (CPF_Parm)

void UGFxObject::SetVisible(bool Visible)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetVisible");

	struct
	{
		bool                           Visible;
	} params;
	params.Visible = Visible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayMatrix3D
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix3D(const struct FMatrix& M)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayMatrix3D");

	struct
	{
		struct FMatrix                 M;
	} params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayMatrix
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FMatrix                 M                              (CPF_Parm)

void UGFxObject::SetDisplayMatrix(const struct FMatrix& M)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayMatrix");

	struct
	{
		struct FMatrix                 M;
	} params;
	params.M = M;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetColorTransform
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FASColorTransform       cxform                         (CPF_Parm)

void UGFxObject::SetColorTransform(const struct FASColorTransform& cxform)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetColorTransform");

	struct
	{
		struct FASColorTransform       cxform;
	} params;
	params.cxform = cxform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetPosition
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)

void UGFxObject::SetPosition(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetPosition");

	struct
	{
		float                          X;
		float                          Y;
	} params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetDisplayInfo
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FASDisplayInfo          D                              (CPF_Parm)

void UGFxObject::SetDisplayInfo(const struct FASDisplayInfo& D)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetDisplayInfo");

	struct
	{
		struct FASDisplayInfo          D;
	} params;
	params.D = D;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetDisplayMatrix3D
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FMatrix                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix3D()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayMatrix3D");

	struct
	{
		struct FMatrix                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetDisplayMatrix
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FMatrix                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FMatrix UGFxObject::GetDisplayMatrix()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayMatrix");

	struct
	{
		struct FMatrix                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetColorTransform
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FASColorTransform       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FASColorTransform UGFxObject::GetColorTransform()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetColorTransform");

	struct
	{
		struct FASColorTransform       ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetPosition
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          X                              (CPF_Parm, CPF_OutParm)
// float                          Y                              (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxObject::GetPosition(float* X, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetPosition");

	struct
	{
		float                          X;
		float                          Y;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetDisplayInfo
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FASDisplayInfo          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FASDisplayInfo UGFxObject::GetDisplayInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetDisplayInfo");

	struct
	{
		struct FASDisplayInfo          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.TranslateString
// (FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 StringToTranslate              (CPF_Parm, CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGFxObject::STATIC_TranslateString(const struct FString& StringToTranslate, class UTranslationContext* InContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.TranslateString");

	struct
	{
		struct FString                 StringToTranslate;
		class UTranslationContext*     InContext;
		struct FString                 ReturnValue;
	} params;
	params.StringToTranslate = StringToTranslate;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.SetFunction
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// class UObject*                 context                        (CPF_Parm)
// struct FName                   fname                          (CPF_Parm)

void UGFxObject::SetFunction(const struct FString& Member, class UObject* context, const struct FName& fname)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetFunction");

	struct
	{
		struct FString                 Member;
		class UObject*                 context;
		struct FName                   fname;
	} params;
	params.Member = Member;
	params.context = context;
	params.fname = fname;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetObject
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// class UGFxObject*              val                            (CPF_Parm)

void UGFxObject::SetObject(const struct FString& Member, class UGFxObject* val)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetObject");

	struct
	{
		struct FString                 Member;
		class UGFxObject*              val;
	} params;
	params.Member = Member;
	params.val = val;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetString
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 S                              (CPF_Parm, CPF_NeedCtorLink)
// class UTranslationContext*     InContext                      (CPF_OptionalParm, CPF_Parm)

void UGFxObject::SetString(const struct FString& Member, const struct FString& S, class UTranslationContext* InContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetString");

	struct
	{
		struct FString                 Member;
		struct FString                 S;
		class UTranslationContext*     InContext;
	} params;
	params.Member = Member;
	params.S = S;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetInt
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// int                            I                              (CPF_Parm)

void UGFxObject::SetInt(const struct FString& Member, int I)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetInt");

	struct
	{
		struct FString                 Member;
		int                            I;
	} params;
	params.Member = Member;
	params.I = I;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetFloat
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// float                          F                              (CPF_Parm)

void UGFxObject::SetFloat(const struct FString& Member, float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetFloat");

	struct
	{
		struct FString                 Member;
		float                          F;
	} params;
	params.Member = Member;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.SetBool
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// bool                           B                              (CPF_Parm)

void UGFxObject::SetBool(const struct FString& Member, bool B)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.SetBool");

	struct
	{
		struct FString                 Member;
		bool                           B;
	} params;
	params.Member = Member;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.Set
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// struct FASValue                Arg                            (CPF_Parm, CPF_NeedCtorLink)

void UGFxObject::Set(const struct FString& Member, const struct FASValue& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.Set");

	struct
	{
		struct FString                 Member;
		struct FASValue                Arg;
	} params;
	params.Member = Member;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxObject.GetObject
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// class UClass*                  Type                           (CPF_OptionalParm, CPF_Parm)
// class UGFxObject*              ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGFxObject* UGFxObject::GetObject(const struct FString& Member, class UClass* Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetObject");

	struct
	{
		struct FString                 Member;
		class UClass*                  Type;
		class UGFxObject*              ReturnValue;
	} params;
	params.Member = Member;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetString
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGFxObject::GetString(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetString");

	struct
	{
		struct FString                 Member;
		struct FString                 ReturnValue;
	} params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetInt
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UGFxObject::GetInt(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetInt");

	struct
	{
		struct FString                 Member;
		int                            ReturnValue;
	} params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetFloat
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UGFxObject::GetFloat(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetFloat");

	struct
	{
		struct FString                 Member;
		float                          ReturnValue;
	} params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.GetBool
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxObject::GetBool(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.GetBool");

	struct
	{
		struct FString                 Member;
		bool                           ReturnValue;
	} params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxObject.Get
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// struct FASValue                ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FASValue UGFxObject::Get(const struct FString& Member)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxObject.Get");

	struct
	{
		struct FString                 Member;
		struct FASValue                ReturnValue;
	} params;
	params.Member = Member;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxAction_CloseMovie::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_CloseMovie.IsValidLevelSequenceObject");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxAction_GetVariable::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_GetVariable.IsValidLevelSequenceObject");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxAction_Invoke::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_Invoke.IsValidLevelSequenceObject");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxAction_OpenMovie::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_OpenMovie.IsValidLevelSequenceObject");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxAction_SetVariable::IsValidLevelSequenceObject()
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxAction_SetVariable.IsValidLevelSequenceObject");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// class UGFxMoviePlayer*         Movie                          (CPF_Parm)
// class UGFxEvent_FSCommand*     Event                          (CPF_Parm)
// struct FString                 Cmd                            (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Arg                            (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGFxFSCmdHandler_Kismet::FSCommand(class UGFxMoviePlayer* Movie, class UGFxEvent_FSCommand* Event, const struct FString& Cmd, const struct FString& Arg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxFSCmdHandler_Kismet.FSCommand");

	struct
	{
		class UGFxMoviePlayer*         Movie;
		class UGFxEvent_FSCommand*     Event;
		struct FString                 Cmd;
		struct FString                 Arg;
		bool                           ReturnValue;
	} params;
	params.Movie = Movie;
	params.Event = Event;
	params.Cmd = Cmd;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// struct FString                 Event                          (CPF_Parm, CPF_NeedCtorLink)

void UGFxClikWidget::ASRemoveAllEventListeners(const struct FString& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.ASRemoveAllEventListeners");

	struct
	{
		struct FString                 Event;
	} params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.AS3AddEventListener
// (FUNC_Final, FUNC_Defined, FUNC_HasOptionalParms, FUNC_Private)
// Parameters:
// struct FString                 Type                           (CPF_Parm, CPF_NeedCtorLink)
// class UGFxObject*              O                              (CPF_Parm)
// bool                           useCapture                     (CPF_OptionalParm, CPF_Parm)
// int                            listenerPriority               (CPF_OptionalParm, CPF_Parm)
// bool                           useWeakReference               (CPF_OptionalParm, CPF_Parm)

void UGFxClikWidget::AS3AddEventListener(const struct FString& Type, class UGFxObject* O, bool useCapture, int listenerPriority, bool useWeakReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.AS3AddEventListener");

	struct
	{
		struct FString                 Type;
		class UGFxObject*              O;
		bool                           useCapture;
		int                            listenerPriority;
		bool                           useWeakReference;
	} params;
	params.Type = Type;
	params.O = O;
	params.useCapture = useCapture;
	params.listenerPriority = listenerPriority;
	params.useWeakReference = useWeakReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.ASAddEventListener
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// struct FString                 Type                           (CPF_Parm, CPF_NeedCtorLink)
// class UGFxObject*              O                              (CPF_Parm)
// struct FString                 func                           (CPF_Parm, CPF_NeedCtorLink)

void UGFxClikWidget::ASAddEventListener(const struct FString& Type, class UGFxObject* O, const struct FString& func)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.ASAddEventListener");

	struct
	{
		struct FString                 Type;
		class UGFxObject*              O;
		struct FString                 func;
	} params;
	params.Type = Type;
	params.O = O;
	params.func = func;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.SetListener
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UGFxObject*              O                              (CPF_Parm)
// struct FString                 Member                         (CPF_Parm, CPF_NeedCtorLink)
// struct FScriptDelegate         Listener                       (CPF_Parm, CPF_NeedCtorLink)

void UGFxClikWidget::SetListener(class UGFxObject* O, const struct FString& Member, const struct FScriptDelegate& Listener)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.SetListener");

	struct
	{
		class UGFxObject*              O;
		struct FString                 Member;
		struct FScriptDelegate         Listener;
	} params;
	params.O = O;
	params.Member = Member;
	params.Listener = Listener;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.GetEventStringFromTypename
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// struct FName                   Typename                       (CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGFxClikWidget::GetEventStringFromTypename(const struct FName& Typename)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.GetEventStringFromTypename");

	struct
	{
		struct FName                   Typename;
		struct FString                 ReturnValue;
	} params;
	params.Typename = Typename;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GFxUI.GFxClikWidget.RemoveAllEventListeners
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Event                          (CPF_Parm, CPF_NeedCtorLink)

void UGFxClikWidget::RemoveAllEventListeners(const struct FString& Event)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.RemoveAllEventListeners");

	struct
	{
		struct FString                 Event;
	} params;
	params.Event = Event;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.AddEventListener
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FName                   Type                           (CPF_Parm)
// struct FScriptDelegate         Listener                       (CPF_Parm, CPF_NeedCtorLink)
// bool                           useCapture                     (CPF_OptionalParm, CPF_Parm)
// int                            listenerPriority               (CPF_OptionalParm, CPF_Parm)
// bool                           useWeakReference               (CPF_OptionalParm, CPF_Parm)

void UGFxClikWidget::AddEventListener(const struct FName& Type, const struct FScriptDelegate& Listener, bool useCapture, int listenerPriority, bool useWeakReference)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.AddEventListener");

	struct
	{
		struct FName                   Type;
		struct FScriptDelegate         Listener;
		bool                           useCapture;
		int                            listenerPriority;
		bool                           useWeakReference;
	} params;
	params.Type = Type;
	params.Listener = Listener;
	params.useCapture = useCapture;
	params.listenerPriority = listenerPriority;
	params.useWeakReference = useWeakReference;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GFxUI.GFxClikWidget.EventListener
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// struct FEventData              Data                           (CPF_Parm, CPF_NeedCtorLink)

void UGFxClikWidget::EventListener(const struct FEventData& Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function GFxUI.GFxClikWidget.EventListener");

	struct
	{
		struct FEventData              Data;
	} params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
