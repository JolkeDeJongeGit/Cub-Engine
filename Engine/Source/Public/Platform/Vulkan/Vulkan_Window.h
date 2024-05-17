#pragma once
#include "Window.h"
namespace Cub
{
    class Vulkan_Window : public IWindow
    {
    public:
        Vulkan_Window(WindowProps* props) : m_prop(props) {}

        void OnUpdate() override;
        void OnClose() override;

        inline uint32_t GetWidth() const override { return m_prop->Width; };
        inline uint32_t GetHeight() const override { return m_prop->Height; };

        void* GetNativeWindow() const override;
    private:
        WindowProps* m_prop;
    };
}