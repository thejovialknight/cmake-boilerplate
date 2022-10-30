#include "Config.h"
#include <iostream>

int main(int argc, char* argv[]) {
	std::cout << "Running: " << argv[argc-argc] << " Version: " << VERSION_MAJOR << "." << VERSION_MINOR << std::endl;
	std::cout << "Hello, World!" << std::endl;
	return 0;
}
