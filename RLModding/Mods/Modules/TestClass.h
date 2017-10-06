#pragma once
#include "../ModBase.h"

class TestClass : public ModBase {
public:
	TestClass(std::string name, int key,Category category,GameState gamestate);
	~TestClass();

	void onEnable();
	void onBallHit(Event* e) override;
	void onDisable();
	void TestClass::DrawMenu();
	void onMainMenuTick(Event* e);

private:
	bool p_open = true;
	bool testNewPartySystem = false;
	bool runEngineTests = false;
};