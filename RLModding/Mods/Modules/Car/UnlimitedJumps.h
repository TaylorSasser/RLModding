#pragma once
#include "../../ModBase.h"

class UnlimitedJumps : public ModBase
{
public:
	UnlimitedJumps(std::string name, int key, Category category, GameState gamestate);
	UnlimitedJumps(std::string name, int key);
	~UnlimitedJumps();

	void onActorJump(Event* event) override;
private:
	
};

