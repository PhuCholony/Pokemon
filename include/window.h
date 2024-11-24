#include <GLFW/glfw3.h>

/* Desktop Window by GLFW Version 3.4 */
class Window
{
public:
	/* Initial desktop window */
	void init()
	{
		glfwInit();
		initConfiguation();
		initWindow();
	}

	/* Desktop window should be opening */
	bool isRunning()
	{
		return !glfwWindowShouldClose(window);
	}

	/* Processes desktop window all pending events */
	void pollEvent()
	{
		glfwPollEvents();
	}

	/* Terminate and free memory desktop window instance */
	void free()
	{
		glfwTerminate();
	}

private:
	GLFWwindow* window;

	/* Configuration desktop window */
	void initConfiguation()
	{
		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
		glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
	}

	/* Create desktop window instance */
	void initWindow()
	{
		window = glfwCreateWindow(800, 600, "Pokemon Ragnarok", nullptr, nullptr);
	}
};