#pragma once

#include <stdint.h>
#include <string>

#include <GLFW/glfw3.h>

namespace Vloxel
{

namespace Core
{

class Window
{
private:
	uint32_t m_width;
	uint32_t m_height;

	std::string m_title;

	GLFWwindow* m_window;

public:
	Window()
	{
		m_width = 0;
		m_height = 0;
		m_title = "";
	}
	Window(uint32_t width, uint32_t height, std::string title)
	{
		m_width = width;
		m_height = height;
		m_title = title;
	}

	void run();

	~Window() = default;

};

}

}