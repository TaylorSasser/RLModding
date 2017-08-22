#include "TestClass.h"
#include "../../Utils/Utils.h"
#include <functional>
#include "../../DrawManager/DrawManager.hpp"

TestClass::TestClass(std::string name, int key,Category category,GameState gamestate) : ModBase(name, key,category,gamestate) {}
TestClass::~TestClass() {}

void TestClass::onEnable() {
	TArray<unsigned char> Test;
	Test.Add('T');Test.Add('E');Test.Add('S');Test.Add('T');
	std::string data(reinterpret_cast<char*>(&Test[0u]));
	std::cout << data << std::endl;
}
void TestClass::onDisable() {}