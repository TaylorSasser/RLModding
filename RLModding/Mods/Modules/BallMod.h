#pragma once
#include "../ModBase.h"

/*
		BallMod.h / .cpp is for mods relating to the ball
*/

class BallMod : public ModBase {
	public:
		BallMod();
		~BallMod();
		void BallTick(SDK::UObject**, SDK::UFunction*, void*);
	private:
		bool bFreeplay = false;
		bool enabled = false;

		void readSettingsFile();

		float ballScale, gravityScale, bounceScale;
};