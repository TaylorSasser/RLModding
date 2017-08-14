#pragma once
#include "../../ModBase.h"

class PauseGame : public ModBase
{
public:
	PauseGame(std::string name, int key, Category category, GameState gamestate);
	PauseGame(std::string name,int key);
	~PauseGame();

	void onToggle() override;
	void onEnable() override;
	void onDisable() override;

private:
	bool isPaused;
};

