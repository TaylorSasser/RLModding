#include "GameState.h"

GameState::GameState() {
	statemap[State::NONE] = bNone;
	statemap[State::MENU] = bMenu;
	statemap[State::GARAGE] = bGarage;
	statemap[State::EXHIBITION] = bExhibition;
	statemap[State::TRAINING] = bTraining;
	statemap[State::LAN] = bLan;
	statemap[State::CUSTOM_LAN] = bCustomLan;
	statemap[State::ONLINE_PUBLIC] = bOnlinePublic;
	statemap[State::ONLINE_PRIVATE] = bOnlinePrivate;
	statemap[State::ANY] = bAny;
}

void GameState::ClearAll() {
	statemap.clear();
}

void GameState::SetState(State s) {
	ClearAll();
	auto it = statemap.find(s);
	if (it != statemap.end()) {
		it->second = true;
	}
}

State GameState::getCurrentState() {
	for (auto& s : statemap) {
		if (s.second == true) {
			return s.first;
		}
	}
	return State::NONE;
}
