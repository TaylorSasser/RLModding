#include "../EventFactory.h"
#include "../RL/SDK.hpp"


EventFactory::EventFactory() {
	map.insert(std::pair<std::string, Function>("Test",&ModBase::onProfileJoinGame));
}


EventFactory::~EventFactory()
{
}
