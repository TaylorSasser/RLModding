#include "BlackList.h"
#include <sstream>

BlackList::BlackList()
{
	blacklist = {
		"76561198061044473" //Camping rusher
	};
}

BlackList::~BlackList() {}

bool BlackList::Exists(std::string steam_id)
{
	if (std::find(blacklist.begin(), blacklist.end(), steam_id) != blacklist.end())
		return true;
	return false;
}

//Check if thet are blacklisted
void BlackList::Check()
{
	if (Exists("76561198061044473")) {
		std::cout << "Camping rusher is blacklisted!\n";
		bBlacklisted = true;
	}
	else {
		std::cout << "nope\n";
		bBlacklisted = false;
	}
	GetPlayerId();
	/*Should be eventually
		if (Exists(GetPlayerId()))
			Blacklisted
		else
			Not Blacklisted
	*/
}

//Get the user's steam id
std::string BlackList::GetPlayerId()
{
	if (steamId != "")
		return steamId;

	APlayerController_TA* controller = InstanceStorage::PlayerController();
	if (controller) {
		wprintf(L"Player ID: %lld", controller->GetOnlineAccount()->PrimaryPlayer->PlayerID.Uid);
	}
	//else
	//Somehow get UniqueNetId into its int64/string form. See blacklist vector
	/*SDK::UOnlineSubsystemSteamworks* steam = (SDK::UOnlineSubsystemSteamworks*)Utils::GetInstanceOf(SDK::UOnlineSubsystemSteamworks::StaticClass());
	if (steam) {
		
		SDK::UOnlineSubsystem* sub = (SDK::UOnlineSubsystem*)Utils::GetInstanceOf(SDK::UOnlineSubsystem::StaticClass());
		wprintf(L"PlayerID: %ls", sub->STATIC_UniqueNetIdToString(&steam->LoggedInPlayerId));
	}
	else {
		std::cout << "nope\n";
	}*/

	
}

//Static function to be able to check anywhere
bool BlackList::isBlacklisted() {
	return bBlacklisted;
}