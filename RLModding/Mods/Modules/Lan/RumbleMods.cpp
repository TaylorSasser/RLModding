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

void RumbleMods::ExportSettings(pt::ptree & root) {
	root.put("R_GiveRate", itemGiveRate);
	// Magnet
	root.put("Magnet_Range", magnetRange);
	root.put("Magnet_Gravity", magnetBallGravity);
	root.put("Magnet_DeactivateOnTouch", magnetDeactivateOnTouch);
	// Boot
	root.put("Boot_Force",			bootForce);
	root.put("Boot_VerticalForce",	bootVerticalForce);
	root.put("Boot_TargetBall",		bootCanTargetBall);
	root.put("Boot_TargetCars",		bootCanTargetCars);
	root.put("Boot_RelativeForce",	bootRelativeForce);
	root.put("Boot_FollowAfterHit", bootFollowAfterHit);
	//Disruptor
	root.put("Disruptor_Range", boosterRange);
	//Freeze
	root.put("Freeze_Duration", freezeActivationDuration);
	//Superman
	root.put("Power_BallHitForce", powerHitterBallHitForce);
	root.put("Power_CarHitForce", powerHitterCarHitForce);
	root.put("Power_DemolishCars", powerHitterDemolishCars);
	//Punching Glove
	root.put("Glove_VForce", punchingGloveVerticalForce);
	root.put("Glove_Force", punchingGloveForce);
	root.put("Glove_TargetBall", punchingGloveCanTargetBall);
	root.put("Glove_TargetCar", punchingGloveCanTargetCars);
	root.put("Glove_RelativeForce", punchingGloveRelativeForce);
	root.put("Glove_FollowAfterHit", punchingGloveFollowAfterHit);
	//Spikes
	root.put("Spikes_AfterHitDuration", spikesAfterHitDuration);
	//Swapper
	root.put("Swap_Range", swapperRange);
	root.put("Swap_TargetTeam", swapperCanTargetTeamCars);
	//Tornado
	root.put("Tornado_BallMultiplier", tornadoBallMultiplier);
	root.put("Tornado_Radius", tornadoRadius);
	root.put("Tornado_RForce", tornadoRotForce);
	root.put("Tornado_Torque", tornadoTorque);
	root.put("Tornado_Height", tornadoHeight);
	//Plunger
	root.put("Plunger_Length", plungerMaxSpringLength);
	root.put("Plunger_AfterHitDuration", plungerAfterSpringDuration);
	//Grappling Hook
	root.put("Hook_Range", grapplingHookRange);
	root.put("Hook_AfterAttachDuration", grapplingHookAfterAttachDuration);
	root.put("Hook_CanTargetBall", grapplingHookCanTargetBall);
	root.put("Hook_CanTargetCars", grapplingHookCanTargetCars);
	root.put("Hook_CanTargetEnemyCars", grapplingHookCanTargetEnemyCars);
	root.put("Hook_DeactivateOnTouch", grapplingHookDeactivateOnTouch);

}
void RumbleMods::ImportSettings(pt::ptree & root) {
	itemGiveRate = root.get<float>("R_GiveRate", 10.0);
	// Magnet
	magnetRange = root.get<float>("Magnet_Range", 1000.0);
	magnetBallGravity = root.get<float>("Magnet_Gravity", 55000);
	magnetDeactivateOnTouch = root.get<bool>("Magnet_DeactivateOnTouch", false);
	// Boot
	bootForce = root.get<float>("Boot_Force", 550000.0);
	bootVerticalForce = root.get<float>("Boot_VerticalForce", 400000.0);
	bootCanTargetBall = root.get<bool>("Boot_TargetBall", false);
	bootCanTargetCars = root.get<bool>("Boot_TargetCars", true);
	bootRelativeForce = root.get<bool>("Boot_RelativeForce", true);
	bootFollowAfterHit = root.get<bool>("Boot_FollowAfterHit", false);
	//Disruptor
	boosterRange = root.get<float>("Disruptor_Range", 4000);
	//Freeze
	freezeActivationDuration = root.get<float>("Freeze_Duration", 4.0);
	//Superman
	powerHitterBallHitForce = root.get<float>("Power_BallHitForce", 30);
	powerHitterCarHitForce = root.get<float>("Power_CarHitForce", 1.5);
	powerHitterDemolishCars = root.get<bool>("Power_DemolishCars", true);
	//Punching Glove
	punchingGloveVerticalForce = root.get<float>("Glove_VForce", 80000.0);
	punchingGloveForce = root.get<float>("Glove_Force", 0);
	punchingGloveCanTargetBall = root.get<bool>("Glove_TargetBall", false);
	punchingGloveCanTargetCars = root.get<bool>("Glove_TargetCar", true);
	punchingGloveRelativeForce = root.get<float>("Glove_RelativeForce", true);
	punchingGloveFollowAfterHit = root.get<bool>("Glove_FollowAfterHit", false);
	//Spikes
	spikesAfterHitDuration = root.get<float>("Spikes_AfterHitDuration", 4.5);
	//Swapper
	swapperRange = root.get<float>("Swap_Range", 10000.0);
	swapperCanTargetTeamCars = root.get<bool>("Swap_TargetTeam", false);
	//Tornado
	tornadoBallMultiplier = root.get<float>("Tornado_BallMultiplier", 3);
	tornadoRadius = root.get<float>("Tornado_Radius", 400);
	tornadoRotForce = root.get<float>("Tornado_RForce", 7);
	tornadoTorque = root.get<float>("Tornado_Torque", 5);
	tornadoHeight = root.get<float>("Tornado_Height", 800);
	//Plunger
	plungerMaxSpringLength = root.get<float>("Plunger_Length", 3000);
	plungerAfterSpringDuration = root.get<float>("Plunger_AfterHitDuration", 1.3);
	//Grappling Hook
	grapplingHookRange = root.get<float>("Hook_Range", 2800);
	grapplingHookAfterAttachDuration = root.get<float>("Hook_AfterAttachDuration", 3.0);
	grapplingHookCanTargetBall = root.get<bool>("Hook_CanTargetBall", true);
	grapplingHookCanTargetCars = root.get<bool>("Hook_CanTargetCars", false);
	grapplingHookCanTargetEnemyCars = root.get<bool>("Hook_CanTargetEnemyCars", false);
	grapplingHookDeactivateOnTouch = root.get<bool>("Hook_DeactivateOnTouch", true);
}

