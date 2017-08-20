#include "TestClass.h"
#include "../../Utils/Utils.h"
#include <functional>
#include "../../DrawManager/DrawManager.hpp"

TestClass::TestClass(std::string name, int key,Category category,GameState gamestate) : ModBase(name, key,category,gamestate) {
}
TestClass::~TestClass() {}


void TestClass::onEnable() {
	TArray<unsigned char> Test;
	printf("Enabling Testclass STATIC_UseSecurePackets Hook \n");
	static auto fn = UObject::FindObject<UFunction>("Function Engine.Engine.UseSecurePackets");
	printf("STATIC_UseSecurePackets address %p\n",fn->Func);
}
void TestClass::onDisable() {
}