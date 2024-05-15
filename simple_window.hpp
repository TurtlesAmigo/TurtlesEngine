#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <iostream>

namespace simple_window {
    class SimpleWindow {
        private:
            void initWindow();

            GLFWwindow* _window;
            const int _width;
            const int _height;
            std::string _title;

        public:
            SimpleWindow(int width, int height, std::string title);
            SimpleWindow(const SimpleWindow&) = delete;
            SimpleWindow& operator=(const SimpleWindow&) = delete;
            ~SimpleWindow();
            bool shouldClose();
    };
}