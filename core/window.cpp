#include <core/window.hpp>

namespace Vloxel
{

namespace Core
{

void Window::run()
{
	m_window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
	if (!m_window)
	{
		glfwTerminate();
		printf("Window did not successfully create. \n");

		return;
	}

	glfwMakeContextCurrent(m_window);
}

}

}