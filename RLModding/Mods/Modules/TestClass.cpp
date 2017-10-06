#include "TestClass.h"
#include "../../Utils/Utils.h"
#include "../../DrawManager/DrawManager.hpp"
#include "../../Libs/detours.h"
#include "../Controllers/XboxController.h"

TestClass::TestClass(std::string name, int key,Category category,GameState gamestate) : ModBase(name, key,category,gamestate) {}
TestClass::~TestClass() {}

void TestClass::onEnable() {
	std::cout << "Test Class Enabled" << std::endl;
	//Works but crashes because of stack corrupted memory, -> cause ZeroMemory in Controller class
	XboxController player(1);
	if (player.IsConnected()) {
		player.Vibrate(65535, 0);
	}
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