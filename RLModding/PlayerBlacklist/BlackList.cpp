#include "../Socket/TCPSocket.h"
#include "BlackList.h"
#include <sstream>
#include <memory>
#include <Windows.h>


BlackList::BlackList() {
	if (GetPlayerId() == 76561197960698927) {
		int boxID = MessageBox(NULL, (LPCWSTR)L"Let it be known that Taylor is the ONLY Modder. Apologize to taylor, or you shall feel his WRATH"
			, (LPCWSTR)L"A warning to all."
			, MB_YESNO);

		switch (boxID) {
		case IDYES:
			break;
		case IDNO:
			exit(0);
			break;
		}

	}
}

BlackList::~BlackList() {}


__int64 BlackList::GetPlayerId() {
	UOnlineSubsystemSteamworks* steam = reinterpret_cast<UOnlineSubsystemSteamworks*>(Utils::GetInstanceOf(UOnlineSubsystemSteamworks::StaticClass()));
	if (steam) {
		return steam->LoggedInPlayerId.SteamID;
	}
}
