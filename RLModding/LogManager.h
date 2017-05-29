#pragma once
#include <string>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/utility/setup/file.hpp>


namespace logging = boost::log;
namespace src = boost::log::sources;
namespace expr = boost::log::expressions;
namespace keywords = boost::log::keywords;

class LogManager {
public:
	LogManager();
	void WriteToLog(std::string text);
};

