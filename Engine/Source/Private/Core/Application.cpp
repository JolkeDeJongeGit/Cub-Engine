#include "Engine.h"
#include "Application.h"

#include <chrono>

namespace Cub
{
	Application::Application()
	{

	}

	Application::~Application()
	{

	}

	void Application::Run()
	{
		auto previousTime = std::chrono::high_resolution_clock::now();
		while (m_isRunning)
		{
			// - Calculating Delta time
			auto currentTime = std::chrono::high_resolution_clock::now();
			std::chrono::duration<float> deltaTime = currentTime - previousTime;

			if (!m_isMinimized)
			{
				// - Updating all the layers
				for (auto& layer : m_layers)
				{
					layer->OnUpdate(deltaTime.count());
				}
			}

			previousTime = currentTime;
		}
	}

}