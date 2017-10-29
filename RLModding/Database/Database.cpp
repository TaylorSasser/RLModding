#include "Database.h"



Database::Database()
{
}


Database::~Database()
{
}

void Database::SendMetrics() 
{
	using namespace asio;
	error_code ec;

	long long steamID = Utils::GetSteamID();
	std::string hardwareID = Utils::GetHardwareID();
	// SHA256 hashing
	std::string nonce = std::to_string(steamID) + hardwareID + std::to_string(time(NULL)) + butter;
	std::string hashed_string;
	picosha2::hash256_hex_string(nonce, hashed_string);
	//std::cout << nonce << std::endl;
	//std::cout << hashed_string << std::endl;
	std::string params = "steamid=" + std::to_string(steamID) + "&hardwareid=" + hardwareID + "&time=" + std::to_string(time(NULL)) + "&n=" + hashed_string;
	//std::cout << params << std::endl;

	std::string response = Utils::SendPostRequest(IP, host, urlPath, params);
	//std::cout << "Response Content Received: '" << Utils::RemoveSpaces(response.substr(response.find("\r\n\r\n"))) << "'\n";
}
