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
	std::string mapName = params->Settings.MapName.GetName();
	std::cout << mapName << std::endl;
	std::string serverName = "";

	if (params->Settings.ServerName.IsValid()) {
		serverName = params->Settings.ServerName.ToString();
		std::cout << serverName << std::endl;
	}

	std::string password = "0";
	if (params->Settings.Password.IsValid()) {
		password = "1";
		std::cout << "Password: " << params->Settings.Password.ToString() << std::endl;
	}

	int maxPlayers = params->Settings.MaxPlayerCount + 4;
	std::cout << maxPlayers << std::endl;
	APlayerControllerBase_TA* c = reinterpret_cast<APlayerControllerBase_TA*>(e->getCallingObject());
	std::string ownerName = "";
	if (c) {
		ownerName = c->PlayerReplicationInfo->PlayerName.ToString();
		std::cout << c->PlayerReplicationInfo->PlayerName.ToString() << std::endl;
	}

	long long steamID = Utils::GetSteamID();
	time_t currTime = time(NULL);
	// SHA256 hashing
	std::string nonce = std::to_string(steamID) + serverName + std::to_string(currTime) + butter;
	std::string hashed_string;
	picosha2::hash256_hex_string(nonce, hashed_string);
	//std::cout << nonce << std::endl;
	//std::cout << hashed_string << std::endl;

	std::string serverParams = "steamid=" + std::to_string(steamID) + "&ownername=" + ownerName + "&servername=" + serverName + "&servermap=" + mapName + "&passreq=" + password + "&numplayers=1" + "&maxplayers=" + std::to_string(maxPlayers) + "&time=" + std::to_string(currTime) + "&n=" + hashed_string;
	std::cout << serverParams << std::endl;

	std::string response = Utils::SendPostRequest(IP, host, urlJoinPath, serverParams);
	std::cout << "Response: " << response << std::endl;

	std::cout << "Created LAN Match!\n";
	serverActive = true;
}

void PublicServerList::OnLANMatchDestroy(Event *e) {
	//Update database
	if (serverActive) {
		long long steamID = Utils::GetSteamID();
		time_t currTime = time(NULL);
		// SHA256 hashing
		std::string nonce = std::to_string(steamID) + std::to_string(currTime) + butter;
		std::string hashed_string;
		picosha2::hash256_hex_string(nonce, hashed_string);
		//std::cout << nonce << std::endl;
		//std::cout << hashed_string << std::endl;

		std::string serverParams = "steamid=" + std::to_string(steamID) + "&time=" + std::to_string(currTime) + "&n=" + hashed_string;
		std::cout << serverParams << std::endl;

		std::string response = Utils::SendPostRequest(IP, host, urlLeavePath, serverParams);
		std::cout << "Response: " << response << std::endl;

		std::cout << "Destroyed LAN Match!\n";
		serverActive = false;
	}
}
void PublicServerList::onGameEventTeamPlayerAdded(Event *e) {
	UpdatePlayerCount();
}

void PublicServerList::onGameEventTeamPlayerRemoved(Event *e) {
	UpdatePlayerCount();
}

void PublicServerList::UpdatePlayerCount() {
	if (serverActive) {
		long long steamID = Utils::GetSteamID();
		time_t currTime = time(NULL);
		// SHA256 hashing
		std::string nonce = std::to_string(steamID) + std::to_string(currTime) + butter;
		std::string hashed_string;
		picosha2::hash256_hex_string(nonce, hashed_string);
		int currPlayerCount = InstanceStorage::GameEvent()->Players.Num();
		std::string numPlayers = std::to_string(currPlayerCount);
		std::string mapName = "";
		UOnlineGameLanServer_X* lanServer = reinterpret_cast<SDK::UOnlineGameLanServer_X*>(Utils::GetInstanceOf(UOnlineGameLanServer_X::StaticClass()));
		if (lanServer) {
			FCustomMatchSettings matchSettings = lanServer->GetCustomMatchSettings();
			mapName = matchSettings.MapName.GetName();
			std::cout << "Map name: " << mapName << std::endl;
		}
		//std::cout << nonce << std::endl;
		//std::cout << hashed_string << std::endl;

		std::cout << "Num players updated: " << numPlayers << std::endl;

		std::string serverParams = "steamid=" + std::to_string(steamID) + "&servermap=" + mapName + "&numplayers=" + numPlayers + "&time=" + std::to_string(currTime) + "&n=" + hashed_string;
		std::cout << serverParams << std::endl;

		std::string response = Utils::SendPostRequest(IP, host, urlUpdatePath, serverParams);
		std::cout << "Response: " << response << std::endl;

		std::cout << "Updated LAN Match!\n";
	}
}


