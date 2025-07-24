#pragma once

#define GLFW_INCLUDE_VULKAN

#include <string>
#include <GLFW/glfw3.h>

namespace NivisEngine::Runtime
{
    class Window
    {
    public:
        Window(const int width, const int height, std::string name);

        ~Window();

        Window(const Window &) = delete;

        Window &operator=(const Window &) = delete;

        [[nodiscard]] bool ShouldClose() const;

    private:
        void InitWindow();

        const int width;
        const int height;
        std::string name;

        GLFWwindow *window;
    };
}
