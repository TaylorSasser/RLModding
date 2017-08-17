#pragma once
#include <Windows.h>
#include <iostream>
#include "../Interfaces/InstanceStorage.h"
#include "../RL/SDK.hpp"
#include "../Utils/Utils.h"


class BlackList {
public:
	BlackList();
	~BlackList();
	bool Exists(std::string);
	void Check();
	__int64 GetPlayerId();
	bool isBlacklisted();

private:
	std::vector<std::string> blacklist;
	std::string steamId = "";
	bool bBlacklisted;
};

