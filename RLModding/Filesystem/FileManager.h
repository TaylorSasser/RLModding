#pragma once
#include <string>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include <boost/lexical_cast/bad_lexical_cast.hpp>
#include <boost/lexical_cast.hpp>

namespace pt = boost::property_tree;

class FileManager {
public:
	FileManager();
	~FileManager();
	void Initialize();
};

