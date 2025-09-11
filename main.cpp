#include "lib.h"

#include <iostream>

int main (int, char **) {
    std::cout << "Version: " << version()[0] << version()[1] << version()[2] << std::endl;
    std::cout << "Hello, world!" << std::endl;
    return 0;
}
