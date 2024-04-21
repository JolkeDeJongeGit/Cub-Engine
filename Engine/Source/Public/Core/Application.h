#pragma once

namespace Cub
{
	class CUB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		inline bool IsRunning() const { return m_isRunning; }
	private:
		std::vector<std::unique_ptr<class ILayer>> m_layers;
		bool m_isRunning = true;
	};

	Application* CreateApp();
}