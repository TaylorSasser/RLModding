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

void InventoryManager::ExportSettings() {}
void InventoryManager::ImportSettings() {}

// Inventory Options
static bool groupItems = true;
static bool runInvExport = false;
bool inventoryExportDone = false;


void InventoryManager::DrawMenu() {
	if (InventoryManager::isEnabled()) {
		{
			ImGui::SetNextWindowPos(ImVec2(420, 420), ImGuiSetCond_FirstUseEver);

			ImGui::Begin("Inventory Management", &p_open);

			ImGui::Text("Line Format: Chakram,EpicSaves,Sky Blue,");

			ImGui::Checkbox("Group Items by quantity.", &groupItems);

			if (ImGui::Button("Export Inventory")) {
				printf("Exporting inventory");
				runInvExport = true;
				ImGui::OpenPopup("Exporting Inventory");

			}

			/*
			ImGui::Separator();
			if (ImGui::Button("Shrink Item?")) {
				shrinkItem = true;
			}
			*/

			if (ImGui::BeginPopupModal("Exporting Inventory"))
			{
				ImGui::Text("Please wait, this could take some time...");

				if (ImGui::Button("Close") || inventoryExportDone) {
					ImGui::CloseCurrentPopup();
					inventoryExportDone = false;
				}
				ImGui::EndPopup();
			}

			if (!p_open) {
				this->enabled = false;
				p_open = true;
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

	if (shrinkItem) {
		UProductAsset_Attachment_TA* prod = (UProductAsset_Attachment_TA*)Utils::GetInstanceOf(UProductAsset_Attachment_TA::StaticClass());
		//TArray< struct FVector > geom = car->CollisionGeomScale3D;
		TArray< struct FProductAttachment > att = prod->Attachments;
		for (int i = 0; i < att.Num(); i++)
		{
			att.GetByIndex(i).Scale /= 2;
			//pPlayerController1->Car->BodyFXActor = NULL;

			//UProductAttribute_Painted_TA* attribute = (UProductAttribute_Painted_TA*)&att.GetByIndex(i);

			//srand((unsigned)time(0));

			//attribute->PaintID = (rand() % 6) + 1;
			//attribute->Name.GetName();

		}
		shrinkItem = false;
	}

}
