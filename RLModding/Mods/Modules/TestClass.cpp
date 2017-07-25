#include "TestClass.h"
#include "../../Utils/Utils.h"
#include <functional>
#include "../../DrawManager/DrawManager.hpp"
#include <minwinbase.h>

TestClass::TestClass(std::string name, int key) : ModBase(name, key) {}
TestClass::~TestClass(){}

void TestClass::onEnable() {
	printf("Test class enabled \n");
}
void TestClass::onDisable() {
	printf("Test class disabled \n");
}
void TestClass::onJoinGame(SDK::UObject** object,SDK::UFunction* func,void* parameters) {
	printf("String %ws \n",((SDK::UOnlineGameInterfaceSteamworks_PsyNet_SetFriendJoinLocation_Params*)parameters)->ServerAddress.c_str());
}
void TestClass::onProfileJoinGame(SDK::UObject** object,SDK::UFunction*,void* parameters) {}
void TestClass::onMainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {}
void TestClass::onChatSend(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onActorJump(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onPostRender(SDK::UObject** object,SDK::UFunction* function,void* parameters) {}
void TestClass::onTCPConnectionBegin(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onTCPConnectionEnd(SDK::UObject** object,SDK::UFunction* func,void* params) {}
void TestClass::onInGameTick(SDK::UObject** object, SDK::UFunction* func, void* params) {}
void TestClass::onCarTick(SDK::UObject** object,SDK::UFunction* funct,void* params) {}