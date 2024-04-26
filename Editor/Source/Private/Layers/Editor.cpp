#include "Editor.h"
#include <iostream>

EditorLayer::EditorLayer()
{
}

void EditorLayer::OnAttach()
{
	std::cout << "Attacted" << std::endl;
}

void EditorLayer::OnDetach()
{
	std::cout << "Detach" << std::endl;
}

void EditorLayer::OnUpdate(float deltaTime)
{
	std::cout << deltaTime << std::endl;
}
