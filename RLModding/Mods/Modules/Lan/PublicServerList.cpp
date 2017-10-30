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
	std::cout << "Created LAN Match!\n";
}

void PublicServerList::OnLANMatchDestroy(Event *e) {
	//Update database
	std::cout << "Destroyed LAN Match!\n";
}

