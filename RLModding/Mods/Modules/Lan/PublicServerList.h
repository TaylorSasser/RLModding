#pragma once
#include "../Mods/ModBase.h"
class PublicServerList : public ModBase
{
public:
	PublicServerList(std::string name, int key, Category cat, GameState gamestate, std::string toolTip);
	~PublicServerList();

	void onMenuOpen();
	void onMenuClose();
	void OnLANMatchCreate(Event* e) override;
	void OnLANMatchDestroy(Event* e) override;
	void ExportSettings(pt::ptree&root) override;
	void ImportSettings(pt::ptree&root) override;
};

