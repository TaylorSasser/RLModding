#include "ServerBrowser.h"
#include "../Memory/MemoryAllocator.h"
#include <exception>

ServerBrowser::ServerBrowser(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}
ServerBrowser::~ServerBrowser() {}

void ServerBrowser::DrawMenu() {
	if (ServerBrowser::isEnabled()) {
		{
			ImGui::SetNextWindowPos(ImVec2(136, 76), ImGuiSetCond_FirstUseEver);

			ImGui::Begin("Server Browser Settings", &p_open);

			if (ImGui::Button("Get Global Servers")) {
				searchTest = true;
			}

			if (!p_open) {
				this->enabled = false;
				p_open = true;
			}
			ImGui::End();

		}

	}
}

void ServerBrowser::onMenuOpen() {
	std::cout << "Server Browser Enabled" << std::endl;

}

void ServerBrowser::onPlayerTick(Event* e) {
	/*
	AGFxHUD_TA* hud = reinterpret_cast<SDK::AGFxHUD_TA*>(Utils::GetInstanceOf(AGFxHUD_TA::StaticClass()));

	if (hud) {
	UGFxData_Chat_TA* chatData = hud->ChatData;
	//std::cout << hud->PartyChatTitle.ToString() << std::endl;

	}
	*/

}

void ServerBrowser::onMainMenuTick(Event* e) {

	AGFxHUD_TA* hud = reinterpret_cast<SDK::AGFxHUD_TA*>(Utils::GetInstanceOf(AGFxHUD_TA::StaticClass()));

	if (hud) {
		UGFxData_Chat_TA* chatData = hud->ChatData;
		std::cout << hud->PartyChatTitle.ToString() << std::endl;
	}

	UGFxData_LanBrowser_TA* serverBrowser = reinterpret_cast<SDK::UGFxData_LanBrowser_TA*>(Utils::GetInstanceOf(UGFxData_LanBrowser_TA::StaticClass()));
	TArray<struct ULanServerRecord_X*> results;

	if (serverBrowser && searchTest) {

		long long steamID = Utils::GetSteamID();
		std::string hardwareID = Utils::GetHardwareID();
		time_t currTime = time(NULL);
		// SHA256 hashing
		std::string nonce = std::to_string(steamID) + std::to_string(currTime) + butter;
		std::string hashed_string;
		picosha2::hash256_hex_string(nonce, hashed_string);
		//std::cout << nonce << std::endl;
		//std::cout << hashed_string << std::endl;
		std::string params = "steamid=" + std::to_string(steamID) + "&time=" + std::to_string(currTime) + "&n=" + hashed_string;
		//std::cout << params << std::endl;

		std::string response = Utils::SendPostRequest(IP, host, urlPath, params);
		std::string responseContent = response.substr(response.find("\r\n\r\n"));
		std::cout << "Response Content Received: '" << responseContent << "'\n";
		
		std::stringstream ss;
		ss << responseContent;

		boost::property_tree::ptree pt;
		try
		{
			results.Clear();
			serverBrowser->Refresh();
		
			boost::property_tree::read_json(ss, pt);
			int numServersToAdd = stoi(pt.get<std::string>("rows"));

			std::cout << "Found server browser!" << std::endl;

			if (serverBrowser->LanBrowser->IsA(UUdpLanBrowser_X::StaticClass())) {
				std::cout << "Browser is UDP!" << std::endl;
				UUdpLanBrowser_X* browser = (UUdpLanBrowser_X*)serverBrowser->LanBrowser;

				ULanServerRecord_X* newRecord = SDK::UObject::FindObject<SDK::ULanServerRecord_X>("LanServerRecord_X ProjectX.Default__LanServerRecord_X");
				if (newRecord) {

					ULanServerRecord_X* tempRecords;
					tempRecords = new ULanServerRecord_X[numServersToAdd];

					int currIndex = 0;
					for (auto& e : pt.get_child("data")) {
						std::string serverIpAddress = e.second.get<std::string>("IP_Address");
						std::string serverPort = e.second.get<std::string>("Port");
						std::string serverName = e.second.get<std::string>("Server_Name");
						std::string serverOwnerName = e.second.get<std::string>("Owner_Name");
						std::string serverOwnerId = e.second.get<std::string>("Owner_ID");
						std::string serverMap = e.second.get<std::string>("Server_Map");
						std::string serverGameVar = e.second.get<std::string>("Server_Game_Variable");
						std::string serverHasPass = "true";
						std::string serverNumPlayers = e.second.get<std::string>("Num_Players");
						std::string serverMaxPlayers = e.second.get<std::string>("Max_Players");
						//std::cout << "server pass: " << serverHasPass << "\n";
						if (stoi(e.second.get<std::string>("Password_Required")) == 0) {
							serverHasPass = "false";
						}


						tempRecords[currIndex] = *newRecord;
						std::string ipAddress = serverIpAddress + ":" + serverPort;
						tempRecords[currIndex].ServerID = FString(Utils::to_fstring(ipAddress));
						std::string metaData = "{\"OwnerID\":\"Steam | " + serverOwnerId + " | 0\",\"OwnerName\":\"" + serverOwnerName + "\",\"ServerName\":\"" + serverName + "\",\"ServerMap\":\"" + serverMap + "\",\"ServerGameMode\":" + serverGameVar + ",\"bPassword\":" + serverHasPass + ",\"NumPlayers\":" + serverNumPlayers + ",\"MaxPlayers\":" + serverMaxPlayers + "}";
						tempRecords[currIndex].MetaData = FString(Utils::to_fstring(metaData));

						results.Add(&tempRecords[currIndex]);
						currIndex++;
					}
					/*
					// Create as many entries as we need
					for (int i = 0; i < numServersToAdd; i++) {
						tempRecords[i] = *newRecord;
						std::string ipAddress = "76.21.103." + std::to_string(i) + ":7777";
						tempRecords[i].ServerID = FString(Utils::to_fstring(ipAddress));
						std::string metaData = "{\"OwnerID\":\"Steam | 76561198399522935 | 0\",\"OwnerName\":\"Butter\",\"ServerName\":\"Test Server #" + std::to_string(i) + "\",\"ServerMap\":\"EuroStadium_Rainy_P\",\"ServerGameMode\":0,\"bPassword\":false,\"NumPlayers\":1,\"MaxPlayers\":5000}";
						tempRecords[i].MetaData = FString(Utils::to_fstring(metaData));

						results.Add(&tempRecords[i]);
					}
					*/
					serverBrowser->HandleServers(results);
				}
			}
		}
		catch (std::exception &e)
		{
			std::cout << "Error: " << e.what() << std::endl;
		}
		searchTest = false;
	}
}

