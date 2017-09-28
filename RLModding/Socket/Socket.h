#pragma once
#include <string>
#include <vector>
#include <memory>

#include <WS2tcpip.h>
#include <WinSock2.h>
#include "IPAddress.h"
#include "../Common/PacketBuffer.h"

#ifndef INVALID_SOCKET
#define INVALID_SOCKET -1
#endif

namespace Network {

typedef int SocketHandle;

class Socket {
public:
	enum Status {Connected,Disconnected,Error};
	enum Type {TCP,UDP};
private:
	bool m_Blocking;
	Type m_Type;
	Status m_Status;
protected:
	SocketHandle m_Handle;
	Socket(Type type);
	void SetStatus(Status status);
public:
	~Socket();
	Socket(Socket&& socket) = default;
	Socket& operator=(Socket&& socket) = default;

	void SetBlocking(bool isBlocking);
	bool IsBlocking() const noexcept;

	Type GetType() const noexcept;
	Status GetStatus() const noexcept;
	SocketHandle GetHandle() const noexcept;

	bool Connect(const std::string& ip, uint16_t port);
	virtual bool Connect(const IPAddress& address, uint16_t port) = 0;
	void Disconnect();
	
	std::size_t Send(const std::string& data);
	std::size_t Send(PacketBuffer& buffer);

	virtual std::size_t Send(const uint8_t* data, std::size_t size) = 0;
	virtual PacketBuffer Receive(std::size_t amount) = 0;
	virtual std::size_t Receive(PacketBuffer& buffer, std::size_t amount) = 0;
};

}