#include <Windows.h>
#include "FileManager.h"
#include "Boost/property_tree/ptree.hpp"
#include "Boost/property_tree/json_parser.hpp"
#include "boost/lexical_cast/bad_lexical_cast.hpp"
#include "boost/lexical_cast.hpp"
#include "../Utils/Wrapper.h"


FileManager::FileManager(){}
FileManager::~FileManager(){}
FileManager* FileManager::instance = nullptr;

void FileManager::Initialize(std::string config) {

}