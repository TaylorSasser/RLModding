#pragma once
#include "ModBase.h"

class TestClass2 : public ModBase
{
public:
	TestClass2();
	~TestClass2();
	void ChatSend(SDK::UObject**,SDK::UFunction*,void* params);
};

