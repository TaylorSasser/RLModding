#include "RumbleMods.h"
#include "../../../Utils/Utils.h"
#include <functional>
#include "../../../DrawManager/DrawManager.hpp"
#include <comdef.h> // for wchar to char conversion
#include <fstream>
#include <map>
#include <string>
#include <iostream>
#include "../Interfaces/Interfaces.h"

RumbleMods::RumbleMods(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
RumbleMods::RumbleMods(std::string name, int key) : ModBase(name, key) {}

const char* rumbleItems[] = { "Boot","Disrupter","Freeze","Magnet","Power Hitter","Punching Glove","Spikes","Swapper","Tornado", "Plunger", "Grappling Hook", "", "", "" };
static int selectedRumbleIndex = -1;

// Player selection menu
const char* players[] = { "All", "", "", "", "", "", "", "", "", "", "" };
static int playerSelectedIndex = -1;

// Boot Options



// Tornado Options
static float tornadoRadius = 1.0;


static int forceItemIndex = -1;
static bool giveItem = false;

void RumbleMods::DrawMenu() {
	if (RumbleMods::isEnabled()) {
		{
			// Rumble Controls
			ImGui::Begin("Rumble Options", &p_open, ImVec2(400, 300), 0.75f);

			/*
			ImGui::Combo("Player Name", &playerSelectedIndex, players, IM_ARRAYSIZE(players));

			ImGui::Separator();
			*/
			ImGui::InputFloat("Item Give Rate", &itemGiveRate, 0.5f, 1.0f);

			ImGui::Checkbox("Crazy Items", &enableCrazyItems);

			/*
			ImGui::Combo("Select Item", &selectedRumbleIndex, rumbleItems, IM_ARRAYSIZE(rumbleItems));

			if (ImGui::Button("Give Item")) {
				giveItem = true;
			}

			ImGui::Separator();

			//"Boot","Disrupter","Freeze","Magnet","Power Hitter","Punching Glove","Spikes","Swapper","Tornado", "Plunger", "Grappling Hook"
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

			}// Power Hitter
			else if (selectedRumbleIndex == 4) {
				ImGui::InputFloat("Ball Gravity", &magnetBallGravity, 0.5f, 1.0f);
				ImGui::InputFloat("Magnet Range", &magnetRange, 0.5f, 1.0f);
				ImGui::Checkbox("Deactivate on Touch", &magnetDeactivateOnTouch);

			}// Punching Glove
			else if (selectedRumbleIndex == 5) {
				ImGui::InputFloat("Force", &punchingGloveForce, 0.5f, 1.0f);
				ImGui::InputFloat("Vertical Force", &punchingGloveVerticalForce, 0.5f, 1.0f);
				ImGui::Checkbox("Apply Relative Force", &punchingGloveRelativeForce);
				ImGui::Checkbox("Follow After Hit", &punchingGloveFollowAfterHit);

				
				
				//ImGui::Checkbox("Deactivate on Touch", &magnetDeactivateOnTouch);

			} // Spikes
			else if (selectedRumbleIndex == 6) {
				//ImGui::InputFloat("Ball Gravity", &magnetBallGravity, 0.5f, 1.0f);
				ImGui::InputFloat("Tornado Radius", &tornadoRadius, 0.5f, 1.0f);
				ImGui::Checkbox("Deactivate on Touch", &magnetDeactivateOnTouch);

			} // Swapper
			else if (selectedRumbleIndex == 7) {
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
			// Plunger
			else if (selectedRumbleIndex == 9) {
				//ImGui::InputFloat("Ball Gravity", &magnetBallGravity, 0.5f, 1.0f);
				ImGui::InputFloat("Tornado Radius", &tornadoRadius, 0.5f, 1.0f);
				ImGui::Checkbox("Deactivate on Touch", &magnetDeactivateOnTouch);

			} // Grappling Hook
			else if (selectedRumbleIndex == 10) {
				//ImGui::InputFloat("Ball Gravity", &magnetBallGravity, 0.5f, 1.0f);
				ImGui::InputFloat("Tornado Radius", &tornadoRadius, 0.5f, 1.0f);
				ImGui::Checkbox("Deactivate on Touch", &magnetDeactivateOnTouch);
			}
			*/


			//Example Settings
			//For things that have settings to configure anywhere do something like this
			//Essentially have a boolean to detect the start and stop of the gamemode while the menu
			//just brings up the settings anywhere
			if (bStartGameMode) {
				if (ImGui::Button("Disable")) {
					RumbleMods::bStartGameMode = false;
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
			if (!p_open) {
				this->enabled = false;
				p_open = true;
			}

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

		if (enableCrazyItems) {
			itemGiveRate = 0;
		}

		// Start Rumble Settings Yo ++++++++++++++++++++++++++++++++++++++++++++++++++++++
		SDK::UGameEvent_Soccar_SubRules_Items_TA* itemRules = (SDK::UGameEvent_Soccar_SubRules_Items_TA*)((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->SubRules;
		if (itemRules && !Utils::FloatCompare(currItemGiveRate,itemGiveRate)) {
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
						SDK::ASpecialPickup_BallGravity_TA* magnet = (SDK::ASpecialPickup_BallGravity_TA*)items.GetByIndex(q);

						if (enableCrazyItems) {
							magnet->Range = magnet->Range * 2;
							//magnet->GravityScale = magnet->GravityScale * 3;
							//magnet->BallGravity = magnet->BallGravity * 1.25;
							//magnet->Range = magnet->Range * 100;
							//magnet->ActivationDuration = magnet->ActivationDuration * 2;
							//magnet->bCanTargetCars = true;
							//magnet->bCanTargetBall = false;
							//magnet->bCanTargetEnemyCars = true;
							//ServerSay("Magnet!");

						}
						else {

							// Check if magnet settings have changed
							if (!Utils::FloatCompare(magnet->Range, magnetRange)) {
								//magnet->Range = magnetRange;
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
					}
					// Grappling Hook
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_GrapplingHook_TA::StaticClass())) {
						SDK::ASpecialPickup_GrapplingHook_TA* grapplingHook = (SDK::ASpecialPickup_GrapplingHook_TA*)items.GetByIndex(q);

						if (enableCrazyItems) {
							//hook->Force = hook->Force * 3;
							//hook->bCanTargetEnemyCars = true;
							//hook->bCanTargetCars = true;
							//hook->bCanTargetTeamCars = true;
							//hook->bCanTargetBall = false;
							//hook->ClientTarget->bDemoOwner = true;
							
							grapplingHook->MaxRopeLength = grapplingHook->MaxRopeLength * 3;
							//hook->Force = hook->Force * 3;
							grapplingHook->AfterAttachDuration = grapplingHook->AfterAttachDuration * 10;
							grapplingHook->Range = grapplingHook->Range * 100;
							//hook->ActivationDuration = hook->ActivationDuration * 100;
							grapplingHook->bCanTargetCars = true;
							grapplingHook->bCanTargetBall = true;
							grapplingHook->bCanTargetEnemyCars = true;
							grapplingHook->bDeactivateOnTouch = false;
						}
						else {
							//grapplingHook->MaxRopeLength *= 100;
							//grapplingHook->bCanTargetCars = true;
							//grapplingHook->bCanTargetEnemyCars = true;
							//grapplingHook->bCanTargetTeamCars = true;
							//grapplingHook->ActivationDuration *= 100;
							//grapplingHook->bDeactivateOnTouch = false;
							//grapplingHook->bCanTargetBall = false;
							//grapplingHook->AfterAttachDuration *= 100;
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
					}
					// Power hitter
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_HitForce_TA::StaticClass())) {
						SDK::ASpecialPickup_HitForce_TA* powerHitter = (SDK::ASpecialPickup_HitForce_TA*)items.GetByIndex(q);

						if (enableCrazyItems) {
							//powerHitter->BallHitForce = powerHitter->BallHitForce * 1.1;
							powerHitter->CarHitForce *= 1.1;
							//powerHitter->OrigBallHitForce = powerHitter->OrigBallHitForce * 1.1;
						}
						else {
							//powerHitter->CarHitForce *= 20;
							//powerHitter->bDemolishCars = false;
							//powerHitter->ActivationDuration *= 100;
							//plunger->ActivationDuration *= 100;
							// If tornado is selected, set as current selection for item forcing
							if (selectedRumbleIndex == 4 && giveItem) {
								powerHitter->ApplyPickup(InstanceStorage::PlayerController()->Car);
								forceItemIndex = -1;
								giveItem = false;
								//forceItemIndex = q;
							}
						}
					}
					// Swapper
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_Swapper_TA::StaticClass())) {
						ASpecialPickup_Swapper_TA* swapper = (ASpecialPickup_Swapper_TA*)items.GetByIndex(q);

						if (enableCrazyItems) {
							//swap->bCanTargetBall = true;
							//swap->bCanTargetCars = false;
							swapper->Range = swapper->Range * 2;
							swapper->bCanTargetTeamCars = true;
							//swap->Force = swap->Force * 10;

							//swap->bCanTargetCars = false;
							//swap->bCanTargetBall = true;
							//swap->bCanTargetEnemyCars = false;
						}
						else {
							//plunger->ActivationDuration *= 100;
							// If tornado is selected, set as current selection for item forcing
							if (selectedRumbleIndex == 2 && giveItem) {
								swapper->ApplyPickup(InstanceStorage::PlayerController()->Car);
								forceItemIndex = -1;
								giveItem = false;
								//forceItemIndex = q;
							}
						}
					}
					// Booster
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BoostOverride_TA::StaticClass())) {
						ASpecialPickup_BoostOverride_TA* booster = (ASpecialPickup_BoostOverride_TA*)items.GetByIndex(q);

						if (enableCrazyItems) {
							booster->Range = booster->Range * 2;
						}
						else {
							//plunger->ActivationDuration *= 100;
							// If tornado is selected, set as current selection for item forcing
							if (selectedRumbleIndex == 2 && giveItem) {
								booster->ApplyPickup(InstanceStorage::PlayerController()->Car);
								forceItemIndex = -1;
								giveItem = false;
								//forceItemIndex = q;
							}
						}
					}
					
					// Freeze
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallFreeze_TA::StaticClass())) {
						SDK::ASpecialPickup_BallFreeze_TA* freeze = (SDK::ASpecialPickup_BallFreeze_TA*)items.GetByIndex(q);

						if (enableCrazyItems) {
							freeze->ActivationDuration = freeze->ActivationDuration * 0.5;
							//freeze->bMaintainMomentum = true;
						}
						else {
							//plunger->ActivationDuration *= 100;
							// If tornado is selected, set as current selection for item forcing
							if (selectedRumbleIndex == 2 && giveItem) {
								freeze->ApplyPickup(InstanceStorage::PlayerController()->Car);
								forceItemIndex = -1;
								giveItem = false;
								//forceItemIndex = q;
							}
						}
					}
					// Plunger
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallLasso_TA::StaticClass())) {
						SDK::ASpecialPickup_BallLasso_TA* plunger = (SDK::ASpecialPickup_BallLasso_TA*)items.GetByIndex(q);
						if (enableCrazyItems) {
							//plunger->Force = plunger->Force * 5;
							
							plunger->Force = plunger->Force * 10;
							plunger->MaxSpringLength = plunger->MaxSpringLength * 10;
							plunger->AfterSpringDuration = plunger->AfterSpringDuration * 10;
						}
						else {
							//plunger->ActivationDuration *= 100;
							// If tornado is selected, set as current selection for item forcing
							if (selectedRumbleIndex == 9 && giveItem) {
								plunger->ApplyPickup(InstanceStorage::PlayerController()->Car);
								forceItemIndex = -1;
								giveItem = false;
								//forceItemIndex = q;
							}
						}
					}
					// Punching Glove
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallCarSpring_TA::StaticClass())) {
						SDK::ASpecialPickup_BallCarSpring_TA* punchingGlove = (SDK::ASpecialPickup_BallCarSpring_TA*)items.GetByIndex(q);
						if (enableCrazyItems) {

						}
						else {
							if (!Utils::FloatCompare(punchingGlove->Force, punchingGlove->Force)) {
								//tornado->Radius = tornadoRadius;
								std::cout << "Punching Glove Force " << punchingGlove->Force << std::endl;
								punchingGlove->Force = punchingGlove->Force;
							}
							if (!Utils::FloatCompare(punchingGlove->VerticalForce, punchingGloveVerticalForce)) {
								//tornado->Radius = tornadoRadius;
								std::cout << "Punching Glove Vertical Force " << punchingGlove->VerticalForce << std::endl;
								punchingGlove->VerticalForce = punchingGloveVerticalForce;
							}

							//tornado->ActivationDuration *= 100;
							// If tornado is selected, set as current selection for item forcing
							if (selectedRumbleIndex == 5 && giveItem) {
								punchingGlove->ApplyPickup(InstanceStorage::PlayerController()->Car);
								forceItemIndex = -1;
								giveItem = false;
								//forceItemIndex = q;
							}
						}

					}
					// Spikes
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallVelcro_TA::StaticClass())) {
						SDK::ASpecialPickup_BallVelcro_TA* spikes = (SDK::ASpecialPickup_BallVelcro_TA*)items.GetByIndex(q);
						if (enableCrazyItems) {
							spikes->AfterHitDuration = spikes->AfterHitDuration * 5;
						}
						else {
							//spikes->AfterHitDuration *= 1000;
							//spikes->ActivationDuration *= 100;
							// If tornado is selected, set as current selection for item forcing
							if (selectedRumbleIndex == 6 && giveItem) {
								spikes->ApplyPickup(InstanceStorage::PlayerController()->Car);
								forceItemIndex = -1;
								giveItem = false;
								//forceItemIndex = q;
							}
						}
					}
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_Tornado_TA::StaticClass())) {
						SDK::ASpecialPickup_Tornado_TA* tornado = (SDK::ASpecialPickup_Tornado_TA*)items.GetByIndex(q);
						if (enableCrazyItems) {
							tornado->bDebugVis = true;
							tornado->BallMultiplier = tornado->BallMultiplier * 2;
							tornado->Radius = tornado->Radius * 3;
							tornado->RotationalForce = tornado->RotationalForce * 5;
							tornado->Torque = tornado->Torque * 5;
							tornado->Height = tornado->Height * 2.5;
						}
						else {
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
