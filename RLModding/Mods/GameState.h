#pragma once
#include <unordered_map>

enum State {
	NONE = 0, MENU = 1 << 0, GARAGE = 1 << 1, EXHIBITION = 1 << 2, TRAINING = 1 << 3, LAN = 1 << 4, CUSTOM_LAN = 1 << 5, ONLINE_PRIVATE = 1 << 6, ONLINE_PUBLIC = 1 << 7, ANY = (1 << 8) - 1
};

State operator|(State a, State b) { return static_cast<State>(static_cast<int>(a) | static_cast<int>(b)); }
State operator^(State a, State b) { return static_cast<State>(static_cast<int>(a) ^ static_cast<int>(b)); }
State operator&(State a, State b) { return static_cast<State>(static_cast<int>(a) & static_cast<int>(b)); }


class GameState {
private:
	GameState();
public:
	

	static GameState& Insance() {
		static GameState gamestate;
		return gamestate;
	}

	void ClearAll();
	void SetState(State s);
	State getCurrentState();
private:
	bool bNone,bMenu,bGarage,bExhibition,bTraining,bLan,bCustomLan,bOnlinePrivate,bOnlinePublic,bAny;
	std::unordered_map<State,bool> statemap;



};
