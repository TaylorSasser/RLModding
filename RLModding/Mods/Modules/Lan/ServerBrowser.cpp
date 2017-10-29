#include "ServerBrowser.h"
#include "../Memory/MemoryAllocator.h"

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

	if (serverBrowser && searchTest) {
		std::cout << "Found server browser!" << std::endl;

		if (serverBrowser->LanBrowser->IsA(UUdpLanBrowser_X::StaticClass())) {
			std::cout << "Browser is UDP!" << std::endl;
			UUdpLanBrowser_X* browser = (UUdpLanBrowser_X*)serverBrowser->LanBrowser;
			int numServersToAdd = 10;
			TArray<struct ULanServerRecord_X*> results;

			ULanServerRecord_X* newRecord = SDK::UObject::FindObject<SDK::ULanServerRecord_X>("LanServerRecord_X ProjectX.Default__LanServerRecord_X");
			if (newRecord) {

				ULanServerRecord_X* tempRecords;
				tempRecords = new ULanServerRecord_X[numServersToAdd];

				// Create as many entries as we need
				for (int i = 0; i < numServersToAdd; i++) {
					tempRecords[i] = *newRecord;
					std::string ipAddress = "76.21.103." + std::to_string(i) + ":7777";
					tempRecords[i].ServerID = FString(Utils::to_fstring(ipAddress));
					std::string metaData = "{\"OwnerID\":\"Steam | 76561198399522935 | 0\",\"OwnerName\":\"Butter\",\"ServerName\":\"Test Server #" + std::to_string(i) + "\",\"ServerMap\":\"EuroStadium_Rainy_P\",\"ServerGameMode\":0,\"bPassword\":false,\"NumPlayers\":1,\"MaxPlayers\":5000}";
					tempRecords[i].MetaData = FString(Utils::to_fstring(metaData));

					results.Add(&tempRecords[i]);
				}
				serverBrowser->HandleServers(results);
			}
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
