#include "TestClass.h"
#include "../../Utils/Utils.h"
#include "../../DrawManager/DrawManager.hpp"
#include "../../Libs/detours.h"

TestClass::TestClass(std::string name, int key,Category category,GameState gamestate) : ModBase(name, key,category,gamestate) {}
TestClass::~TestClass() {}

void TestClass::onEnable() {
	std::cout << "Test Class Enabled" << std::endl;
}

void TestClass::onBallHit(Event* e) {
	if (e->getUFunction()->ScriptText != nullptr)
		std::cout << "Script Text : " << e->getUFunction()->ScriptText->Text.ToString() << std::endl;
	else
		std::cout << "Script Text buffer is null" << std::endl;

	if (e->getUFunction()->CPPText != nullptr)
		std::cout << "CPP Text : " << e->getUFunction()->CPPText->Text.ToString() << std::endl;
	else
		std::cout << "CPP Text buffer is null" << std::endl;
}


void TestClass::onDisable() {
	std::cout << "Test Class Disabled" << std::endl;

}