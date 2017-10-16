#include "WorkShopMods.h"
#include <comdef.h>
#include <iostream>

WorkShopMods::WorkShopMods(std::string name, int key, Category cat, GameState gamestate) : ModBase(name, key, cat, gamestate) {}

WorkShopMods::~WorkShopMods() {}

void WorkShopMods::onMenuOpen() {
}

void WorkShopMods::onMenuClose() {
}

void WorkShopMods::ExportSettings() {}
void WorkShopMods::ImportSettings() {}

void WorkShopMods::DrawMenu() {
	ImGui::Begin("WorkShop Settings", &p_open, ImVec2(400, 300), 0.75f);

	ImGui::Combo("Current Maps", &selectedWorkShopName, workShopMapNames, IM_ARRAYSIZE(workShopMapNames));   

	if(ImGui::Button("Get workshop maps.")) {
		getWorkShopMaps = true;
	}

	if (ImGui::Button("Find pathnode.")) {
		//getWorkShopMaps = true;
		USeqAct_Teleport* sequence = SDK::UObject::FindObject<SDK::USeqAct_Teleport>("SeqAct_Teleport dribblingchallenge2.TheWorld.PersistentLevel.Main_Sequence.LoadLevel.SpawnLevel_21.SeqAct_Teleport_30");
		//USeqEvent_LevelLoaded* sequence = SDK::UObject::FindObject<SDK::USeqEvent_LevelLoaded>("SeqEvent_LevelLoaded dribblingchallenge2.TheWorld.PersistentLevel.Main_Sequence.LoadLevel");
		if (sequence) {
			std::cout << "found sequence!" << std::endl;
		}
		else {
			std::cout << "NO FOUND GFNDOFJG sequence!" << std::endl;
		}
		ATriggerVolume* triggerVolume = SDK::UObject::FindObject<SDK::ATriggerVolume>("TriggerVolume dribblingchallenge2.TheWorld.PersistentLevel.TriggerVolume_22");
		if (triggerVolume) {
			std::cout << "found volume!" << std::endl;
			//triggerVolume->ProcessActorSetVolume(InstanceStorage::PlayerController()->Car);
			triggerVolume->Touch(InstanceStorage::PlayerController()->Car, InstanceStorage::PlayerController()->Car->CollisionComponent, triggerVolume->Location, triggerVolume->Location);
			//std::cout << InstanceStorage::PlayerController()->Car->Teleport(triggerVolume->Location, triggerVolume->Rotation, true, true, false) << std::endl;
			//std::cout << (InstanceStorage::PlayerController()->Car->SetLocation(triggerVolume->Location)) << std::endl;
		}
		else {
			std::cout << "NO FOUND GFNDOFJG volume!" << std::endl;
		}
		
		APathNode* pathNode = SDK::UObject::FindObject<SDK::APathNode>("PathNode dribblingchallenge2.TheWorld.PersistentLevel.PathNode_10");
		if (pathNode) {
			std::cout << "found pathnode!" << std::endl;
		} else {
			std::cout << "NO FOUND GFNDOFJG pathnode!" << std::endl;
		}
		
	}

	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void WorkShopMods::onPlayerTick(Event* event) {

}

void WorkShopMods::onMainMenuTick(Event* e) {
	if (getWorkShopMaps) {
		UOnlineCommunityContentInterfaceSteamworks* workshop = reinterpret_cast<UOnlineCommunityContentInterfaceSteamworks*>(Utils::GetInstanceOf(UOnlineCommunityContentInterfaceSteamworks::StaticClass()));
		if (workshop) {
			std::cout << "Found workshop." << std::endl;

			bool success = false;
			TArray<struct FDownloadedWorkshopData>* items;

			workshop->DownloadAllWorkshopData(workshop->__OnDownloadedWorkshopData__Delegate);
			//SDK::APlayerController_TA* pPlayerController = SDK::UObject::FindObject<SDK::APlayerController_TA>("PlayerController_TA park_p.TheWorld.PersistentLevel.PlayerController_TA_1");


		}
		else {
			std::cout << "no workshop found" << std::endl;

		}
		getWorkShopMaps = false;
	}
}

void WorkShopMods::onWorkshopDownloaded(Event* e) {
	std::fill_n(workShopMapNames, 40, "\0");

	TArray<struct FDownloadedWorkshopData> items = e->getParams<SDK::UOnlineCommunityContentInterfaceSteamworks_OnDownloadedWorkshopData_Params>()->Items;
	for (int i = 0; i < items.Num(); i++) {
		std::cout << items.GetByIndex(i).Title.ToString() << std::endl;
		std::string mapName = items.GetByIndex(i).Title.ToString();

		char *cptr = new char[mapName.length() + 1]; // +1 to account for \0 byte
		std::strncpy(cptr, mapName.c_str(), mapName.size());
		cptr[mapName.length()] = '\0';
		workShopMapNames[i] = cptr;
	}
}