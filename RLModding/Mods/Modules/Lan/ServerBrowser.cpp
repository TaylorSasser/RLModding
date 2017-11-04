#include "ServerBrowser.h"
#include "../Memory/MemoryAllocator.h"
#include <exception>

ServerBrowser::ServerBrowser(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}
ServerBrowser::~ServerBrowser() {}

void::ServerBrowser::DrawRLMenuAddon() {
	if (ServerBrowser::isEnabled() && isRLMenuShowing) {
		ImGui::SetNextWindowPos(ImVec2(50, 50), ImGuiSetCond_FirstUseEver);

		ImGui::PushStyleVar(ImGuiStyleVar_WindowRounding, 11.0f);

		ImGui::PushStyleColor(ImGuiCol_Border, ImVec4(0.172f, 0.572f, 0.929f, 1.0f));

		//ImGui::Begin("Server Filter", &p_open, ImVec2(1251, 59), 0.75f, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_ShowBorders | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize);
		ImGui::Begin("Server Filter", &p_open, ImVec2(1251, 59), 0.75f, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_ShowBorders);

		//ImGui::PushItemWidth(-5.0f);
		ImGui::BeginGroup();
		ImGui::SetWindowFontScale(1.6f);

		ImGui::PushItemWidth(ImGui::GetContentRegionAvailWidth() * .4);

		ImGui::InputText("Name", queryServerName, IM_ARRAYSIZE(queryServerName));
		ImGui::SameLine();
		ImGui::PushItemWidth(ImGui::GetContentRegionAvailWidth() * .4);

		ImGui::Combo("Map", &selectedMap, friendlyMapNames, IM_ARRAYSIZE(friendlyMapNames));
		ImGui::SameLine(ImGui::GetWindowWidth() - 340);

		ImGui::BeginGroup();
		ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.156, 0.317, 0.505, 1.0f));
		ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.831, 0.894, 0.968, 0.75f));
		ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.831, 0.894, 0.968, 1.0f));

		if (searchButtonHovered) ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.156, 0.317, 0.505, 1.0f));
		else  ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.831, 0.894, 0.968, 0.75f));

		if (ImGui::Button("Find Public Servers")) {
			searchTest = true;
		}
		searchButtonHovered = ImGui::IsItemHovered();
		ImGui::PopStyleColor();

		if (resetButtonHovered) ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.156, 0.317, 0.505, 1.0f));
		else  ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.831, 0.894, 0.968, 0.75f));

		ImGui::SameLine();

		if (ImGui::Button("Reset")) {
			resetFilters = true;
		}
		resetButtonHovered = ImGui::IsItemHovered();
		ImGui::PopStyleColor(4);

		ImGui::EndGroup();
		ImGui::EndGroup();

		ImGui::End();

		// IP Join Box
		ImGui::SetNextWindowPos(ImVec2(50, 109), ImGuiSetCond_FirstUseEver);
		//ImGui::Begin("Server Filter", &p_open, ImVec2(1251, 59), 0.75f, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_ShowBorders | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoResize);
		ImGui::Begin("Join By IP", &p_open, ImVec2(750, 59), 0.75f, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_ShowBorders);

		//ImGui::PushItemWidth(-5.0f);
		ImGui::BeginGroup();
		ImGui::SetWindowFontScale(1.6f);

		//ImGui::PushItemWidth(ImGui::GetContentRegionAvailWidth() * .4);

		ImGui::InputText("IP Address", joinIpAddress, IM_ARRAYSIZE(joinIpAddress));
		ImGui::SameLine();

		ImGui::BeginGroup();
		ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(0.156, 0.317, 0.505, 1.0f));
		ImGui::PushStyleColor(ImGuiCol_ButtonHovered, ImVec4(0.831, 0.894, 0.968, 0.75f));
		ImGui::PushStyleColor(ImGuiCol_ButtonActive, ImVec4(0.831, 0.894, 0.968, 1.0f));

		if (joinButtonHovered) ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.156, 0.317, 0.505, 1.0f));
		else  ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.831, 0.894, 0.968, 0.75f));

		if (ImGui::Button("Join")) {
			joinIp = true;
		}
		joinButtonHovered = ImGui::IsItemHovered();
		ImGui::PopStyleColor(4);

		ImGui::EndGroup();
		ImGui::EndGroup();

		ImGui::End();

		ImGui::PopStyleColor();
		ImGui::PopStyleVar();

		/*
		if (ImGui::BeginPopupContextItem("item context menu"))
		{
			ImGui::Text("Test context menu");
			ImGui::PushItemWidth(-1);
			ImGui::PopItemWidth();
			ImGui::EndPopup();
		}
		*/
	}
}

