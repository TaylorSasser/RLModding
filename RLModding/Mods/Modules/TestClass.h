#pragma once
#include "../ModBase.h"
#include "../Controllers/XboxController.h"
#include "../../Libs/ImGUI/imgui_memory_editor.h"

class TestClass : public ModBase {
public:
	TestClass(std::string name, int key, Category category, GameState gamestate);
	~TestClass();

	void onMenuOpen();
	void onBallHit(Event* e) override;
	void onWebRequestEventCompleted(Event* e) override;
	void onHttpProcessRequestComplete(Event* e) override;
	void onPlayerTick(Event* e) override;
	void onCarEventLanded(Event* e) override;
	void onMenuClose();
	void TestClass::DrawMenu();
	void onMainMenuTick(Event* e);

private:
	bool p_open = true;
	bool testNewPartySystem = false;
	bool runEngineTests = false;
	bool created = false;
	bool dumpStore = false;
	bool alloc = false;
	XboxController player;
	MemoryEditor mem_edit;
	bool webRequestTest = false;
	SDK::UWebRequest_X* mainWebRequest = NULL;
	long long steamID;
	std::string hardwareID = "";
	bool inAir = false;
};