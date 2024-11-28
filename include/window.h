#include <GLFW/glfw3.h>

#include <iostream>

/* Window Desktop Power by GLFW Version 3.4 */
class Window
{
public:
	/* Initial window instance */
	void init()
	{
		initGLFW();
		initMonitor();
		initConfiguation();
		initWindow();
	}

	/* Check window should be open */
	bool isRunning()
	{
		return !glfwWindowShouldClose(window);
	}

	/* Processes window all pending events */
	void pollEvent()
	{
		glfwPollEvents();
	}

	/* Terminate window instance and free memory */
	void free()
	{
		glfwTerminate();
	}

private:
	GLFWmonitor* monitor;
	const GLFWvidmode* mode;
	GLFWwindow* window;

	/* Initializes the GLFW library */
	void initGLFW()
	{
		if (glfwInit() == GLFW_FALSE)
		{
			std::cerr << "failed to initializes the GLFW library!" << std::endl;
		}
	}

	/* Configurations window instance */
	void initConfiguation()
	{
		// API
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

		// Window
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

		// Monitor
		glfwWindowHint(GLFW_RED_BITS, mode->redBits);
		glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
		glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
		glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);
	}

	/* Initial primary monitor */
	void initMonitor()
	{
		monitor = glfwGetPrimaryMonitor();
		mode = glfwGetVideoMode(monitor);
	}

	/* Create a window desktop */
	void initWindow()
	{
		window = glfwCreateWindow(mode->width, mode->height, "Pokemon Ragnarok", monitor, nullptr);
	}
};