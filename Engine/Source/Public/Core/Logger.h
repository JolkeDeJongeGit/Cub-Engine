#pragma once
#pragma warning ( push )
#pragma warning ( disable : 4996)
#include "spdlog/spdlog.h"
#pragma warning ( pop )

namespace Cub
{
	class Log
	{
	public:

		static void Initialize();
		
		template<typename FormatString, typename... Args>
		static void Message(const FormatString& fmt, const Args&... args)
		{
			spdlog::trace(fmt, args...);
		}

		template<typename FormatString, typename... Args>
		static void Info(const FormatString& fmt, const Args&... args)
		{
			spdlog::info(fmt, args...);
		}

		template<typename FormatString, typename... Args>
		static void Warning(const FormatString& fmt, const Args&... args)
		{
			spdlog::warn(fmt, args...);
		}

		template<typename FormatString, typename... Args>
		static void Error(const FormatString& fmt, const Args&... args)
		{
			spdlog::error(fmt, args...);
		}
	};
}