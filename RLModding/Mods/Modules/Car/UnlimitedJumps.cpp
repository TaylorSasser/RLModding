#include "UnlimitedJumps.h"

UnlimitedJumps::UnlimitedJumps(std::string name, int key, Category category, GameState gamestate) : ModBase(name, key, category, gamestate) {}
UnlimitedJumps::UnlimitedJumps(std::string name, int key) : ModBase(name,key) {}
UnlimitedJumps::~UnlimitedJumps(){}


void UnlimitedJumps::onActorJump(Event* event) {
	//Add in check for Freeplay or exibition OR lan if option is enabled
	if (event->getCallingObject() != nullptr) {
		((SDK::ACar_TA*)event->getCallingObject())->bDoubleJumped = 0;
		((SDK::ACar_TA*)event->getCallingObject())->bJumped = 0;
	}
}