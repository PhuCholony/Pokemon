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

protected:
	/* Pointer to class window instance */
	Window* windowPtr;

private:
	/* Initial game engine instances  */
	void init()
	{
		// Register your class or library here.
		Window window{};

		// Initial your instance here.
		window.init();

		// Pointer your instance here
		windowPtr = &window;
	}

	/* Processing game engine instances */
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