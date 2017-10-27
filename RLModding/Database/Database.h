#pragma once
#define ASIO_STANDALONE
#include <asio.hpp>
#include <string>
#include <PicoSHA256/picosha2.h>
#include <time.h>
#include <iostream>
#include "../RL/SDK.hpp"
#include "../Utils/Utils.h"

class Database
{
public:
	Database();
	~Database();
	void SendMetrics();
	

private:
	const std::string IP = "192.185.67.238";
	const std::string host = "hack.fyi";
	const std::string urlPath = "/rl/servers/test.php";
	const std::string butter = "butterlol";

};

