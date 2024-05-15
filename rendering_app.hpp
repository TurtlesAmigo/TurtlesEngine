#pragma once

#include "simple_window.hpp"

namespace simple_window {
    class RenderingApp {
    public:
        static constexpr int DEFAULT_WIDTH = 800;
        static constexpr int DEFAULT_HEIGHT = 600;

        void run();
    private:
        SimpleWindow _window{ DEFAULT_WIDTH, DEFAULT_HEIGHT, "Hello, Vulkan!" };
    };
}
