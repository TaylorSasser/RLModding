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
	std::string params = "?steamid=" + std::to_string(steamID) + "&hardwareid=" + hardwareID + "&time=" + std::to_string(time(NULL)) + "&n=" + hashed_string;

	// what we need
	io_service svc;
	ip::tcp::socket sock(svc);
	ip::address addr = ip::address::from_string(IP);
	ip::tcp::endpoint endpoint(addr, 80);
	sock.connect(endpoint);

	std::string request("GET " + urlPath + params + " HTTP/1.0\r\nHost: " + host + "\r\nAccept: */*\r\nConnection: close\r\n\r\n");

	sock.send(buffer(request));

	// read response
	std::string response;


	do {
		char buf[1024];
		size_t bytes_transferred = sock.receive(buffer(buf), {}, ec);
		if (!ec) response.append(buf, buf + bytes_transferred);
	} while (!ec);

}
