#include "TestClass.h"
#include "../../Utils/Utils.h"
#include <functional>
#include "../../DrawManager/DrawManager.hpp"

TestClass::TestClass(std::string&& name, int key)
	: ModBase(std::move(name), key)
{
}

void TestClass::onEnable() {
	printf("Test class enabled \n");
}
void TestClass::onDisable() {
	printf("Test class disabled \n");
}
void TestClass::onJoinGame(Event* event) {
	printf("Join game Event called \n");
}

void TestClass::onActorJump(Event* event) {
	printf("Actor Jump Event called \n");
}
