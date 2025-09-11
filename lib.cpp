#include "lib.h"

#include "version.h"

int version() {
    return std::to_string(PROJECT_VERSION_PATCH);
}
