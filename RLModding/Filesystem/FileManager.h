#pragma once
#include <string>

class FileManager
{
private:
	static FileManager* instance;
	FileManager();
	FileManager(const FileManager&) = delete;
	~FileManager();
public:
	static FileManager* Instance() {
		if (!instance) instance = new FileManager();
		return instance;
	}

	void Initialize(std::string filename);
};

