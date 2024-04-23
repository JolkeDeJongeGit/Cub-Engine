#pragma once

#include "Layer.h"
#include <vector>

namespace Cub
{
	class Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		inline bool IsRunning() const { return m_isRunning; }
		inline bool IsMinimized() const { return m_isMinimized; }

		inline void AddLayer(ILayer* layer);
		inline void RemoveLayer(ILayer* layer);
	protected:
		std::vector<ILayer*> m_layers;

		bool m_isRunning = true;
		bool m_isMinimized = false;
	};

	Application* CreateApp();

	inline void Application::AddLayer(ILayer* layer)
	{
		CUB_ASSERT(layer != nullptr, "Layer is nullptr");  

		layer->OnAttach();
		m_layers.push_back(layer);
	}

	inline void Application::RemoveLayer(ILayer* layer)
	{
		CUB_ASSERT(layer != nullptr, "Layer is nullptr");
		CUB_ASSERT(m_layers.empty(), "Layers are empty");

		layer->OnDetach();
		auto foundLayer = std::find(m_layers.begin(), m_layers.end(), layer);

		if (foundLayer != m_layers.end())
			m_layers.erase(foundLayer);
	}
}