const char* rumbleItems[] = { "Boot","Disrupter","Freeze","Magnet","Power Hitter","Punching Glove","Spikes","Swapper","Tornado", "Plunger", "Grappling Hook", "", "", "" };
static int selectedRumbleIndex = -1;

void RumbleMods::resetRumbleValues() {
	enableCrazyItems = false;

	itemGiveRate = 10.0f;

	// Magnet Options
	magnetRange = 1000.0;
	magnetBallGravity = 55000;
	magnetDeactivateOnTouch = false;

	/*
	Tornado
	Ball Multiplyer: 3
	Radius: 400
	Rotational Force: 7
	Torgue: 5
	Height: 800
	*/
	tornadoRadius = 400;
	tornadoBallMultiplier = 3;
	tornadoRotForce = 7;
	tornadoTorque = 5;
	tornadoHeight = 800;

	/*
	Grappling Hook Length: 3500
	Grappling Hook AfterAttachDuration: 3
	Grappling Hook Range: 2800
	*/
	grapplingHookMaxRopeLength = 3500.0;
	grapplingHookAfterAttachDuration = 3.0;
	grapplingHookRange = 2800.0;
	grapplingHookCanTargetCars = false;
	grapplingHookCanTargetBall = true;
	grapplingHookCanTargetEnemyCars = false;
	grapplingHookDeactivateOnTouch = true;

	// Punching Glove Settings
	punchingGloveForce = 80000.0;
	punchingGloveVerticalForce = 0.0;
	punchingGloveCanTargetBall = true;
	punchingGloveCanTargetCars = false;
	punchingGloveRelativeForce = true;
	punchingGloveFollowAfterHit = false;

	// Boot settings
	/*
	boot Force 550000
	boot Vertical Force 400000
	*/
	bootForce = 550000.0;
	bootVerticalForce = 400000.0;
	bootCanTargetBall = false;
	bootCanTargetCars = true;
	bootRelativeForce = true;
	bootFollowAfterHit = false;

	/*
	Car hit force: 30
	Ball hit force: 1.5
	*/
	powerHitterBallHitForce = 30;
	powerHitterCarHitForce = 1.5;
	powerHitterDemolishCars = true;

	/*
	Plunger Hook Length: 3000
	Plunger AfterAttachDuration: 1.3
	*/
	plungerMaxSpringLength = 3000.0;
	plungerAfterSpringDuration = 1.3;

	boosterRange = 4000.0;

	/*
	Swapper Range: 10000
	*/
	swapperRange = 10000.0;
	swapperCanTargetTeamCars = false;

	freezeActivationDuration = 4.0;

	spikesAfterHitDuration = 4.5;
}


