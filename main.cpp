#include "lib.h"

#include <iostream>

int main (int, char **) {
    std::cout << "Version: " << std::to_string(version()) << std::endl;
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
