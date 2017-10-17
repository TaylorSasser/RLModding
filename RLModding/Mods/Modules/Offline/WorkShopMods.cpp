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

	if (ImGui::Button("Play map on LAN.")) {
		testPlayOnLan = true;
	}

	ImGui::InputInt("Level", &skipToLevel);
	ImGui::SameLine();
	if (ImGui::Button("GO")) {
		testTravel = true;
	}
	if (ImGui::CollapsingHeader("Workshop Tests")) {

		if (ImGui::Button("Teleport Test.")) {
			if (InstanceStorage::PlayerController()) {
				std::cout << "Trying to teleport car..." << std::endl;

				APathNode* pathNode = SDK::UObject::FindObject<SDK::APathNode>("PathNode dribblingchallenge2.TheWorld.PersistentLevel.PathNode_10");
				if (pathNode) {
					std::cout << "found pathnode!" << std::endl;
					InstanceStorage::PlayerController()->ServerTeleportCar(pathNode->Location, pathNode->Rotation);

				}
				else {
					std::cout << "NO pathnode found!" << std::endl;
				}


				//getWorkShopMaps = true;
				USeqAct_Teleport* sequence = SDK::UObject::FindObject<SDK::USeqAct_Teleport>("SeqAct_Teleport dribblingchallenge2.TheWorld.PersistentLevel.Main_Sequence.LoadLevel.SpawnLevel_21.SeqAct_Teleport_29");
				//USeqEvent_LevelLoaded* sequence = SDK::UObject::FindObject<SDK::USeqEvent_LevelLoaded>("SeqEvent_LevelLoaded dribblingchallenge2.TheWorld.PersistentLevel.Main_Sequence.LoadLevel");
				if (sequence) {
					std::cout << "found sequence!" << std::endl;
					std::cout << sequence->HandlerName.GetName() << "," << sequence->bCallHandler << "," << sequence->Targets.Num() << std::endl;
					//sequence->ForceActivateInput(0);
					//sequence->ForceActivateOutput(0);

						//sequence->ActivateOutputLink(0);
				}
				else {
					std::cout << "NO FOUND GFNDOFJG sequence!" << std::endl;
				}

				if (sequence && pathNode) {
					InstanceStorage::PlayerController()->Car->Teleport(pathNode->Location, pathNode->Rotation, true, true, false);
					InstanceStorage::PlayerController()->Car->OnTeleport(sequence);
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
			}
		}

		ImGui::InputText("Object Name", objectName, IM_ARRAYSIZE(objectName));
		if (ImGui::Button("Find Object")) {


			

			static SDK::UObject* ObjectInstance;
			ObjectInstance = NULL;

			for (int i = 0; SDK::UObject::GObjects->IsValidIndex(i); ++i) {
				SDK::UObject* CheckObject = (SDK::UObject::GObjects->GetByIndex(i));
				if (CheckObject) {
					if (strstr(CheckObject->GetFullName().c_str(), objectName)) {
						ObjectInstance = CheckObject;
						std::cout << objectName << " instance: " << CheckObject->GetFullName() << std::endl;
					}
				}
			}


		}
	}


	if (!p_open) {
		this->enabled = false;
		p_open = true;
	}

	ImGui::End();
}

