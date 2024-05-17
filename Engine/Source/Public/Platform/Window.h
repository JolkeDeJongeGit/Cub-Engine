#pragma once

namespace Cub 
{
	struct WindowProps
	{
		std::string Title;
		uint16_t Width;
		uint16_t Height;

		WindowProps(const std::string& title = "Cub Editor",
			uint8_t width = 1920,
			uint8_t height = 1080)
			: Title(title), Width(width), Height(height)
		{
		}
	};

	class IWindow
	{
	public:
		virtual ~IWindow() = default;

		virtual void OnUpdate() = 0;
		virtual void OnClose() = 0;
		
		virtual uint32_t GetWidth() const = 0;
		virtual uint32_t GetHeight() const = 0;

		virtual void* GetNativeWindow() const = 0;

		static std::unique_ptr<IWindow> Create(const WindowProps& props = WindowProps());
	};
}