#include "window.h"

Window::Window(int width, int height, const char *title)
{

	m_Width = width;
	m_Height = height;
	m_Title = title;


	if (!init())
	{
		glfwTerminate();
	}

}

Window::~Window()
{
	glfwTerminate();
}

Window::init()
{
	if (!glfwInit())
	{
		std::cerr << "Failed to initialize GLFW" << endl;
		return false;
	}

	m_Window = glfwCreateWindow(m_Width, m_Height, m_Title, NULL, NULL)
	{
		if (!m_Window)
		{
			std::cerr << "Failed to create GLFW Window!" << endl;
			return false;
		}



		return true;
	}



}