void RumbleMods::setCrazyRumbleValues() {

	itemGiveRate = 0.0f;

	/*
	Default Magnet Range: 1000
	Default Magnet ball gravity: 55000
	*/
	magnetRange = 3500.0;
	magnetBallGravity = 300000.0;
	magnetDeactivateOnTouch = false;

	/*
	Grappling Hook Length: 3500
	Grappling Hook AfterAttachDuration: 3
	Grappling Hook Range: 2800
	*/
	grapplingHookMaxRopeLength = 10500.0;
	grapplingHookAfterAttachDuration = 20;
	grapplingHookRange = 60000;
	grapplingHookCanTargetCars = true;
	grapplingHookCanTargetBall = true;
	grapplingHookCanTargetEnemyCars = true;
	grapplingHookDeactivateOnTouch = false;

	/*
	Car hit force: 30
	Ball hit force: 1.5
	*/
	powerHitterCarHitForce = 150.0;
	powerHitterBallHitForce = 15.0;
	powerHitterDemolishCars = false;

	spikesAfterHitDuration = 22.5;

	/*
	Tornado
	Ball Multiplyer: 3
	Radius: 400
	Rotational Force: 7
	Torgue: 5
	Height: 800
	*/
	tornadoBallMultiplier = 50;
	tornadoRadius = 5500;
	tornadoRotForce = 150;
	tornadoTorque = 300;
	tornadoHeight = 2000;

	/*
	Plunger Hook Length: 3000
	Plunger AfterAttachDuration: 1.3
	*/
	plungerMaxSpringLength = 30000;
	plungerAfterSpringDuration = 13.0;

	punchingGloveCanTargetBall = true;
	punchingGloveCanTargetCars = true;
	punchingGloveForce = 180000;
	punchingGloveVerticalForce = 500.0;
	punchingGloveRelativeForce = true;
	punchingGloveFollowAfterHit = true;

	bootCanTargetBall = true;
	bootCanTargetCars = true;
	bootForce = 1800000;
	bootVerticalForce = 500.0;
	bootRelativeForce = true;
	bootFollowAfterHit = true;

	boosterRange = 15000.0;

	freezeActivationDuration = 20;

	swapperRange = 20000.0;
	swapperCanTargetTeamCars = true;
	
}

