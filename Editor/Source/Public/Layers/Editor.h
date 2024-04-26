#pragma once

#include "Layer.h"

class EditorLayer : public Cub::ILayer
{
public:
	EditorLayer();
	virtual ~EditorLayer() = default;

	virtual void OnAttach() override;
	virtual void OnDetach() override;

	void OnUpdate(float deltaTime) override;
};