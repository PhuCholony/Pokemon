#include <iostream>
#include <stdexcept>
#include <cstdlib>

class Application
{
public:
	void run()
	{
		hello();
	}

private:
	void hello()
	{
		std::cout << "Pokemon Ragnarok Project" << std::endl;
	}
};