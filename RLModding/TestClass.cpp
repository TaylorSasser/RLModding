#include "TestClass.h"
#include <iostream>


TestClass::TestClass(){

}


TestClass::~TestClass(){
}

void TestClass::MainMenuTick(SDK::UObject**, SDK::UFunction*, void* parameters) {
	std::cout << "TestClass MainMenu Tick Called" << std::endl;
}
