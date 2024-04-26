#include "Engine.h"
#include "Entry.h"

class Sandbox : public Cub::Application
{
public:
    Sandbox()
    {

    }

    ~Sandbox()
    {

    }
};


Cub::Application* Cub::CreateApp()
{
    return new Sandbox();
}