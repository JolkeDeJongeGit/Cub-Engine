#pragma once

namespace Cub 
{
    /// <summary>
    /// Interface for the application layers
    /// </summary>
    class ILayer
    {
    public:
        ILayer() = default;
        virtual ~ILayer() = default;

        /// <summary>
        /// This function gets called when the layer is attached to the list
        /// </summary>
        virtual void OnAttach() = 0;

        /// <summary>
        /// This function will only becalled when you enable debug
        /// </summary>
        virtual void OnDebug() { };

        /// <summary>
        /// This function will get called every frame
        /// </summary>
        virtual void OnUpdate(float deltaTime) = 0;

        /// <summary>
        /// This function gets called when the layer is detached from the list
        /// </summary>
        virtual void OnDetach() = 0;
    protected:
        const char* m_name;
    };
}