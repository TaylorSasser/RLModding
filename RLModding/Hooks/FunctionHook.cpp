#include "FunctionHook.h"




FunctionHook::FunctionHook() {}
FunctionHook::~FunctionHook() {}

using namespace SDK;

typedef void(__fastcall *tCallFunction)(SDK::UObject**, void* edx, Utils::FFrame&, void*, UFunction*);
typedef void(__fastcall *tProcessEvent)(SDK::UObject**, void* edx, UFunction*, void*, void*);

tProcessEvent ProcessEvent, OldProcessEvent;
tCallFunction CallFunction, OldCallFunction;

void __fastcall CallFunctionProxy(SDK::UObject**, void* edx, Utils::FFrame&, void*, UFunction*);
void __fastcall ProcessEventProxy(SDK::UObject**, void* edx, UFunction*, void*, void* pPresult);

std::function<bool(UObject**, UFunction*, void*, bool isCallFunc)> CallFuncProto;


void FunctionHook::DetourFunctions(std::function<bool(UObject**, UFunction*, void*, bool isCallFunc)> function) {
	CallFunction = (tCallFunction)TFLHACKT00LS::FindPattern((DWORD)GetModuleHandle(nullptr), 0xbac000, reinterpret_cast<PBYTE>(CallFunction_Pattern), CallFunction_Mask);
	if (!CallFunction) CallFunction = (tCallFunction)TFLHACKT00LS::FindPattern((DWORD)GetModuleHandle(nullptr), 0xbac000, reinterpret_cast<PBYTE>(CallFunction_Pattern2), CallFunction_Mask2);

	ProcessEvent = (tProcessEvent)TFLHACKT00LS::FindPattern((DWORD)GetModuleHandle(nullptr), 0xbac000, reinterpret_cast<PBYTE>(ProcessEvent_Pattern), ProcessEvent_Mask);
	if (!ProcessEvent) ProcessEvent = (tProcessEvent)TFLHACKT00LS::FindPattern((DWORD)GetModuleHandle(nullptr), 0xbac000, reinterpret_cast<PBYTE>(ProcessEvent_Pattern2), ProcessEvent_Mask2);

	if (!CallFunction || !ProcessEvent) {
		printf("HookManager Failed! Aborting... \n");
		return;
	}

	OldCallFunction = (tCallFunction)DetourFunction((BYTE*)CallFunction, (BYTE*)CallFunctionProxy);
	OldProcessEvent = (tProcessEvent)DetourFunction((BYTE*)ProcessEvent, (BYTE*)ProcessEventProxy);
	
	CallFuncProto = function;
}

void FunctionHook::RemoveDetours() {
	DetourRemove((PBYTE)OldCallFunction, (PBYTE)CallFunctionProxy);
	DetourRemove((PBYTE)OldProcessEvent, (PBYTE)ProcessEventProxy);
}

void __fastcall CallFunctionProxy(SDK::UObject** pCallObjectCF, void* edx, Utils::FFrame& pFFrame, void* result, UFunction* function) {
	CallFuncProto(pCallObjectCF, function,pFFrame.Locals, true);
	OldCallFunction(pCallObjectCF, edx, pFFrame, result, function);
}
void __fastcall ProcessEventProxy(SDK::UObject** pCallObjectPE, void* edx, UFunction* function, void* pParams, void* pResult) {
	CallFuncProto(pCallObjectPE, function, pParams, false);
	OldProcessEvent(pCallObjectPE, edx, function, pParams, pResult);
}