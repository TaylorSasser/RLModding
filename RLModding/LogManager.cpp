#include "LogManager.h"
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/support/date_time.hpp>
#include <boost/log/sources/record_ostream.hpp>
#include <boost/date_time/posix_time/posix_time_types.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>


LogManager::LogManager() {
	logging::add_file_log(keywords::file_name = "RLModding_%N.log");
	logging::core::get()->set_filter(logging::trivial::severity >= logging::trivial::info);
	logging::add_common_attributes();
	printf("LogManager finished \n");

}
void LogManager::WriteToLog(std::string text) {
	if(text.find("Tick") == std::string::npos || text.find("Render") == std::string::npos || text.find("Canvas") == std::string::npos) {
		src::severity_logger<boost::log::trivial::severity_level> lg;
		BOOST_LOG_SEV(lg,boost::log::trivial::info) << text;
	}

}