#include "lib.h"
#include <iostream>
#include "version.h"

int version() {
	return std::to_string(PROJECT_VERSION);
}