void ServerBrowser::DrawMenu() {
	/*
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
	*/
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

	serverBrowser = reinterpret_cast<SDK::UGFxData_LanBrowser_TA*>(Utils::GetInstanceOf(UGFxData_LanBrowser_TA::StaticClass()));
	TArray<struct ULanServerRecord_X*> results;

	//UGFxShell_TA* shell = reinterpret_cast<SDK::UGFxShell_TA*>(Utils::GetInstanceOf(UGFxShell_TA::StaticClass()));
	//isRLMenuShowing = Utils::GetMenuState(shell->Movies[0]) == Utils::MenuState::LAN_SERVER_BROWSER;
	//if (serverBrowser && serverBrowser->IsPendingKill()) isRLMenuShowing = false;
	//if (serverBrowser) std::cout << serverBrowser->GetStateName().GetName() << std::endl;
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
		
			boost::property_tree::read_json(ss, pt);
			int numServersToAdd = stoi(pt.get<std::string>("rows"));

			std::cout << "Found server browser!" << std::endl;

			if (serverBrowser->LanBrowser->IsA(UUdpLanBrowser_X::StaticClass()) && numServersToAdd > 0) {
				serverBrowser->Refresh();

				//std::cout << "Browser is UDP!" << std::endl;
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

						//std::cout << "Search map name: " << maps[selectedMap].filename << std::endl;
						//std::cout << "Result map name: " << serverMap << std::endl;

						std::cout << "Search string: '" << queryServerName << "'" << std::endl;
						std::cout << "Search string: '" << serverName.c_str() << "'" << std::endl;


						if (strcmp(queryServerName, "") == 0 || Utils::stristr(serverName.c_str(), queryServerName) != NULL) {

							if (selectedMap == 0 || stricmp(maps[selectedMap].filename.c_str(), serverMap.c_str()) == 0) {
								tempRecords[currIndex] = *newRecord;
								std::string ipAddress = serverIpAddress + ":" + serverPort;
								tempRecords[currIndex].ServerID = FString(Utils::to_fstring(ipAddress));
								std::string metaData = "{\"OwnerID\":\"Steam | " + serverOwnerId + " | 0\",\"OwnerName\":\"" + serverOwnerName + "\",\"ServerName\":\"" + serverName + "\",\"ServerMap\":\"" + serverMap + "\",\"ServerGameMode\":" + serverGameVar + ",\"bPassword\":" + serverHasPass + ",\"NumPlayers\":" + serverNumPlayers + ",\"MaxPlayers\":" + serverMaxPlayers + "}";
								tempRecords[currIndex].MetaData = FString(Utils::to_fstring(metaData));

								results.Add(&tempRecords[currIndex]);
								currIndex++;
							}

						}
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
	if (serverBrowser && joinIp) {
		if (serverBrowser->LanBrowser->IsA(UUdpLanBrowser_X::StaticClass())) {
			std::string command(joinIpAddress);
			// If no port, add :7777
			std::size_t found = command.find(":");
			if (found == std::string::npos) {
				command.append(":7777");
			}
			//serverBrowser->LanBrowser->JoinServer(Utils::to_fstring(command), FString(L""));
			//std::cout << "Ran join command: " << command << std::endl;

			std::string temp = "open " + command + "?Lan";
			std::cout << "Traveling to: " << temp << std::endl;
			InstanceStorage::MenuController()->ConsoleCommand(Utils::to_fstring(temp), 1);
		}
		joinIp = false;
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
void ServerBrowser::onGfxShellTick(Event* e) {
	UGFxShell_X* callingShell = reinterpret_cast<SDK::UGFxShell_X*>(e->getCallingObject());
	if (callingShell->IsA(UGFxShell_TA::StaticClass())) {
		UGFxShell_TA* shell = reinterpret_cast<SDK::UGFxShell_TA*>(callingShell);
		isRLMenuShowing = Utils::GetMenuState(shell->Movies[0]) == Utils::MenuState::LAN_SERVER_BROWSER;
	}
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
