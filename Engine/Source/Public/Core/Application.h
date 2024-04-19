namespace Cub
{
	class CUB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		inline bool IsRunning() const { return m_isRunning; }
	private:
		bool m_isRunning = true;
	};

	Application* CreateApp();
}