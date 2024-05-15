#include "rendering_app.hpp"

#include <iostream>
#include <cstdlib>
#include <stdexcept>

int main() {
    simple_window::RenderingApp app{};
    try {
        app.run();
    }
    catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}