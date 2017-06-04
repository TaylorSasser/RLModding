#pragma once
class PacketHook {
private:
	static PacketHook* instance;

	PacketHook();
	PacketHook(const PacketHook&) = delete;
	~PacketHook();
public:
	static PacketHook* Instance() {
		if (!instance) instance = new PacketHook();
		return instance;
	}

	
};