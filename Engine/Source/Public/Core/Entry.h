extern Cub::Application* Cub::CreateApp();

int main()
{
	Cub::Application* app = Cub::CreateApp();

	app->Run();
    
    delete app;
	return -1;
}