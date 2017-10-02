#include "BlackList.h"
#include <sstream>
#include <memory>



BlackList::BlackList() {
	//std::unique_ptr<Network::Socket> socket(std::make_unique<Network::TCPSocket>());
	//socket->Connect("192.168.1.191",25543);
	//socket->Send(PacketBuffer(std::to_string(GetPlayerId())));
}

BlackList::~BlackList() {}


__int64 BlackList::GetPlayerId() {
	UOnlineSubsystemSteamworks* steam = reinterpret_cast<UOnlineSubsystemSteamworks*>(Utils::GetInstanceOf(UOnlineSubsystemSteamworks::StaticClass()));
	if (steam) {
		return steam->LoggedInPlayerId.SteamID;
	}
}
