#include "InventoryManager.h"
#include "../../Utils/Utils.h"
#include <functional>
#include "../../DrawManager/DrawManager.hpp"
#include <comdef.h> // for wchar to char conversion
#include <fstream>
#include <map>
#include <string>

InventoryManager::InventoryManager(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
InventoryManager::InventoryManager(std::string name, int key) : ModBase(name, key) {}

// Inventory Options
static bool groupItems = true;
static bool runInvExport = false;
bool inventoryExportDone = false;

void InventoryManager::DrawMenu() {
	if (InventoryManager::isEnabled()) {
		{
			ImGui::SetNextWindowPos(ImVec2(420, 420), ImGuiSetCond_FirstUseEver);

			//ImGui::SetNextWindowSize(ImVec2(400, 400), ImGuiSetCond_FirstUseEver);
			ImGui::Begin("Inventory Management");

			ImGui::Text("Line Format: Chakram,EpicSaves,Sky Blue,");

			ImGui::Checkbox("Group Items by quantity.", &groupItems);

			if (ImGui::Button("Export Inventory")) {
				runInvExport = true;
				ImGui::OpenPopup("Exporting Inventory");

			}

			if (ImGui::BeginPopupModal("Exporting Inventory"))
			{
				ImGui::Text("Please wait, this could take some time...");

				if (ImGui::Button("Close") || inventoryExportDone) {
					ImGui::CloseCurrentPopup();
					inventoryExportDone = false;
				}
				ImGui::EndPopup();
			}

			if (ImGui::Button("Load Inventory Info")) {
				//TestClass::runConsoleCommand = true;


				// ProjectX.OnlineGameJoinGame_X.GenerateKeys
				/*
				SDK::FName randomFname = SDK::FName("GenerateKeys");
				SDK::UOnlineGameJoinGame_X* game = (SDK::UOnlineGameJoinGame_X*)Utils::GetInstanceOf(SDK::UOnlineGameJoinGame_X::StaticClass());
				std::cout << "fName at " << randomFname.GetName().c_str() << std::endl;
				if (game) {
				game->GotoState(randomFname, randomFname, true, true);
				std::cout << "Calling generate keys from player controller" << std::endl;
				}
				*/


			}
			ImGui::End();

		}

	}
}

void InventoryManager::onEnable() {
	if (InstanceStorage::GameEvent()->AIManager == nullptr && InstanceStorage::GameEvent() == nullptr && InstanceStorage::CurrentCar() != nullptr) {
		//Console.printDebug("AI Manager not found");
		printf("Could not start Zombies Module \n");
	}

}
void InventoryManager::onDisable() {

}

void InventoryManager::onMainMenuTick(Event* e) {
	if (runInvExport) {
		SDK::USaveData_TA* saveData = (SDK::USaveData_TA*)Utils::GetInstanceOf(SDK::USaveData_TA::StaticClass());

		runInvExport = false;
		Utils::ExportInventory(saveData, "inventory.csv");
	}
}