void WorkShopMods::onPlayerTick(Event* event) {
	if (testCar) {
		//std::cout << "X: " << testCar->Location.X << " Y: " << testCar->Location.Y << " Z: " << testCar->Location.Z << std::endl;
	}
	
	if (testTravel) {
		
		//InstanceStorage::PlayerController()->Car->Demolish(InstanceStorage::PlayerController()->Car);
		//currGameEvent = SDK::UObject::FindObject<SDK::AGameEvent_Tutorial_FreePlay_TA>("GameEvent_Tutorial_FreePlay_TA dribblingchallenge2.TheWorld.PersistentLevel.GameEvent_Tutorial_FreePlay_TA_1"); // Casual
		//AGameEvent_Tutorial_FreePlay_TA* gameEvent = SDK::UObject::FindObject<SDK::AGameEvent_Tutorial_FreePlay_TA>("GameEvent_Tutorial_FreePlay_TA dribblingchallenge2.TheWorld.PersistentLevel.GameEvent_Tutorial_FreePlay_TA_2"); // Timed

		
		
		USeqVar_Bool* timerVar = SDK::UObject::FindObject<SDK::USeqVar_Bool>("SeqVar_Bool dribblingchallenge2.TheWorld.PersistentLevel.Main_Sequence.SeqVar_Bool_3");

		currGameEvent = (AGameEvent_Tutorial_FreePlay_TA*)InstanceStorage::GameEvent();
		if (currGameEvent && timerVar && timerVar->bValue == 0) {
			std::cout << "Switching Levels..." << std::endl;
			USeqVar_Int* varInt = SDK::UObject::FindObject<SDK::USeqVar_Int>("SeqVar_Int dribblingchallenge2.TheWorld.PersistentLevel.Main_Sequence.SeqVar_Int_1");
			if (varInt) {
				std::cout << "found varInt: " << varInt->IntValue << std::endl;
				varInt->IntValue = skipToLevel;

				ACar_Freeplay_TA* freeCar = SDK::UObject::FindObject<SDK::ACar_Freeplay_TA>("Car_Freeplay_TA dribblingchallenge2.TheWorld.PersistentLevel.Car_Freeplay_TA_2");
				if (freeCar) {
					testCar = freeCar;
					/*
					ABall_TA* testBall = SDK::UObject::FindObject<SDK::ABall_TA>("Ball_TA dribblingchallenge2.TheWorld.PersistentLevel.Ball_TA_7");
					if (testBall) {
					FVector launchLoc = testBall->Location;
					launchLoc.Z += 2000;
					testBall->Launch(testBall->Location, launchLoc);
					testBall->SetLocation(freeCar->Location);
					}
					else {
					std::cout << "NO ball!" << std::endl;

					}

					USequence* loadLevel = SDK::UObject::FindObject<SDK::USequence>("Sequence dribblingchallenge2.TheWorld.PersistentLevel.Main_Sequence.FinishLevel");
					if (loadLevel) {
					//loadLevel->SetEnabled(true);
					//loadLevel->Reset();
					loadLevel->ForceActivateOutput(0);
					loadLevel->ActivateOutputLink(0);
					loadLevel->ForceActivateInput(loadLevel->LastActivatedInputLink);
					//loadLevel->bActive = true;
					//loadLevel->bLatentExecution = true;
					std::cout << loadLevel->ActivateCount << "," << loadLevel->InputLinks.Num() << "," << loadLevel->LastActivatedInputLink << "," << loadLevel->OutputLinks.Num() << std::endl;
					loadLevel->Activated();
					}
					else {
					std::cout << "NO loadlevel!" << std::endl;

					}


					freeCar->Reset();
					freeCar->RespawnInPlace();
					FVector newLoc = freeCar->Location;
					newLoc.Z -= 1000;
					freeCar->Teleport(newLoc, freeCar->Rotation, false, false, false);
					freeCar->SetLocation(newLoc);

					AInterpActor* interp = SDK::UObject::FindObject<SDK::AInterpActor>("InterpActor dribblingchallenge2.TheWorld.PersistentLevel.InterpActor_1");
					if (interp) {
					interp->Restart();
					interp->RanInto(freeCar);
					freeCar->Touch(interp, interp->CollisionComponent, interp->Location, interp->Location);
					interp->Touch(freeCar, freeCar->CollisionComponent, freeCar->Location, freeCar->Location);

					}
					else {
					std::cout << "NO interp!" << std::endl;

					}

					AGameInfo_Tutorial_TA* gameInfo = SDK::UObject::FindObject<SDK::AGameInfo_Tutorial_TA>("GameInfo_Tutorial_TA dribblingchallenge2.TheWorld.PersistentLevel.GameInfo_Tutorial_TA_1");
					if (gameInfo) {
					gameInfo->ResetTraining();
					}
					else {
					std::cout << "NO game info!" << std::endl;

					}

					ADynamicTriggerVolume* dynTriggerVolume = SDK::UObject::FindObject<SDK::ADynamicTriggerVolume>("DynamicTriggerVolume dribblingchallenge2.TheWorld.PersistentLevel.DynamicTriggerVolume_1");
					if (dynTriggerVolume) {
					std::cout << "found dyn trigger volume!" << std::endl;
					//triggerVolume->ProcessActorSetVolume(InstanceStorage::PlayerController()->Car);
					//triggerVolume->Touch(InstanceStorage::PlayerController()->Car, InstanceStorage::PlayerController()->Car->CollisionComponent, triggerVolume->Location, triggerVolume->Location);
					//std::cout << InstanceStorage::PlayerController()->Car->Teleport(triggerVolume->Location, triggerVolume->Rotation, true, true, false) << std::endl;
					//std::cout << (InstanceStorage::PlayerController()->Car->SetLocation(triggerVolume->Location)) << std::endl;
					freeCar->Touch(dynTriggerVolume, dynTriggerVolume->CollisionComponent, dynTriggerVolume->Location, dynTriggerVolume->Location);
					dynTriggerVolume->ProcessActorSetVolume(freeCar);
					}
					else {
					std::cout << "NO FOUND GFNDOFJG trigger volume!" << std::endl;
					}

					ATriggerVolume* triggerVolume = SDK::UObject::FindObject<SDK::ATriggerVolume>("TriggerVolume dribblingchallenge2.TheWorld.PersistentLevel.TriggerVolume_22");
					if (triggerVolume) {
					std::cout << "found volume!" << std::endl;
					//triggerVolume->ProcessActorSetVolume(InstanceStorage::PlayerController()->Car);
					//triggerVolume->Touch(InstanceStorage::PlayerController()->Car, InstanceStorage::PlayerController()->Car->CollisionComponent, triggerVolume->Location, triggerVolume->Location);
					//std::cout << InstanceStorage::PlayerController()->Car->Teleport(triggerVolume->Location, triggerVolume->Rotation, true, true, false) << std::endl;
					//std::cout << (InstanceStorage::PlayerController()->Car->SetLocation(triggerVolume->Location)) << std::endl;
					freeCar->Touch(triggerVolume, triggerVolume->CollisionComponent, triggerVolume->Location, triggerVolume->Location);
					}
					else {
					std::cout << "NO FOUND GFNDOFJG volume!" << std::endl;
					}
					*/
				}
				else {
					std::cout << "NO car found!" << std::endl;

				}

				//testCar = SDK::UObject::FindObject<SDK::ACar_Freeplay_TA>("Car_Freeplay_TA dribblingchallenge2.TheWorld.PersistentLevel.Car_Freeplay_TA_2");


			}
			else {
				std::cout << "NO varInt found!" << std::endl;
			}
		

			//gameEvent->RedoRound();
			//gameEvent->ResetBalls();
			currGameEvent->ResetPlayers();

			//gameEvent->RestartPlayer(InstanceStorage::PlayerController());
			//gameEvent->ResetGameEvent();
			//gameEvent->SetRestartingMatch(true);

		} else if (timerVar && timerVar->bValue == 1){
			std::cout << "NICE TRY DINGUS!" << std::endl;
		}
		else {
			std::cout << "NO training GAMEEVENT found!" << std::endl;
		}

		/*
		ABall_TA* testBall = SDK::UObject::FindObject<SDK::ABall_TA>("Ball_TA dribblingchallenge2.TheWorld.PersistentLevel.Ball_TA_7");
		if (testBall) {
			FVector launchLoc = testBall->Location;
			launchLoc.Z += 2000;
			testBall->Launch(testBall->Location, launchLoc);
			testBall->SetLocation(testCar->Location);
		}
		else {
			std::cout << "NO ball!" << std::endl;

		}
		*/
		testTravel = false;
	}
}

void WorkShopMods::onMainMenuTick(Event* e) {


	if (testPlayOnLan) {
		if (selectedWorkShopName != -1) {
			std::string map = (std::string)workShopData[selectedWorkShopName].filePath + (std::string)workShopData[selectedWorkShopName].fileName;
			std::cout << map << std::endl;
		}
		testPlayOnLan = false;
	}

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
		std::cout << items.GetByIndex(i).Title.ToString() << " | " << items.GetByIndex(i).FullPath.ToString() << items.GetByIndex(i).Filename.ToString() <<std::endl;
		std::string mapName = items.GetByIndex(i).Title.ToString();
		WorkShopData newData;
		newData.fileName = Utils::stringToCharArray(items.GetByIndex(i).Filename.ToString());
		newData.filePath = Utils::stringToCharArray(items.GetByIndex(i).FullPath.ToString());

		workShopMapNames[i] = Utils::stringToCharArray(mapName);
		workShopData[i] = newData;


	}
}