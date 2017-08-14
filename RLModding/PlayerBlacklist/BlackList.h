#pragma once
#include <Windows.h>
#include "../Interfaces/InstanceStorage.h"
#include "../RL/SDK.hpp"
#include "../Utils/Utils.h"


class BlackList {
public:
	BlackList();
	~BlackList();
	bool Exists(std::string);
	void Check();
	uint32_t GetPlayerId();
	bool isBlacklisted();

private:
	std::vector<std::string> blacklist;
	std::string steamId = "";
	bool bBlacklisted;
};

