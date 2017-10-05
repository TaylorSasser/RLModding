#pragma once
#include "../Socket/TCPSocket.h"
#include <Windows.h>
#include <iostream>

class Connection
{
public:
	Connection(std::string& ipaddress,unsigned short port);
	~Connection();
};