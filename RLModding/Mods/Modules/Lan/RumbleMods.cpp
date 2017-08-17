#include "RumbleMods.h"
#include "../../../Utils/Utils.h"
#include <functional>
#include "../../../DrawManager/DrawManager.hpp"
#include <comdef.h> // for wchar to char conversion
#include <fstream>
#include <map>
#include <string>
#include <iostream>

RumbleMods::RumbleMods(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
RumbleMods::RumbleMods(std::string name, int key) : ModBase(name, key) {}

// Rumble Settings
static float itemGiveRate = 10.0;
static float currItemGiveRate = 10.0;


const char* rumbleItems[] = { "Boot","Disrupter","Freeze","Magnet","Power Hitter","Punching Glove","Spikes","Swapper","Tornado", "Plunger", "Grappling Hook", "", "", "" };
static int selectedRumbleIndex = -1;

// Player selection menu
const char* players[] = { "All", "", "", "", "", "", "", "", "", "", "" };
static int playerSelectedIndex = -1;


// Magnet Options
static float magnetRange;
static float magnetBallGravity = 1.0;
static bool magnetDeactivateOnTouch = false;

// Boot Options



// Tornado Options
static float tornadoRadius = 1.0;


static int forceItemIndex = -1;
static bool giveItem = false;

void RumbleMods::DrawMenu() {
	if (RumbleMods::isEnabled()) {
		{
			// Rumble Controls
			ImGui::Begin("Rumble Options", 0, ImVec2(400, 300), 0.75f);

			ImGui::Combo("Player Name", &playerSelectedIndex, players, IM_ARRAYSIZE(players));

			ImGui::Separator();

			ImGui::InputFloat("Item Give Rate", &itemGiveRate, 0.5f, 1.0f);

			ImGui::Combo("Select Item", &selectedRumbleIndex, rumbleItems, IM_ARRAYSIZE(rumbleItems));

			if (ImGui::Button("Give Item")) {
				giveItem = true;
			}

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

			} // Spikes
			else if (selectedRumbleIndex == 6) {
				//ImGui::InputFloat("Ball Gravity", &magnetBallGravity, 0.5f, 1.0f);
				ImGui::InputFloat("Tornado Radius", &tornadoRadius, 0.5f, 1.0f);
				ImGui::Checkbox("Deactivate on Touch", &magnetDeactivateOnTouch);

			}
			// Tornado
			else if (selectedRumbleIndex == 8) {
				//ImGui::InputFloat("Ball Gravity", &magnetBallGravity, 0.5f, 1.0f);
				ImGui::InputFloat("Tornado Radius", &tornadoRadius, 0.5f, 1.0f);
				ImGui::Checkbox("Deactivate on Touch", &magnetDeactivateOnTouch);

			}
			

			//Example Settings
			//For things that have settings to configure anywhere do something like this
			//Essentially have a boolean to detect the start and stop of the gamemode while the menu
			//just brings up the settings anywhere
			if (bStartGameMode) {
				if (ImGui::Button("Disable")) {
					bStartGameMode = false;
				}
			}
			else {
				if (ImGui::Button("Enable")) {
					if (!(getCurrentGameState() & (GameState::MENU | GameState::TRAINING)))
						bStartGameMode = true;
					else {
						printf("Invalid state for rumble settings\n");
					}
				}
			}
			//End Example Settings
			

			ImGui::End();
		}
	
	}
}

void RumbleMods::onEnable() {

}
void RumbleMods::onDisable() {
	
}

std::string to_string(wchar_t* text)
{
	if (text == NULL)
		return "NULL";
	std::wstring blah = text;
	std::string retval(blah.begin(), blah.end());
	return retval;
}

