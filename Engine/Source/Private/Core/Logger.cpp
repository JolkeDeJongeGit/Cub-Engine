#include "Engine.h"

#pragma warning (push)
#pragma warning( disable : 4996 )
#include <spdlog/sinks/stdout_color_sinks.h>
#include "spdlog/sinks/rotating_file_sink.h"
#include "spdlog/sinks/basic_file_sink.h"

#include <spdlog/fmt/ostr.h>
#pragma warning (pop)

#include "Core/Logger.h"
//#include <chrono>


namespace Cub
{
	void Log::Initialize()
	{
		std::vector<spdlog::sink_ptr> sinks;
		
		sinks.push_back(std::make_shared<spdlog::sinks::stdout_color_sink_mt>());
		//sinks.push_back(std::make_shared<spdlog::sinks::rotating_file_sink_mt>("Logs/CubLog.txt", 1048576 * 5, 3)); //This will replace the basic file sink but date and time need to be added.
		sinks.push_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>("Logs/CubLog.txt", true));
		

		auto combinedLogger = std::make_shared<spdlog::logger>("Console", begin(sinks), end(sinks));
		combinedLogger->set_level(spdlog::level::trace);
		combinedLogger->set_pattern("[%T][%^%l%$][%n]: %v");

		spdlog::set_default_logger(combinedLogger);

	}
}