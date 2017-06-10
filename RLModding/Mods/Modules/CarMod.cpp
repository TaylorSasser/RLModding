#include "CarMod.h"
#include "../../Utils/Utils.h"
#include "boost/property_tree/ptree.hpp"
#include "boost/property_tree/json_parser.hpp"
#include "boost/lexical_cast/bad_lexical_cast.hpp"
#include "boost/lexical_cast.hpp"
#include <fstream>
#include <iostream>

CarMod::CarMod() {
	std::cout << "Instantiated Car Mods.\n";
}

CarMod::~CarMod() {

}

void CarMod::FreeplayTick(SDK::UObject** object, SDK::UFunction* func, void* params) {
	if (!bFreeplay)
		bFreeplay = true;
}

void CarMod::GameEventTick(SDK::UObject** object, SDK::UFunction* func, void* params) {
	if (bFreeplay)
		bFreeplay = false;
}

void CarMod::MainMenuTick(SDK::UObject** object, SDK::UFunction* func, void* params) {
	if (bFreeplay)
		bFreeplay = false;
}

void CarMod::CarTick(SDK::UObject** object, SDK::UFunction* func, void* params) {

	if (GetAsyncKeyState(gameHotkey) || GetAsyncKeyState(VK_F2)) {
		readSettingsFile();
		if (!bFreeplay) {
			((SDK::ACar_TA*)object)->SetCarScale(carScale);
			((SDK::ACar_TA*)object)->SetMaxLinearSpeed(carMaxSpeed);
			((SDK::ACar_TA*)object)->MaxTimeForDodge = jumpTimeout;
			((SDK::ACar_TA*)object)->SetMaxAngularSpeed(carTorque);
			if (bStickyCeiling) {
				((SDK::ACar_TA*)object)->StickyForceWall = 5.0;
				((SDK::ACar_TA*)object)->StickyForceGround = 5.0;
			}
		}
		else {
			((SDK::ACar_Freeplay_TA*)object)->SetCarScale(carScale);
			((SDK::ACar_Freeplay_TA*)object)->SetMaxLinearSpeed(carMaxSpeed);
			((SDK::ACar_Freeplay_TA*)object)->MaxTimeForDodge = jumpTimeout;
			((SDK::ACar_Freeplay_TA*)object)->SetMaxAngularSpeed(carTorque);
			if (bStickyCeiling) {
				((SDK::ACar_Freeplay_TA*)object)->StickyForceWall = 5.0;
				((SDK::ACar_Freeplay_TA*)object)->StickyForceGround = 5.0;
			}
			
		}
        //TODO: Add Acceleration Option
        //std::cout << "Car Acceleration: " << ((SDK::ACar_TA*)object)->AccelRate << std::endl;
        //((SDK::ACar_TA*)object)->AccelRate = carMaxSpeed;
		//Sleep(150);
	}
}

void CarMod::OnJump(SDK::UObject** object, SDK::UFunction* func, void* params) {
	//Unlimited Jumps
	if (bUnlJumps) {
		if (!bFreeplay) {
			((SDK::ACar_TA*)object)->bJumped = false;
			((SDK::ACar_TA*)object)->bDoubleJumped = false;
		}
		else {
			((SDK::ACar_Freeplay_TA*)object)->bJumped = false;
			((SDK::ACar_Freeplay_TA*)object)->bDoubleJumped = false;
		}
		
	}
		
}

void CarMod::readSettingsFile() {
	std::ifstream settings("settings.json");
	boost::property_tree::ptree pt;
	boost::property_tree::read_json(settings, pt);
	settings.close();

	std::cout << "\n--- Reading Car Settings ---\n";

	bUnlJumps = pt.get<std::string>("Unl_Jumps", "False").compare("True") == 0 ? true : false;
	std::cout << "Read unlimited jumps: " << bUnlJumps << std::endl;

	bStickyCeiling = pt.get<std::string>("Sticky_Ceiling", "False").compare("True") == 0 ? true : false;
	std::cout << "Read sticky ceiling: " << bStickyCeiling << std::endl;

	std::string temp;
	//Car Scale
	temp = pt.get<std::string>("Car_Scale", "0");
	try {
		carScale = boost::lexical_cast<float>(temp);
		std::cout << "Read car scale: " << carScale << std::endl;
	}
	catch (boost::bad_lexical_cast &) 
	{
		std::cout << "Not a valid float: " << temp << ", defualting to 0\n";
		carScale = 0;
	}

	//Jump Timeout
	temp = pt.get<std::string>("Jump_Timeout", "0");
	try {
		jumpTimeout = boost::lexical_cast<float>(temp);
		std::cout << "Read car jump timeout: " << jumpTimeout << std::endl;
	}
	catch (boost::bad_lexical_cast &)
	{
		std::cout << "Not a valid float: " << temp << ", defualting to 1.5\n";
		jumpTimeout = 1.5;
	}

	//Car Torque
	temp = pt.get<std::string>("Spin_Rate", "0");
	try {
		carTorque = boost::lexical_cast<float>(temp);
		std::cout << "Read car torque: " << carTorque << std::endl;
	}
	catch (boost::bad_lexical_cast &)
	{
		std::cout << "Not a valid float: " << temp << ", defualting to 5.5\n";
		carTorque = 5.5;
	}

	//Car Max Speed
	temp = pt.get<std::string>("Car_Speed", "0");
	try {
		carMaxSpeed = boost::lexical_cast<float>(temp);
		std::cout << "Read car max speed: " << carMaxSpeed << std::endl;
	}
	catch (boost::bad_lexical_cast &)
	{
		std::cout << "Not a valid float: " << temp << ", defualting to 2300\n";
		carMaxSpeed = 2300.0;
	}

}