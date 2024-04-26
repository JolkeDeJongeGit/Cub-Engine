#include "Engine.h"
#include "Entry.h"
#include "Logger.h"


class Editor : public Cub::Application
{
public: 
    Editor()
    {

    }

    ~Editor()
    {

    }
};


Cub::Application* Cub::CreateApp()
{
    Cub::Log::Initialize();
    Cub::Log::Info("Welcome to CUB Engine");

    return new Editor();
}