void RumbleMods::onPlayerTick(Event* e) {
	//This boolean for starting the gamemode
	if (bStartGameMode) {


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

				// Populate Player List
				//std::cout << itemDispensers.GetByIndex(l)->PRI->SanitizedPlayerName.ToString() << std::endl;
				//_bstr_t b(itemDispensers.GetByIndex(l)->PRI->SanitizedPlayerName.c_str());
				//SDK::AController* playerController = itemDispensers.GetByIndex(l)->PRI->GetALocalPlayerController();
				//_bstr_t b(playerController->GetHumanReadableName().c_str());
				_bstr_t b(itemDispensers.GetByIndex(l)->PRI->SanitizedPlayerName.ToString().data());
				//char * writable = new char[str.size() + 1];
				//std::copy(str.begin(), str.end(), writable);
				//writable[str.size()] = '\0';
				//players[l + 1] = writable;
				players[l + 1] = b;

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
						if (selectedRumbleIndex == 3 && giveItem) {
							magnet->ApplyPickup(InstanceStorage::PlayerController()->Car);
							forceItemIndex = -1;
							giveItem = false;
							//forceItemIndex = q;
						}
					}
					// Grappling Hook
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_GrapplingHook_TA::StaticClass())) {
						SDK::ASpecialPickup_GrapplingHook_TA* grapplingHook = (SDK::ASpecialPickup_GrapplingHook_TA*)items.GetByIndex(q);
						grapplingHook->MaxRopeLength *= 100;
						grapplingHook->bCanTargetCars = true;
						grapplingHook->bCanTargetEnemyCars = true;
						grapplingHook->bCanTargetTeamCars = true;
						grapplingHook->ActivationDuration *= 100;
						grapplingHook->bDeactivateOnTouch = false;
						grapplingHook->bCanTargetBall = false;
						grapplingHook->AfterAttachDuration *= 100;
						//grapplingHook->AttachTime *= 100;
						//plunger->ActivationDuration *= 100;
						// If tornado is selected, set as current selection for item forcing
						if (selectedRumbleIndex == 10 && giveItem) {
							grapplingHook->ApplyPickup(InstanceStorage::PlayerController()->Car);
							forceItemIndex = -1;
							giveItem = false;
							//forceItemIndex = q;
						}
					}
					// Power hitter
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_HitForce_TA::StaticClass())) {
						SDK::ASpecialPickup_HitForce_TA* powerHitter = (SDK::ASpecialPickup_HitForce_TA*)items.GetByIndex(q);
						powerHitter->CarHitForce *= 20;
						powerHitter->bDemolishCars = false;
						powerHitter->ActivationDuration *= 100;
						//plunger->ActivationDuration *= 100;
						// If tornado is selected, set as current selection for item forcing
						if (selectedRumbleIndex == 4 && giveItem) {
							powerHitter->ApplyPickup(InstanceStorage::PlayerController()->Car);
							forceItemIndex = -1;
							giveItem = false;
							//forceItemIndex = q;
						}
					}
					
					// Freeze
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallFreeze_TA::StaticClass())) {
						SDK::ASpecialPickup_BallFreeze_TA* freeze = (SDK::ASpecialPickup_BallFreeze_TA*)items.GetByIndex(q);
						//plunger->ActivationDuration *= 100;
						// If tornado is selected, set as current selection for item forcing
						if (selectedRumbleIndex == 2 && giveItem) {
							freeze->ApplyPickup(InstanceStorage::PlayerController()->Car);
							forceItemIndex = -1;
							giveItem = false;
							//forceItemIndex = q;
						}
					}
					// Plunger
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallLasso_TA::StaticClass())) {
						SDK::ASpecialPickup_BallLasso_TA* plunger = (SDK::ASpecialPickup_BallLasso_TA*)items.GetByIndex(q);
						//plunger->ActivationDuration *= 100;
						// If tornado is selected, set as current selection for item forcing
						if (selectedRumbleIndex == 9 && giveItem) {
							plunger->ApplyPickup(InstanceStorage::PlayerController()->Car);
							forceItemIndex = -1;
							giveItem = false;
							//forceItemIndex = q;
						}
					}
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallVelcro_TA::StaticClass())) {
						SDK::ASpecialPickup_BallVelcro_TA* spikes = (SDK::ASpecialPickup_BallVelcro_TA*)items.GetByIndex(q);
						spikes->AfterHitDuration *= 1000;
						spikes->ActivationDuration *= 100;
						// If tornado is selected, set as current selection for item forcing
						if (selectedRumbleIndex == 6 && giveItem) {
							spikes->ApplyPickup(InstanceStorage::PlayerController()->Car);
							forceItemIndex = -1;
							giveItem = false;
							//forceItemIndex = q;
						}
					}
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_Tornado_TA::StaticClass())) {
						// Check if magnet settings have changed
						SDK::ASpecialPickup_Tornado_TA* tornado = (SDK::ASpecialPickup_Tornado_TA*)items.GetByIndex(q);
						//tornado->Height = 20;
						//tornado->FXScale.X /= 10;
						//tornado->FXScale.Y /= 10;
						//tornado->FXScale.Z /= 10;
						// Standard radius 400
						if (!Utils::FloatCompare(tornado->Radius, tornadoRadius)) {
							//tornado->Radius = tornadoRadius;
							//std::cout << "Standard Radius? " << tornado->Radius << std::endl;
						}
						//tornado->ActivationDuration *= 100;
						// If tornado is selected, set as current selection for item forcing
						if (selectedRumbleIndex == 8 && giveItem) {
							tornado->ApplyPickup(InstanceStorage::PlayerController()->Car);
							forceItemIndex = -1;
							giveItem = false;
							//forceItemIndex = q;
						}

					}

					// Force Item to be set if valid for a player
					/*
					if (forceItemIndex > -1 && giveItem) {
						items.GetByIndex(forceItemIndex)->ApplyPickup(InstanceStorage::PlayerController()->Car);
						forceItemIndex = -1;
						giveItem = false;
					}
					*/

					// Test getting boost class from item
					/* Doesnt work atm?
					ACarComponent_Boost_TA* boostComponent = items.GetByIndex(q)->GetBoostComponent();
					if (boostComponent) {
						printf("Found boost.\n");
						boostComponent->MaxBoostAmount = 200;
					}
					*/
				}
			}
			// If item not found in pool, disable give
			if (giveItem)
				giveItem = false;
		}

		// End Rumble Settings Yo ++++++++++++++++++++++++++++++++++++++++++++++++++++++
	}
}
