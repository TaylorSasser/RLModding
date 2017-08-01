#pragma once
#include "../ModBase.h"

class TestClass : public ModBase {
public:
	TestClass(std::string&& name, int key);

	void onEnable() override;
	void onDisable() override;

	void onJoinGame(Event* event) override;
	void onActorJump(Event* event) override;
};

