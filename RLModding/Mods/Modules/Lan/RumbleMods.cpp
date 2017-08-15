#include "RumbleMods.h"
#include "../../Utils/Utils.h"
#include <functional>
#include "../../DrawManager/DrawManager.hpp"
#include <comdef.h> // for wchar to char conversion
#include <fstream>
#include <map>
#include <string>

RumbleMods::RumbleMods(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
RumbleMods::RumbleMods(std::string name, int key) : ModBase(name, key) {}

// Rumble Settings
static float itemGiveRate = 10.0;
static float currItemGiveRate = 10.0;


const char* rumbleItems[] = { "Boot","Disrupter","Freeze","Magnet","Power Hitter","Punching Glove","Spikes","Swapper","Tornado", "", "", "", "", "" };
static int selectedRumbleIndex = -1;

static float magnetRange;
static float magnetBallGravity = 1.0;
static bool magnetDeactivateOnTouch = false;

void RumbleMods::DrawMenu() {
	if (RumbleMods::isEnabled()) {
		{
			// Rumble Controls
			ImGui::Begin("Rumble Options", 0, ImVec2(400, 300), 0.75f);

			ImGui::InputFloat("Item Give Rate", &itemGiveRate, 0.5f, 1.0f);

			ImGui::Combo("Select Item", &selectedRumbleIndex, rumbleItems, IM_ARRAYSIZE(rumbleItems));

			ImGui::Separator();

			//"Boot","Disrupter","Freeze","Magnet","Power Hitter","Punching Glove","Spikes","Swapper","Tornado"
			// Boot
			if (selectedRumbleIndex == 0) {

			}
			else if (selectedRumbleIndex == 1) {

			}
			else if (selectedRumbleIndex == 2) {

			}
			// Magnet
			else if (selectedRumbleIndex == 3) {
				ImGui::InputFloat("Ball Gravity", &magnetBallGravity, 0.5f, 1.0f);
				ImGui::InputFloat("Magnet Range", &magnetRange, 0.5f, 1.0f);
				ImGui::Checkbox("Deactivate on Touch", &magnetDeactivateOnTouch);

			}



			ImGui::End();
		}
	
	}
}

void RumbleMods::onEnable() {
	if (InstanceStorage::GameEvent()->AIManager == nullptr && InstanceStorage::GameEvent() == nullptr && InstanceStorage::CurrentCar() != nullptr) {
		//Console.printDebug("AI Manager not found");
		printf("Could not start Zombies Module \n");
	}

}
void RumbleMods::onDisable() {
	
}

void RumbleMods::onPlayerTick(Event* e) {
	// Start Rumble Settings Yo ++++++++++++++++++++++++++++++++++++++++++++++++++++++
	SDK::UGameEvent_Soccar_SubRules_Items_TA* itemRules = (SDK::UGameEvent_Soccar_SubRules_Items_TA*)((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->SubRules;
	if (itemRules && currItemGiveRate != itemGiveRate) {
		SDK::TArray< class SDK::UPlayerItemDispenser_TA* > itemDispensers = itemRules->ItemDispensers;
		for (int l = 0; l < itemDispensers.Num(); l++) {
			itemDispensers.GetByIndex(l)->ItemGiveRate = itemGiveRate;
		}
	}
	else {
	}

	if (itemRules) {
		SDK::TArray< class SDK::UPlayerItemDispenser_TA* > itemDispensers = itemRules->ItemDispensers;

		for (int l = 0; l < itemDispensers.Num(); l++) {
			SDK::TArray< class SDK::ASpecialPickup_TA* > items = itemDispensers.GetByIndex(l)->ItemPool;
			for (int q = 0; q < items.Num(); q++)
			{
				if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallGravity_TA::StaticClass())) {
					// Check if magnet settings have changed
					SDK::ASpecialPickup_BallGravity_TA* magnet = (SDK::ASpecialPickup_BallGravity_TA*)items.GetByIndex(q);
					if (!Utils::FloatCompare(magnet->Range, magnetRange)) {
						magnet->Range = magnetRange;
					}
					if (!Utils::FloatCompare(magnet->BallGravity, magnetBallGravity)) {
						magnet->BallGravity = magnetBallGravity;
					}
					if (magnet->bDeactivateOnTouch != magnetDeactivateOnTouch) {
						magnet->bDeactivateOnTouch = magnetDeactivateOnTouch;
					}
				}

			}
		}
	}

	// End Rumble Settings Yo ++++++++++++++++++++++++++++++++++++++++++++++++++++++
}
