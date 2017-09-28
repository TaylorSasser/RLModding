#pragma once

#ifdef _WIN32
#include <WS2tcpip.h>
#pragma comment(lib, "ws2_32.lib")
#endif

#include <cstdint>
#include "IPAddress.h"

namespace Network {

class DNS {
public:
	static IPAddresses Resolve(const std::string& host);	
};

}
