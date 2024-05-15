#include "simple_window.hpp"

namespace simple_window {
    SimpleWindow::SimpleWindow(int width, int height, std::string title) : _width(width), _height(height), _title(title) {
        initWindow();
    }

    SimpleWindow::~SimpleWindow() {
        glfwDestroyWindow(_window);
        glfwTerminate();
    }

    void SimpleWindow::initWindow() {
        glfwInit();

        // Disable OpenGL API - by default, GLFW creates an OpenGL context.
        // But it is not needed for Vulkan.
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        // TODO: Window resizing is disabled for now. It will be handled later.
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
        _window = glfwCreateWindow(_width, _height, _title.c_str(), nullptr, nullptr);
    }

    bool SimpleWindow::shouldClose() {
        return glfwWindowShouldClose(_window);
    }
}