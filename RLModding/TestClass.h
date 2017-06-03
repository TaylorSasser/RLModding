#pragma once
#include "ModBase.h"
class TestClass :
	public ModBase
{
public:
	TestClass();
	~TestClass();
	void MainMenuTick(SDK::UObject**,SDK::UFunction*,void* params);
};

