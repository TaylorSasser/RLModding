#include "BlackList.h"
#include <sstream>
#include <Windows.h>



BlackList::BlackList() {}

BlackList::~BlackList() {}

bool BlackList::Exists(std::string steam_id)
{
	if (std::find(blacklist.begin(), blacklist.end(), steam_id) != blacklist.end())
		return true;
	return false;
}

//Check if thet are blacklisted
void BlackList::Check() {
	printf("Steam PlayerID: %d\n",GetPlayerId());
}

//Get the user's steam id
uint32_t BlackList::GetPlayerId() {
}

union SteamID_t {
	struct SteamIDComponent_t {
		uint32_t			m_unAccountID : 32;			// Account ID
		unsigned int		m_unAccountInstance : 20;	// dynamic instance ID
		unsigned int		m_EAccountType : 4;			// type of account - can't show as EAccountType, due to signed / unsigned difference
		unsigned char		m_EUniverse : 8;			// universe this account belongs t
	} m_comp;
} m_steamid;

//Static function to be able to check anywhere
bool BlackList::isBlacklisted() {
	return bBlacklisted;
}