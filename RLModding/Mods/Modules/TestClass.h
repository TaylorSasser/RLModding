#pragma once
#include "../ModBase.h"

class TestClass : public ModBase {
public:
	TestClass(std::string name, int key,Category category,GameState gamestate);
	~TestClass();

	void onEnable();
	void onDisable();

	void DrawMenu();

	void onProfileJoinGame(Event*);
	void onMainMenuTick(Event*);
	void onChatSend(Event*);
	void onActorJump(Event*);
	void onInGameTick(Event*);
	void onCarTick(Event*);
	void onPostRender(Event*);

	void onTCPConnectionBegin(Event*);
	void onTCPConnectionEnd(Event*);
	void onPlayerTick(Event*);

};