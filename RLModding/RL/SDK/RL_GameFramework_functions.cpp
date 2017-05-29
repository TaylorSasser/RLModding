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

// Function GameFramework.GameAIController.GetActionString
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString AGameAIController::GetActionString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActionString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.SetDesiredRotation
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FRotator                TargetDesiredRotation          (CPF_Parm)
// bool                           InLockDesiredRotation          (CPF_OptionalParm, CPF_Parm)
// bool                           InUnlockWhenReached            (CPF_OptionalParm, CPF_Parm)
// float                          InterpolationTime              (CPF_OptionalParm, CPF_Parm)

void AGameAIController::SetDesiredRotation(const struct FRotator& TargetDesiredRotation, bool InLockDesiredRotation, bool InUnlockWhenReached, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.SetDesiredRotation");

	struct
	{
		struct FRotator                TargetDesiredRotation;
		bool                           InLockDesiredRotation;
		bool                           InUnlockWhenReached;
		float                          InterpolationTime;
	} params;
	params.TargetDesiredRotation = TargetDesiredRotation;
	params.InLockDesiredRotation = InLockDesiredRotation;
	params.InUnlockWhenReached = InUnlockWhenReached;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.AILog_Internal
// (FUNC_Event, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 LogText                        (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)
// struct FName                   LogCategory                    (CPF_OptionalParm, CPF_Parm)
// bool                           bForce                         (CPF_OptionalParm, CPF_Parm)

void AGameAIController::AILog_Internal(const struct FString& LogText, const struct FName& LogCategory, bool bForce)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AILog_Internal");

	struct
	{
		struct FString                 LogText;
		struct FName                   LogCategory;
		bool                           bForce;
	} params;
	params.LogText = LogText;
	params.LogCategory = LogCategory;
	params.bForce = bForce;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.RecordDemoAILog
// (FUNC_Protected)
// Parameters:
// struct FString                 LogText                        (CPF_Parm, CPF_CoerceParm, CPF_NeedCtorLink)

void AGameAIController::RecordDemoAILog(const struct FString& LogText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.RecordDemoAILog");

	struct
	{
		struct FString                 LogText;
	} params;
	params.LogText = LogText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.Destroyed
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AGameAIController::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.Destroyed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.ReachedIntermediateMoveGoal
// (FUNC_Public)

void AGameAIController::ReachedIntermediateMoveGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.ReachedIntermediateMoveGoal");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.ReachedMoveGoal
// (FUNC_Public)

void AGameAIController::ReachedMoveGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.ReachedMoveGoal");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetDestinationOffset
// (FUNC_Public)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float AGameAIController::GetDestinationOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetDestinationOffset");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.GetAICommandInStack
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UClass*                  InClass                        (CPF_Const, CPF_Parm)
// class UGameAICommand*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGameAICommand* AGameAIController::GetAICommandInStack(class UClass* InClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetAICommandInStack");

	struct
	{
		class UClass*                  InClass;
		class UGameAICommand*          ReturnValue;
	} params;
	params.InClass = InClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.FindCommandOfClass
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UClass*                  SearchClass                    (CPF_Parm)
// class UGameAICommand*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_CoerceParm)

class UGameAICommand* AGameAIController::FindCommandOfClass(class UClass* SearchClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.FindCommandOfClass");

	struct
	{
		class UClass*                  SearchClass;
		class UGameAICommand*          ReturnValue;
	} params;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.DumpCommandStack
// (FUNC_Final, FUNC_Native, FUNC_Public)

void AGameAIController::DumpCommandStack()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.DumpCommandStack");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.CheckCommandCount
// (FUNC_Final, FUNC_Native, FUNC_Public)

void AGameAIController::CheckCommandCount()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.CheckCommandCount");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.GetActiveCommand
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UGameAICommand*          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGameAICommand* AGameAIController::GetActiveCommand()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.GetActiveCommand");

	struct
	{
		class UGameAICommand*          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.AbortCommand
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UGameAICommand*          AbortCmd                       (CPF_Parm)
// class UClass*                  AbortClass                     (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameAIController::AbortCommand(class UGameAICommand* AbortCmd, class UClass* AbortClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AbortCommand");

	struct
	{
		class UGameAICommand*          AbortCmd;
		class UClass*                  AbortClass;
		bool                           ReturnValue;
	} params;
	params.AbortCmd = AbortCmd;
	params.AbortClass = AbortClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAIController.PopCommand
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UGameAICommand*          ToBePoppedCommand              (CPF_Parm)

void AGameAIController::PopCommand(class UGameAICommand* ToBePoppedCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PopCommand");

	struct
	{
		class UGameAICommand*          ToBePoppedCommand;
	} params;
	params.ToBePoppedCommand = ToBePoppedCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.PushCommand
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UGameAICommand*          NewCommand                     (CPF_Parm)

void AGameAIController::PushCommand(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.PushCommand");

	struct
	{
		class UGameAICommand*          NewCommand;
	} params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAIController.AllCommands
// (FUNC_Final, FUNC_Iterator, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class UClass*                  BaseClass                      (CPF_Parm)
// class UGameAICommand*          Cmd                            (CPF_Parm, CPF_OutParm)

void AGameAIController::AllCommands(class UClass* BaseClass, class UGameAICommand** Cmd)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAIController.AllCommands");

	struct
	{
		class UClass*                  BaseClass;
		class UGameAICommand*          Cmd;
	} params;
	params.BaseClass = BaseClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Cmd != nullptr)
		*Cmd = params.Cmd;
}


// Function GameFramework.GameAICommand.HandlePathObstruction
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  BlockedBy                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICommand::HandlePathObstruction(class AActor* BlockedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.HandlePathObstruction");

	struct
	{
		class AActor*                  BlockedBy;
		bool                           ReturnValue;
	} params;
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.MoveUnreachable
// (FUNC_Public)
// Parameters:
// struct FVector                 AttemptedDest                  (CPF_Parm)
// class AActor*                  AttemptedTarget                (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICommand::MoveUnreachable(const struct FVector& AttemptedDest, class AActor* AttemptedTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.MoveUnreachable");

	struct
	{
		struct FVector                 AttemptedDest;
		class AActor*                  AttemptedTarget;
		bool                           ReturnValue;
	} params;
	params.AttemptedDest = AttemptedDest;
	params.AttemptedTarget = AttemptedTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.NotifyNeedRepath
// (FUNC_Public)

void UGameAICommand::NotifyNeedRepath()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.NotifyNeedRepath");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.GetDebugVerboseText
// (FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGameAICommand::GetDebugVerboseText()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugVerboseText");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.GetDebugOverheadText
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm)
// TArray<struct FString>         OutText                        (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UGameAICommand::GetDebugOverheadText(class APlayerController* PC, TArray<struct FString>* OutText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDebugOverheadText");

	struct
	{
		class APlayerController*       PC;
		TArray<struct FString>         OutText;
	} params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;
}


// Function GameFramework.GameAICommand.DrawDebug
// (FUNC_Event, FUNC_Public)
// Parameters:
// class AHUD*                    H                              (CPF_Parm)
// struct FName                   Category                       (CPF_Parm)

void UGameAICommand::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.DrawDebug");

	struct
	{
		class AHUD*                    H;
		struct FName                   Category;
	} params;
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.GetDumpString
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGameAICommand::GetDumpString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.GetDumpString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.Resumed
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FName                   OldCommandName                 (CPF_Parm)

void UGameAICommand::Resumed(const struct FName& OldCommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Resumed");

	struct
	{
		struct FName                   OldCommandName;
	} params;
	params.OldCommandName = OldCommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Paused
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UGameAICommand*          NewCommand                     (CPF_Parm)

void UGameAICommand::Paused(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Paused");

	struct
	{
		class UGameAICommand*          NewCommand;
	} params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Popped
// (FUNC_Defined, FUNC_Public)

void UGameAICommand::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Popped");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.Pushed
// (FUNC_Defined, FUNC_Public)

void UGameAICommand::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Pushed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.PostPopped
// (FUNC_Public)

void UGameAICommand::PostPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PostPopped");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.PrePushed
// (FUNC_Public)
// Parameters:
// class AGameAIController*       AI                             (CPF_Parm)

void UGameAICommand::PrePushed(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.PrePushed");

	struct
	{
		class AGameAIController*       AI;
	} params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.AllowStateTransitionTo
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FName                   StateName                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICommand::AllowStateTransitionTo(const struct FName& StateName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowStateTransitionTo");

	struct
	{
		struct FName                   StateName;
		bool                           ReturnValue;
	} params;
	params.StateName = StateName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.AllowTransitionTo
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UClass*                  AttemptCommand                 (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICommand::AllowTransitionTo(class UClass* AttemptCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.AllowTransitionTo");

	struct
	{
		class UClass*                  AttemptCommand;
		bool                           ReturnValue;
	} params;
	params.AttemptCommand = AttemptCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.Tick
// (FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UGameAICommand::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.Tick");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.ShouldIgnoreNotifies
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICommand::ShouldIgnoreNotifies()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.ShouldIgnoreNotifies");

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


// Function GameFramework.GameAICommand.InternalTick
// (FUNC_Final, FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UGameAICommand::InternalTick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalTick");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalResumed
// (FUNC_Final, FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   OldCommandName                 (CPF_Parm)

void UGameAICommand::InternalResumed(const struct FName& OldCommandName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalResumed");

	struct
	{
		struct FName                   OldCommandName;
	} params;
	params.OldCommandName = OldCommandName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPaused
// (FUNC_Final, FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UGameAICommand*          NewCommand                     (CPF_Parm)

void UGameAICommand::InternalPaused(class UGameAICommand* NewCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPaused");

	struct
	{
		class UGameAICommand*          NewCommand;
	} params;
	params.NewCommand = NewCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPopped
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UGameAICommand::InternalPopped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPopped");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPushed
// (FUNC_Final, FUNC_Defined, FUNC_Event, FUNC_Public)

void UGameAICommand::InternalPushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPushed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InternalPrePushed
// (FUNC_Final, FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class AGameAIController*       AI                             (CPF_Parm)

void UGameAICommand::InternalPrePushed(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InternalPrePushed");

	struct
	{
		class AGameAIController*       AI;
	} params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICommand.InitCommand
// (FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class AGameAIController*       AI                             (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICommand::STATIC_InitCommand(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommand");

	struct
	{
		class AGameAIController*       AI;
		bool                           ReturnValue;
	} params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICommand.InitCommandUserActor
// (FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class AGameAIController*       AI                             (CPF_Parm)
// class AActor*                  UserActor                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICommand::STATIC_InitCommandUserActor(class AGameAIController* AI, class AActor* UserActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICommand.InitCommandUserActor");

	struct
	{
		class AGameAIController*       AI;
		class AActor*                  UserActor;
		bool                           ReturnValue;
	} params;
	params.AI = AI;
	params.UserActor = UserActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerController.ClientColorFade
// (FUNC_Net, FUNC_NetReliable, FUNC_Simulated, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FColor                  FadeColor                      (CPF_Parm)
// unsigned char                  FromAlpha                      (CPF_Parm)
// unsigned char                  ToAlpha                        (CPF_Parm)
// float                          FadeTime                       (CPF_Parm)

void AGamePlayerController::ClientColorFade(const struct FColor& FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientColorFade");

	struct
	{
		struct FColor                  FadeColor;
		unsigned char                  FromAlpha;
		unsigned char                  ToAlpha;
		float                          FadeTime;
	} params;
	params.FadeColor = FadeColor;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.WarmupPause
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// bool                           bDesiredPauseState             (CPF_Parm)

void AGamePlayerController::WarmupPause(bool bDesiredPauseState)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.WarmupPause");

	struct
	{
		bool                           bDesiredPauseState;
	} params;
	params.bDesiredPauseState = bDesiredPauseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGamePlayerController::CanUnpauseWarmup()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CanUnpauseWarmup");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerController.GetCurrentMovie
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 MovieName                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void AGamePlayerController::GetCurrentMovie(struct FString* MovieName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetCurrentMovie");

	struct
	{
		struct FString                 MovieName;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieName != nullptr)
		*MovieName = params.MovieName;
}


// Function GameFramework.GamePlayerController.ClientStopMovie
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Simulated, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// float                          DelayInSeconds                 (CPF_Parm)
// bool                           bAllowMovieToFinish            (CPF_Parm)
// bool                           bForceStopNonSkippable         (CPF_Parm)
// bool                           bForceStopLoadingMovie         (CPF_Parm)

void AGamePlayerController::ClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientStopMovie");

	struct
	{
		float                          DelayInSeconds;
		bool                           bAllowMovieToFinish;
		bool                           bForceStopNonSkippable;
		bool                           bForceStopLoadingMovie;
	} params;
	params.DelayInSeconds = DelayInSeconds;
	params.bAllowMovieToFinish = bAllowMovieToFinish;
	params.bForceStopNonSkippable = bForceStopNonSkippable;
	params.bForceStopLoadingMovie = bForceStopLoadingMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ClientPlayMovie
// (FUNC_Final, FUNC_Net, FUNC_NetReliable, FUNC_Simulated, FUNC_Native, FUNC_Event, FUNC_Public, FUNC_NetClient)
// Parameters:
// struct FString                 MovieName                      (CPF_Parm, CPF_NeedCtorLink)
// int                            InStartOfRenderingMovieFrame   (CPF_Parm)
// int                            InEndOfRenderingMovieFrame     (CPF_Parm)
// bool                           bRestrictPausing               (CPF_Parm)
// bool                           bPlayOnceFromStream            (CPF_Parm)
// bool                           bOnlyBackButtonSkipsMovie      (CPF_Parm)

void AGamePlayerController::ClientPlayMovie(const struct FString& MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, bool bRestrictPausing, bool bPlayOnceFromStream, bool bOnlyBackButtonSkipsMovie)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ClientPlayMovie");

	struct
	{
		struct FString                 MovieName;
		int                            InStartOfRenderingMovieFrame;
		int                            InEndOfRenderingMovieFrame;
		bool                           bRestrictPausing;
		bool                           bPlayOnceFromStream;
		bool                           bOnlyBackButtonSkipsMovie;
	} params;
	params.MovieName = MovieName;
	params.InStartOfRenderingMovieFrame = InStartOfRenderingMovieFrame;
	params.InEndOfRenderingMovieFrame = InEndOfRenderingMovieFrame;
	params.bRestrictPausing = bRestrictPausing;
	params.bPlayOnceFromStream = bPlayOnceFromStream;
	params.bOnlyBackButtonSkipsMovie = bOnlyBackButtonSkipsMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)

void AGamePlayerController::STATIC_KeepPlayingLoadingMovie()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ShowLoadingMovie
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// bool                           bShowMovie                     (CPF_Parm)
// bool                           bPauseAfterHide                (CPF_OptionalParm, CPF_Parm)
// float                          PauseDuration                  (CPF_OptionalParm, CPF_Parm)
// float                          KeepPlayingDuration            (CPF_OptionalParm, CPF_Parm)
// bool                           bOverridePreviousDelays        (CPF_OptionalParm, CPF_Parm)

void AGamePlayerController::STATIC_ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.ShowLoadingMovie");

	struct
	{
		bool                           bShowMovie;
		bool                           bPauseAfterHide;
		float                          PauseDuration;
		float                          KeepPlayingDuration;
		bool                           bOverridePreviousDelays;
	} params;
	params.bShowMovie = bShowMovie;
	params.bPauseAfterHide = bPauseAfterHide;
	params.PauseDuration = PauseDuration;
	params.KeepPlayingDuration = KeepPlayingDuration;
	params.bOverridePreviousDelays = bOverridePreviousDelays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.SetSoundMode
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// struct FName                   InSoundModeName                (CPF_Parm)

void AGamePlayerController::SetSoundMode(const struct FName& InSoundModeName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.SetSoundMode");

	struct
	{
		struct FName                   InSoundModeName;
	} params;
	params.InSoundModeName = InSoundModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// (FUNC_Defined, FUNC_Simulated, FUNC_Protected)
// Parameters:
// class UCameraShake*            ShakeData                      (CPF_Parm)
// float                          Scale                          (CPF_Parm)

void AGamePlayerController::DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake");

	struct
	{
		class UCameraShake*            ShakeData;
		float                          Scale;
	} params;
	params.ShakeData = ShakeData;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius
// (FUNC_Event, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGamePlayerController::NotifyCrowdAgentInRadius(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentInRadius");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh
// (FUNC_Event, FUNC_Public)

void AGamePlayerController::NotifyCrowdAgentRefresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.NotifyCrowdAgentRefresh");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CrowdDebug
// (FUNC_Defined, FUNC_Exec, FUNC_Public)
// Parameters:
// bool                           bEnabled                       (CPF_Parm)

void AGamePlayerController::CrowdDebug(bool bEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.CrowdDebug");

	struct
	{
		bool                           bEnabled;
	} params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int AGamePlayerController::GetUIPlayerIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.GetUIPlayerIndex");

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


// Function GameFramework.GamePlayerController.OnToggleMouseCursor
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class USeqAct_ToggleMouseCursor* inAction                       (CPF_Parm)

void AGamePlayerController::OnToggleMouseCursor(class USeqAct_ToggleMouseCursor* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerController.OnToggleMouseCursor");

	struct
	{
		class USeqAct_ToggleMouseCursor* inAction;
	} params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.OnRequestComplete
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UHttpRequestInterface*   OriginalRequest                (CPF_Parm)
// class UHttpResponseInterface*  Response                       (CPF_Parm)
// bool                           bDidSucceed                    (CPF_Parm)

void UGameCheatManager::OnRequestComplete(class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, bool bDidSucceed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.OnRequestComplete");

	struct
	{
		class UHttpRequestInterface*   OriginalRequest;
		class UHttpResponseInterface*  Response;
		bool                           bDidSucceed;
	} params;
	params.OriginalRequest = OriginalRequest;
	params.Response = Response;
	params.bDidSucceed = bDidSucceed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.TestHttp
// (FUNC_Defined, FUNC_Exec, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Verb                           (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Payload                        (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 URL                            (CPF_Parm, CPF_NeedCtorLink)
// bool                           bSendParallelRequest           (CPF_OptionalParm, CPF_Parm)

void UGameCheatManager::TestHttp(const struct FString& Verb, const struct FString& Payload, const struct FString& URL, bool bSendParallelRequest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.TestHttp");

	struct
	{
		struct FString                 Verb;
		struct FString                 Payload;
		struct FString                 URL;
		bool                           bSendParallelRequest;
	} params;
	params.Verb = Verb;
	params.Payload = Payload;
	params.URL = URL;
	params.bSendParallelRequest = bSendParallelRequest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.EnableDebugCamera
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// bool                           bEnableDebugText               (CPF_Parm)

void UGameCheatManager::EnableDebugCamera(bool bEnableDebugText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.EnableDebugCamera");

	struct
	{
		bool                           bEnableDebugText;
	} params;
	params.bEnableDebugText = bEnableDebugText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.TeleportPawnToCamera
// (FUNC_Defined, FUNC_Exec, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// bool                           bToggleDebugCameraOff          (CPF_OptionalParm, CPF_Parm)

void UGameCheatManager::TeleportPawnToCamera(bool bToggleDebugCameraOff)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.TeleportPawnToCamera");

	struct
	{
		bool                           bToggleDebugCameraOff;
	} params;
	params.bToggleDebugCameraOff = bToggleDebugCameraOff;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.ToggleDebugCamera
// (FUNC_Defined, FUNC_Exec, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// bool                           bDrawDebugText                 (CPF_OptionalParm, CPF_Parm)

void UGameCheatManager::ToggleDebugCamera(bool bDrawDebugText)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.ToggleDebugCamera");

	struct
	{
		bool                           bDrawDebugText;
	} params;
	params.bDrawDebugText = bDrawDebugText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCheatManager.PatchDebugCameraController
// (FUNC_Defined, FUNC_Public)

void UGameCheatManager::PatchDebugCameraController()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCheatManager.PatchDebugCameraController");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.InitDebugColor
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameCrowdAgent::InitDebugColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitDebugColor");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GetBehaviorString
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString AGameCrowdAgent::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetBehaviorString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.GetDestString
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString AGameCrowdAgent::GetDestString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetDestString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.PostRenderFor
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 CameraPosition                 (CPF_Parm)
// struct FVector                 CameraDir                      (CPF_Parm)

void AGameCrowdAgent::PostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostRenderFor");

	struct
	{
		class APlayerController*       PC;
		class UCanvas*                 Canvas;
		struct FVector                 CameraPosition;
		struct FVector                 CameraDir;
	} params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.NativePostRenderFor
// (FUNC_Simulated, FUNC_Native, FUNC_Public)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// struct FVector                 CameraPosition                 (CPF_Parm)
// struct FVector                 CameraDir                      (CPF_Parm)

void AGameCrowdAgent::NativePostRenderFor(class APlayerController* PC, class UCanvas* Canvas, const struct FVector& CameraPosition, const struct FVector& CameraDir)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NativePostRenderFor");

	struct
	{
		class APlayerController*       PC;
		class UCanvas*                 Canvas;
		struct FVector                 CameraPosition;
		struct FVector                 CameraDir;
	} params;
	params.PC = PC;
	params.Canvas = Canvas;
	params.CameraPosition = CameraPosition;
	params.CameraDir = CameraDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GeneratePathToActor
// (FUNC_Defined, FUNC_Event, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class AActor*                  Goal                           (CPF_Parm)
// float                          WithinDistance                 (CPF_OptionalParm, CPF_Parm)
// bool                           bAllowPartialPath              (CPF_OptionalParm, CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector AGameCrowdAgent::GeneratePathToActor(class AActor* Goal, float WithinDistance, bool bAllowPartialPath)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GeneratePathToActor");

	struct
	{
		class AActor*                  Goal;
		float                          WithinDistance;
		bool                           bAllowPartialPath;
		struct FVector                 ReturnValue;
	} params;
	params.Goal = Goal;
	params.WithinDistance = WithinDistance;
	params.bAllowPartialPath = bAllowPartialPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.InitNavigationHandle
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AGameCrowdAgent::InitNavigationHandle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitNavigationHandle");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.OverlappedActorEvent
// (FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  A                              (CPF_Parm)

void AGameCrowdAgent::OverlappedActorEvent(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OverlappedActorEvent");

	struct
	{
		class AActor*                  A;
	} params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.TakeDamage
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            DamageAmount                   (CPF_Parm)
// class AController*             EventInstigator                (CPF_Parm)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 Momentum                       (CPF_Parm)
// class UClass*                  DamageType                     (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_OptionalParm, CPF_Parm)
// class AActor*                  DamageCauser                   (CPF_OptionalParm, CPF_Parm)

void AGameCrowdAgent::TakeDamage(int DamageAmount, class AController* EventInstigator, const struct FVector& HitLocation, const struct FVector& Momentum, class UClass* DamageType, const struct FTraceHitInfo& HitInfo, class AActor* DamageCauser)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TakeDamage");

	struct
	{
		int                            DamageAmount;
		class AController*             EventInstigator;
		struct FVector                 HitLocation;
		struct FVector                 Momentum;
		class UClass*                  DamageType;
		struct FTraceHitInfo           HitInfo;
		class AActor*                  DamageCauser;
	} params;
	params.DamageAmount = DamageAmount;
	params.EventInstigator = EventInstigator;
	params.HitLocation = HitLocation;
	params.Momentum = Momentum;
	params.DamageType = DamageType;
	params.HitInfo = HitInfo;
	params.DamageCauser = DamageCauser;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.FireDeathEvent
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)

void AGameCrowdAgent::FireDeathEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FireDeathEvent");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlayDeath
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FVector                 KillMomentum                   (CPF_Parm)

void AGameCrowdAgent::PlayDeath(const struct FVector& KillMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayDeath");

	struct
	{
		struct FVector                 KillMomentum;
	} params;
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint
// (FUNC_Defined, FUNC_Event, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class AActor*                  DestinationActor               (CPF_OptionalParm, CPF_Parm)

void AGameCrowdAgent::UpdateIntermediatePoint(class AActor* DestinationActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.UpdateIntermediatePoint");

	struct
	{
		class AActor*                  DestinationActor;
	} params;
	params.DestinationActor = DestinationActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.CalcCamera
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// float                          fDeltaTime                     (CPF_Parm)
// struct FVector                 out_CamLoc                     (CPF_Parm, CPF_OutParm)
// struct FRotator                out_CamRot                     (CPF_Parm, CPF_OutParm)
// float                          out_FOV                        (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdAgent::CalcCamera(float fDeltaTime, struct FVector* out_CamLoc, struct FRotator* out_CamRot, float* out_FOV)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.CalcCamera");

	struct
	{
		float                          fDeltaTime;
		struct FVector                 out_CamLoc;
		struct FRotator                out_CamRot;
		float                          out_FOV;
		bool                           ReturnValue;
	} params;
	params.fDeltaTime = fDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_CamLoc != nullptr)
		*out_CamLoc = params.out_CamLoc;
	if (out_CamRot != nullptr)
		*out_CamRot = params.out_CamRot;
	if (out_FOV != nullptr)
		*out_FOV = params.out_FOV;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.IsIdle
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdAgent::IsIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsIdle");

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


// Function GameFramework.GameCrowdAgent.SetCurrentBehavior
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class UGameCrowdAgentBehavior* BehaviorArchetype              (CPF_Parm)

void AGameCrowdAgent::SetCurrentBehavior(class UGameCrowdAgentBehavior* BehaviorArchetype)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentBehavior");

	struct
	{
		class UGameCrowdAgentBehavior* BehaviorArchetype;
	} params;
	params.BehaviorArchetype = BehaviorArchetype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.StopBehavior
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AGameCrowdAgent::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopBehavior");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.HandleBehaviorEvent
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class ECrowdBehaviorEvent> EventType                      (CPF_Parm)
// class AActor*                  InInstigator                   (CPF_Parm)
// bool                           bViralCause                    (CPF_Parm)
// bool                           bPropagateViralFlag            (CPF_Parm)

void AGameCrowdAgent::HandleBehaviorEvent(TEnumAsByte<enum class ECrowdBehaviorEvent> EventType, class AActor* InInstigator, bool bViralCause, bool bPropagateViralFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.HandleBehaviorEvent");

	struct
	{
		TEnumAsByte<enum class ECrowdBehaviorEvent> EventType;
		class AActor*                  InInstigator;
		bool                           bViralCause;
		bool                           bPropagateViralFlag;
	} params;
	params.EventType = EventType;
	params.InInstigator = InInstigator;
	params.bViralCause = bViralCause;
	params.bPropagateViralFlag = bPropagateViralFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UGameCrowdAgentBehavior* NewBehaviorObject              (CPF_Parm)

void AGameCrowdAgent::ActivateInstancedBehavior(class UGameCrowdAgentBehavior* NewBehaviorObject)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateInstancedBehavior");

	struct
	{
		class UGameCrowdAgentBehavior* NewBehaviorObject;
	} params;
	params.NewBehaviorObject = NewBehaviorObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ActivateBehavior
// (FUNC_Defined, FUNC_Event, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           (CPF_Parm)
// class AActor*                  LookAtActor                    (CPF_OptionalParm, CPF_Parm)

void AGameCrowdAgent::ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ActivateBehavior");

	struct
	{
		class UGameCrowdAgentBehavior* NewBehaviorArchetype;
		class AActor*                  LookAtActor;
	} params;
	params.NewBehaviorArchetype = NewBehaviorArchetype;
	params.LookAtActor = LookAtActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ResetSeePlayer
// (FUNC_Defined, FUNC_Public)

void AGameCrowdAgent::ResetSeePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetSeePlayer");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.TryRandomBehavior
// (FUNC_Defined, FUNC_Public)

void AGameCrowdAgent::TryRandomBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.TryRandomBehavior");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.NotifySeePlayer
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm)

void AGameCrowdAgent::NotifySeePlayer(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.NotifySeePlayer");

	struct
	{
		class APlayerController*       PC;
	} params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlaySpawnBehavior
// (FUNC_Defined, FUNC_Public)

void AGameCrowdAgent::PlaySpawnBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlaySpawnBehavior");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AGameCrowdAgent::HandlePotentialAgentEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.HandlePotentialAgentEncounter");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.StopIdleAnimation
// (FUNC_Simulated, FUNC_Event, FUNC_Public)

void AGameCrowdAgent::StopIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.StopIdleAnimation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PlayIdleAnimation
// (FUNC_Simulated, FUNC_Event, FUNC_Public)

void AGameCrowdAgent::PlayIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PlayIdleAnimation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class USeqAct_PlayAgentAnimation* Action                         (CPF_Parm)

void AGameCrowdAgent::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.OnPlayAgentAnimation");

	struct
	{
		class USeqAct_PlayAgentAnimation* Action;
	} params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.InitializeAgent
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class AActor*                  SpawnLoc                       (CPF_Parm)
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class AGameCrowdAgent*         AgentTemplate                  (CPF_Parm)
// class UGameCrowdGroup*         NewGroup                       (CPF_Parm)
// float                          AgentWarmupTime                (CPF_Parm)
// bool                           bWarmupPosition                (CPF_Parm)
// bool                           bCheckWarmupVisibility         (CPF_Parm)

void AGameCrowdAgent::InitializeAgent(class AActor* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, float AgentWarmupTime, bool bWarmupPosition, bool bCheckWarmupVisibility, TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.InitializeAgent");

	struct
	{
		class AActor*                  SpawnLoc;
		TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo;
		class AGameCrowdAgent*         AgentTemplate;
		class UGameCrowdGroup*         NewGroup;
		float                          AgentWarmupTime;
		bool                           bWarmupPosition;
		bool                           bCheckWarmupVisibility;
	} params;
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;
	params.AgentWarmupTime = AgentWarmupTime;
	params.bWarmupPosition = bWarmupPosition;
	params.bCheckWarmupVisibility = bCheckWarmupVisibility;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;
}


// Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// float                          Pct                            (CPF_Parm)
// struct FVector                 CurPos                         (CPF_Parm)
// float                          CurRadius                      (CPF_Parm)
// struct FVector                 DestPos                        (CPF_Parm)
// float                          DestRadius                     (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector AGameCrowdAgent::GetAttemptedSpawnLocation(float Pct, const struct FVector& CurPos, float CurRadius, const struct FVector& DestPos, float DestRadius)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetAttemptedSpawnLocation");

	struct
	{
		float                          Pct;
		struct FVector                 CurPos;
		float                          CurRadius;
		struct FVector                 DestPos;
		float                          DestRadius;
		struct FVector                 ReturnValue;
	} params;
	params.Pct = Pct;
	params.CurPos = CurPos;
	params.CurRadius = CurRadius;
	params.DestPos = DestPos;
	params.DestRadius = DestRadius;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.SetLighting
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// bool                           bEnableLightEnvironment        (CPF_Parm)
// struct FLightingChannelContainer AgentLightingChannel           (CPF_Parm)
// bool                           bCastShadows                   (CPF_Parm)

void AGameCrowdAgent::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetLighting");

	struct
	{
		bool                           bEnableLightEnvironment;
		struct FLightingChannelContainer AgentLightingChannel;
		bool                           bCastShadows;
	} params;
	params.bEnableLightEnvironment = bEnableLightEnvironment;
	params.AgentLightingChannel = AgentLightingChannel;
	params.bCastShadows = bCastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.DisplayDebug
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm, CPF_OutParm)
// float                          out_YPos                       (CPF_Parm, CPF_OutParm)

void AGameCrowdAgent::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.DisplayDebug");

	struct
	{
		class AHUD*                    HUD;
		float                          out_YL;
		float                          out_YPos;
	} params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCrowdAgent.Destroyed
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameCrowdAgent::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.Destroyed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.ResetPooledAgent
// (FUNC_Defined, FUNC_Public)

void AGameCrowdAgent::ResetPooledAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.ResetPooledAgent");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.KillAgent
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AGameCrowdAgent::KillAgent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.KillAgent");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PostBeginPlay
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasDefaults)

void AGameCrowdAgent::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetMaxSpeed
// (FUNC_Defined, FUNC_Public)

void AGameCrowdAgent::SetMaxSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetMaxSpeed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.SetCurrentDestination
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class AGameCrowdDestination*   NewDest                        (CPF_Parm)

void AGameCrowdAgent::SetCurrentDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.SetCurrentDestination");

	struct
	{
		class AGameCrowdDestination*   NewDest;
	} params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.WaitForGroupMembers
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AGameCrowdAgent::WaitForGroupMembers()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.WaitForGroupMembers");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.PickBehaviorFrom
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// TArray<struct FBehaviorEntry>  BehaviorList                   (CPF_Parm, CPF_NeedCtorLink)
// struct FVector                 BestCameraLoc                  (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdAgent::PickBehaviorFrom(TArray<struct FBehaviorEntry> BehaviorList, const struct FVector& BestCameraLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.PickBehaviorFrom");

	struct
	{
		TArray<struct FBehaviorEntry>  BehaviorList;
		struct FVector                 BestCameraLoc;
		bool                           ReturnValue;
	} params;
	params.BehaviorList = BehaviorList;
	params.BestCameraLoc = BestCameraLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgent.IsPanicked
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdAgent::IsPanicked()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.IsPanicked");

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


// Function GameFramework.GameCrowdAgent.FellOutOfWorld
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// class UClass*                  dmgType                        (CPF_Parm)

void AGameCrowdAgent::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.FellOutOfWorld");

	struct
	{
		class UClass*                  dmgType;
	} params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgent.GetCollisionExtent
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector AGameCrowdAgent::GetCollisionExtent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgent.GetCollisionExtent");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameCrowdAgentSkeletal::CreateAttachments()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.CreateAttachments");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void AGameCrowdAgentSkeletal::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnAnimEnd");

	struct
	{
		class UAnimNodeSequence*       SeqNode;
		float                          PlayedTime;
		float                          ExcessTime;
	} params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)

void AGameCrowdAgentSkeletal::StopIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.StopIdleAnimation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)

void AGameCrowdAgentSkeletal::PlayIdleAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayIdleAnimation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AGameCrowdAgentSkeletal::ClearLatentAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.ClearLatentAnimation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class USeqAct_PlayAgentAnimation* Action                         (CPF_Parm)

void AGameCrowdAgentSkeletal::OnPlayAgentAnimation(class USeqAct_PlayAgentAnimation* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.OnPlayAgentAnimation");

	struct
	{
		class USeqAct_PlayAgentAnimation* Action;
	} params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bRootMotionEnabled             (CPF_Parm)

void AGameCrowdAgentSkeletal::SetRootMotion(bool bRootMotionEnabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetRootMotion");

	struct
	{
		bool                           bRootMotionEnabled;
	} params;
	params.bRootMotionEnabled = bRootMotionEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PlayDeath
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FVector                 KillMomentum                   (CPF_Parm)

void AGameCrowdAgentSkeletal::PlayDeath(const struct FVector& KillMomentum)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PlayDeath");

	struct
	{
		struct FVector                 KillMomentum;
	} params;
	params.KillMomentum = KillMomentum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.SetLighting
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// bool                           bEnableLightEnvironment        (CPF_Parm)
// struct FLightingChannelContainer AgentLightingChannel           (CPF_Parm)
// bool                           bCastShadows                   (CPF_Parm)

void AGameCrowdAgentSkeletal::SetLighting(bool bEnableLightEnvironment, const struct FLightingChannelContainer& AgentLightingChannel, bool bCastShadows)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.SetLighting");

	struct
	{
		bool                           bEnableLightEnvironment;
		struct FLightingChannelContainer AgentLightingChannel;
		bool                           bCastShadows;
	} params;
	params.bEnableLightEnvironment = bEnableLightEnvironment;
	params.AgentLightingChannel = AgentLightingChannel;
	params.bCastShadows = bCastShadows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameCrowdAgentSkeletal::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSkeletal.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.StopBehavior
// (FUNC_Defined, FUNC_Public)

void AGameCrowdAgentSM::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.StopBehavior");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.ActivateBehavior
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UGameCrowdAgentBehavior* NewBehaviorArchetype           (CPF_Parm)
// class AActor*                  LookAtActor                    (CPF_OptionalParm, CPF_Parm)

void AGameCrowdAgentSM::ActivateBehavior(class UGameCrowdAgentBehavior* NewBehaviorArchetype, class AActor* LookAtActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.ActivateBehavior");

	struct
	{
		class UGameCrowdAgentBehavior* NewBehaviorArchetype;
		class AActor*                  LookAtActor;
	} params;
	params.NewBehaviorArchetype = NewBehaviorArchetype;
	params.LookAtActor = LookAtActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.ChangeDebugColor
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// struct FColor                  InC                            (CPF_Parm)

void AGameCrowdAgentSM::ChangeDebugColor(const struct FColor& InC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.ChangeDebugColor");

	struct
	{
		struct FColor                  InC;
	} params;
	params.InC = InC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.InitDebugColor
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameCrowdAgentSM::InitDebugColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.InitDebugColor");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentSM.PostBeginPlay
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameCrowdAgentSM::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentSM.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameCrowdAgentBehavior::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowBehaviorAt");

	struct
	{
		class AGameCrowdDestination*   Destination;
		bool                           ReturnValue;
	} params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameCrowdAgentBehavior::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.AllowThisDestination");

	struct
	{
		class AGameCrowdDestination*   Destination;
		bool                           ReturnValue;
	} params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         OtherAgent                     (CPF_Parm)

void UGameCrowdAgentBehavior::PropagateViralBehaviorTo(class AGameCrowdAgent* OtherAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.PropagateViralBehaviorTo");

	struct
	{
		class AGameCrowdAgent*         OtherAgent;
	} params;
	params.OtherAgent = OtherAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class AActor* UGameCrowdAgentBehavior::GetBehaviorInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorInstigator");

	struct
	{
		class AActor*                  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.ActivatedBy
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  NewActionTarget                (CPF_Parm)

void UGameCrowdAgentBehavior::ActivatedBy(class AActor* NewActionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ActivatedBy");

	struct
	{
		class AActor*                  NewActionTarget;
	} params;
	params.NewActionTarget = NewActionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class AActor* UGameCrowdAgentBehavior::GetDestinationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetDestinationActor");

	struct
	{
		class AActor*                  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.ChangingDestination
// (FUNC_Public)
// Parameters:
// class AGameCrowdDestination*   NewDest                        (CPF_Parm)

void UGameCrowdAgentBehavior::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ChangingDestination");

	struct
	{
		class AGameCrowdDestination*   NewDest;
	} params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGameCrowdAgentBehavior::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.GetBehaviorString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd
// (FUNC_Event, FUNC_Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void UGameCrowdAgentBehavior::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.OnAnimEnd");

	struct
	{
		class UAnimNodeSequence*       SeqNode;
		float                          PlayedTime;
		float                          ExcessTime;
	} params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.StopBehavior
// (FUNC_Public)

void UGameCrowdAgentBehavior::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.StopBehavior");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.InitBehavior
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdAgentBehavior::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.InitBehavior");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.HandleMovement
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameCrowdAgentBehavior::HandleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.HandleMovement");

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


// Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation
// (FUNC_Event, FUNC_Public)

void UGameCrowdAgentBehavior::FinishedTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.FinishedTargetRotation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// struct FVector                 CameraLoc                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameCrowdAgentBehavior::CanBeUsedBy(class AGameCrowdAgent* Agent, const struct FVector& CameraLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.CanBeUsedBy");

	struct
	{
		class AGameCrowdAgent*         Agent;
		struct FVector                 CameraLoc;
		bool                           ReturnValue;
	} params;
	params.Agent = Agent;
	params.CameraLoc = CameraLoc;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdAgentBehavior.Tick
// (FUNC_Native, FUNC_Event, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UGameCrowdAgentBehavior::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.Tick");

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


// Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameCrowdAgentBehavior::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.ShouldEndIdle");

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


// Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior
// (FUNC_Native, FUNC_Static, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class ECrowdBehaviorEvent> EventType                      (CPF_Parm)
// class AActor*                  Instigator                     (CPF_Parm)
// struct FVector                 AtLocation                     (CPF_Parm)
// float                          InRange                        (CPF_Parm)
// float                          InDuration                     (CPF_Parm)
// class AActor*                  BaseActor                      (CPF_OptionalParm, CPF_Parm)
// bool                           bRequireLOS                    (CPF_OptionalParm, CPF_Parm)
// class AGameCrowdBehaviorPoint* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class AGameCrowdBehaviorPoint* UGameCrowdAgentBehavior::STATIC_TriggerCrowdBehavior(TEnumAsByte<enum class ECrowdBehaviorEvent> EventType, class AActor* Instigator, const struct FVector& AtLocation, float InRange, float InDuration, class AActor* BaseActor, bool bRequireLOS)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdAgentBehavior.TriggerCrowdBehavior");

	struct
	{
		TEnumAsByte<enum class ECrowdBehaviorEvent> EventType;
		class AActor*                  Instigator;
		struct FVector                 AtLocation;
		float                          InRange;
		float                          InDuration;
		class AActor*                  BaseActor;
		bool                           bRequireLOS;
		class AGameCrowdBehaviorPoint* ReturnValue;
	} params;
	params.EventType = EventType;
	params.Instigator = Instigator;
	params.AtLocation = AtLocation;
	params.InRange = InRange;
	params.InDuration = InDuration;
	params.BaseActor = BaseActor;
	params.bRequireLOS = bRequireLOS;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGameCrowdBehavior_PlayAnimation::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.GetBehaviorString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior
// (FUNC_Defined, FUNC_Public)

void UGameCrowdBehavior_PlayAnimation::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.StopBehavior");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow
// (FUNC_Defined, FUNC_Public)

void UGameCrowdBehavior_PlayAnimation::PlayAgentAnimationNow()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.PlayAgentAnimationNow");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UAnimNodeSequence*       SeqNode                        (CPF_Parm)
// float                          PlayedTime                     (CPF_Parm)
// float                          ExcessTime                     (CPF_Parm)

void UGameCrowdBehavior_PlayAnimation::OnAnimEnd(class UAnimNodeSequence* SeqNode, float PlayedTime, float ExcessTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.OnAnimEnd");

	struct
	{
		class UAnimNodeSequence*       SeqNode;
		float                          PlayedTime;
		float                          ExcessTime;
	} params;
	params.SeqNode = SeqNode;
	params.PlayedTime = PlayedTime;
	params.ExcessTime = ExcessTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput
// (FUNC_Native, FUNC_Public)

void UGameCrowdBehavior_PlayAnimation::SetSequenceOutput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.SetSequenceOutput");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UGameCrowdBehavior_PlayAnimation::FinishedTargetRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.FinishedTargetRotation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdBehavior_PlayAnimation::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_PlayAnimation.InitBehavior");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGameCrowdBehavior_RunFromPanic::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameCrowdBehavior_RunFromPanic::AllowBehaviorAt(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowBehaviorAt");

	struct
	{
		class AGameCrowdDestination*   Destination;
		bool                           ReturnValue;
	} params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdDestination*   Destination                    (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameCrowdBehavior_RunFromPanic::AllowThisDestination(class AGameCrowdDestination* Destination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.AllowThisDestination");

	struct
	{
		class AGameCrowdDestination*   Destination;
		bool                           ReturnValue;
	} params;
	params.Destination = Destination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class AActor* UGameCrowdBehavior_RunFromPanic::GetBehaviorInstigator()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.GetBehaviorInstigator");

	struct
	{
		class AActor*                  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior
// (FUNC_Defined, FUNC_Public)

void UGameCrowdBehavior_RunFromPanic::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.StopBehavior");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdBehavior_RunFromPanic::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.InitBehavior");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  NewActionTarget                (CPF_Parm)

void UGameCrowdBehavior_RunFromPanic::ActivatedBy(class AActor* NewActionTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_RunFromPanic.ActivatedBy");

	struct
	{
		class AActor*                  NewActionTarget;
	} params;
	params.NewActionTarget = NewActionTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior
// (FUNC_Defined, FUNC_Public)

void UGameCrowdBehavior_WaitForGroup::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.StopBehavior");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameCrowdBehavior_WaitForGroup::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.ShouldEndIdle");

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


// Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGameCrowdBehavior_WaitForGroup::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.GetBehaviorString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdBehavior_WaitForGroup::InitBehavior(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitForGroup.InitBehavior");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior
// (FUNC_Defined, FUNC_Public)

void UGameCrowdBehavior_WaitInQueue::StopBehavior()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.StopBehavior");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::ShouldEndIdle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ShouldEndIdle");

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


// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString UGameCrowdBehavior_WaitInQueue::GetBehaviorString()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetBehaviorString");

	struct
	{
		struct FString                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class AActor* UGameCrowdBehavior_WaitInQueue::GetDestinationActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.GetDestinationActor");

	struct
	{
		class AActor*                  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdDestination*   NewDest                        (CPF_Parm)

void UGameCrowdBehavior_WaitInQueue::ChangingDestination(class AGameCrowdDestination* NewDest)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.ChangingDestination");

	struct
	{
		class AGameCrowdDestination*   NewDest;
	} params;
	params.NewDest = NewDest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameCrowdBehavior_WaitInQueue::HandleMovement()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehavior_WaitInQueue.HandleMovement");

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


// Function GameFramework.GameCrowdGroup.UpdateDestinations
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdDestination*   NewDestination                 (CPF_Parm)

void UGameCrowdGroup::UpdateDestinations(class AGameCrowdDestination* NewDestination)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.UpdateDestinations");

	struct
	{
		class AGameCrowdDestination*   NewDestination;
	} params;
	params.NewDestination = NewDestination;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.RemoveMember
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdGroup::RemoveMember(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.RemoveMember");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdGroup.AddMember
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdGroup::AddMember(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdGroup.AddMember");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInfoVolume.UnTouch
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class AActor*                  Other                          (CPF_Parm)

void AGameCrowdInfoVolume::UnTouch(class AActor* Other)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInfoVolume.UnTouch");

	struct
	{
		class AActor*                  Other;
	} params;
	params.Other = Other;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInfoVolume.Touch
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AGameCrowdInfoVolume::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInfoVolume.Touch");

	struct
	{
		class AActor*                  Other;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 HitLocation;
		struct FVector                 HitNormal;
	} params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdInteractionPoint.OnToggle
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (CPF_Parm)

void AGameCrowdInteractionPoint::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdInteractionPoint.OnToggle");

	struct
	{
		class USeqAct_Toggle*          Action;
	} params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehaviorPoint.Touch
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class AActor*                  Other                          (CPF_Parm)
// class UPrimitiveComponent*     OtherComp                      (CPF_Parm, CPF_EditInline)
// struct FVector                 HitLocation                    (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)

void AGameCrowdBehaviorPoint::Touch(class AActor* Other, class UPrimitiveComponent* OtherComp, const struct FVector& HitLocation, const struct FVector& HitNormal)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.Touch");

	struct
	{
		class AActor*                  Other;
		class UPrimitiveComponent*     OtherComp;
		struct FVector                 HitLocation;
		struct FVector                 HitNormal;
	} params;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehaviorPoint.DestroySelf
// (FUNC_Defined, FUNC_Public)

void AGameCrowdBehaviorPoint::DestroySelf()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.DestroySelf");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AGameCrowdBehaviorPoint::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdBehaviorPoint.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.DrawDebug
// (FUNC_Defined, FUNC_Simulated, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           bPresistent                    (CPF_OptionalParm, CPF_Parm)

void AGameCrowdDestination::DrawDebug(bool bPresistent, TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.DrawDebug");

	struct
	{
		TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo;
		bool                           bPresistent;
	} params;
	params.bPresistent = bPresistent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;
}


// Function GameFramework.GameCrowdDestination.GetDestinationRadius
// (FUNC_Defined, FUNC_Public)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float AGameCrowdDestination::GetDestinationRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetDestinationRadius");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// float                          MaxSpawnDist                   (CPF_Parm)

void AGameCrowdDestination::PrioritizeSpawnPoint(float MaxSpawnDist, TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PrioritizeSpawnPoint");

	struct
	{
		TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo;
		float                          MaxSpawnDist;
	} params;
	params.MaxSpawnDist = MaxSpawnDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;
}


// Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo                     (CPF_Const, CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// float                          MaxSpawnDistSq                 (CPF_Parm)
// bool                           bForceNavMeshPathing           (CPF_Parm)
// class UNavigationHandle*       NavHandle                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdDestination::AnalyzeSpawnPoint(float MaxSpawnDistSq, bool bForceNavMeshPathing, class UNavigationHandle* NavHandle, TArray<struct FCrowdSpawnerPlayerInfo>* PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AnalyzeSpawnPoint");

	struct
	{
		TArray<struct FCrowdSpawnerPlayerInfo> PlayerInfo;
		float                          MaxSpawnDistSq;
		bool                           bForceNavMeshPathing;
		class UNavigationHandle*       NavHandle;
		bool                           ReturnValue;
	} params;
	params.MaxSpawnDistSq = MaxSpawnDistSq;
	params.bForceNavMeshPathing = bForceNavMeshPathing;
	params.NavHandle = NavHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerInfo != nullptr)
		*PlayerInfo = params.PlayerInfo;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.GetSpawnPosition
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class USeqAct_GameCrowdSpawner* Spawner                        (CPF_Parm)
// struct FVector                 SpawnPos                       (CPF_Parm, CPF_OutParm)
// struct FRotator                SpawnRot                       (CPF_Parm, CPF_OutParm)

void AGameCrowdDestination::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpawnPosition");

	struct
	{
		class USeqAct_GameCrowdSpawner* Spawner;
		struct FVector                 SpawnPos;
		struct FRotator                SpawnRot;
	} params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPos != nullptr)
		*SpawnPos = params.SpawnPos;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
}


// Function GameFramework.GameCrowdDestination.GetSpawnRadius
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float AGameCrowdDestination::GetSpawnRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.GetSpawnRadius");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.AllowableDestinationFor
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdDestination::AllowableDestinationFor(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AllowableDestinationFor");

	struct
	{
		class AGameCrowdAgent*         Agent;
		bool                           ReturnValue;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.AtCapacity
// (FUNC_Defined, FUNC_Simulated, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// unsigned char                  CheckCnt                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdDestination::AtCapacity(unsigned char CheckCnt)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.AtCapacity");

	struct
	{
		unsigned char                  CheckCnt;
		bool                           ReturnValue;
	} params;
	params.CheckCnt = CheckCnt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestination.IncrementCustomerCount
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         ArrivingAgent                  (CPF_Parm)

void AGameCrowdDestination::IncrementCustomerCount(class AGameCrowdAgent* ArrivingAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.IncrementCustomerCount");

	struct
	{
		class AGameCrowdAgent*         ArrivingAgent;
	} params;
	params.ArrivingAgent = ArrivingAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.DecrementCustomerCount
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         DepartingAgent                 (CPF_Parm)

void AGameCrowdDestination::DecrementCustomerCount(class AGameCrowdAgent* DepartingAgent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.DecrementCustomerCount");

	struct
	{
		class AGameCrowdAgent*         DepartingAgent;
	} params;
	params.DepartingAgent = DepartingAgent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PickNewDestinationFor
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// bool                           bIgnoreRestrictions            (CPF_Parm)

void AGameCrowdDestination::PickNewDestinationFor(class AGameCrowdAgent* Agent, bool bIgnoreRestrictions)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PickNewDestinationFor");

	struct
	{
		class AGameCrowdAgent*         Agent;
		bool                           bIgnoreRestrictions;
	} params;
	params.Agent = Agent;
	params.bIgnoreRestrictions = bIgnoreRestrictions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.ReachedDestination
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGameCrowdDestination::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedDestination");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.Destroyed
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameCrowdDestination::Destroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.Destroyed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.PostBeginPlay
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameCrowdDestination::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestination.ReachedByAgent
// (FUNC_Simulated, FUNC_Native, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// struct FVector                 TestPosition                   (CPF_Parm)
// bool                           bTestExactly                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdDestination::ReachedByAgent(class AGameCrowdAgent* Agent, const struct FVector& TestPosition, bool bTestExactly)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestination.ReachedByAgent");

	struct
	{
		class AGameCrowdAgent*         Agent;
		struct FVector                 TestPosition;
		bool                           bTestExactly;
		bool                           ReturnValue;
	} params;
	params.Agent = Agent;
	params.TestPosition = TestPosition;
	params.bTestExactly = bTestExactly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasCustomer()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasCustomer");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         OldCustomer                    (CPF_Parm)

void AGameCrowdDestinationQueuePoint::ClearQueue(class AGameCrowdAgent* OldCustomer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ClearQueue");

	struct
	{
		class AGameCrowdAgent*         OldCustomer;
	} params;
	params.OldCustomer = OldCustomer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         NewCustomer                    (CPF_Parm)
// class AGameCrowdInteractionPoint* PreviousPosition               (CPF_Parm)

void AGameCrowdDestinationQueuePoint::AddCustomer(class AGameCrowdAgent* NewCustomer, class AGameCrowdInteractionPoint* PreviousPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AddCustomer");

	struct
	{
		class AGameCrowdAgent*         NewCustomer;
		class AGameCrowdInteractionPoint* PreviousPosition;
	} params;
	params.NewCustomer = NewCustomer;
	params.PreviousPosition = PreviousPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance
// (FUNC_Final, FUNC_Defined, FUNC_Simulated, FUNC_Private)

void AGameCrowdDestinationQueuePoint::ActuallyAdvance()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ActuallyAdvance");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class AGameCrowdInteractionPoint* FrontPosition                  (CPF_Parm)

void AGameCrowdDestinationQueuePoint::AdvanceCustomerTo(class AGameCrowdInteractionPoint* FrontPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.AdvanceCustomerTo");

	struct
	{
		class AGameCrowdInteractionPoint* FrontPosition;
	} params;
	params.FrontPosition = FrontPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGameCrowdDestinationQueuePoint::ReachedDestination(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.ReachedDestination");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdDestinationQueuePoint::HasSpace()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.HasSpace");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy
// (FUNC_Native, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)
// struct FVector                 TestPosition                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdDestinationQueuePoint::QueueReachedBy(class AGameCrowdAgent* Agent, const struct FVector& TestPosition)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdDestinationQueuePoint.QueueReachedBy");

	struct
	{
		class AGameCrowdAgent*         Agent;
		struct FVector                 TestPosition;
		bool                           ReturnValue;
	} params;
	params.Agent = Agent;
	params.TestPosition = TestPosition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.CreateNewAgent
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class AGameCrowdDestination*   SpawnLoc                       (CPF_Parm)
// class AGameCrowdAgent*         AgentTemplate                  (CPF_Parm)
// class UGameCrowdGroup*         NewGroup                       (CPF_Parm)
// class AGameCrowdAgent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class AGameCrowdAgent* AGameCrowdPopulationManager::CreateNewAgent(class AGameCrowdDestination* SpawnLoc, class AGameCrowdAgent* AgentTemplate, class UGameCrowdGroup* NewGroup, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.CreateNewAgent");

	struct
	{
		struct FCrowdSpawnInfoItem     Item;
		class AGameCrowdDestination*   SpawnLoc;
		class AGameCrowdAgent*         AgentTemplate;
		class UGameCrowdGroup*         NewGroup;
		class AGameCrowdAgent*         ReturnValue;
	} params;
	params.SpawnLoc = SpawnLoc;
	params.AgentTemplate = AgentTemplate;
	params.NewGroup = NewGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.Warmup
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            WarmupNum                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdPopulationManager::Warmup(int WarmupNum, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.Warmup");

	struct
	{
		struct FCrowdSpawnInfoItem     Item;
		int                            WarmupNum;
		bool                           ReturnValue;
	} params;
	params.WarmupNum = WarmupNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.SpawnAgent
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class AGameCrowdDestination*   SpawnLoc                       (CPF_Parm)
// class AGameCrowdAgent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgent(class AGameCrowdDestination* SpawnLoc, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SpawnAgent");

	struct
	{
		struct FCrowdSpawnInfoItem     Item;
		class AGameCrowdDestination*   SpawnLoc;
		class AGameCrowdAgent*         ReturnValue;
	} params;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            SpawnerIdx                     (CPF_Parm)
// class AGameCrowdDestination*   SpawnLoc                       (CPF_Parm)
// class AGameCrowdAgent*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class AGameCrowdAgent* AGameCrowdPopulationManager::SpawnAgentByIdx(int SpawnerIdx, class AGameCrowdDestination* SpawnLoc)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SpawnAgentByIdx");

	struct
	{
		int                            SpawnerIdx;
		class AGameCrowdDestination*   SpawnLoc;
		class AGameCrowdAgent*         ReturnValue;
	} params;
	params.SpawnerIdx = SpawnerIdx;
	params.SpawnLoc = SpawnLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class AGameCrowdDestination*   Candidate                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdPopulationManager::ValidateSpawnAt(class AGameCrowdDestination* Candidate, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.ValidateSpawnAt");

	struct
	{
		struct FCrowdSpawnInfoItem     Item;
		class AGameCrowdDestination*   Candidate;
		bool                           ReturnValue;
	} params;
	params.Candidate = Candidate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class AGameCrowdDestination*   GCD                            (CPF_Parm)

void AGameCrowdPopulationManager::AddPrioritizedSpawnPoint(class AGameCrowdDestination* GCD, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddPrioritizedSpawnPoint");

	struct
	{
		struct FCrowdSpawnInfoItem     Item;
		class AGameCrowdDestination*   GCD;
	} params;
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// int                            StartIndex                     (CPF_Parm)
// int                            NumToUpdate                    (CPF_Parm)

void AGameCrowdPopulationManager::AnalyzeSpawnPoints(int StartIndex, int NumToUpdate, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AnalyzeSpawnPoints");

	struct
	{
		struct FCrowdSpawnInfoItem     Item;
		int                            StartIndex;
		int                            NumToUpdate;
	} params;
	params.StartIndex = StartIndex;
	params.NumToUpdate = NumToUpdate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// float                          DeltaTime                      (CPF_Parm)

void AGameCrowdPopulationManager::PrioritizeSpawnPoints(float DeltaTime, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PrioritizeSpawnPoints");

	struct
	{
		struct FCrowdSpawnInfoItem     Item;
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;
}


// Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo
// (FUNC_Simulated, FUNC_Native, FUNC_Static, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// TArray<struct FCrowdSpawnerPlayerInfo> out_PlayerInfo                 (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdPopulationManager::STATIC_StaticGetPlayerInfo(TArray<struct FCrowdSpawnerPlayerInfo>* out_PlayerInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.StaticGetPlayerInfo");

	struct
	{
		TArray<struct FCrowdSpawnerPlayerInfo> out_PlayerInfo;
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_PlayerInfo != nullptr)
		*out_PlayerInfo = params.out_PlayerInfo;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo
// (FUNC_Simulated, FUNC_Native, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdPopulationManager::GetPlayerInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.GetPlayerInfo");

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


// Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class AGameCrowdDestination*   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class AGameCrowdDestination* AGameCrowdPopulationManager::PickSpawnPoint(struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PickSpawnPoint");

	struct
	{
		struct FCrowdSpawnInfoItem     Item;
		class AGameCrowdDestination*   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.UpdateSpawner
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// float                          DeltaTime                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdPopulationManager::UpdateSpawner(float DeltaTime, struct FCrowdSpawnInfoItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.UpdateSpawner");

	struct
	{
		struct FCrowdSpawnInfoItem     Item;
		float                          DeltaTime;
		bool                           ReturnValue;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Item != nullptr)
		*Item = params.Item;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners
// (FUNC_Native, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void AGameCrowdPopulationManager::UpdateAllSpawners(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.UpdateAllSpawners");

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


// Function GameFramework.GameCrowdPopulationManager.Tick
// (FUNC_Defined, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void AGameCrowdPopulationManager::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.Tick");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdPopulationManager::ShouldDebugDestinations()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.ShouldDebugDestinations");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.IsSpawningActive
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameCrowdPopulationManager::IsSpawningActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.IsSpawningActive");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.DisplayDebug
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm, CPF_OutParm)
// float                          out_YPos                       (CPF_Parm, CPF_OutParm)

void AGameCrowdPopulationManager::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.DisplayDebug");

	struct
	{
		class AHUD*                    HUD;
		float                          out_YL;
		float                          out_YPos;
	} params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCrowdPopulationManager.AgentDestroyed
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void AGameCrowdPopulationManager::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AgentDestroyed");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.FlushAllAgents
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AGameCrowdPopulationManager::FlushAllAgents()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.FlushAllAgents");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.FlushAgents
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// struct FCrowdSpawnInfoItem     Item                           (CPF_Parm, CPF_NeedCtorLink)

void AGameCrowdPopulationManager::FlushAgents(const struct FCrowdSpawnInfoItem& Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.FlushAgents");

	struct
	{
		struct FCrowdSpawnInfoItem     Item;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.CreateSpawner
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class USeqAct_GameCrowdPopulationManagerToggle* inAction                       (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int AGameCrowdPopulationManager::CreateSpawner(class USeqAct_GameCrowdPopulationManagerToggle* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.CreateSpawner");

	struct
	{
		class USeqAct_GameCrowdPopulationManagerToggle* inAction;
		int                            ReturnValue;
	} params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdInfoVolume*    Vol                            (CPF_Parm)

void AGameCrowdPopulationManager::SetCrowdInfoVolume(class AGameCrowdInfoVolume* Vol)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.SetCrowdInfoVolume");

	struct
	{
		class AGameCrowdInfoVolume*    Vol;
	} params;
	params.Vol = Vol;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdDestination*   GCD                            (CPF_Parm)

void AGameCrowdPopulationManager::RemoveSpawnPoint(class AGameCrowdDestination* GCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.RemoveSpawnPoint");

	struct
	{
		class AGameCrowdDestination*   GCD;
	} params;
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdDestination*   GCD                            (CPF_Parm)

void AGameCrowdPopulationManager::AddSpawnPoint(class AGameCrowdDestination* GCD)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.AddSpawnPoint");

	struct
	{
		class AGameCrowdDestination*   GCD;
	} params;
	params.GCD = GCD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged
// (FUNC_Event, FUNC_Public)

void AGameCrowdPopulationManager::NotifyPathChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.NotifyPathChanged");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdPopulationManager.PostBeginPlay
// (FUNC_Defined, FUNC_Public)

void AGameCrowdPopulationManager::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdPopulationManager.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent
// (FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// struct FName                   VarName                        (CPF_Parm)

void AGameCrowdReplicationActor::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdReplicationActor.ReplicatedEvent");

	struct
	{
		struct FName                   VarName;
	} params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.ChooseCameraShake
// (FUNC_Defined, FUNC_Simulated, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// struct FVector                 Epicenter                      (CPF_Parm)
// class APlayerController*       PC                             (CPF_Parm)
// class UCameraShake*            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UCameraShake* AGameExplosionActor::ChooseCameraShake(const struct FVector& Epicenter, class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.ChooseCameraShake");

	struct
	{
		struct FVector                 Epicenter;
		class APlayerController*       PC;
		class UCameraShake*            ReturnValue;
	} params;
	params.Epicenter = Epicenter;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.SpawnCameraLensEffects
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameExplosionActor::SpawnCameraLensEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnCameraLensEffects");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DoExplosionCameraEffects
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameExplosionActor::DoExplosionCameraEffects()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionCameraEffects");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DrawDebug
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasDefaults)

void AGameExplosionActor::DrawDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DrawDebug");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.DelayedExplosionDamage
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameExplosionActor::DelayedExplosionDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DelayedExplosionDamage");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.Explode
// (FUNC_Defined, FUNC_Simulated, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UGameExplosion*          NewExplosionTemplate           (CPF_Parm)
// struct FVector                 Direction                      (CPF_OptionalParm, CPF_Parm)

void AGameExplosionActor::Explode(class UGameExplosion* NewExplosionTemplate, const struct FVector& Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.Explode");

	struct
	{
		class UGameExplosion*          NewExplosionTemplate;
		struct FVector                 Direction;
	} params;
	params.NewExplosionTemplate = NewExplosionTemplate;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume
// (FUNC_Simulated, FUNC_Public)

void AGameExplosionActor::SpawnExplosionFogVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionFogVolume");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionDecal
// (FUNC_Simulated, FUNC_Public)

void AGameExplosionActor::SpawnExplosionDecal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionDecal");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem
// (FUNC_Simulated, FUNC_Public)
// Parameters:
// class UParticleSystem*         Template                       (CPF_Parm)

void AGameExplosionActor::SpawnExplosionParticleSystem(class UParticleSystem* Template)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpawnExplosionParticleSystem");

	struct
	{
		class UParticleSystem*         Template;
	} params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX
// (FUNC_Simulated, FUNC_Protected)
// Parameters:
// class UPhysicalMaterial*       PhysMaterial                   (CPF_Parm)

void AGameExplosionActor::UpdateExplosionTemplateWithPerMaterialFX(class UPhysicalMaterial* PhysMaterial)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.UpdateExplosionTemplateWithPerMaterialFX");

	struct
	{
		class UPhysicalMaterial*       PhysMaterial;
	} params;
	params.PhysMaterial = PhysMaterial;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor
// (FUNC_Protected)
// Parameters:
// class AActor*                  Victim                         (CPF_Parm)
// float                          VictimDist                     (CPF_Parm)

void AGameExplosionActor::SpecialCringeEffectsFor(class AActor* Victim, float VictimDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpecialCringeEffectsFor");

	struct
	{
		class AActor*                  Victim;
		float                          VictimDist;
	} params;
	params.Victim = Victim;
	params.VictimDist = VictimDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor
// (FUNC_Protected)
// Parameters:
// class AGamePawn*               VictimPawn                     (CPF_Parm)
// float                          VictimDist                     (CPF_Parm)

void AGameExplosionActor::SpecialPawnEffectsFor(class AGamePawn* VictimPawn, float VictimDist)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.SpecialPawnEffectsFor");

	struct
	{
		class AGamePawn*               VictimPawn;
		float                          VictimDist;
	} params;
	params.VictimPawn = VictimPawn;
	params.VictimDist = VictimDist;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameExplosionActor.GetEffectCheckRadius
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           bCauseDamage                   (CPF_Parm)
// bool                           bCauseFractureEffects          (CPF_Parm)
// bool                           bCauseEffects                  (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float AGameExplosionActor::GetEffectCheckRadius(bool bCauseDamage, bool bCauseFractureEffects, bool bCauseEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetEffectCheckRadius");

	struct
	{
		bool                           bCauseDamage;
		bool                           bCauseFractureEffects;
		bool                           bCauseEffects;
		float                          ReturnValue;
	} params;
	params.bCauseDamage = bCauseDamage;
	params.bCauseFractureEffects = bCauseFractureEffects;
	params.bCauseEffects = bCauseEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.DoExplosionDamage
// (FUNC_Defined, FUNC_Simulated, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// bool                           bCauseDamage                   (CPF_Parm)
// bool                           bCauseEffects                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameExplosionActor::DoExplosionDamage(bool bCauseDamage, bool bCauseEffects)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoExplosionDamage");

	struct
	{
		bool                           bCauseDamage;
		bool                           bCauseEffects;
		bool                           ReturnValue;
	} params;
	params.bCauseDamage = bCauseDamage;
	params.bCauseEffects = bCauseEffects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.BoxDistanceToPoint
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// struct FVector                 Start                          (CPF_Parm)
// struct FBox                    BBox                           (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float AGameExplosionActor::STATIC_BoxDistanceToPoint(const struct FVector& Start, const struct FBox& BBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.BoxDistanceToPoint");

	struct
	{
		struct FVector                 Start;
		struct FBox                    BBox;
		float                          ReturnValue;
	} params;
	params.Start = Start;
	params.BBox = BBox;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.IsBehindExplosion
// (FUNC_Defined, FUNC_Simulated, FUNC_Protected)
// Parameters:
// class AActor*                  A                              (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameExplosionActor::IsBehindExplosion(class AActor* A)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.IsBehindExplosion");

	struct
	{
		class AActor*                  A;
		bool                           ReturnValue;
	} params;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.DoFullDamageToActor
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class AActor*                  Victim                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGameExplosionActor::DoFullDamageToActor(class AActor* Victim)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.DoFullDamageToActor");

	struct
	{
		class AActor*                  Victim;
		bool                           ReturnValue;
	} params;
	params.Victim = Victim;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.GetPhysicalMaterial
// (FUNC_Defined, FUNC_Simulated, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// class UPhysicalMaterial*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UPhysicalMaterial* AGameExplosionActor::GetPhysicalMaterial()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.GetPhysicalMaterial");

	struct
	{
		class UPhysicalMaterial*       ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameExplosionActor.PreBeginPlay
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AGameExplosionActor::PreBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameExplosionActor.PreBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGamePawn::ReattachMeshWithoutBeingSeen()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMeshWithoutBeingSeen");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.ReattachMesh
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGamePawn::ReattachMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.ReattachMesh");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePawn.UpdateShadowSettings
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// bool                           bInWantShadow                  (CPF_Parm)

void AGamePawn::UpdateShadowSettings(bool bInWantShadow)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePawn.UpdateShadowSettings");

	struct
	{
		bool                           bInWantShadow;
	} params;
	params.bInWantShadow = bInWantShadow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.ConsoleCommand
// (FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FString                 Command                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           bWriteToLog                    (CPF_OptionalParm, CPF_Parm)
// struct FString                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

struct FString ADebugCameraController::ConsoleCommand(const struct FString& Command, bool bWriteToLog)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.ConsoleCommand");

	struct
	{
		struct FString                 Command;
		bool                           bWriteToLog;
		struct FString                 ReturnValue;
	} params;
	params.Command = Command;
	params.bWriteToLog = bWriteToLog;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.DebugCameraController.ShowDebugSelectedInfo
// (FUNC_Defined, FUNC_Exec, FUNC_Public)

void ADebugCameraController::ShowDebugSelectedInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.ShowDebugSelectedInfo");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.NativeInputKey
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// int                            ControllerId                   (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// TEnumAsByte<enum class EInputEvent> Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_OptionalParm, CPF_Parm)
// bool                           bGamepad                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool ADebugCameraController::NativeInputKey(int ControllerId, const struct FName& Key, TEnumAsByte<enum class EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.NativeInputKey");

	struct
	{
		int                            ControllerId;
		struct FName                   Key;
		TEnumAsByte<enum class EInputEvent> Event;
		float                          AmountDepressed;
		bool                           bGamepad;
		bool                           ReturnValue;
	} params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.DebugCameraController.InitDebugInputSystem
// (FUNC_Defined, FUNC_Public)

void ADebugCameraController::InitDebugInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.InitDebugInputSystem");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.DisableDebugCamera
// (FUNC_Defined, FUNC_Public)

void ADebugCameraController::DisableDebugCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.DisableDebugCamera");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.NormalSpeed
// (FUNC_Defined, FUNC_Exec, FUNC_Public)

void ADebugCameraController::NormalSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.NormalSpeed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.MoreSpeed
// (FUNC_Defined, FUNC_Exec, FUNC_Public)

void ADebugCameraController::MoreSpeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.MoreSpeed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.SetFreezeRendering
// (FUNC_Defined, FUNC_Exec, FUNC_Public)

void ADebugCameraController::SetFreezeRendering()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.SetFreezeRendering");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.OnDeactivate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm)

void ADebugCameraController::OnDeactivate(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.OnDeactivate");

	struct
	{
		class APlayerController*       PC;
	} params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.OnActivate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm)

void ADebugCameraController::OnActivate(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.OnActivate");

	struct
	{
		class APlayerController*       PC;
	} params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.PostBeginPlay
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)

void ADebugCameraController::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.Unselect
// (FUNC_Native, FUNC_Public)

void ADebugCameraController::Unselect()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.Unselect");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.SecondarySelect
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FVector                 HitLoc                         (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_Parm)

void ADebugCameraController::SecondarySelect(const struct FVector& HitLoc, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.SecondarySelect");

	struct
	{
		struct FVector                 HitLoc;
		struct FVector                 HitNormal;
		struct FTraceHitInfo           HitInfo;
	} params;
	params.HitLoc = HitLoc;
	params.HitNormal = HitNormal;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraController.PrimarySelect
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FVector                 HitLoc                         (CPF_Parm)
// struct FVector                 HitNormal                      (CPF_Parm)
// struct FTraceHitInfo           HitInfo                        (CPF_Parm)

void ADebugCameraController::PrimarySelect(const struct FVector& HitLoc, const struct FVector& HitNormal, const struct FTraceHitInfo& HitInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraController.PrimarySelect");

	struct
	{
		struct FVector                 HitLoc;
		struct FVector                 HitNormal;
		struct FTraceHitInfo           HitInfo;
	} params;
	params.HitLoc = HitLoc;
	params.HitNormal = HitNormal;
	params.HitInfo = HitInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RenderKismetHud
// (FUNC_Defined, FUNC_Public)

void AMobileHUD::RenderKismetHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RenderKismetHud");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.AddKismetRenderEvent
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class USeqEvent_HudRender*     NewEvent                       (CPF_Parm)

void AMobileHUD::AddKismetRenderEvent(class USeqEvent_HudRender* NewEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.AddKismetRenderEvent");

	struct
	{
		class USeqEvent_HudRender*     NewEvent;
	} params;
	params.NewEvent = NewEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RefreshKismetLinks
// (FUNC_Defined, FUNC_Public)

void AMobileHUD::RefreshKismetLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RefreshKismetLinks");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Slider
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Slider(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Slider");

	struct
	{
		class UMobileInputZone*        Zone;
	} params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileTilt
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobilePlayerInput*      MobileInput                    (CPF_Parm)

void AMobileHUD::DrawMobileTilt(class UMobilePlayerInput* MobileInput)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileTilt");

	struct
	{
		class UMobilePlayerInput*      MobileInput;
	} params;
	params.MobileInput = MobileInput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Trackball
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Trackball(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Trackball");

	struct
	{
		class UMobileInputZone*        Zone;
	} params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Joystick
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Joystick(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Joystick");

	struct
	{
		class UMobileInputZone*        Zone;
	} params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawMobileZone_Button
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)

void AMobileHUD::DrawMobileZone_Button(class UMobileInputZone* Zone)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileZone_Button");

	struct
	{
		class UMobileInputZone*        Zone;
	} params;
	params.Zone = Zone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.DrawInputZoneOverlays
// (FUNC_Defined, FUNC_Public)

void AMobileHUD::DrawInputZoneOverlays()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawInputZoneOverlays");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.RenderMobileMenu
// (FUNC_Defined, FUNC_Public)

void AMobileHUD::RenderMobileMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.RenderMobileMenu");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.ShowMobileHud
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AMobileHUD::ShowMobileHud()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.ShowMobileHud");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileHUD.DrawMobileDebugString
// (FUNC_Defined, FUNC_Public)
// Parameters:
// float                          XPos                           (CPF_Parm)
// float                          YPos                           (CPF_Parm)
// struct FString                 Str                            (CPF_Parm, CPF_NeedCtorLink)

void AMobileHUD::DrawMobileDebugString(float XPos, float YPos, const struct FString& Str)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.DrawMobileDebugString");

	struct
	{
		float                          XPos;
		float                          YPos;
		struct FString                 Str;
	} params;
	params.XPos = XPos;
	params.YPos = YPos;
	params.Str = Str;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.PostRender
// (FUNC_Defined, FUNC_Public)

void AMobileHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostRender");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileHUD.PostBeginPlay
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AMobileHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileHUD.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.AddKismetEventHandler
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class USeqEvent_MobileZoneBase* NewHandler                     (CPF_Parm)

void UMobileInputZone::AddKismetEventHandler(class USeqEvent_MobileZoneBase* NewHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.AddKismetEventHandler");

	struct
	{
		class USeqEvent_MobileZoneBase* NewHandler;
	} params;
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnPostDrawZone
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)

void UMobileInputZone::OnPostDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnPostDrawZone");

	struct
	{
		class UMobileInputZone*        Zone;
		class UCanvas*                 Canvas;
	} params;
	params.Zone = Zone;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.OnPreDrawZone
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileInputZone::OnPreDrawZone(class UMobileInputZone* Zone, class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnPreDrawZone");

	struct
	{
		class UMobileInputZone*        Zone;
		class UCanvas*                 Canvas;
		bool                           ReturnValue;
	} params;
	params.Zone = Zone;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnProcessSlide
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// int                            SlideValue                     (CPF_Parm)
// struct FVector2D               ViewportSize                   (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileInputZone::OnProcessSlide(class UMobileInputZone* Zone, TEnumAsByte<enum class ETouchType> EventType, int SlideValue, const struct FVector2D& ViewportSize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnProcessSlide");

	struct
	{
		class UMobileInputZone*        Zone;
		TEnumAsByte<enum class ETouchType> EventType;
		int                            SlideValue;
		struct FVector2D               ViewportSize;
		bool                           ReturnValue;
	} params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.SlideValue = SlideValue;
	params.ViewportSize = ViewportSize;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnDoubleTapDelegate
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileInputZone::OnDoubleTapDelegate(class UMobileInputZone* Zone, TEnumAsByte<enum class ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnDoubleTapDelegate");

	struct
	{
		class UMobileInputZone*        Zone;
		TEnumAsByte<enum class ETouchType> EventType;
		struct FVector2D               TouchLocation;
		bool                           ReturnValue;
	} params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnTapDelegate
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileInputZone::OnTapDelegate(class UMobileInputZone* Zone, TEnumAsByte<enum class ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnTapDelegate");

	struct
	{
		class UMobileInputZone*        Zone;
		TEnumAsByte<enum class ETouchType> EventType;
		struct FVector2D               TouchLocation;
		bool                           ReturnValue;
	} params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.OnProcessInputDelegate
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// int                            Handle                         (CPF_Parm)
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileInputZone::OnProcessInputDelegate(class UMobileInputZone* Zone, float DeltaTime, int Handle, TEnumAsByte<enum class ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.OnProcessInputDelegate");

	struct
	{
		class UMobileInputZone*        Zone;
		float                          DeltaTime;
		int                            Handle;
		TEnumAsByte<enum class ETouchType> EventType;
		struct FVector2D               TouchLocation;
		bool                           ReturnValue;
	} params;
	params.Zone = Zone;
	params.DeltaTime = DeltaTime;
	params.Handle = Handle;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileInputZone.DeactivateZone
// (FUNC_Native, FUNC_Public)

void UMobileInputZone::DeactivateZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.DeactivateZone");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileInputZone.ActivateZone
// (FUNC_Native, FUNC_Public)

void UMobileInputZone::ActivateZone()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileInputZone.ActivateZone");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.RenderObject
// (FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuObject::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.RenderObject");

	struct
	{
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.SetCanvasPos
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          OffsetX                        (CPF_OptionalParm, CPF_Parm)
// float                          OffsetY                        (CPF_OptionalParm, CPF_Parm)

void UMobileMenuObject::SetCanvasPos(class UCanvas* Canvas, float OffsetX, float OffsetY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.SetCanvasPos");

	struct
	{
		class UCanvas*                 Canvas;
		float                          OffsetX;
		float                          OffsetY;
	} params;
	params.Canvas = Canvas;
	params.OffsetX = OffsetX;
	params.OffsetY = OffsetY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.InitMenuObject
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int                            ScreenWidth                    (CPF_Parm)
// int                            ScreenHeight                   (CPF_Parm)
// bool                           bIsFirstInitialization         (CPF_Parm)

void UMobileMenuObject::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.InitMenuObject");

	struct
	{
		class UMobilePlayerInput*      PlayerInput;
		class UMobileMenuScene*        Scene;
		int                            ScreenWidth;
		int                            ScreenHeight;
		bool                           bIsFirstInitialization;
	} params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObject.GetRealPosition
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          PosX                           (CPF_Parm, CPF_OutParm)
// float                          PosY                           (CPF_Parm, CPF_OutParm)

void UMobileMenuObject::GetRealPosition(float* PosX, float* PosY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.GetRealPosition");

	struct
	{
		float                          PosX;
		float                          PosY;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PosX != nullptr)
		*PosX = params.PosX;
	if (PosY != nullptr)
		*PosY = params.PosY;
}


// Function GameFramework.MobileMenuObject.OnTouch
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuObject::OnTouch(TEnumAsByte<enum class ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObject.OnTouch");

	struct
	{
		TEnumAsByte<enum class ETouchType> EventType;
		float                          TouchX;
		float                          TouchY;
		class UMobileMenuObject*       ObjectOver;
		float                          DeltaTime;
		bool                           ReturnValue;
	} params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuImage.RenderObject
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuImage::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuImage.RenderObject");

	struct
	{
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.MobileMenuCommand
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Command                        (CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuScene::MobileMenuCommand(const struct FString& Command)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.MobileMenuCommand");

	struct
	{
		struct FString                 Command;
		bool                           ReturnValue;
	} params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.FindMenuObject
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 Tag                            (CPF_Parm, CPF_NeedCtorLink)
// class UMobileMenuObject*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMobileMenuObject* UMobileMenuScene::FindMenuObject(const struct FString& Tag)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.FindMenuObject");

	struct
	{
		struct FString                 Tag;
		class UMobileMenuObject*       ReturnValue;
	} params;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.CleanUpScene
// (FUNC_Native, FUNC_Public)

void UMobileMenuScene::CleanUpScene()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.CleanUpScene");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Closed
// (FUNC_Defined, FUNC_Public)

void UMobileMenuScene::Closed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Closed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Closing
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuScene::Closing()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Closing");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.MadeTopMenu
// (FUNC_Public)

void UMobileMenuScene::MadeTopMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.MadeTopMenu");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.Opened
// (FUNC_Public)
// Parameters:
// struct FString                 Mode                           (CPF_Parm, CPF_NeedCtorLink)

void UMobileMenuScene::Opened(const struct FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.Opened");

	struct
	{
		struct FString                 Mode;
	} params;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.OnSceneTouch
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// bool                           bInside                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuScene::OnSceneTouch(TEnumAsByte<enum class ETouchType> EventType, float TouchX, float TouchY, bool bInside)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.OnSceneTouch");

	struct
	{
		TEnumAsByte<enum class ETouchType> EventType;
		float                          TouchX;
		float                          TouchY;
		bool                           bInside;
		bool                           ReturnValue;
	} params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.bInside = bInside;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.OnTouch
// (FUNC_Event, FUNC_Public)
// Parameters:
// class UMobileMenuObject*       Sender                         (CPF_Parm)
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)

void UMobileMenuScene::OnTouch(class UMobileMenuObject* Sender, TEnumAsByte<enum class ETouchType> EventType, float TouchX, float TouchY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.OnTouch");

	struct
	{
		class UMobileMenuObject*       Sender;
		TEnumAsByte<enum class ETouchType> EventType;
		float                          TouchX;
		float                          TouchY;
	} params;
	params.Sender = Sender;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.PreRenderMenuObject
// (FUNC_Public)
// Parameters:
// class UMobileMenuObject*       MenuObject                     (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobileMenuScene::PreRenderMenuObject(class UMobileMenuObject* MenuObject, class UCanvas* Canvas, float RenderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.PreRenderMenuObject");

	struct
	{
		class UMobileMenuObject*       MenuObject;
		class UCanvas*                 Canvas;
		float                          RenderDelta;
	} params;
	params.MenuObject = MenuObject;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.RenderScene
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobileMenuScene::RenderScene(class UCanvas* Canvas, float RenderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.RenderScene");

	struct
	{
		class UCanvas*                 Canvas;
		float                          RenderDelta;
	} params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.GetSceneFont
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UFont*                   ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UFont* UMobileMenuScene::GetSceneFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetSceneFont");

	struct
	{
		class UFont*                   ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.InitMenuScene
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// int                            ScreenWidth                    (CPF_Parm)
// int                            ScreenHeight                   (CPF_Parm)
// bool                           bIsFirstInitialization         (CPF_Parm)

void UMobileMenuScene::InitMenuScene(class UMobilePlayerInput* PlayerInput, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.InitMenuScene");

	struct
	{
		class UMobilePlayerInput*      PlayerInput;
		int                            ScreenWidth;
		int                            ScreenHeight;
		bool                           bIsFirstInitialization;
	} params;
	params.PlayerInput = PlayerInput;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuScene.GetGlobalScaleY
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UMobileMenuScene::STATIC_GetGlobalScaleY()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetGlobalScaleY");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuScene.GetGlobalScaleX
// (FUNC_Final, FUNC_Native, FUNC_Static, FUNC_Public)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UMobileMenuScene::STATIC_GetGlobalScaleX()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuScene.GetGlobalScaleX");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.OpenMobileMenuMode
// (FUNC_Defined, FUNC_Exec, FUNC_Public)
// Parameters:
// struct FString                 MenuClassName                  (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Mode                           (CPF_Parm, CPF_NeedCtorLink)
// class UMobileMenuScene*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenuMode(const struct FString& MenuClassName, const struct FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMobileMenuMode");

	struct
	{
		struct FString                 MenuClassName;
		struct FString                 Mode;
		class UMobileMenuScene*        ReturnValue;
	} params;
	params.MenuClassName = MenuClassName;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.OpenMobileMenu
// (FUNC_Defined, FUNC_Exec, FUNC_Public)
// Parameters:
// struct FString                 MenuClassName                  (CPF_Parm, CPF_NeedCtorLink)
// class UMobileMenuScene*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMobileMenuScene* UMobilePlayerInput::OpenMobileMenu(const struct FString& MenuClassName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMobileMenu");

	struct
	{
		struct FString                 MenuClassName;
		class UMobileMenuScene*        ReturnValue;
	} params;
	params.MenuClassName = MenuClassName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.MobileMenuCommand
// (FUNC_Defined, FUNC_Exec, FUNC_Public)
// Parameters:
// struct FString                 MenuCommand                    (CPF_Parm, CPF_NeedCtorLink)

void UMobilePlayerInput::MobileMenuCommand(const struct FString& MenuCommand)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.MobileMenuCommand");

	struct
	{
		struct FString                 MenuCommand;
	} params;
	params.MenuCommand = MenuCommand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SceneRenderToggle
// (FUNC_Defined, FUNC_Exec, FUNC_Public)

void UMobilePlayerInput::SceneRenderToggle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SceneRenderToggle");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.PreClientTravel
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 PendingURL                     (CPF_Parm, CPF_NeedCtorLink)
// TEnumAsByte<enum class ETravelType> TravelType                     (CPF_Parm)
// bool                           bIsSeamlessTravel              (CPF_Parm)

void UMobilePlayerInput::PreClientTravel(const struct FString& PendingURL, TEnumAsByte<enum class ETravelType> TravelType, bool bIsSeamlessTravel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.PreClientTravel");

	struct
	{
		struct FString                 PendingURL;
		TEnumAsByte<enum class ETravelType> TravelType;
		bool                           bIsSeamlessTravel;
	} params;
	params.PendingURL = PendingURL;
	params.TravelType = TravelType;
	params.bIsSeamlessTravel = bIsSeamlessTravel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.RenderMenus
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          RenderDelta                    (CPF_Parm)

void UMobilePlayerInput::RenderMenus(class UCanvas* Canvas, float RenderDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.RenderMenus");

	struct
	{
		class UCanvas*                 Canvas;
		float                          RenderDelta;
	} params;
	params.Canvas = Canvas;
	params.RenderDelta = RenderDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CloseAllMenus
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UMobilePlayerInput::CloseAllMenus()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CloseAllMenus");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CloseMenuScene
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UMobileMenuScene*        SceneToClose                   (CPF_Parm)

void UMobilePlayerInput::CloseMenuScene(class UMobileMenuScene* SceneToClose)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CloseMenuScene");

	struct
	{
		class UMobileMenuScene*        SceneToClose;
	} params;
	params.SceneToClose = SceneToClose;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OpenMenuScene
// (FUNC_Defined, FUNC_Event, FUNC_HasOptionalParms, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UClass*                  SceneClass                     (CPF_Parm)
// struct FString                 Mode                           (CPF_OptionalParm, CPF_Parm, CPF_NeedCtorLink)
// class UMobileMenuScene*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMobileMenuScene* UMobilePlayerInput::OpenMenuScene(class UClass* SceneClass, const struct FString& Mode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OpenMenuScene");

	struct
	{
		class UClass*                  SceneClass;
		struct FString                 Mode;
		class UMobileMenuScene*        ReturnValue;
	} params;
	params.SceneClass = SceneClass;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.SetMobileInputConfig
// (FUNC_Defined, FUNC_Exec, FUNC_Public)
// Parameters:
// struct FString                 GroupName                      (CPF_Parm, CPF_NeedCtorLink)

void UMobilePlayerInput::SetMobileInputConfig(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SetMobileInputConfig");

	struct
	{
		struct FString                 GroupName;
	} params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ActivateInputGroup
// (FUNC_Defined, FUNC_Exec, FUNC_Public)
// Parameters:
// struct FString                 GroupName                      (CPF_Parm, CPF_NeedCtorLink)

void UMobilePlayerInput::ActivateInputGroup(const struct FString& GroupName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ActivateInputGroup");

	struct
	{
		struct FString                 GroupName;
	} params;
	params.GroupName = GroupName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.GetCurrentZones
// (FUNC_Defined, FUNC_Public)
// Parameters:
// TArray<class UMobileInputZone*> ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_NeedCtorLink)

TArray<class UMobileInputZone*> UMobilePlayerInput::GetCurrentZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.GetCurrentZones");

	struct
	{
		TArray<class UMobileInputZone*> ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.HasZones
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobilePlayerInput::HasZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.HasZones");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.FindorAddZone
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ZoneName                       (CPF_Parm, CPF_NeedCtorLink)
// class UMobileInputZone*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMobileInputZone* UMobilePlayerInput::FindorAddZone(const struct FString& ZoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.FindorAddZone");

	struct
	{
		struct FString                 ZoneName;
		class UMobileInputZone*        ReturnValue;
	} params;
	params.ZoneName = ZoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.FindZone
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FString                 ZoneName                       (CPF_Parm, CPF_NeedCtorLink)
// class UMobileInputZone*        ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMobileInputZone* UMobilePlayerInput::FindZone(const struct FString& ZoneName)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.FindZone");

	struct
	{
		struct FString                 ZoneName;
		class UMobileInputZone*        ReturnValue;
	} params;
	params.ZoneName = ZoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class USeqEvent_MobileRawInput* NewHandler                     (CPF_Parm)

void UMobilePlayerInput::AddKismetRawInputEventHandler(class USeqEvent_MobileRawInput* NewHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.AddKismetRawInputEventHandler");

	struct
	{
		class USeqEvent_MobileRawInput* NewHandler;
	} params;
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.AddKismetEventHandler
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class USeqEvent_MobileBase*    NewHandler                     (CPF_Parm)

void UMobilePlayerInput::AddKismetEventHandler(class USeqEvent_MobileBase* NewHandler)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.AddKismetEventHandler");

	struct
	{
		class USeqEvent_MobileBase*    NewHandler;
	} params;
	params.NewHandler = NewHandler;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.RefreshKismetLinks
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void UMobilePlayerInput::RefreshKismetLinks()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.RefreshKismetLinks");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SwapZoneOwners
// (FUNC_Defined, FUNC_Public)

void UMobilePlayerInput::SwapZoneOwners()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SwapZoneOwners");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitializeInputZones
// (FUNC_Defined, FUNC_Public)

void UMobilePlayerInput::InitializeInputZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitializeInputZones");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitTouchSystem
// (FUNC_Defined, FUNC_Public)

void UMobilePlayerInput::InitTouchSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitTouchSystem");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ClientInitInputSystem
// (FUNC_Defined, FUNC_Public)

void UMobilePlayerInput::ClientInitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ClientInitInputSystem");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.InitInputSystem
// (FUNC_Defined, FUNC_Public)

void UMobilePlayerInput::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.InitInputSystem");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ProcessWorldTouch
// (FUNC_Native, FUNC_Public)
// Parameters:
// class UMobileInputZone*        Zone                           (CPF_Parm)
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobilePlayerInput::ProcessWorldTouch(class UMobileInputZone* Zone, TEnumAsByte<enum class ETouchType> EventType, const struct FVector2D& TouchLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ProcessWorldTouch");

	struct
	{
		class UMobileInputZone*        Zone;
		TEnumAsByte<enum class ETouchType> EventType;
		struct FVector2D               TouchLocation;
		bool                           ReturnValue;
	} params;
	params.Zone = Zone;
	params.EventType = EventType;
	params.TouchLocation = TouchLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.SendInputAxis
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// float                          Delta                          (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobilePlayerInput::SendInputAxis(const struct FName& Key, float Delta, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SendInputAxis");

	struct
	{
		struct FName                   Key;
		float                          Delta;
		float                          DeltaTime;
	} params;
	params.Key = Key;
	params.Delta = Delta;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.SendInputKey
// (FUNC_Native, FUNC_Public)
// Parameters:
// struct FName                   Key                            (CPF_Parm)
// TEnumAsByte<enum class EInputEvent> Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_Parm)

void UMobilePlayerInput::SendInputKey(const struct FName& Key, TEnumAsByte<enum class EInputEvent> Event, float AmountDepressed)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.SendInputKey");

	struct
	{
		struct FName                   Key;
		TEnumAsByte<enum class EInputEvent> Event;
		float                          AmountDepressed;
	} params;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones
// (FUNC_Native, FUNC_Public)
// Parameters:
// int                            NewViewportX                   (CPF_Parm)
// int                            NewViewportY                   (CPF_Parm)
// int                            NewViewportSizeX               (CPF_Parm)
// int                            NewViewportSizeY               (CPF_Parm)

void UMobilePlayerInput::ConditionalUpdateInputZones(int NewViewportX, int NewViewportY, int NewViewportSizeX, int NewViewportSizeY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ConditionalUpdateInputZones");

	struct
	{
		int                            NewViewportX;
		int                            NewViewportY;
		int                            NewViewportSizeX;
		int                            NewViewportSizeY;
	} params;
	params.NewViewportX = NewViewportX;
	params.NewViewportY = NewViewportY;
	params.NewViewportSizeX = NewViewportSizeX;
	params.NewViewportSizeY = NewViewportSizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.NativeInitializeInputZones
// (FUNC_Native, FUNC_Public)
// Parameters:
// bool                           bIsFirstInitialize             (CPF_Parm)

void UMobilePlayerInput::NativeInitializeInputZones(bool bIsFirstInitialize)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.NativeInitializeInputZones");

	struct
	{
		bool                           bIsFirstInitialize;
	} params;
	params.bIsFirstInitialize = bIsFirstInitialize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem
// (FUNC_Native, FUNC_Public)

void UMobilePlayerInput::NativeInitializeInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.NativeInitializeInputSystem");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OnInputTouch
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// int                            Handle                         (CPF_Parm)
// TEnumAsByte<enum class ETouchType> Type                           (CPF_Parm)
// struct FVector2D               TouchLocation                  (CPF_Parm)
// float                          DeviceTimestamp                (CPF_Parm)
// int                            TouchpadIndex                  (CPF_Parm)

void UMobilePlayerInput::OnInputTouch(int Handle, TEnumAsByte<enum class ETouchType> Type, const struct FVector2D& TouchLocation, float DeviceTimestamp, int TouchpadIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnInputTouch");

	struct
	{
		int                            Handle;
		TEnumAsByte<enum class ETouchType> Type;
		struct FVector2D               TouchLocation;
		float                          DeviceTimestamp;
		int                            TouchpadIndex;
	} params;
	params.Handle = Handle;
	params.Type = Type;
	params.TouchLocation = TouchLocation;
	params.DeviceTimestamp = DeviceTimestamp;
	params.TouchpadIndex = TouchpadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.OnPreviewTouch
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// int                            TouchpadIndex                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobilePlayerInput::OnPreviewTouch(float X, float Y, int TouchpadIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnPreviewTouch");

	struct
	{
		float                          X;
		float                          Y;
		int                            TouchpadIndex;
		bool                           ReturnValue;
	} params;
	params.X = X;
	params.Y = Y;
	params.TouchpadIndex = TouchpadIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu
// (FUNC_Public, FUNC_Delegate)

void UMobilePlayerInput::OnTouchNotHandledInMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.OnTouchNotHandledInMenu");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.PlayerInput
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UMobilePlayerInput::PlayerInput(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.PlayerInput");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.CancelMobileInput
// (FUNC_Native, FUNC_Public)

void UMobilePlayerInput::CancelMobileInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.CancelMobileInput");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobilePlayerInput.ProcessMobileInput
// (FUNC_Native, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UMobilePlayerInput::ProcessMobileInput(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobilePlayerInput.ProcessMobileInput");

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


// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// (FUNC_Defined, FUNC_Public)

void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// (FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UNavigationHandle*       NavHandle                      (CPF_Parm)
// struct FVector                 InOutOfViewLocation            (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UNavMeshGoal_OutOfViewFrom::STATIC_MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint");

	struct
	{
		class UNavigationHandle*       NavHandle;
		struct FVector                 InOutOfViewLocation;
		bool                           ReturnValue;
	} params;
	params.NavHandle = NavHandle;
	params.InOutOfViewLocation = InOutOfViewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// (FUNC_Native, FUNC_Public)

void UNavMeshGoal_OutOfViewFrom::RecycleNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// (FUNC_Defined, FUNC_Public)

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// (FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class UNavigationHandle*       NavHandle                      (CPF_Parm)
// struct FVector                 InLocation                     (CPF_Const, CPF_Parm)
// struct FRotator                InRotation                     (CPF_Const, CPF_Parm)
// float                          InDistanceToCheck              (CPF_Const, CPF_Parm)
// TArray<struct FVector>         InLocationsToCheck             (CPF_Const, CPF_Parm, CPF_NeedCtorLink)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::STATIC_BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, TArray<struct FVector> InLocationsToCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations");

	struct
	{
		class UNavigationHandle*       NavHandle;
		struct FVector                 InLocation;
		struct FRotator                InRotation;
		float                          InDistanceToCheck;
		TArray<struct FVector>         InLocationsToCheck;
		bool                           ReturnValue;
	} params;
	params.NavHandle = NavHandle;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.InDistanceToCheck = InDistanceToCheck;
	params.InLocationsToCheck = InLocationsToCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SecondaryViewportClient.PostRender
// (FUNC_Event, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)

void USecondaryViewportClient::PostRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SecondaryViewportClient.PostRender");

	struct
	{
		class UCanvas*                 Canvas;
	} params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileSecondaryViewportClient.PostRender
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UMobileSecondaryViewportClient::PostRender(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileSecondaryViewportClient.PostRender");

	struct
	{
		class UCanvas*                 Canvas;
	} params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void USeqAct_GameCrowdPopulationManagerToggle::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.AgentDestroyed");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist
// (FUNC_Defined, FUNC_Public)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float USeqAct_GameCrowdPopulationManagerToggle::GetMaxSpawnDist()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetMaxSpawnDist");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FCrowdSpawnInfoItem     out_Item                       (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class AGameCrowdPopulationManager* PopMgr                         (CPF_Parm)

void USeqAct_GameCrowdPopulationManagerToggle::FillCrowdSpawnInfoItem(class AGameCrowdPopulationManager* PopMgr, struct FCrowdSpawnInfoItem* out_Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.FillCrowdSpawnInfoItem");

	struct
	{
		struct FCrowdSpawnInfoItem     out_Item;
		class AGameCrowdPopulationManager* PopMgr;
	} params;
	params.PopMgr = PopMgr;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Item != nullptr)
		*out_Item = params.out_Item;
}


// Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion
// (FUNC_Defined, FUNC_Event, FUNC_Static, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int USeqAct_GameCrowdPopulationManagerToggle::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdPopulationManagerToggle.GetObjClassVersion");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion
// (FUNC_Defined, FUNC_Event, FUNC_Static, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int USeqAct_GameCrowdSpawner::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_GameCrowdSpawner.GetObjClassVersion");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion
// (FUNC_Defined, FUNC_Event, FUNC_Static, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int USeqAct_MobileSaveLoadValue::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_MobileSaveLoadValue.GetObjClassVersion");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGameCrowdAgentSkeletal* Agent                          (CPF_Parm)

void USeqAct_PlayAgentAnimation::SetCurrentAnimationActionFor(class AGameCrowdAgentSkeletal* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.SetCurrentAnimationActionFor");

	struct
	{
		class AGameCrowdAgentSkeletal* Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion
// (FUNC_Defined, FUNC_Event, FUNC_Static, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int USeqAct_PlayAgentAnimation::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqAct_PlayAgentAnimation.GetObjClassVersion");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_HudRender.Render
// (FUNC_Public)
// Parameters:
// class UCanvas*                 TargetCanvas                   (CPF_Parm)
// class AHUD*                    TargetHud                      (CPF_Parm)

void USeqEvent_HudRender::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRender.Render");

	struct
	{
		class UCanvas*                 TargetCanvas;
		class AHUD*                    TargetHud;
	} params;
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRender.RegisterEvent
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void USeqEvent_HudRender::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRender.RegisterEvent");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileBase.AddToMobileInput
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UMobilePlayerInput*      MPI                            (CPF_Parm)

void USeqEvent_MobileBase::AddToMobileInput(class UMobilePlayerInput* MPI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileBase.AddToMobileInput");

	struct
	{
		class UMobilePlayerInput*      MPI;
	} params;
	params.MPI = MPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileBase.RegisterEvent
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void USeqEvent_MobileBase::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileBase.RegisterEvent");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion
// (FUNC_Defined, FUNC_Event, FUNC_Static, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int USeqEvent_MobileMotion::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileMotion.GetObjClassVersion");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class UMobilePlayerInput*      MPI                            (CPF_Parm)

void USeqEvent_MobileZoneBase::AddToMobileInput(class UMobilePlayerInput* MPI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileZoneBase.AddToMobileInput");

	struct
	{
		class UMobilePlayerInput*      MPI;
	} params;
	params.MPI = MPI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void USeqEvent_MobileRawInput::RegisterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_MobileRawInput.RegisterEvent");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.ModifyPostProcessSettings
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FPostProcessSettings    PP                             (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UGameCameraBase::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ModifyPostProcessSettings");

	struct
	{
		struct FPostProcessSettings    PP;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameCameraBase.Init
// (FUNC_Public)

void UGameCameraBase::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.Init");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.DisplayDebug
// (FUNC_Simulated, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm, CPF_OutParm)
// float                          out_YPos                       (CPF_Parm, CPF_OutParm)

void UGameCameraBase::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.DisplayDebug");

	struct
	{
		class AHUD*                    HUD;
		float                          out_YL;
		float                          out_YPos;
	} params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GameCameraBase.ProcessViewRotation
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm, CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm, CPF_OutParm)

void UGameCameraBase::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ProcessViewRotation");

	struct
	{
		float                          DeltaTime;
		class AActor*                  ViewTarget;
		struct FRotator                out_ViewRotation;
		struct FRotator                out_DeltaRot;
	} params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameCameraBase.UpdateCamera
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm, CPF_OutParm)

void UGameCameraBase::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.UpdateCamera");

	struct
	{
		class APawn*                   P;
		class AGamePlayerCamera*       CameraActor;
		float                          DeltaTime;
		struct FTViewTarget            OutVT;
	} params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameCameraBase.ResetInterpolation
// (FUNC_Defined, FUNC_Public)

void UGameCameraBase::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.ResetInterpolation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.OnBecomeInActive
// (FUNC_Public)
// Parameters:
// class UGameCameraBase*         NewCamera                      (CPF_Parm)

void UGameCameraBase::OnBecomeInActive(class UGameCameraBase* NewCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeInActive");

	struct
	{
		class UGameCameraBase*         NewCamera;
	} params;
	params.NewCamera = NewCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCameraBase.OnBecomeActive
// (FUNC_Public)
// Parameters:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameCameraBase::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCameraBase.OnBecomeActive");

	struct
	{
		class UGameCameraBase*         OldCamera;
	} params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ResetInterpolation
// (FUNC_Defined, FUNC_Public)

void UGameThirdPersonCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ResetInterpolation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FPostProcessSettings    PP                             (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UGameThirdPersonCamera::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ModifyPostProcessSettings");

	struct
	{
		struct FPostProcessSettings    PP;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameThirdPersonCamera.OnBecomeActive
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameThirdPersonCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.OnBecomeActive");

	struct
	{
		class UGameCameraBase*         OldCamera;
	} params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ProcessViewRotation
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm, CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm, CPF_OutParm)

void UGameThirdPersonCamera::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ProcessViewRotation");

	struct
	{
		float                          DeltaTime;
		class AActor*                  ViewTarget;
		struct FRotator                out_ViewRotation;
		struct FRotator                out_DeltaRot;
	} params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameThirdPersonCamera.UpdateCameraMode
// (FUNC_Final, FUNC_Defined, FUNC_Protected)
// Parameters:
// class APawn*                   P                              (CPF_Parm)

void UGameThirdPersonCamera::UpdateCameraMode(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCameraMode");

	struct
	{
		class APawn*                   P;
	} params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.FindBestCameraMode
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class APawn*                   P                              (CPF_Parm)
// class UGameThirdPersonCameraMode* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::FindBestCameraMode(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.FindBestCameraMode");

	struct
	{
		class APawn*                   P;
		class UGameThirdPersonCameraMode* ReturnValue;
	} params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FRotator                Delta                          (CPF_Parm)

void UGameThirdPersonCamera::AdjustFocusPointInterpolation(const struct FRotator& Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustFocusPointInterpolation");

	struct
	{
		struct FRotator                Delta;
	} params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation
// (FUNC_Defined, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UGameThirdPersonCamera::GetActualFocusLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetActualFocusLocation");

	struct
	{
		struct FVector                 ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint
// (FUNC_Defined, FUNC_Event, FUNC_Protected)
// Parameters:
// class APawn*                   P                              (CPF_Parm)

void UGameThirdPersonCamera::UpdateFocusPoint(class APawn* P)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateFocusPoint");

	struct
	{
		class APawn*                   P;
	} params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.ClearFocusPoint
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// bool                           bLeaveCameraRotation           (CPF_OptionalParm, CPF_Parm)

void UGameThirdPersonCamera::ClearFocusPoint(bool bLeaveCameraRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.ClearFocusPoint");

	struct
	{
		bool                           bLeaveCameraRotation;
	} params;
	params.bLeaveCameraRotation = bLeaveCameraRotation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.GetFocusActor
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class AActor* UGameThirdPersonCamera::GetFocusActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetFocusActor");

	struct
	{
		class AActor*                  ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.SetFocusOnActor
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class AActor*                  FocusActor                     (CPF_Parm)
// struct FName                   FocusBoneName                  (CPF_Parm)
// struct FVector2D               InterpSpeedRange               (CPF_Parm)
// struct FVector2D               InFocusFOV                     (CPF_Parm)
// float                          CameraFOV                      (CPF_OptionalParm, CPF_Parm)
// bool                           bAlwaysFocus                   (CPF_OptionalParm, CPF_Parm)
// bool                           bAdjustCamera                  (CPF_OptionalParm, CPF_Parm)
// bool                           bIgnoreTrace                   (CPF_OptionalParm, CPF_Parm)
// float                          FocusPitchOffsetDeg            (CPF_OptionalParm, CPF_Parm)

void UGameThirdPersonCamera::SetFocusOnActor(class AActor* FocusActor, const struct FName& FocusBoneName, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnActor");

	struct
	{
		class AActor*                  FocusActor;
		struct FName                   FocusBoneName;
		struct FVector2D               InterpSpeedRange;
		struct FVector2D               InFocusFOV;
		float                          CameraFOV;
		bool                           bAlwaysFocus;
		bool                           bAdjustCamera;
		bool                           bIgnoreTrace;
		float                          FocusPitchOffsetDeg;
	} params;
	params.FocusActor = FocusActor;
	params.FocusBoneName = FocusBoneName;
	params.InterpSpeedRange = InterpSpeedRange;
	params.InFocusFOV = InFocusFOV;
	params.CameraFOV = CameraFOV;
	params.bAlwaysFocus = bAlwaysFocus;
	params.bAdjustCamera = bAdjustCamera;
	params.bIgnoreTrace = bIgnoreTrace;
	params.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FVector                 FocusWorldLoc                  (CPF_Parm)
// struct FVector2D               InterpSpeedRange               (CPF_Parm)
// struct FVector2D               InFocusFOV                     (CPF_Parm)
// float                          CameraFOV                      (CPF_OptionalParm, CPF_Parm)
// bool                           bAlwaysFocus                   (CPF_OptionalParm, CPF_Parm)
// bool                           bAdjustCamera                  (CPF_OptionalParm, CPF_Parm)
// bool                           bIgnoreTrace                   (CPF_OptionalParm, CPF_Parm)
// float                          FocusPitchOffsetDeg            (CPF_OptionalParm, CPF_Parm)

void UGameThirdPersonCamera::SetFocusOnLoc(const struct FVector& FocusWorldLoc, const struct FVector2D& InterpSpeedRange, const struct FVector2D& InFocusFOV, float CameraFOV, bool bAlwaysFocus, bool bAdjustCamera, bool bIgnoreTrace, float FocusPitchOffsetDeg)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.SetFocusOnLoc");

	struct
	{
		struct FVector                 FocusWorldLoc;
		struct FVector2D               InterpSpeedRange;
		struct FVector2D               InFocusFOV;
		float                          CameraFOV;
		bool                           bAlwaysFocus;
		bool                           bAdjustCamera;
		bool                           bIgnoreTrace;
		float                          FocusPitchOffsetDeg;
	} params;
	params.FocusWorldLoc = FocusWorldLoc;
	params.InterpSpeedRange = InterpSpeedRange;
	params.InFocusFOV = InFocusFOV;
	params.CameraFOV = CameraFOV;
	params.bAlwaysFocus = bAlwaysFocus;
	params.bAdjustCamera = bAdjustCamera;
	params.bIgnoreTrace = bIgnoreTrace;
	params.FocusPitchOffsetDeg = FocusPitchOffsetDeg;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.AdjustTurn
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            AngleOffset                    (CPF_Parm)

void UGameThirdPersonCamera::AdjustTurn(int AngleOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.AdjustTurn");

	struct
	{
		int                            AngleOffset;
	} params;
	params.AngleOffset = AngleOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.EndTurn
// (FUNC_Native, FUNC_Public)

void UGameThirdPersonCamera::EndTurn()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.EndTurn");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.BeginTurn
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            StartAngle                     (CPF_Parm)
// int                            EndAngle                       (CPF_Parm)
// float                          TimeSec                        (CPF_Parm)
// float                          DelaySec                       (CPF_OptionalParm, CPF_Parm)
// bool                           bAlignTargetWhenFinished       (CPF_OptionalParm, CPF_Parm)

void UGameThirdPersonCamera::BeginTurn(int StartAngle, int EndAngle, float TimeSec, float DelaySec, bool bAlignTargetWhenFinished)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.BeginTurn");

	struct
	{
		int                            StartAngle;
		int                            EndAngle;
		float                          TimeSec;
		float                          DelaySec;
		bool                           bAlignTargetWhenFinished;
	} params;
	params.StartAngle = StartAngle;
	params.EndAngle = EndAngle;
	params.TimeSec = TimeSec;
	params.DelaySec = DelaySec;
	params.bAlignTargetWhenFinished = bAlignTargetWhenFinished;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera
// (FUNC_Native, FUNC_Protected, FUNC_HasOutParms)
// Parameters:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm, CPF_OutParm)

void UGameThirdPersonCamera::PlayerUpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.PlayerUpdateCamera");

	struct
	{
		class APawn*                   P;
		class AGamePlayerCamera*       CameraActor;
		float                          DeltaTime;
		struct FTViewTarget            OutVT;
	} params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameThirdPersonCamera.UpdateCamera
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm, CPF_OutParm)

void UGameThirdPersonCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.UpdateCamera");

	struct
	{
		class APawn*                   P;
		class AGamePlayerCamera*       CameraActor;
		float                          DeltaTime;
		struct FTViewTarget            OutVT;
	} params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameThirdPersonCamera.GetDesiredFOV
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class APawn*                   ViewedPawn                     (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UGameThirdPersonCamera::GetDesiredFOV(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.GetDesiredFOV");

	struct
	{
		class APawn*                   ViewedPawn;
		float                          ReturnValue;
	} params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCamera.Init
// (FUNC_Defined, FUNC_Public)

void UGameThirdPersonCamera::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Init");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.Reset
// (FUNC_Defined, FUNC_Public)

void UGameThirdPersonCamera::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.Reset");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCamera.CreateCameraMode
// (FUNC_Defined, FUNC_Protected)
// Parameters:
// class UClass*                  ModeClass                      (CPF_Parm)
// class UGameThirdPersonCameraMode* ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGameThirdPersonCameraMode* UGameThirdPersonCamera::CreateCameraMode(class UClass* ModeClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCamera.CreateCameraMode");

	struct
	{
		class UClass*                  ModeClass;
		class UGameThirdPersonCameraMode* ReturnValue;
	} params;
	params.ModeClass = ModeClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.AdjustFOVForViewport
// (FUNC_Final, FUNC_Native, FUNC_Protected)
// Parameters:
// float                          inHorizFOV                     (CPF_Parm)
// class APawn*                   CameraTargetPawn               (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float AGamePlayerCamera::AdjustFOVForViewport(float inHorizFOV, class APawn* CameraTargetPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.AdjustFOVForViewport");

	struct
	{
		float                          inHorizFOV;
		class APawn*                   CameraTargetPawn;
		float                          ReturnValue;
	} params;
	params.inHorizFOV = inHorizFOV;
	params.CameraTargetPawn = CameraTargetPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.ProcessViewRotation
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm, CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm, CPF_OutParm)

void AGamePlayerCamera::ProcessViewRotation(float DeltaTime, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ProcessViewRotation");

	struct
	{
		float                          DeltaTime;
		struct FRotator                out_ViewRotation;
		struct FRotator                out_DeltaRot;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GamePlayerCamera.ResetInterpolation
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGamePlayerCamera::ResetInterpolation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ResetInterpolation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.SetColorScale
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// struct FVector                 NewColorScale                  (CPF_Parm)

void AGamePlayerCamera::SetColorScale(const struct FVector& NewColorScale)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.SetColorScale");

	struct
	{
		struct FVector                 NewColorScale;
	} params;
	params.NewColorScale = NewColorScale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.DisplayDebug
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (CPF_Parm)
// float                          out_YL                         (CPF_Parm, CPF_OutParm)
// float                          out_YPos                       (CPF_Parm, CPF_OutParm)

void AGamePlayerCamera::DisplayDebug(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.DisplayDebug");

	struct
	{
		class AHUD*                    HUD;
		float                          out_YL;
		float                          out_YPos;
	} params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FTViewTarget            OutVT                          (CPF_Const, CPF_Parm, CPF_OutParm)

void AGamePlayerCamera::UpdateCameraLensEffects(struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateCameraLensEffects");

	struct
	{
		struct FTViewTarget            OutVT;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GamePlayerCamera.UpdateViewTarget
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FTViewTarget            OutVT                          (CPF_Parm, CPF_OutParm)
// float                          DeltaTime                      (CPF_Parm)

void AGamePlayerCamera::UpdateViewTarget(float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.UpdateViewTarget");

	struct
	{
		struct FTViewTarget            OutVT;
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AGamePlayerCamera::ShouldConstrainAspectRatio()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.ShouldConstrainAspectRatio");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.FindBestCameraType
// (FUNC_Defined, FUNC_Protected)
// Parameters:
// class AActor*                  CameraTarget                   (CPF_Parm)
// class UGameCameraBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGameCameraBase* AGamePlayerCamera::FindBestCameraType(class AActor* CameraTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.FindBestCameraType");

	struct
	{
		class AActor*                  CameraTarget;
		class UGameCameraBase*         ReturnValue;
	} params;
	params.CameraTarget = CameraTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerCamera.Reset
// (FUNC_Defined, FUNC_Public)

void AGamePlayerCamera::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.Reset");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.PostBeginPlay
// (FUNC_Defined, FUNC_Public)

void AGamePlayerCamera::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo
// (FUNC_Native, FUNC_Protected)
// Parameters:
// class AActor*                  TargetBase                     (CPF_Parm)

void AGamePlayerCamera::CacheLastTargetBaseInfo(class AActor* TargetBase)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CacheLastTargetBaseInfo");

	struct
	{
		class AActor*                  TargetBase;
	} params;
	params.TargetBase = TargetBase;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerCamera.CreateCamera
// (FUNC_Defined, FUNC_Protected)
// Parameters:
// class UClass*                  CameraClass                    (CPF_Parm)
// class UGameCameraBase*         ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UGameCameraBase* AGamePlayerCamera::CreateCamera(class UClass* CameraClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GamePlayerCamera.CreateCamera");

	struct
	{
		class UClass*                  CameraClass;
		class UGameCameraBase*         ReturnValue;
	} params;
	params.CameraClass = CameraClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.SetViewOffset
// (FUNC_Final, FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FViewOffsetData         NewViewOffset                  (CPF_Const, CPF_Parm, CPF_OutParm)

void UGameThirdPersonCameraMode::SetViewOffset(struct FViewOffsetData* NewViewOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetViewOffset");

	struct
	{
		struct FViewOffsetData         NewViewOffset;
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewViewOffset != nullptr)
		*NewViewOffset = params.NewViewOffset;
}


// Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FPostProcessSettings    PP                             (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void UGameThirdPersonCameraMode::ModifyPostProcessSettings(struct FPostProcessSettings* PP)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ModifyPostProcessSettings");

	struct
	{
		struct FPostProcessSettings    PP;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PP != nullptr)
		*PP = params.PP;
}


// Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms, FUNC_HasDefaults)
// Parameters:
// struct FTViewTarget            VT                             (CPF_Const, CPF_Parm, CPF_OutParm)
// float                          DeltaTime                      (CPF_Parm)

void UGameThirdPersonCameraMode::UpdatePostProcess(float DeltaTime, struct FTViewTarget* VT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.UpdatePostProcess");

	struct
	{
		struct FTViewTarget            VT;
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (VT != nullptr)
		*VT = params.VT;
}


// Function GameFramework.GameThirdPersonCameraMode.DOFTrace
// (FUNC_Defined, FUNC_Simulated, FUNC_Protected, FUNC_HasDefaults)
// Parameters:
// class AActor*                  TraceOwner                     (CPF_Parm)
// struct FVector                 StartTrace                     (CPF_Parm)
// struct FVector                 EndTrace                       (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UGameThirdPersonCameraMode::DOFTrace(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.DOFTrace");

	struct
	{
		class AActor*                  TraceOwner;
		struct FVector                 StartTrace;
		struct FVector                 EndTrace;
		struct FVector                 ReturnValue;
	} params;
	params.TraceOwner = TraceOwner;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc
// (FUNC_Defined, FUNC_Simulated, FUNC_Protected)
// Parameters:
// class AActor*                  TraceOwner                     (CPF_Parm)
// struct FVector                 StartTrace                     (CPF_Parm)
// struct FVector                 EndTrace                       (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UGameThirdPersonCameraMode::GetDOFFocusLoc(class AActor* TraceOwner, const struct FVector& StartTrace, const struct FVector& EndTrace)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDOFFocusLoc");

	struct
	{
		class AActor*                  TraceOwner;
		struct FVector                 StartTrace;
		struct FVector                 EndTrace;
		struct FVector                 ReturnValue;
	} params;
	params.TraceOwner = TraceOwner;
	params.StartTrace = StartTrace;
	params.EndTrace = EndTrace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation
// (FUNC_Simulated, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)
// class AActor*                  ViewTarget                     (CPF_Parm)
// struct FRotator                out_ViewRotation               (CPF_Parm, CPF_OutParm)
// struct FRotator                out_DeltaRot                   (CPF_Parm, CPF_OutParm)

void UGameThirdPersonCameraMode::ProcessViewRotation(float DeltaTime, class AActor* ViewTarget, struct FRotator* out_ViewRotation, struct FRotator* out_DeltaRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.ProcessViewRotation");

	struct
	{
		float                          DeltaTime;
		class AActor*                  ViewTarget;
		struct FRotator                out_ViewRotation;
		struct FRotator                out_DeltaRot;
	} params;
	params.DeltaTime = DeltaTime;
	params.ViewTarget = ViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_ViewRotation != nullptr)
		*out_ViewRotation = params.out_ViewRotation;
	if (out_DeltaRot != nullptr)
		*out_DeltaRot = params.out_DeltaRot;
}


// Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class APawn*                   ViewedPawn                     (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameThirdPersonCameraMode::SetFocusPoint(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.SetFocusPoint");

	struct
	{
		class APawn*                   ViewedPawn;
		bool                           ReturnValue;
	} params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// class APawn*                   TargetPawn                     (CPF_Parm)
// struct FTViewTarget            CurrentViewTarget              (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UGameThirdPersonCameraMode::GetCameraWorstCaseLoc(class APawn* TargetPawn, const struct FTViewTarget& CurrentViewTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetCameraWorstCaseLoc");

	struct
	{
		class APawn*                   TargetPawn;
		struct FTViewTarget            CurrentViewTarget;
		struct FVector                 ReturnValue;
	} params;
	params.TargetPawn = TargetPawn;
	params.CurrentViewTarget = CurrentViewTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class APawn*                   ViewedPawn                     (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UGameThirdPersonCameraMode::GetDesiredFOV(class APawn* ViewedPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.GetDesiredFOV");

	struct
	{
		class APawn*                   ViewedPawn;
		float                          ReturnValue;
	} params;
	params.ViewedPawn = ViewedPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class APawn*                   P                              (CPF_Parm)
// struct FVector                 Offset                         (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UGameThirdPersonCameraMode::AdjustViewOffset(class APawn* P, const struct FVector& Offset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.AdjustViewOffset");

	struct
	{
		class APawn*                   P;
		struct FVector                 Offset;
		struct FVector                 ReturnValue;
	} params;
	params.P = P;
	params.Offset = Offset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive
// (FUNC_Public)
// Parameters:
// class APawn*                   TargetPawn                     (CPF_Parm)
// class UGameThirdPersonCameraMode* NewMode                        (CPF_Parm)

void UGameThirdPersonCameraMode::OnBecomeInActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* NewMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeInActive");

	struct
	{
		class APawn*                   TargetPawn;
		class UGameThirdPersonCameraMode* NewMode;
	} params;
	params.TargetPawn = TargetPawn;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class APawn*                   TargetPawn                     (CPF_Parm)
// class UGameThirdPersonCameraMode* PrevMode                       (CPF_Parm)

void UGameThirdPersonCameraMode::OnBecomeActive(class APawn* TargetPawn, class UGameThirdPersonCameraMode* PrevMode)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.OnBecomeActive");

	struct
	{
		class APawn*                   TargetPawn;
		class UGameThirdPersonCameraMode* PrevMode;
	} params;
	params.TargetPawn = TargetPawn;
	params.PrevMode = PrevMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameThirdPersonCameraMode.Init
// (FUNC_Public)

void UGameThirdPersonCameraMode::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameThirdPersonCameraMode.Init");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.RelativeToWorldOffset
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FRotator                InRotation                     (CPF_Parm)
// struct FVector                 RelativeSpaceOffset            (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UGameSpecialMove::RelativeToWorldOffset(const struct FRotator& InRotation, const struct FVector& RelativeSpaceOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.RelativeToWorldOffset");

	struct
	{
		struct FRotator                InRotation;
		struct FVector                 RelativeSpaceOffset;
		struct FVector                 ReturnValue;
	} params;
	params.InRotation = InRotation;
	params.RelativeSpaceOffset = RelativeSpaceOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.WorldToRelativeOffset
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FRotator                InRotation                     (CPF_Parm)
// struct FVector                 WorldSpaceOffset               (CPF_Parm)
// struct FVector                 ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

struct FVector UGameSpecialMove::WorldToRelativeOffset(const struct FRotator& InRotation, const struct FVector& WorldSpaceOffset)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.WorldToRelativeOffset");

	struct
	{
		struct FRotator                InRotation;
		struct FVector                 WorldSpaceOffset;
		struct FVector                 ReturnValue;
	} params;
	params.InRotation = InRotation;
	params.WorldSpaceOffset = WorldSpaceOffset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ForcePawnRotation
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// class APawn*                   P                              (CPF_Parm)
// struct FRotator                NewRotation                    (CPF_Parm)

void UGameSpecialMove::ForcePawnRotation(class APawn* P, const struct FRotator& NewRotation)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ForcePawnRotation");

	struct
	{
		class APawn*                   P;
		struct FRotator                NewRotation;
	} params;
	params.P = P;
	params.NewRotation = NewRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.MessageEvent
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FName                   EventName                      (CPF_Parm)
// class UObject*                 Sender                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameSpecialMove::MessageEvent(const struct FName& EventName, class UObject* Sender)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.MessageEvent");

	struct
	{
		struct FName                   EventName;
		class UObject*                 Sender;
		bool                           ReturnValue;
	} params;
	params.EventName = EventName;
	params.Sender = Sender;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ResetFacePreciseRotation
// (FUNC_Final, FUNC_Native, FUNC_Public)

void UGameSpecialMove::ResetFacePreciseRotation()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ResetFacePreciseRotation");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ReachedPrecisePosition
// (FUNC_Event, FUNC_Public)

void UGameSpecialMove::ReachedPrecisePosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ReachedPrecisePosition");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SetFacePreciseRotation
// (FUNC_Final, FUNC_Native, FUNC_Public)
// Parameters:
// struct FRotator                RotationToFace                 (CPF_Parm)
// float                          InterpolationTime              (CPF_Parm)

void UGameSpecialMove::SetFacePreciseRotation(const struct FRotator& RotationToFace, float InterpolationTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetFacePreciseRotation");

	struct
	{
		struct FRotator                RotationToFace;
		float                          InterpolationTime;
	} params;
	params.RotationToFace = RotationToFace;
	params.InterpolationTime = InterpolationTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SetReachPreciseDestination
// (FUNC_Final, FUNC_Native, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// struct FVector                 DestinationToReach             (CPF_Parm)
// bool                           bCancel                        (CPF_OptionalParm, CPF_Parm)

void UGameSpecialMove::SetReachPreciseDestination(const struct FVector& DestinationToReach, bool bCancel)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SetReachPreciseDestination");

	struct
	{
		struct FVector                 DestinationToReach;
		bool                           bCancel;
	} params;
	params.DestinationToReach = DestinationToReach;
	params.bCancel = bCancel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.ShouldReplicate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameSpecialMove::ShouldReplicate()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ShouldReplicate");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated
// (FUNC_Public)

void UGameSpecialMove::SpecialMoveFlagsUpdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveFlagsUpdated");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.Tick
// (FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UGameSpecialMove::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.Tick");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveEnded
// (FUNC_Public)
// Parameters:
// struct FName                   PrevMove                       (CPF_Parm)
// struct FName                   NextMove                       (CPF_Parm)

void UGameSpecialMove::SpecialMoveEnded(const struct FName& PrevMove, const struct FName& NextMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveEnded");

	struct
	{
		struct FName                   PrevMove;
		struct FName                   NextMove;
	} params;
	params.PrevMove = PrevMove;
	params.NextMove = NextMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.SpecialMoveStarted
// (FUNC_Public)
// Parameters:
// bool                           bForced                        (CPF_Parm)
// struct FName                   PrevMove                       (CPF_Parm)

void UGameSpecialMove::SpecialMoveStarted(bool bForced, const struct FName& PrevMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.SpecialMoveStarted");

	struct
	{
		bool                           bForced;
		struct FName                   PrevMove;
	} params;
	params.bForced = bForced;
	params.PrevMove = PrevMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove
// (FUNC_Defined, FUNC_Protected)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameSpecialMove::InternalCanDoSpecialMove()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InternalCanDoSpecialMove");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanDoSpecialMove
// (FUNC_Final, FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// bool                           bForceCheck                    (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameSpecialMove::CanDoSpecialMove(bool bForceCheck)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanDoSpecialMove");

	struct
	{
		bool                           bForceCheck;
		bool                           ReturnValue;
	} params;
	params.bForceCheck = bForceCheck;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanOverrideSpecialMove
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FName                   InMove                         (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameSpecialMove::CanOverrideSpecialMove(const struct FName& InMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideSpecialMove");

	struct
	{
		struct FName                   InMove;
		bool                           ReturnValue;
	} params;
	params.InMove = InMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanOverrideMoveWith
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FName                   NewMove                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameSpecialMove::CanOverrideMoveWith(const struct FName& NewMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanOverrideMoveWith");

	struct
	{
		struct FName                   NewMove;
		bool                           ReturnValue;
	} params;
	params.NewMove = NewMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.CanChainMove
// (FUNC_Defined, FUNC_Public)
// Parameters:
// struct FName                   NextMove                       (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameSpecialMove::CanChainMove(const struct FName& NextMove)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.CanChainMove");

	struct
	{
		struct FName                   NextMove;
		bool                           ReturnValue;
	} params;
	params.NextMove = NextMove;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags
// (FUNC_Public)
// Parameters:
// int                            Flags                          (CPF_Parm)

void UGameSpecialMove::ExtractSpecialMoveFlags(int Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.ExtractSpecialMoveFlags");

	struct
	{
		int                            Flags;
	} params;
	params.Flags = Flags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameSpecialMove.InitSpecialMoveFlags
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            out_Flags                      (CPF_Parm, CPF_OutParm)

void UGameSpecialMove::InitSpecialMoveFlags(int* out_Flags)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMoveFlags");

	struct
	{
		int                            out_Flags;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Flags != nullptr)
		*out_Flags = params.out_Flags;
}


// Function GameFramework.GameSpecialMove.InitSpecialMove
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AGamePawn*               inPawn                         (CPF_Parm)
// struct FName                   InHandle                       (CPF_Parm)

void UGameSpecialMove::InitSpecialMove(class AGamePawn* inPawn, const struct FName& InHandle)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameSpecialMove.InitSpecialMove");

	struct
	{
		class AGamePawn*               inPawn;
		struct FName                   InHandle;
	} params;
	params.inPawn = inPawn;
	params.InHandle = InHandle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStateObject.Reset
// (FUNC_Native, FUNC_Public)

void UGameStateObject::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStateObject.Reset");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStateObject.PreProcessStream
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UGameStateObject::PreProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStateObject.PreProcessStream");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// (FUNC_Native, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// int                            EventID                        (CPF_Parm)
// int                            AggregateID                    (CPF_Parm, CPF_OutParm)
// int                            TargetAggregateID              (CPF_Parm, CPF_OutParm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameStatsAggregator::GetAggregateMappingIDs(int EventID, int* AggregateID, int* TargetAggregateID)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs");

	struct
	{
		int                            EventID;
		int                            AggregateID;
		int                            TargetAggregateID;
		bool                           ReturnValue;
	} params;
	params.EventID = EventID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AggregateID != nullptr)
		*AggregateID = params.AggregateID;
	if (TargetAggregateID != nullptr)
		*TargetAggregateID = params.TargetAggregateID;

	return params.ReturnValue;
}


// Function GameFramework.GameStatsAggregator.Reset
// (FUNC_Native, FUNC_Public)

void UGameStatsAggregator::Reset()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.Reset");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.PostProcessStream
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UGameStatsAggregator::PostProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.PostProcessStream");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.PreProcessStream
// (FUNC_Native, FUNC_Event, FUNC_Public)

void UGameStatsAggregator::PreProcessStream()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameStatsAggregator.PreProcessStream");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraHUD.PostRender
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasDefaults)

void ADebugCameraHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.PostRender");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraHUD.DisplayMaterials
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm, CPF_OutParm)
// float                          DY                             (CPF_Parm)
// class UMeshComponent*          MeshComp                       (CPF_Parm, CPF_EditInline)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool ADebugCameraHUD::DisplayMaterials(float X, float DY, class UMeshComponent* MeshComp, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.DisplayMaterials");

	struct
	{
		float                          X;
		float                          Y;
		float                          DY;
		class UMeshComponent*          MeshComp;
		bool                           ReturnValue;
	} params;
	params.X = X;
	params.DY = DY;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function GameFramework.DebugCameraHUD.PostBeginPlay
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)

void ADebugCameraHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraHUD.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.DebugCameraInput.InputKey
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            ControllerId                   (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// TEnumAsByte<enum class EInputEvent> Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_OptionalParm, CPF_Parm)
// bool                           bGamepad                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UDebugCameraInput::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<enum class EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.DebugCameraInput.InputKey");

	struct
	{
		int                            ControllerId;
		struct FName                   Key;
		TEnumAsByte<enum class EInputEvent> Event;
		float                          AmountDepressed;
		bool                           bGamepad;
		bool                           ReturnValue;
	} params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist
// (FUNC_Public)
// Parameters:
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UGameCrowdSpawnerInterface::GetMaxSpawnDist()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.GetMaxSpawnDist");

	struct
	{
		float                          ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed
// (FUNC_Public)
// Parameters:
// class AGameCrowdAgent*         Agent                          (CPF_Parm)

void UGameCrowdSpawnerInterface::AgentDestroyed(class AGameCrowdAgent* Agent)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnerInterface.AgentDestroyed");

	struct
	{
		class AGameCrowdAgent*         Agent;
	} params;
	params.Agent = Agent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition
// (FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class USeqAct_GameCrowdSpawner* Spawner                        (CPF_Parm)
// struct FVector                 SpawnPos                       (CPF_Parm, CPF_OutParm)
// struct FRotator                SpawnRot                       (CPF_Parm, CPF_OutParm)

void UGameCrowdSpawnInterface::GetSpawnPosition(class USeqAct_GameCrowdSpawner* Spawner, struct FVector* SpawnPos, struct FRotator* SpawnRot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameCrowdSpawnInterface.GetSpawnPosition");

	struct
	{
		class USeqAct_GameCrowdSpawner* Spawner;
		struct FVector                 SpawnPos;
		struct FRotator                SpawnRot;
	} params;
	params.Spawner = Spawner;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SpawnPos != nullptr)
		*SpawnPos = params.SpawnPos;
	if (SpawnRot != nullptr)
		*SpawnRot = params.SpawnRot;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class APawn*                   InEnemy                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.IsEnemyBasedOnInterpActor");

	struct
	{
		class APawn*                   InEnemy;
		bool                           ReturnValue;
	} params;
	params.InEnemy = InEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  BlockedBy                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal::HandlePathObstruction(class AActor* BlockedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.HandlePathObstruction");

	struct
	{
		class AActor*                  BlockedBy;
		bool                           ReturnValue;
	} params;
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed
// (FUNC_Defined, FUNC_Public)

void UGameAICmd_Hover_MoveToGoal::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.Pushed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal
// (FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class AGameAIController*       AI                             (CPF_Parm)
// class AActor*                  InGoal                         (CPF_Parm)
// float                          InGoalDistance                 (CPF_Parm)
// float                          InHoverHeight                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal::STATIC_MoveToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal.MoveToGoal");

	struct
	{
		class AGameAIController*       AI;
		class AActor*                  InGoal;
		float                          InGoalDistance;
		float                          InHoverHeight;
		bool                           ReturnValue;
	} params;
	params.AI = AI;
	params.InGoal = InGoal;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class AHUD*                    H                              (CPF_Parm)
// struct FName                   Category                       (CPF_Parm)

void UGameAICmd_Hover_MoveToGoal_Mesh::DrawDebug(class AHUD* H, const struct FName& Category)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.DrawDebug");

	struct
	{
		class AHUD*                    H;
		struct FName                   Category;
	} params;
	params.H = H;
	params.Category = Category;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class APawn*                   InEnemy                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::IsEnemyBasedOnInterpActor(class APawn* InEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.IsEnemyBasedOnInterpActor");

	struct
	{
		class APawn*                   InEnemy;
		bool                           ReturnValue;
	} params;
	params.InEnemy = InEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::ShouldUpdateBreadCrumbs()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ShouldUpdateBreadCrumbs");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal
// (FUNC_Defined, FUNC_Public)
// Parameters:
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HasReachedGoal()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HasReachedGoal");

	struct
	{
		bool                           ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath
// (FUNC_Public)

void UGameAICmd_Hover_MoveToGoal_Mesh::ReEvaluatePath()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.ReEvaluatePath");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class AActor*                  BlockedBy                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::HandlePathObstruction(class AActor* BlockedBy)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HandlePathObstruction");

	struct
	{
		class AActor*                  BlockedBy;
		bool                           ReturnValue;
	} params;
	params.BlockedBy = BlockedBy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick
// (FUNC_Defined, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UGameAICmd_Hover_MoveToGoal_Mesh::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Tick");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped
// (FUNC_Defined, FUNC_Public)

void UGameAICmd_Hover_MoveToGoal_Mesh::Popped()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Popped");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed
// (FUNC_Defined, FUNC_Public)

void UGameAICmd_Hover_MoveToGoal_Mesh::Pushed()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.Pushed");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh
// (FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class AGameAIController*       AI                             (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_HoverBackToMesh(class AGameAIController* AI)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverBackToMesh");

	struct
	{
		class AGameAIController*       AI;
		bool                           ReturnValue;
	} params;
	params.AI = AI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint
// (FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class AGameAIController*       AI                             (CPF_Parm)
// struct FVector                 InPoint                        (CPF_Parm)
// float                          InGoalDistance                 (CPF_Parm)
// float                          InHoverHeight                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_HoverToPoint(class AGameAIController* AI, const struct FVector& InPoint, float InGoalDistance, float InHoverHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToPoint");

	struct
	{
		class AGameAIController*       AI;
		struct FVector                 InPoint;
		float                          InGoalDistance;
		float                          InHoverHeight;
		bool                           ReturnValue;
	} params;
	params.AI = AI;
	params.InPoint = InPoint;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal
// (FUNC_Defined, FUNC_Static, FUNC_Public)
// Parameters:
// class AGameAIController*       AI                             (CPF_Parm)
// class AActor*                  InGoal                         (CPF_Parm)
// float                          InGoalDistance                 (CPF_Parm)
// float                          InHoverHeight                  (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UGameAICmd_Hover_MoveToGoal_Mesh::STATIC_HoverToGoal(class AGameAIController* AI, class AActor* InGoal, float InGoalDistance, float InHoverHeight)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameAICmd_Hover_MoveToGoal_Mesh.HoverToGoal");

	struct
	{
		class AGameAIController*       AI;
		class AActor*                  InGoal;
		float                          InGoalDistance;
		float                          InHoverHeight;
		bool                           ReturnValue;
	} params;
	params.AI = AI;
	params.InGoal = InGoal;
	params.InGoalDistance = InGoalDistance;
	params.InHoverHeight = InHoverHeight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameFixedCamera.OnBecomeActive
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UGameCameraBase*         OldCamera                      (CPF_Parm)

void UGameFixedCamera::OnBecomeActive(class UGameCameraBase* OldCamera)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.OnBecomeActive");

	struct
	{
		class UGameCameraBase*         OldCamera;
	} params;
	params.OldCamera = OldCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameFixedCamera.UpdateCamera
// (FUNC_Defined, FUNC_Simulated, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// class APawn*                   P                              (CPF_Parm)
// class AGamePlayerCamera*       CameraActor                    (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// struct FTViewTarget            OutVT                          (CPF_Parm, CPF_OutParm)

void UGameFixedCamera::UpdateCamera(class APawn* P, class AGamePlayerCamera* CameraActor, float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameFixedCamera.UpdateCamera");

	struct
	{
		class APawn*                   P;
		class AGamePlayerCamera*       CameraActor;
		float                          DeltaTime;
		struct FTViewTarget            OutVT;
	} params;
	params.P = P;
	params.CameraActor = CameraActor;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GameFramework.GameKActorSpawnableEffect.StartScalingDown
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)

void AGameKActorSpawnableEffect::StartScalingDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.StartScalingDown");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)
// Parameters:
// class UClass*                  dmgType                        (CPF_Parm)

void AGameKActorSpawnableEffect::FellOutOfWorld(class UClass* dmgType)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.FellOutOfWorld");

	struct
	{
		class UClass*                  dmgType;
	} params;
	params.dmgType = dmgType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)

void AGameKActorSpawnableEffect::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.GameKActorSpawnableEffect.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.SetupDebugZones
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)

void AMobileDebugCameraController::SetupDebugZones()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.SetupDebugZones");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.InitInputSystem
// (FUNC_Defined, FUNC_Event, FUNC_Public)

void AMobileDebugCameraController::InitInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.InitInputSystem");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.OnDeactivate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm)

void AMobileDebugCameraController::OnDeactivate(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.OnDeactivate");

	struct
	{
		class APlayerController*       PC;
	} params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.InitDebugInputSystem
// (FUNC_Defined, FUNC_Public)

void AMobileDebugCameraController::InitDebugInputSystem()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.InitDebugInputSystem");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraController.OnActivate
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class APlayerController*       PC                             (CPF_Parm)

void AMobileDebugCameraController::OnActivate(class APlayerController* PC)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraController.OnActivate");

	struct
	{
		class APlayerController*       PC;
	} params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraInput.InputKey
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            ControllerId                   (CPF_Parm)
// struct FName                   Key                            (CPF_Parm)
// TEnumAsByte<enum class EInputEvent> Event                          (CPF_Parm)
// float                          AmountDepressed                (CPF_OptionalParm, CPF_Parm)
// bool                           bGamepad                       (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileDebugCameraInput::InputKey(int ControllerId, const struct FName& Key, TEnumAsByte<enum class EInputEvent> Event, float AmountDepressed, bool bGamepad)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraInput.InputKey");

	struct
	{
		int                            ControllerId;
		struct FName                   Key;
		TEnumAsByte<enum class EInputEvent> Event;
		float                          AmountDepressed;
		bool                           bGamepad;
		bool                           ReturnValue;
	} params;
	params.ControllerId = ControllerId;
	params.Key = Key;
	params.Event = Event;
	params.AmountDepressed = AmountDepressed;
	params.bGamepad = bGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileDebugCameraHUD.PostRender
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasDefaults)

void AMobileDebugCameraHUD::PostRender()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.PostRender");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileDebugCameraHUD.DisplayMaterials
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm, CPF_OutParm)
// float                          DY                             (CPF_Parm)
// class UMeshComponent*          MeshComp                       (CPF_Parm, CPF_EditInline)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool AMobileDebugCameraHUD::DisplayMaterials(float X, float DY, class UMeshComponent* MeshComp, float* Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.DisplayMaterials");

	struct
	{
		float                          X;
		float                          Y;
		float                          DY;
		class UMeshComponent*          MeshComp;
		bool                           ReturnValue;
	} params;
	params.X = X;
	params.DY = DY;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Y != nullptr)
		*Y = params.Y;

	return params.ReturnValue;
}


// Function GameFramework.MobileDebugCameraHUD.PostBeginPlay
// (FUNC_Defined, FUNC_Simulated, FUNC_Event, FUNC_Public)

void AMobileDebugCameraHUD::PostBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileDebugCameraHUD.PostBeginPlay");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.UpdateItemViewports
// (FUNC_Defined, FUNC_Public)

void UMobileMenuBar::UpdateItemViewports()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.UpdateItemViewports");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.SetFirstItem
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            First                          (CPF_Parm)

void UMobileMenuBar::SetFirstItem(int First)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.SetFirstItem");

	struct
	{
		int                            First;
	} params;
	params.First = First;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.RenderItem
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// int                            ItemIndex                      (CPF_Parm)

void UMobileMenuBar::RenderItem(class UCanvas* Canvas, float DeltaTime, int ItemIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.RenderItem");

	struct
	{
		class UCanvas*                 Canvas;
		float                          DeltaTime;
		int                            ItemIndex;
	} params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;
	params.ItemIndex = ItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.RenderObject
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuBar::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.RenderObject");

	struct
	{
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.OnTouch
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuBar::OnTouch(TEnumAsByte<enum class ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.OnTouch");

	struct
	{
		TEnumAsByte<enum class ETouchType> EventType;
		float                          TouchX;
		float                          TouchY;
		class UMobileMenuObject*       ObjectOver;
		float                          DeltaTime;
		bool                           ReturnValue;
	} params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuBar.GetSelected
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobileMenuBarItem*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMobileMenuBarItem* UMobileMenuBar::GetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.GetSelected");

	struct
	{
		class UMobileMenuBarItem*      ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuBar.Num
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMobileMenuBar::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.Num");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuBar.AddItem
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UMobileMenuBarItem*      Item                           (CPF_Parm)
// int                            Index                          (CPF_OptionalParm, CPF_Parm)

void UMobileMenuBar::AddItem(class UMobileMenuBarItem* Item, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.AddItem");

	struct
	{
		class UMobileMenuBarItem*      Item;
		int                            Index;
	} params;
	params.Item = Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBar.InitMenuObject
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int                            ScreenWidth                    (CPF_Parm)
// int                            ScreenHeight                   (CPF_Parm)
// bool                           bIsFirstInitialization         (CPF_Parm)

void UMobileMenuBar::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBar.InitMenuObject");

	struct
	{
		class UMobilePlayerInput*      PlayerInput;
		class UMobileMenuScene*        Scene;
		int                            ScreenWidth;
		int                            ScreenHeight;
		bool                           bIsFirstInitialization;
	} params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuBarItem.RenderItem
// (FUNC_Public)
// Parameters:
// class UMobileMenuBar*          Bar                            (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuBarItem::RenderItem(class UMobileMenuBar* Bar, class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuBarItem.RenderItem");

	struct
	{
		class UMobileMenuBar*          Bar;
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Bar = Bar;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.RenderCaption
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)

void UMobileMenuButton::RenderCaption(class UCanvas* Canvas)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.RenderCaption");

	struct
	{
		class UCanvas*                 Canvas;
	} params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.RenderObject
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuButton::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.RenderObject");

	struct
	{
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuButton.InitMenuObject
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int                            ScreenWidth                    (CPF_Parm)
// int                            ScreenHeight                   (CPF_Parm)
// bool                           bIsFirstInitialization         (CPF_Parm)

void UMobileMenuButton::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuButton.InitMenuObject");

	struct
	{
		class UMobilePlayerInput*      PlayerInput;
		class UMobileMenuScene*        Scene;
		int                            ScreenWidth;
		int                            ScreenHeight;
		bool                           bIsFirstInitialization;
	} params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuElement.RenderElement
// (FUNC_Public)
// Parameters:
// class UMobileMenuObject*       Owner                          (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// float                          Opacity                        (CPF_Parm)

void UMobileMenuElement::RenderElement(class UMobileMenuObject* Owner, class UCanvas* Canvas, float DeltaTime, float Opacity)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.RenderElement");

	struct
	{
		class UMobileMenuObject*       Owner;
		class UCanvas*                 Canvas;
		float                          DeltaTime;
		float                          Opacity;
	} params;
	params.Owner = Owner;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;
	params.Opacity = Opacity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuElement.OnTouch
// (FUNC_Defined, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuElement::OnTouch(TEnumAsByte<enum class ETouchType> EventType, float TouchX, float TouchY, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuElement.OnTouch");

	struct
	{
		TEnumAsByte<enum class ETouchType> EventType;
		float                          TouchX;
		float                          TouchY;
		float                          DeltaTime;
		bool                           ReturnValue;
	} params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuGame.RestartPlayer
// (FUNC_Public)
// Parameters:
// class AController*             NewPlayer                      (CPF_Parm)

void AMobileMenuGame::RestartPlayer(class AController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.RestartPlayer");

	struct
	{
		class AController*             NewPlayer;
	} params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuGame.StartMatch
// (FUNC_Public)

void AMobileMenuGame::StartMatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.StartMatch");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuGame.PostLogin
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// class APlayerController*       NewPlayer                      (CPF_Parm)

void AMobileMenuGame::PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuGame.PostLogin");

	struct
	{
		class APlayerController*       NewPlayer;
	} params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.RenderDragItem
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuInventory::RenderDragItem(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.RenderDragItem");

	struct
	{
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.RenderObject
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuInventory::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.RenderObject");

	struct
	{
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.GetIndexOfItem
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobileMenuElement*      Item                           (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMobileMenuInventory::GetIndexOfItem(class UMobileMenuElement* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.GetIndexOfItem");

	struct
	{
		class UMobileMenuElement*      Item;
		int                            ReturnValue;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.FindSlotIndexAt
// (FUNC_Defined, FUNC_Public)
// Parameters:
// float                          X                              (CPF_Parm)
// float                          Y                              (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMobileMenuInventory::FindSlotIndexAt(float X, float Y)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.FindSlotIndexAt");

	struct
	{
		float                          X;
		float                          Y;
		int                            ReturnValue;
	} params;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.InitDragAt
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            TouchX                         (CPF_Parm)
// int                            TouchY                         (CPF_Parm)

void UMobileMenuInventory::InitDragAt(int TouchX, int TouchY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.InitDragAt");

	struct
	{
		int                            TouchX;
		int                            TouchY;
	} params;
	params.TouchX = TouchX;
	params.TouchY = TouchY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.UpdateItemInSlot
// (FUNC_Defined, FUNC_Protected)
// Parameters:
// int                            InSlot                         (CPF_Parm)

void UMobileMenuInventory::UpdateItemInSlot(int InSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.UpdateItemInSlot");

	struct
	{
		int                            InSlot;
	} params;
	params.InSlot = InSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.AddItemToSlot
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobileMenuElement*      Element                        (CPF_Parm)
// int                            ToSlot                         (CPF_Parm)
// class UMobileMenuElement*      ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMobileMenuElement* UMobileMenuInventory::AddItemToSlot(class UMobileMenuElement* Element, int ToSlot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.AddItemToSlot");

	struct
	{
		class UMobileMenuElement*      Element;
		int                            ToSlot;
		class UMobileMenuElement*      ReturnValue;
	} params;
	params.Element = Element;
	params.ToSlot = ToSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.SwapItemsInSlots
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            Slot0                          (CPF_Parm)
// int                            Slot1                          (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuInventory::SwapItemsInSlots(int Slot0, int Slot1)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.SwapItemsInSlots");

	struct
	{
		int                            Slot0;
		int                            Slot1;
		bool                           ReturnValue;
	} params;
	params.Slot0 = Slot0;
	params.Slot1 = Slot1;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.OnTouch
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuInventory::OnTouch(TEnumAsByte<enum class ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnTouch");

	struct
	{
		TEnumAsByte<enum class ETouchType> EventType;
		float                          TouchX;
		float                          TouchY;
		class UMobileMenuObject*       ObjectOver;
		float                          DeltaTime;
		bool                           ReturnValue;
	} params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.CanPutItemInSlot
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UMobileMenuElement*      Item                           (CPF_Parm)
// class UMobileMenuElement*      ToSlot                         (CPF_Parm)
// int                            ToIdx                          (CPF_Parm)
// int                            FromIdx                        (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuInventory::CanPutItemInSlot(class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.CanPutItemInSlot");

	struct
	{
		class UMobileMenuElement*      Item;
		class UMobileMenuElement*      ToSlot;
		int                            ToIdx;
		int                            FromIdx;
		bool                           ReturnValue;
	} params;
	params.Item = Item;
	params.ToSlot = ToSlot;
	params.ToIdx = ToIdx;
	params.FromIdx = FromIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.ScaleSlot
// (FUNC_Final, FUNC_Defined, FUNC_Private)
// Parameters:
// class UMobileMenuElement*      Slot                           (CPF_Parm)

void UMobileMenuInventory::ScaleSlot(class UMobileMenuElement* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.ScaleSlot");

	struct
	{
		class UMobileMenuElement*      Slot;
	} params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.AddSlot
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobileMenuElement*      Slot                           (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMobileMenuInventory::AddSlot(class UMobileMenuElement* Slot)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.AddSlot");

	struct
	{
		class UMobileMenuElement*      Slot;
		int                            ReturnValue;
	} params;
	params.Slot = Slot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.InitMenuObject
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int                            ScreenWidth                    (CPF_Parm)
// int                            ScreenHeight                   (CPF_Parm)
// bool                           bIsFirstInitialization         (CPF_Parm)

void UMobileMenuInventory::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.InitMenuObject");

	struct
	{
		class UMobilePlayerInput*      PlayerInput;
		class UMobileMenuScene*        Scene;
		int                            ScreenWidth;
		int                            ScreenHeight;
		bool                           bIsFirstInitialization;
	} params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuInventory.OnUpdateDrag
// (FUNC_Public, FUNC_Delegate, FUNC_HasOutParms)
// Parameters:
// struct FDragElementInfo        Before                         (CPF_Const, CPF_Parm, CPF_OutParm)
// struct FDragElementInfo        After                          (CPF_Const, CPF_Parm, CPF_OutParm)

void UMobileMenuInventory::OnUpdateDrag(struct FDragElementInfo* Before, struct FDragElementInfo* After)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnUpdateDrag");

	struct
	{
		struct FDragElementInfo        Before;
		struct FDragElementInfo        After;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Before != nullptr)
		*Before = params.Before;
	if (After != nullptr)
		*After = params.After;
}


// Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UMobileMenuInventory*    FromInv                        (CPF_Parm)
// class UMobileMenuElement*      Item                           (CPF_Parm)
// class UMobileMenuElement*      ToSlot                         (CPF_Parm)
// int                            ToIdx                          (CPF_Parm)
// int                            FromIdx                        (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuInventory::DoCanPutItemInSlot(class UMobileMenuInventory* FromInv, class UMobileMenuElement* Item, class UMobileMenuElement* ToSlot, int ToIdx, int FromIdx)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.DoCanPutItemInSlot");

	struct
	{
		class UMobileMenuInventory*    FromInv;
		class UMobileMenuElement*      Item;
		class UMobileMenuElement*      ToSlot;
		int                            ToIdx;
		int                            FromIdx;
		bool                           ReturnValue;
	} params;
	params.FromInv = FromInv;
	params.Item = Item;
	params.ToSlot = ToSlot;
	params.ToIdx = ToIdx;
	params.FromIdx = FromIdx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UMobileMenuInventory*    FromInv                        (CPF_Parm)
// int                            SlotIndex                      (CPF_Parm)

void UMobileMenuInventory::OnUpdateItemInSlot(class UMobileMenuInventory* FromInv, int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuInventory.OnUpdateItemInSlot");

	struct
	{
		class UMobileMenuInventory*    FromInv;
		int                            SlotIndex;
	} params;
	params.FromInv = FromInv;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuLabel.RenderObject
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuLabel::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuLabel.RenderObject");

	struct
	{
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.ItemScrollSize
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobileMenuListItem*     Item                           (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMobileMenuList::ItemScrollSize(class UMobileMenuListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.ItemScrollSize");

	struct
	{
		class UMobileMenuListItem*     Item;
		int                            ReturnValue;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.RenderObject
// (FUNC_Defined, FUNC_Public, FUNC_HasDefaults)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuList::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.RenderObject");

	struct
	{
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.UpdateScroll
// (FUNC_Defined, FUNC_Public)
// Parameters:
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuList::UpdateScroll(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.UpdateScroll");

	struct
	{
		float                          DeltaTime;
	} params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.CalculateSelectedItem
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FSelectedMenuItem       Selected                       (CPF_Parm, CPF_OutParm)
// float                          ScrollAmount                   (CPF_Parm)
// bool                           bForceZeroAdjustment           (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UMobileMenuList::CalculateSelectedItem(float ScrollAmount, bool bForceZeroAdjustment, struct FSelectedMenuItem* Selected)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.CalculateSelectedItem");

	struct
	{
		struct FSelectedMenuItem       Selected;
		float                          ScrollAmount;
		bool                           bForceZeroAdjustment;
		float                          ReturnValue;
	} params;
	params.ScrollAmount = ScrollAmount;
	params.bForceZeroAdjustment = bForceZeroAdjustment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Selected != nullptr)
		*Selected = params.Selected;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.GetItemClickPosition
// (FUNC_Defined, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// float                          MouseX                         (CPF_Parm, CPF_OutParm)
// float                          MouseY                         (CPF_Parm, CPF_OutParm)
// class UMobileMenuListItem*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMobileMenuListItem* UMobileMenuList::GetItemClickPosition(float* MouseX, float* MouseY)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetItemClickPosition");

	struct
	{
		float                          MouseX;
		float                          MouseY;
		class UMobileMenuListItem*     ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MouseX != nullptr)
		*MouseX = params.MouseX;
	if (MouseY != nullptr)
		*MouseY = params.MouseY;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.OnTouch
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuList::OnTouch(TEnumAsByte<enum class ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.OnTouch");

	struct
	{
		TEnumAsByte<enum class ETouchType> EventType;
		float                          TouchX;
		float                          TouchY;
		class UMobileMenuObject*       ObjectOver;
		float                          DeltaTime;
		bool                           ReturnValue;
	} params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.SetSelectedItem
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// int                            ItemIndex                      (CPF_Parm)
// bool                           bForceAll                      (CPF_OptionalParm, CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuList::SetSelectedItem(int ItemIndex, bool bForceAll)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.SetSelectedItem");

	struct
	{
		int                            ItemIndex;
		bool                           bForceAll;
		bool                           ReturnValue;
	} params;
	params.ItemIndex = ItemIndex;
	params.bForceAll = bForceAll;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.GetNumVisible
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMobileMenuList::GetNumVisible()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetNumVisible");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            VisibleIndex                   (CPF_Parm)
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMobileMenuList::SetSelectedToVisibleIndex(int VisibleIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.SetSelectedToVisibleIndex");

	struct
	{
		int                            VisibleIndex;
		int                            ReturnValue;
	} params;
	params.VisibleIndex = VisibleIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMobileMenuList::GetVisibleIndexOfSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetVisibleIndexOfSelected");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.GetAmountSelected
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobileMenuListItem*     Item                           (CPF_Parm)
// float                          ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

float UMobileMenuList::GetAmountSelected(class UMobileMenuListItem* Item)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetAmountSelected");

	struct
	{
		class UMobileMenuListItem*     Item;
		float                          ReturnValue;
	} params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.GetSelected
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobileMenuListItem*     ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class UMobileMenuListItem* UMobileMenuList::GetSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.GetSelected");

	struct
	{
		class UMobileMenuListItem*     ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.Num
// (FUNC_Defined, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int UMobileMenuList::Num()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.Num");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuList.AddItem
// (FUNC_Defined, FUNC_HasOptionalParms, FUNC_Public)
// Parameters:
// class UMobileMenuListItem*     Item                           (CPF_Parm)
// int                            Index                          (CPF_OptionalParm, CPF_Parm)

void UMobileMenuList::AddItem(class UMobileMenuListItem* Item, int Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.AddItem");

	struct
	{
		class UMobileMenuListItem*     Item;
		int                            Index;
	} params;
	params.Item = Item;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuList.InitMenuObject
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UMobilePlayerInput*      PlayerInput                    (CPF_Parm)
// class UMobileMenuScene*        Scene                          (CPF_Parm)
// int                            ScreenWidth                    (CPF_Parm)
// int                            ScreenHeight                   (CPF_Parm)
// bool                           bIsFirstInitialization         (CPF_Parm)

void UMobileMenuList::InitMenuObject(class UMobilePlayerInput* PlayerInput, class UMobileMenuScene* Scene, int ScreenWidth, int ScreenHeight, bool bIsFirstInitialization)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuList.InitMenuObject");

	struct
	{
		class UMobilePlayerInput*      PlayerInput;
		class UMobileMenuScene*        Scene;
		int                            ScreenWidth;
		int                            ScreenHeight;
		bool                           bIsFirstInitialization;
	} params;
	params.PlayerInput = PlayerInput;
	params.Scene = Scene;
	params.ScreenWidth = ScreenWidth;
	params.ScreenHeight = ScreenHeight;
	params.bIsFirstInitialization = bIsFirstInitialization;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuListItem.RenderItem
// (FUNC_Public)
// Parameters:
// class UMobileMenuList*         List                           (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuListItem::RenderItem(class UMobileMenuList* List, class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuListItem.RenderItem");

	struct
	{
		class UMobileMenuList*         List;
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.List = List;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObjectProxy.RenderObject
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuObjectProxy::RenderObject(class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.RenderObject");

	struct
	{
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObjectProxy.OnTouch
// (FUNC_Defined, FUNC_Event, FUNC_Public)
// Parameters:
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuObjectProxy::OnTouch(TEnumAsByte<enum class ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnTouch");

	struct
	{
		TEnumAsByte<enum class ETouchType> EventType;
		float                          TouchX;
		float                          TouchY;
		class UMobileMenuObject*       ObjectOver;
		float                          DeltaTime;
		bool                           ReturnValue;
	} params;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileMenuObjectProxy.OnRenderObject
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UMobileMenuObjectProxy*  Proxy                          (CPF_Parm)
// class UCanvas*                 Canvas                         (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)

void UMobileMenuObjectProxy::OnRenderObject(class UMobileMenuObjectProxy* Proxy, class UCanvas* Canvas, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnRenderObject");

	struct
	{
		class UMobileMenuObjectProxy*  Proxy;
		class UCanvas*                 Canvas;
		float                          DeltaTime;
	} params;
	params.Proxy = Proxy;
	params.Canvas = Canvas;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileMenuObjectProxy.OnTouchEvent
// (FUNC_Public, FUNC_Delegate)
// Parameters:
// class UMobileMenuObjectProxy*  Proxy                          (CPF_Parm)
// TEnumAsByte<enum class ETouchType> EventType                      (CPF_Parm)
// float                          TouchX                         (CPF_Parm)
// float                          TouchY                         (CPF_Parm)
// class UMobileMenuObject*       ObjectOver                     (CPF_Parm)
// float                          DeltaTime                      (CPF_Parm)
// bool                           ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

bool UMobileMenuObjectProxy::OnTouchEvent(class UMobileMenuObjectProxy* Proxy, TEnumAsByte<enum class ETouchType> EventType, float TouchX, float TouchY, class UMobileMenuObject* ObjectOver, float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileMenuObjectProxy.OnTouchEvent");

	struct
	{
		class UMobileMenuObjectProxy*  Proxy;
		TEnumAsByte<enum class ETouchType> EventType;
		float                          TouchX;
		float                          TouchY;
		class UMobileMenuObject*       ObjectOver;
		float                          DeltaTime;
		bool                           ReturnValue;
	} params;
	params.Proxy = Proxy;
	params.EventType = EventType;
	params.TouchX = TouchX;
	params.TouchY = TouchY;
	params.ObjectOver = ObjectOver;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.MobileTouchInputVolume.HandleDragOver
// (FUNC_Defined, FUNC_Public)

void AMobileTouchInputVolume::HandleDragOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleDragOver");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileTouchInputVolume.HandleDoubleClick
// (FUNC_Defined, FUNC_Public)

void AMobileTouchInputVolume::HandleDoubleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleDoubleClick");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileTouchInputVolume.HandleClick
// (FUNC_Defined, FUNC_Public)

void AMobileTouchInputVolume::HandleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.HandleClick");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.MobileTouchInputVolume.OnToggle
// (FUNC_Defined, FUNC_Simulated, FUNC_Public)
// Parameters:
// class USeqAct_Toggle*          inAction                       (CPF_Parm)

void AMobileTouchInputVolume::OnToggle(class USeqAct_Toggle* inAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.MobileTouchInputVolume.OnToggle");

	struct
	{
		class USeqAct_Toggle*          inAction;
	} params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.TouchableElement3D.HandleDragOver
// (FUNC_Public)

void UTouchableElement3D::HandleDragOver()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleDragOver");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.TouchableElement3D.HandleDoubleClick
// (FUNC_Public)

void UTouchableElement3D::HandleDoubleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleDoubleClick");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.TouchableElement3D.HandleClick
// (FUNC_Public)

void UTouchableElement3D::HandleClick()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.TouchableElement3D.HandleClick");

	struct
	{
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// (FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// bool                           bToEntry                       (CPF_Parm)
// TArray<class AActor*>          ActorList                      (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)

void APlayerCollectorGame::GetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList");

	struct
	{
		bool                           bToEntry;
		TArray<class AActor*>          ActorList;
	} params;
	params.bToEntry = bToEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;
}


// Function GameFramework.PlayerCollectorGame.Login
// (FUNC_Defined, FUNC_Event, FUNC_Public, FUNC_HasOutParms)
// Parameters:
// struct FString                 Portal                         (CPF_Parm, CPF_NeedCtorLink)
// struct FString                 Options                        (CPF_Parm, CPF_NeedCtorLink)
// struct FUniqueNetId            UniqueId                       (CPF_Const, CPF_Parm)
// struct FString                 ErrorMessage                   (CPF_Parm, CPF_OutParm, CPF_NeedCtorLink)
// class APlayerController*       ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

class APlayerController* APlayerCollectorGame::Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.PlayerCollectorGame.Login");

	struct
	{
		struct FString                 Portal;
		struct FString                 Options;
		struct FUniqueNetId            UniqueId;
		struct FString                 ErrorMessage;
		class APlayerController*       ReturnValue;
	} params;
	params.Portal = Portal;
	params.Options = Options;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_HudRenderImage.Render
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 TargetCanvas                   (CPF_Parm)
// class AHUD*                    TargetHud                      (CPF_Parm)

void USeqEvent_HudRenderImage::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderImage.Render");

	struct
	{
		class UCanvas*                 TargetCanvas;
		class AHUD*                    TargetHud;
	} params;
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion
// (FUNC_Defined, FUNC_Event, FUNC_Static, FUNC_Public)
// Parameters:
// int                            ReturnValue                    (CPF_Parm, CPF_OutParm, CPF_ReturnParm)

int USeqEvent_HudRenderText::STATIC_GetObjClassVersion()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderText.GetObjClassVersion");

	struct
	{
		int                            ReturnValue;
	} params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.SeqEvent_HudRenderText.Render
// (FUNC_Defined, FUNC_Public)
// Parameters:
// class UCanvas*                 TargetCanvas                   (CPF_Parm)
// class AHUD*                    TargetHud                      (CPF_Parm)

void USeqEvent_HudRenderText::Render(class UCanvas* TargetCanvas, class AHUD* TargetHud)
{
	static auto fn = UObject::FindObject<UFunction>("Function GameFramework.SeqEvent_HudRenderText.Render");

	struct
	{
		class UCanvas*                 TargetCanvas;
		class AHUD*                    TargetHud;
	} params;
	params.TargetCanvas = TargetCanvas;
	params.TargetHud = TargetHud;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
