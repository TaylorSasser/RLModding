#include "BallMod.h"
#include "../../Utils/Utils.h"
#include "boost/property_tree/ptree.hpp"
#include "boost/property_tree/json_parser.hpp"
#include "boost/lexical_cast/bad_lexical_cast.hpp"
#include "boost/lexical_cast.hpp"
#include <fstream>
#include <iostream>

BallMod::BallMod() {}

BallMod::~BallMod() {}

void BallMod::BallTick(SDK::UObject** object, SDK::UFunction* func, void* params) {
	//Need to check for freeplay
	//AGameEvent_Tutorial_TA->GetGameBall()
	if (GetAsyncKeyState(VK_F2)) {
		readSettingsFile();
		((SDK::ABall_TA*)object)->SetBallScale(ballScale);
		((SDK::ABall_TA*)object)->SetBallGravityScale(gravityScale);
		((SDK::ABall_TA*)object)->SetCarBounceScale(bounceScale);
		//Sleep(150);
	}
}

void BallMod::readSettingsFile() {
	std::ifstream settings("settings.json");
	boost::property_tree::ptree pt;
	boost::property_tree::read_json(settings, pt);
	settings.close();

	std::cout << "\n--- Reading Ball Settings ---\n";

	std::string temp;
	//Ball Scale
	temp = pt.get<std::string>("Ball_Scale", "0");
	try {
		ballScale = boost::lexical_cast<float>(temp);
		std::cout << "Read ball scale: " << ballScale << std::endl;
	}
	catch (boost::bad_lexical_cast &) {
		std::cout << "Not a valid float: " << temp << ", defualting to 0\n";
		ballScale = 0;
	}

	//Ball Gravity Scale
	temp = pt.get<std::string>("Ball_Gravity_Scale", "0");
	try {
		gravityScale = boost::lexical_cast<float>(temp);
		std::cout << "Read ball gravity scale: " << gravityScale << std::endl;
	}
	catch (boost::bad_lexical_cast &) {
		std::cout << "Not a valid float: " << temp << ", defualting to 0\n";
		gravityScale = 0;
	}

	//Ball Bounce Scale
	temp = pt.get<std::string>("Bounce_Scale", "0");
	try {
		bounceScale = boost::lexical_cast<float>(temp);
		std::cout << "Read ball gravity scale: " << bounceScale << std::endl;
	}
	catch (boost::bad_lexical_cast &) {
		std::cout << "Not a valid float: " << temp << ", defualting to 0\n";
		bounceScale = 0;
	}


}