#include <window.h>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

class Application
{
public:
	/* Start Pokemon Ragnarok Game */
	void run()
	{
		init();
		mainLoop();
		cleanup();
	}

private:
	/* Window Instance */
	Window* windowPtr;

	/* Initial game instances  */
	void init()
	{
		// Register your class or library here.
		Window window{};

		// Initial your instances here.
		window.init();

		// Pointer your instances here
		windowPtr = &window;
	}

	/* Processes game instances */
	void mainLoop()
	{
		while (windowPtr->isRunning())
		{
			windowPtr->pollEvent();
		}
	}

	/* Free memory and clean up game instances */
	void cleanup()
	{
		windowPtr->free();
	}
};