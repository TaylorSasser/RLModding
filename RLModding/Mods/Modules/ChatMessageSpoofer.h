#pragma once
#include "../ModBase.h"
#include "../../RL/SDK.hpp"

class ChatMessageSpoofer : public ModBase {
public:
	ChatMessageSpoofer(std::string name,int key);
	~ChatMessageSpoofer();
private:
	void onChatSend(Event*) override;

	
};

