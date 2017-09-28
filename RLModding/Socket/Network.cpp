#include "Network.h"

namespace Network {

class NetworkInitializer {
private:
public:
	NetworkInitializer();
	~NetworkInitializer();

	NetworkInitializer(const NetworkInitializer& rhs) = delete;
	NetworkInitializer& operator=(const NetworkInitializer& rhs) = delete;
};


NetworkInitializer::NetworkInitializer() {
	WSADATA wsaData;
	WSAStartup(MAKEWORD(2, 2), &wsaData);
}
NetworkInitializer::~NetworkInitializer() {
	WSACleanup();
}

NetworkInitializer initializer;

IPAddresses DNS::Resolve(const std::string& host) {
	IPAddresses list;
	addrinfo hints = { 0 }, *addresses;

	hints.ai_family = AF_INET;
	hints.ai_socktype = SOCK_STREAM;
	hints.ai_protocol = IPPROTO_TCP;

	getaddrinfo(host.c_str(), NULL, &hints, &addresses);

	for (addrinfo *p = addresses; p != NULL; p = p->ai_next) {
		char* straddr = inet_ntoa(((sockaddr_in*)p->ai_addr)->sin_addr);
		list.push_back(IPAddress(straddr));
	}
	return list;
}

}