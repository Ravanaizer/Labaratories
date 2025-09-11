#include "lib.h"

#include <iostream>

int main (int, char **) {
	auto VERSION = version();
    std::cout << "Version: " << VERSION[1] << VERSION[2] << VERSION[3] << std::endl;
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
