#include <iostream>
#include <stdexcept>
#include <cstdlib>

class Application
{
public:
	void run()
	{
		init();
		mainLoop();
		cleanup();
	}

private:
	/* Initial game engine instances  */
	void init()
	{
	}

	/* Processing game engine instances */
	void mainLoop()
	{
	}

	/* Free memory and clean up game instances */
	void cleanup()
	{
	}
};