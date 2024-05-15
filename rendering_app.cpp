#include "rendering_app.hpp"

namespace simple_window {
    void RenderingApp::run() {
        while (!_window.shouldClose()) {
            glfwPollEvents();
        }
    }
}