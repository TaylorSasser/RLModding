#include "TestClass.h"
#include <iostream>


TestClass::TestClass(){
	std::cout << "test class constructed" << std::endl;
}


TestClass::~TestClass(){
}

void TestClass::MainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {
	std::cout << "ModBase mainmenu tick called" << std::endl;
}
