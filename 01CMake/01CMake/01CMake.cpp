// 01CMake.cpp : Defines the entry point for the application.
//

#include "01CMake.h"

int main()
{

#ifdef HELLO
	std::cout << "Hello " << HELLO << std::endl;
#elif
	std::cout << "Hello CMake." << std::endl;
#endif

#ifdef CONFIG
	std::cout << "Running " << CONFIG << std::endl;
#endif

	std::cin.ignore();
	return 0;
}