void RumbleMods::DrawMenu() {
	if (RumbleMods::isEnabled()) {
		{
			#pragma region BeginMenu
			// Rumble Controls
			ImGui::Begin("Rumble Options", &p_open, ImVec2(400, 300), 0.75f);

			/*
			ImGui::Combo("Player Name", &playerSelectedIndex, players, IM_ARRAYSIZE(players));

			ImGui::Separator();
			*/
			ImGui::InputFloat("Item Give Rate", &itemGiveRate, 0.5f, 1.0f);

			ImGui::Separator();
			ImGui::Combo("Select Item", &selectedRumbleIndex, rumbleItems, IM_ARRAYSIZE(rumbleItems));

			if (ImGui::Button("Give Item")) {
				giveItem = true;
			}
			ImGui::SameLine();
			if (ImGui::Button("Reset Settings")) {
				resetRumbleValues();
			}
			ImGui::SameLine();
			if (ImGui::Button("Set Crazy Items Settings")) {
				setCrazyRumbleValues();
			}
			#pragma endregion BeginMenu
			//"Boot","Disrupter","Freeze","Magnet","Power Hitter","Punching Glove","Spikes","Swapper","Tornado", "Plunger", "Grappling Hook"
			// Boot
			#pragma region Boot
			if (selectedRumbleIndex == 0) {
				ImGui::InputFloat("Force", &bootForce, 0.5f, 5.0f);
				ImGui::InputFloat("Vertical Force", &bootVerticalForce, 0.5f, 5.0f);
				ImGui::Checkbox("Can Target Ball", &bootCanTargetBall);
				ImGui::Checkbox("Can Target Cars", &bootCanTargetCars);
				ImGui::Checkbox("Apply Relative Force", &bootRelativeForce);
				ImGui::Checkbox("Follow After Hit", &bootFollowAfterHit);
			}
			#pragma endregion Boot
			// Disrupter
			else if (selectedRumbleIndex == 1) {
				ImGui::InputFloat("Range", &boosterRange, 0.5f, 5.0f);

			}
			// Freeze
			else if (selectedRumbleIndex == 2) {
				ImGui::InputFloat("Activation Duration", &freezeActivationDuration, 0.5f, 5.0f);

			}
			// Magnet
			else if (selectedRumbleIndex == 3) {
				ImGui::InputFloat("Ball Gravity", &magnetBallGravity, 0.5f, 5.0f);
				ImGui::InputFloat("Magnet Range", &magnetRange, 0.5f, 5.0f);
				ImGui::Checkbox("Deactivate on Touch", &magnetDeactivateOnTouch);

			}// Power Hitter
			else if (selectedRumbleIndex == 4) {
				ImGui::InputFloat("Ball Hit Force", &powerHitterBallHitForce, 0.5f, 5.0f);
				ImGui::InputFloat("Car Hit Force", &powerHitterCarHitForce, 0.5f, 5.0f);
				ImGui::Checkbox("Demolish Cars", &powerHitterDemolishCars);

			}// Punching Glove
			else if (selectedRumbleIndex == 5) {
				ImGui::InputFloat("Force", &punchingGloveForce, 0.5f, 5.0f);
				ImGui::InputFloat("Vertical Force", &punchingGloveVerticalForce, 0.5f, 5.0f);
				ImGui::Checkbox("Can Target Ball", &punchingGloveCanTargetBall);
				ImGui::Checkbox("Can Target Cars", &punchingGloveCanTargetCars);
				ImGui::Checkbox("Apply Relative Force", &punchingGloveRelativeForce);
				ImGui::Checkbox("Follow After Hit", &punchingGloveFollowAfterHit);


			} // Spikes
			else if (selectedRumbleIndex == 6) {
				ImGui::InputFloat("After Hit Duration", &spikesAfterHitDuration, 0.5f, 5.0f);
			} // Swapper
			else if (selectedRumbleIndex == 7) {
				ImGui::InputFloat("Range", &swapperRange, 0.5f, 5.0f);
				ImGui::Checkbox("Can Target Team Cars", &swapperCanTargetTeamCars);
			}
			// Tornado
			else if (selectedRumbleIndex == 8) {
				ImGui::InputFloat("Ball Multiplayer", &tornadoBallMultiplier, 0.5f, 5.0f);
				ImGui::InputFloat("Radius", &tornadoRadius, 0.5f, 5.0f);
				ImGui::InputFloat("Rotational Force", &tornadoRotForce, 0.5f, 5.0f);
				ImGui::InputFloat("Torque", &tornadoTorque, 0.5f, 5.0f);
				ImGui::InputFloat("Height", &tornadoHeight, 0.5f, 5.0f);


			}
			// Plunger
			else if (selectedRumbleIndex == 9) {
				ImGui::InputFloat("Max Spring Length", &plungerMaxSpringLength, 0.5f, 5.0f);
				ImGui::InputFloat("After Hit Duration", &plungerAfterSpringDuration, 0.5f, 5.0f);

			} // Grappling Hook
			else if (selectedRumbleIndex == 10) {
				ImGui::InputFloat("Range", &grapplingHookRange, 0.5f, 5.0f);
				ImGui::InputFloat("After Attach Duration", &grapplingHookAfterAttachDuration, 0.5f, 5.0f);
				ImGui::Checkbox("Can Target Ball", &grapplingHookCanTargetBall);
				ImGui::Checkbox("Can Target Cars", &grapplingHookCanTargetCars);
				ImGui::Checkbox("Can Target Enemy Cars", &grapplingHookCanTargetEnemyCars);
				ImGui::Checkbox("Deactivate on Touch", &grapplingHookDeactivateOnTouch);
				
			}
			ImGui::Separator();
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

void RumbleMods::onMenuOpen() {

}
void RumbleMods::onMenuClose() {
	resetRumbleValues();
	//delete[] players;
}

void RumbleMods::setModEnabled(bool flag) {
	bStartGameMode = flag;
}

std::string to_string(wchar_t* text)
{
	if (text == NULL)
		return "NULL";
	std::wstring blah = text;
	std::string retval(blah.begin(), blah.end());
	return retval;
}

void RumbleMods::populatePlayerList(AGameEvent_Soccar_TA* localGameEvent) {
	// Populate player list
	std::fill_n(players, 11, "\0");
	players[0] = "All\0";

	if (localGameEvent) {
		TArray< class AController* > eventPlayers = localGameEvent->Players;
		for (int i = 0; i < eventPlayers.Num(); i++) {
			std::string playerName = eventPlayers.GetByIndex(i)->PlayerReplicationInfo->PlayerName.ToString();

			AController* tempController = eventPlayers.GetByIndex(i);
			// Check if bot or person
			if (tempController->IsA(SDK::AAIController_TA::StaticClass())) {
				AAIController_TA* currController = (AAIController_TA*)tempController;

				playerName.append(" [BOT]");

				if (currController->Car && currController->GetTeamNum() == 0) {
					playerName.append(" (Blue Team)");
				}
				if (currController->Car && currController->GetTeamNum() == 1) {
					playerName.append(" (Orange Team)");
				}
			}
			else if (tempController->IsA(SDK::APlayerController_TA::StaticClass())) {
				APlayerController_TA* currController = (APlayerController_TA*)tempController;

				if (currController->Car && currController->GetTeamNum() == 0) {
					playerName.append(" (Blue Team)");
				}
				if (currController->Car && currController->GetTeamNum() == 1) {
					playerName.append(" (Orange Team)");
				}
			}

			char *cptr = Utils::stringToCharArray(playerName);
			std::cout << "Player: " << playerName << std::endl;
			//_bstr_t b(eventPlayers.GetByIndex(i)->PlayerReplicationInfo->PlayerName.ToString().data());
			players[i + 1] = cptr;
		}
		currPlayerCount = eventPlayers.Num();
	}
}

void RumbleMods::onCarSpawned(Event* e) {
	//std::cout << "Spawned a car!" << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	populatePlayerList(localGameEvent);
}

void RumbleMods::onGameEventRemovePlayer(Event* e) {
	//std::cout << "Removed Player: " << ((APRI_TA*)e->getCallingObject())->PlayerName.ToString() << std::endl;
	// If player is not null
	APRI_TA* leavingPRI = (APRI_TA*)e->getCallingObject();
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	populatePlayerList(localGameEvent);
}

void RumbleMods::onGameEventAddPlayer(Event* e) {
	//std::cout << "Removed Player: " << ((APRI_TA*)e->getCallingObject())->PlayerName.ToString() << std::endl;
	AGameEvent_Soccar_TA* localGameEvent = (SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent();
	populatePlayerList(localGameEvent);
}


void RumbleMods::onPlayerTick(Event* e) {
	//This boolean for starting the gamemode
	if (bStartGameMode) {

		if (enableCrazyItems) {
			itemGiveRate = 0.0f;
		}

		// Start Rumble Settings Yo ++++++++++++++++++++++++++++++++++++++++++++++++++++++
		SDK::UGameEvent_Soccar_SubRules_Items_TA* itemRules = (SDK::UGameEvent_Soccar_SubRules_Items_TA*)((SDK::AGameEvent_Soccar_TA*)InstanceStorage::GameEvent())->SubRules;

		if (itemRules) {
			SDK::TArray< class SDK::UPlayerItemDispenser_TA* > itemDispensers = itemRules->ItemDispensers;

			for (int l = 0; l < itemDispensers.Num(); l++) {

				itemDispensers.GetByIndex(l)->ItemGiveRate = itemGiveRate;
				
				SDK::TArray< class SDK::ASpecialPickup_TA* > items = itemDispensers.GetByIndex(l)->ItemPool;
				for (int q = 0; q < items.Num(); q++)
				{
					//std::cout << items.GetByIndex(q)->PickupName.ToString() << std::endl;

					if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallGravity_TA::StaticClass())) {
						SDK::ASpecialPickup_BallGravity_TA* magnet = (SDK::ASpecialPickup_BallGravity_TA*)items.GetByIndex(q);

						//std::cout << "Magnet Range: " << magnet->Range << std::endl;
						//std::cout << "Magnet BallGravity: " << magnet->BallGravity << std::endl;

						//magnet->GravityScale = magnet->GravityScale * 3;
						//magnet->Range = magnet->Range * 100;
						//magnet->ActivationDuration = magnet->ActivationDuration * 2;
						//magnet->bCanTargetCars = true;
						//magnet->bCanTargetBall = false;
						//magnet->bCanTargetEnemyCars = true;

						// Check if magnet settings have changed
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

						//hook->Force = hook->Force * 3;
						//hook->bCanTargetEnemyCars = true;
						//hook->bCanTargetCars = true;
						//hook->bCanTargetTeamCars = true;
						//hook->bCanTargetBall = false;
						//hook->ClientTarget->bDemoOwner = true;
							
						/*
						Grappling Hook Length: 3500
						Grappling Hook AfterAttachDuration: 3
						Grappling Hook Range: 2800
						*/

						//std::cout << "Grappling Hook Length: " << grapplingHook->MaxRopeLength << std::endl;
						//std::cout << "Grappling Hook AfterAttachDuration: " << grapplingHook->AfterAttachDuration << std::endl;
						//std::cout << "Grappling Hook Range: " << grapplingHook->Range << std::endl;


						grapplingHook->MaxRopeLength = grapplingHookMaxRopeLength;
						grapplingHook->AfterAttachDuration = grapplingHookAfterAttachDuration;
						grapplingHook->Range = grapplingHookRange;
						grapplingHook->bCanTargetCars = grapplingHookCanTargetCars;
						grapplingHook->bCanTargetBall = grapplingHookCanTargetBall;
						grapplingHook->bCanTargetEnemyCars = grapplingHookCanTargetEnemyCars;
						grapplingHook->bDeactivateOnTouch = grapplingHookDeactivateOnTouch;
						
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
					// Power hitter
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_HitForce_TA::StaticClass())) {
						SDK::ASpecialPickup_HitForce_TA* powerHitter = (SDK::ASpecialPickup_HitForce_TA*)items.GetByIndex(q);

						// Car hit force: 30
						// Ball hit force: 1.5

						//powerHitter->BallHitForce = powerHitter->BallHitForce * 1.1;
						powerHitter->CarHitForce = powerHitterCarHitForce;
						powerHitter->BallHitForce = powerHitterBallHitForce;
						powerHitter->bDemolishCars = powerHitterDemolishCars;

						//std::cout << "Power hitter ball hit force: " << powerHitter->BallHitForce << std::endl;

						//powerHitter->OrigBallHitForce = powerHitter->OrigBallHitForce * 1.1;
		
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
					// Swapper
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_Swapper_TA::StaticClass())) {
						ASpecialPickup_Swapper_TA* swapper = (ASpecialPickup_Swapper_TA*)items.GetByIndex(q);

						
					/*
					Swapper Range: 10000

					*/

					//swap->bCanTargetBall = true;
					//swap->bCanTargetCars = false;
					swapper->Range = swapperRange;
					//std::cout << "Swapper Range: " << swapper->Range << std::endl;
					swapper->bCanTargetTeamCars = swapperCanTargetTeamCars;
					//swap->Force = swap->Force * 10;

					//swap->bCanTargetCars = false;
					//swap->bCanTargetBall = true;
					//swap->bCanTargetEnemyCars = false;
					
					//plunger->ActivationDuration *= 100;
					// If tornado is selected, set as current selection for item forcing
					if (selectedRumbleIndex == 2 && giveItem) {
						swapper->ApplyPickup(InstanceStorage::PlayerController()->Car);
						forceItemIndex = -1;
						giveItem = false;
						//forceItemIndex = q;
					}
						
					}
					// Booster
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BoostOverride_TA::StaticClass())) {
						ASpecialPickup_BoostOverride_TA* booster = (ASpecialPickup_BoostOverride_TA*)items.GetByIndex(q);

						// Booster Range: 4000

						booster->Range = boosterRange;
						//std::cout << "Booster Range: " << booster->Range << std::endl;

						//plunger->ActivationDuration *= 100;
						// If tornado is selected, set as current selection for item forcing
						if (selectedRumbleIndex == 2 && giveItem) {
							booster->ApplyPickup(InstanceStorage::PlayerController()->Car);
							forceItemIndex = -1;
							giveItem = false;
							//forceItemIndex = q;
						}
						
					}
					
					// Freeze
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallFreeze_TA::StaticClass())) {
						SDK::ASpecialPickup_BallFreeze_TA* freeze = (SDK::ASpecialPickup_BallFreeze_TA*)items.GetByIndex(q);

						//freeze->ActivationDuration = freeze->ActivationDuration * 0.5;
						freeze->ActivationDuration = freezeActivationDuration;
						//std::cout << "Freeze ActivationDuration: " << freeze->ActivationDuration << std::endl;

						//freeze->bMaintainMomentum = true;
		
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
						/*
						Plunger Hook Length: 3000
						Plunger AfterAttachDuration: 1.3
						*/
						if (!Utils::FloatCompare(plunger->MaxSpringLength, plungerMaxSpringLength)) {
							//std::cout << "Punching Glove Force " << punchingGlove->Force << std::endl;
							plunger->MaxSpringLength = plungerMaxSpringLength;
						}
						if (!Utils::FloatCompare(plunger->AfterSpringDuration, plungerAfterSpringDuration)) {
							//std::cout << "Punching Glove Vertical Force " << punchingGlove->VerticalForce << std::endl;
							plunger->AfterSpringDuration = plungerAfterSpringDuration;
						}

						//std::cout << "Plunger Length: " << plunger->MaxSpringLength << std::endl;
						//std::cout << "Plunger AfterAttachDuration: " << plunger->AfterSpringDuration << std::endl;
						
						//plunger->ActivationDuration *= 100;
						// If tornado is selected, set as current selection for item forcing
						if (selectedRumbleIndex == 9 && giveItem) {
							plunger->ApplyPickup(InstanceStorage::PlayerController()->Car);
							forceItemIndex = -1;
							giveItem = false;
							//forceItemIndex = q;
						}
						
					}
					// Punching Glove
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_BallCarSpring_TA::StaticClass())) {

						// Determine if it is punching glove or boot
						// Boot
						if (items.GetByIndex(q)->PickupName.ToString().compare("CarSpring") == 0) {
							SDK::ASpecialPickup_BallCarSpring_TA* boot = (SDK::ASpecialPickup_BallCarSpring_TA*)items.GetByIndex(q);

							boot->bCanTargetBall = bootCanTargetBall;
							boot->bCanTargetCars = bootCanTargetCars;
							boot->bApplyRelativeForce = bootRelativeForce;
							boot->bFollowAfterHit = bootFollowAfterHit;
							//std::cout << "Punching Glove Force " << boot->Force << std::endl;
							//std::cout << "boot Vertical Force " << boot->VerticalForce << std::endl;


							if (!Utils::FloatCompare(boot->Force, bootForce)) {
								boot->Force = punchingGloveForce;
							}
							if (!Utils::FloatCompare(boot->VerticalForce, bootVerticalForce)) {
								boot->VerticalForce = bootVerticalForce;
							}

							//tornado->ActivationDuration *= 100;
							// If tornado is selected, set as current selection for item forcing
							if (selectedRumbleIndex == 0 && giveItem) {
								boot->ApplyPickup(InstanceStorage::PlayerController()->Car);
								forceItemIndex = -1;
								giveItem = false;
								//forceItemIndex = q;
							}

						}
						else if (items.GetByIndex(q)->PickupName.ToString().compare("BallSpring") == 0) {
						
							SDK::ASpecialPickup_BallCarSpring_TA* punchingGlove = (SDK::ASpecialPickup_BallCarSpring_TA*)items.GetByIndex(q);

							punchingGlove->bCanTargetBall = punchingGloveCanTargetBall;
							punchingGlove->bCanTargetCars = punchingGloveCanTargetCars;
							punchingGlove->bApplyRelativeForce = punchingGloveRelativeForce;
							punchingGlove->bFollowAfterHit = punchingGloveFollowAfterHit;


							if (!Utils::FloatCompare(punchingGlove->Force, punchingGlove->Force)) {
								//std::cout << "Punching Glove Force " << punchingGlove->Force << std::endl;
								punchingGlove->Force = punchingGloveForce;
							}
							if (!Utils::FloatCompare(punchingGlove->VerticalForce, punchingGloveVerticalForce)) {
								//std::cout << "Punching Glove Vertical Force " << punchingGlove->VerticalForce << std::endl;
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
						spikes->AfterHitDuration = spikesAfterHitDuration;
						//std::cout << "Spikes AfterHitDuration: " << spikes->AfterHitDuration << std::endl;
					
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
					else if (items.GetByIndex(q)->IsA(SDK::ASpecialPickup_Tornado_TA::StaticClass())) {
						SDK::ASpecialPickup_Tornado_TA* tornado = (SDK::ASpecialPickup_Tornado_TA*)items.GetByIndex(q);
						//tornado->bDebugVis = true;
						/*
							Ball Multiplyer: 3
							Radius: 400
							Rotational Force: 7
							Torgue: 5
							Height: 800
							
						std::cout << "Ball Multiplyer: " << tornado->BallMultiplier << std::endl;
						std::cout << "Radius: " << tornado->Radius << std::endl;
						std::cout << "Rotational Force: " << tornado->RotationalForce << std::endl;
						std::cout << "Torgue: " << tornado->Torque << std::endl;
						std::cout << "Height: " << tornado->Height << std::endl;
						*/


						//tornado->ActivationDuration = 10000;
							
					
						//tornado->Height = 20;
						//tornado->FXScale.X /= 10;
						//tornado->FXScale.Y /= 10;
						//tornado->FXScale.Z /= 10;
						// Standard radius 400

						tornado->BallMultiplier = tornadoBallMultiplier;
						tornado->RotationalForce = tornadoRotForce;
						tornado->Torque = tornadoTorque;
						tornado->Height = tornadoHeight;

						if (!Utils::FloatCompare(tornado->Radius, tornadoRadius)) {
							tornado->Radius = tornadoRadius;
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
					
				}
			}
			// If item not found in pool, disable give
			if (giveItem)
				giveItem = false;
		}

		// End Rumble Settings Yo ++++++++++++++++++++++++++++++++++++++++++++++++++++++
	}
}
