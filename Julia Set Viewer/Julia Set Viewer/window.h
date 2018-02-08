#pragma once
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <GL/glew.h>
#include <GLFW/glfw3.h>

class Window
{
private:
	int m_Width;
	int m_Height;
	const char *m_Title;
	GLFWwindow *window;
public:
	Window(int width, int height, const char *title);
	~Window();

private:
	bool init();
};
