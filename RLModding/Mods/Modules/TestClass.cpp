#include "TestClass.h"
#include "../../Utils/Utils.h"
#include <functional>
#include "../../DrawManager/DrawManager.hpp"

<<<<<<< HEAD
TestClass::TestClass(std::string name, int key) : ModBase(name, key) {}
TestClass::~TestClass(){}
=======
TestClass::TestClass(const std::string& name, int key) : ModBase(name, key) {}
>>>>>>> 4936f1faf028ca24fe08b075728b63c19f8ac163

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
