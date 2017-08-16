#pragma once
#include "../Mods/ModBase.h"
class ModdedLanServer : public ModBase {
public:
	ModdedLanServer(std::string name,int key,Category cat,GameState gamestate);
	~ModdedLanServer();
	void onEnable() override;
};

