#include "HookManager.h"
#include <Windows.h>
#include "../Utils/Pattern/TFL_HT.h"
#include "../RL/SDK.hpp"
#include "../Libs/detours.h"
#include "../Utils/Utils.h"
#include "../Utils/SDKDefines.h"


using namespace SDK;

UObject**		pCallObject = nullptr;
UFunction*		pUFuncCF = nullptr;
Utils::FFrame*	pFFrameCF = nullptr;
void*			pParams = nullptr;
void*			pResultCF = nullptr;


DWORD CallFunction, OldCallFunction;
DWORD ProcessEvent, OldProcessEvent;
DWORD ProcessInternal, OldProcessInternal;

VOID CallFunctionProxy();
VOID ProcessEventProxy();

std::function<void(UObject**, UFunction*, void*, bool isCallFunc)> CallFuncProto;

HookManager::HookManager() {}
HookManager::~HookManager() {}

HookManager* HookManager::instance = nullptr;

void HookManager::DetourFunctions(std::function<void(UObject**, UFunction*, void*, bool)> function) {
	CallFunction = (DWORD)TFLHACKT00LS::FindPattern((DWORD)GetModuleHandle(nullptr), 0xbac000, reinterpret_cast<PBYTE>(CallFunction_Pattern), CallFunction_Mask);
	ProcessEvent = (DWORD)TFLHACKT00LS::FindPattern((DWORD)GetModuleHandle(nullptr), 0xbac000, reinterpret_cast<PBYTE>(ProcessEvent_Pattern), ProcessEvent_Mask);
	OldCallFunction = (DWORD)DetourFunction((BYTE*)CallFunction, (BYTE*)CallFunctionProxy);
	OldProcessEvent = (DWORD)DetourFunction((BYTE*)ProcessEvent, (BYTE*)ProcessEventProxy);
	CallFuncProto = function;
	printf("HookManager finished \n");
}

void HookManager::RemoveDetours() {
	DetourRemove((PBYTE)OldCallFunction,(PBYTE)CallFunctionProxy);
	DetourRemove((PBYTE)OldProcessEvent,(PBYTE)ProcessEventProxy);
}

VOID __declspec(naked) CallFunctionProxy() {
	__asm {
		mov pCallObject, ecx

		push edx
		mov edx, dword ptr[esp + 0x8]
		mov pFFrameCF, edx
		mov edx, dword ptr[esp + 0xC]
		mov pResultCF, edx
		mov edx, dword ptr[esp + 0x10]
		mov pUFuncCF, edx
		pop edx
		pushfd
		pushad
	}
	if (pCallObject != nullptr && pUFuncCF->Func != nullptr && pFFrameCF != nullptr) {
		CallFuncProto(pCallObject, pUFuncCF, pFFrameCF->Locals, true);
	}
	__asm {
		popad
		popfd
		jmp[OldCallFunction]
	}
}
VOID __declspec(naked) ProcessEventProxy() {
	__asm {
		mov pCallObject, ecx

		push edx
		mov edx, dword ptr[esp + 0x8]
		mov pUFuncCF, edx
		mov edx, dword ptr[esp + 0xC]
		mov pParams, edx
		pop edx
		pushfd
		pushad

	}
	if (pCallObject != nullptr && pUFuncCF->Func != nullptr && pParams != nullptr) {
		CallFuncProto(pCallObject, pUFuncCF, pParams, false);
	}
	__asm {
		popad
		popfd
		jmp[OldProcessEvent]
	}
}