void ServerBrowser::onMenuClose() {
	std::cout << "Server Browser Disabled" << std::endl;
}

void ServerBrowser::onServerBrowserSearchComplete(Event* e) {

	TArray<struct FServerResult> results = e->getParams<SDK::UGFxData_ServerBrowser_TA_HandleSearchComplete_Params>()->InResults;
	std::cout << "Hande server search! Results: " << results.Num() << std::endl;

}

void ServerBrowser::eventLanSearchResultComplete(Event* e) {
	TArray<struct ULanServerRecord_X*> results = e->getParams<SDK::ULanSearchTask_EventLanSearchTaskResultComplete_Params>()->OutResult;
	std::cout << "Hande LAN search! Results: " << results.Num() << std::endl;

}

// may be worth trying to
//std::string lanObjName = "LanServerMetaData_TA Transient.LanServerMetaData_TA_" + std::to_string(i);
//std::string lanObjName = "GFxData_LanServer_TA Transient.GFxData_LanServer_TA_" + std::to_string(i);
//UGFxData_LanServer_TA* gfxLanServer = SDK::UObject::FindObject<SDK::UGFxData_LanServer_TA>(lanObjName);
//browser->JoinServer(FString(L"76.21.103.72:7777"), FString(L"")); // works
//ULanServerRecord_X* newRecord = reinterpret_cast<ULanServerRecord_X*>(ULanServerRecord_X::StaticClass()->STATIC_DynamicLoadObject(L"LanServerRecord_X_1", ULanServerRecord_X::StaticClass(), true));
// if records are present we have to do it differently so the TARRAY doesn't get screwy
/*
if(results.Num() > 0) {
newRecord = reinterpret_cast<SDK::ULanServerRecord_X*>(Utils::GetInstanceOf(ULanServerRecord_X::StaticClass()));
results.Clear();

}
*/
//TArray<struct ULanServerRecord_X*> results = browser->SearchResults;
