#include "ChatMessageSpoofer.h"



ChatMessageSpoofer::ChatMessageSpoofer(std::string name,int key) : ModBase(name,key) {}
ChatMessageSpoofer::~ChatMessageSpoofer() {}

void ChatMessageSpoofer::onChatSend(Event* event) {
	APlayerController_TA_Say_TA_Params* params = event->getParams<APlayerController_TA_Say_TA_Params>();
	wprintf(L"Chat Params %ls\n",params->Message.c_str());
}
