#include "Core/Logger.h"
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <memory>

namespace cub
{
	void Log::Initialize()
	{
		auto sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
		sink->set_pattern("[%T][%^%l%$][%n]: %v");
		std::shared_ptr<spdlog::logger> logger = std::make_shared<spdlog::logger>("Console", sink);
		logger->set_level(spdlog::level::trace);
		spdlog::set_default_logger(logger);
	}
}