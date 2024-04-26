#include "Engine.h"
#include "Window.h"

namespace Cub
{
	std::unique_ptr<IWindow> Cub::IWindow::Create([[maybe_unused]] const WindowProps& props)
	{
		// - TODO Make it so that it create based on settings
		return std::unique_ptr<IWindow>();
	}
}
