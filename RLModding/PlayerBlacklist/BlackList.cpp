#include "BlackList.h"
#include <sstream>
#include <Windows.h>

BlackList::BlackList() {}
BlackList::~BlackList() {}

bool BlackList::Exists(std::string steam_id) {
	if (std::find(blacklist.begin(), blacklist.end(), steam_id) != blacklist.end())
		return true;
	return false;
}

//Check if thet are blacklisted
void BlackList::Check() {
	std::cout << "Steam ID: " << GetPlayerId() << std::endl;
}

//Get the user's steam id
__int64 BlackList::GetPlayerId() {
	UOnlineSubsystemSteamworks* steam = reinterpret_cast<UOnlineSubsystemSteamworks*>(Utils::GetInstanceOf(UOnlineSubsystemSteamworks::StaticClass()));
	if (steam) {
		return steam->LoggedInPlayerId.SteamID;
	}
}

bool BlackList::isBlacklisted() {
	return bBlacklisted;
}