#include "FunctionHook.h"
#include <Windows.h>
#include "../Utils/Pattern/TFL_HT.h"
#include "../RL/SDK.hpp"
#include "../Libs/detours.h"
#include "../Utils/Utils.h"
#include "../Utils/SDKDefines.h"
#include <iostream>


FunctionHook::FunctionHook() {}
FunctionHook::~FunctionHook() {}

using namespace SDK;

typedef void(__fastcall *tCallFunction)(SDK::UObject**,void* edx,Utils::FFrame&,void*,UFunction* );
typedef void(__fastcall *tProcessEvent)(SDK::UObject**,void* edx,UFunction*,void*,void*);

UObject**		pCallObjectCF;
UObject**		pCallObjectPE;
UFunction*		pUFuncCF;		
UFunction*		pUFuncPE;
Utils::FFrame*	pFFrameCF;
void*			pResultCF;
void*			pResultPE;
void*			pParamsCF;
void*			pParamsPE;

tProcessEvent ProcessEvent,OldProcessEvent;
tCallFunction CallFunction,OldCallFunction;

//DWORD CallFunction, OldCallFunction;
//DWORD ProcessEvent, OldProcessEvent;
//DWORD ProcessInternal, OldProcessInternal;

void __fastcall CallFunctionProxy(SDK::UObject**, void* edx, Utils::FFrame&, void*, UFunction*);
void __fastcall ProcessEventProxy(SDK::UObject**, void* edx, UFunction*,void*,void* pPresult);
//void __fastcall ProcessEventProxy();

std::function<void(UObject**, UFunction*, void*, bool isCallFunc)> CallFuncProto;


void FunctionHook::DetourFunctions(std::function<void(UObject**, UFunction*, void*, bool)> function) {
	CallFunction = (tCallFunction)TFLHACKT00LS::FindPattern((DWORD)GetModuleHandle(nullptr), 0xbac000, reinterpret_cast<PBYTE>(CallFunction_Pattern), CallFunction_Mask);
	//ProcessEvent = (tProcessEvent)TFLHACKT00LS::FindPattern((DWORD)GetModuleHandle(nullptr), 0xbac000, reinterpret_cast<PBYTE>(ProcessEvent_Pattern), ProcessEvent_Mask);
	OldCallFunction = (tCallFunction)DetourFunction((BYTE*)CallFunction, (BYTE*)CallFunctionProxy);
	//OldProcessEvent = (tProcessEvent)DetourFunction((BYTE*)ProcessEvent, (BYTE*)ProcessEventProxy);
	CallFuncProto = function;
}

void FunctionHook::RemoveDetours() {
	DetourRemove((PBYTE)OldCallFunction, (PBYTE)CallFunctionProxy);
	//DetourRemove((PBYTE)OldProcessEvent, (PBYTE)ProcessEventProxy);
}

void __fastcall CallFunctionProxy(SDK::UObject** pCallObjectCF, void* edx, Utils::FFrame& pFFrame, void* result, UFunction* function) {
	
	if (pCallObjectCF != nullptr) {
		CallFuncProto(pCallObjectCF,function,pFFrame.Locals, true);
		if (function->GetFullName() == "Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks_PsyNet.SetFriendJoinLocation") {
			printf("object name %s \n",pFFrame.Object->GetFullName());
			printf("params address %p\n",pFFrame.Locals);
		}
	}
	OldCallFunction(pCallObjectCF,edx,pFFrame,result,function);
}
void __fastcall ProcessEventProxy(SDK::UObject** pCallObject,void* edx, UFunction*,void* pParams,void* pResult) {
	
}

VOID __declspec(naked) ProcessEventProxy() {
	__asm {
		mov pCallObjectPE, ecx

		push edx
		mov edx, dword ptr[esp + 0x8]
		mov pUFuncPE, edx
		mov edx, dword ptr[esp + 0xC]
		mov pParamsPE, edx
		mov edx, dword ptr[esp + 0x10]
		mov pResultPE, edx
		pop edx
		pushfd
		pushad

	}
	if (pCallObjectPE != nullptr) {
		CallFuncProto(pCallObjectPE, pUFuncPE, pParamsPE, false);
	}
	__asm {
		popad
		popfd
		jmp[OldProcessEvent]
	}
}

