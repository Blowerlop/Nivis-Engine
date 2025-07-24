#include "Window.h++"
#include <utility>


namespace NivisEngine::Runtime
{
    Window::Window(const int width, const int height, std::string name):
        width(width),
        height(height),
        name(std::move(name)),
        window(nullptr)
    {
        InitWindow();
    }

    Window::~Window()
    {
        glfwDestroyWindow(window);
        glfwTerminate();
    }

    bool Window::ShouldClose() const
    {
        return glfwWindowShouldClose(window);
    }

    void Window::InitWindow()
    {
        glfwInit();
        glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
        glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

        window = glfwCreateWindow(width, height, name.c_str(), nullptr, nullptr);
    }
}
