#pragma once
#include "../ModBase.h"

class TestClass : public ModBase {
public:
	TestClass(std::string name, int key);
	~TestClass();

	void onEnable() override;
	void onDisable() override;

	void DrawMenu();
	void DrawFavorites();

	void onProfileJoinGame(Event*) override;
	void onMainMenuTick(Event*) override;
	void onChatSend(Event*) override;
	void onActorJump(Event*) override;
	void onInGameTick(Event*) override;
	void onCarTick(Event*) override;
	void onPostRender(Event*) override;

	void onTCPConnectionBegin(Event*) override;
	void onTCPConnectionEnd(Event*) override;
	void onPlayerTick(Event*) override;

};