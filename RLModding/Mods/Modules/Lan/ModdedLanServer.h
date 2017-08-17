#pragma once
#include "../Mods/ModBase.h"
#include <iostream>
class ModdedLanServer : public ModBase {
public:
	ModdedLanServer(std::string name,int key,Category cat,GameState gamestate);
	~ModdedLanServer();
	void onEnable() override;
	void onWebRequestCreated(Event*) override;
};

