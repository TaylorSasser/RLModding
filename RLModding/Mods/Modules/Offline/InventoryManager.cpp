#include "InventoryManager.h"
#include "../Interfaces/Interfaces.h"
#include "../../../Utils/Utils.h"
#include <functional>
#include "../../../DrawManager/DrawManager.hpp"
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
				std::ifstream f("inventory.csv");
				if (f.good()) {
					std::cout << "Opening inventory.csv\n";
					Interfaces::GUI().isGUIOpen = false;
					ShellExecute(NULL, "open", "invetory.csv", NULL, NULL, SW_SHOWNORMAL);
				}
					
				f.close();
			}
			ImGui::End();

		}

	}
}

void InventoryManager::onEnable() {

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
