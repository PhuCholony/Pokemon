#include <GLFW/glfw3.h>

/* Window Desktop Power by GLFW Version 3.4 */
class Window
{
public:
	/* Initial window instance */
	void init()
	{
		glfwInit();
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
	GLFWwindow* window;

	/* Configurations window instance */
	void initConfiguation()
	{
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
	}

	/* Create a window desktop */
	void initWindow()
	{
		window = glfwCreateWindow(800, 600, "Pokemon Ragnarok", nullptr, nullptr);
	}
};