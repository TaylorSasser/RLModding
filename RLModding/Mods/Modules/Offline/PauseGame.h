#pragma once
#include "../../ModBase.h"

class PauseGame : public ModBase
{
public:
	PauseGame(std::string name,int key);
	~PauseGame();

	void onEnable() override;
	void onDisable() override;

private:
	bool isPaused;
};

