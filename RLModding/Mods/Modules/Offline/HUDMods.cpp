#include "HUDMods.h"

HUDMods::HUDMods(std::string name, int key, Category cat, GameState gamestate, std::string toolTip) : ModBase(name, key, cat, gamestate, toolTip) {}
HUDMods::~HUDMods() {}

void HUDMods::DrawMenu() {
	if (HUDMods::isEnabled()) {
		{
			ImGui::SetNextWindowPos(ImVec2(136, 76), ImGuiSetCond_FirstUseEver);

			ImGui::Begin("HUD Settings", &p_open);

			if (ImGui::Button("Test Search.")) {
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

void HUDMods::onMenuOpen() {
	std::cout << "HUD Mods Enabled" << std::endl;

}

void HUDMods::onPlayerTick(Event* e) {
	/*
	AGFxHUD_TA* hud = reinterpret_cast<SDK::AGFxHUD_TA*>(Utils::GetInstanceOf(AGFxHUD_TA::StaticClass()));

	if (hud) {
		UGFxData_Chat_TA* chatData = hud->ChatData;
		//std::cout << hud->PartyChatTitle.ToString() << std::endl;

	}
	*/

}

void HUDMods::onMainMenuTick(Event* e) {

	AGFxHUD_TA* hud = reinterpret_cast<SDK::AGFxHUD_TA*>(Utils::GetInstanceOf(AGFxHUD_TA::StaticClass()));

	if (hud) {
		UGFxData_Chat_TA* chatData = hud->ChatData;
		std::cout << hud->PartyChatTitle.ToString() << std::endl;
	}

	UGFxData_LanBrowser_TA* serverBrowser = reinterpret_cast<SDK::UGFxData_LanBrowser_TA*>(Utils::GetInstanceOf(UGFxData_LanBrowser_TA::StaticClass()));

	if (serverBrowser && searchTest) {
		std::cout << "FOund server browser!" << std::endl;

		if (serverBrowser->LanBrowser->IsA(UUdpLanBrowser_X::StaticClass())) {
			std::cout << "Browser is UDP!" << std::endl;
			UUdpLanBrowser_X* browser = (UUdpLanBrowser_X*)serverBrowser->LanBrowser;
			
			for (int i = 0; i < browser->SearchResults.Num(); i++) {
				std::cout << "Hande LAN search! Results: " << browser->SearchResults[i]->ServerID.ToString() << " metadata: " << browser->SearchResults[i]->MetaData.ToString() << std::endl;
				//ULanServerRecord_X* testRecord;
				//testRecord->ServerID = FString(L"76.21.103.72:7777");
				//testRecord->MetaData = browser->SearchResults[i]->MetaData;
				//serverBrowser->CreateServerGFxData(testRecord);
			}

			//serverBrowser->Refresh();
			//TArray<struct ULanServerRecord_X*> results;
			//ULanServerRecord_X testRecord;
			//testRecord.ServerID = FString(L"76.21.103.72:7777");
			//testRecord.MetaData = FString(L"{\"OwnerID\":\"Steam | 76561198399522935 | 0\",\"OwnerName\":\"Butter\",\"ServerName\":\"Butter's Server\",\"ServerMap\":\"EuroStadium_Rainy_P\",\"ServerGameMode\":0,\"bPassword\":false,\"NumPlayers\":1,\"MaxPlayers\":5000}");
			//results.Add(&testRecord);
			//serverBrowser->HandleServers(results);

			
			//browser->JoinServer(FString(L"76.21.103.72:7777"), FString(L"")); // works
			/*
			ULanSearchTask* testSearch = browser->GetServerList();
			TArray<class ULanServerRecord_X*> results = testSearch->Result;
			for (int i = 0; i < results.Num(); i++) {
				std::cout << "Hande LAN search! Results: " << results[i]->ServerID.ToString() << " metadata: " << results[i]->MetaData.ToString() << std::endl;
				ULanServerRecord_X* testRecord;
				testRecord->ServerID = FString(L"76.21.103.72:7777");
				testRecord->MetaData = results[i]->MetaData;
			}
			*/
		}
		//ULanSearchTask* testSearch = serverBrowser->LanBrowser->GetServerList();
		

		/*
		ULanServerRecord_X testRecord;
		testRecord.ServerID = FString(L"0");
		testRecord.MetaData = FString(L"76.21.103.72:7777");
		serverBrowser->CreateServerGFxData(&testRecord);
		*/
		searchTest = false;
	}
}

void HUDMods::onMenuClose() {
	std::cout << "HUD Disabled" << std::endl;

}

void HUDMods::onServerBrowserSearchComplete(Event* e) {
	
	TArray<struct FServerResult> results = e->getParams<SDK::UGFxData_ServerBrowser_TA_HandleSearchComplete_Params>()->InResults;
	std::cout << "Hande server search! Results: " << results.Num() << std::endl;

}

void HUDMods::eventLanSearchResultComplete(Event* e) {
	TArray<struct ULanServerRecord_X*> results = e->getParams<SDK::ULanSearchTask_EventLanSearchTaskResultComplete_Params>()->OutResult;
	//ULanServerRecord_X testRecord;
	//testRecord.ServerID = FString(L"76.21.103.72:7777");
	//testRecord.MetaData = FString(L"{\"OwnerID\":\"Steam | 76561198399522935 | 0\",\"OwnerName\":\"Butter\",\"ServerName\":\"Butter's Server\",\"ServerMap\":\"EuroStadium_Rainy_P\",\"ServerGameMode\":0,\"bPassword\":false,\"NumPlayers\":1,\"MaxPlayers\":5000}");

	//results.Add(&testRecord);

	std::cout << "Hande LAN search! Results: " << results.Num() << std::endl;
	for (int i = 0; i < results.Num(); i++) {
		results[i]->ServerID = FString(L"76.21.103.72:7777");
		results[i]->MetaData = FString(L"{\"OwnerID\":\"Steam | 76561198399522935 | 0\",\"OwnerName\":\"Butter\",\"ServerName\":\"Butter's Server\",\"ServerMap\":\"EuroStadium_Rainy_P\",\"ServerGameMode\":0,\"bPassword\":false,\"NumPlayers\":1,\"MaxPlayers\":5000}");
	}


}