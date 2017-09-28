#pragma once
#include "Socket.h"
#include "IPAddress.h"

#include <cstdint>

namespace Network {

class TCPSocket : public Socket {
private:
	IPAddress m_RemoteIP;
	uint16_t m_Port;
	sockaddr_in m_RemoteAddr;
public:
	TCPSocket();
	bool Connect(const IPAddress& address, uint16_t port);
	std::size_t Send(const uint8_t* data, std::size_t size);
	PacketBuffer Receive(std::size_t amount);
	std::size_t Receive(PacketBuffer& buffer, std::size_t amount);
};

}

