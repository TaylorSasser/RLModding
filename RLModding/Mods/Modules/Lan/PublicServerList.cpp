#include "PublicServerList.h"

PublicServerList::PublicServerList(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}
PublicServerList::~PublicServerList() {}

void PublicServerList::onMenuOpen() {
	this->enabled = true;
}

void PublicServerList::onMenuClose() {
	this->enabled = false;
}

void PublicServerList::ExportSettings(pt::ptree & root) {
	root.put("PublicServer", this->enabled);
}

void PublicServerList::ImportSettings(pt::ptree & root) {
	this->enabled = root.get<bool>("PublicServer", false);
}

void PublicServerList::OnLANMatchCreate(Event *e) {
	//Update database
	auto params = e->getParams<APlayerControllerBase_TA_StartLanMatch_Params>();
	std::cout << params->Settings.MapName.GetName() << std::endl;
	std::cout << params->Settings.ServerName.ToString() << std::endl;
	if (params->Settings.Password.IsValid())
		std::cout << params->Settings.Password.ToString() << std::endl;
	std::cout << params->Settings.MaxPlayerCount << std::endl;
	APlayerControllerBase_TA* c = reinterpret_cast<APlayerControllerBase_TA*>(e->getCallingObject());
	if (c) {
		std::cout << c->PlayerReplicationInfo->PlayerName.ToString() << std::endl;
	}
	std::cout << "Created LAN Match!\n";
}

void PublicServerList::OnLANMatchDestroy(Event *e) {
	//Update database
	std::cout << "Destroyed LAN Match!\n";
}

