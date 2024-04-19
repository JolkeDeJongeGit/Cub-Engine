#include <iostream>
#include "Engine.h"
#include "Entry.h"

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
    return new Editor();
}