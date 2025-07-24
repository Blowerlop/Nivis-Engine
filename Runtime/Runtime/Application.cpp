#include "Application.h++"

namespace NivisEngine::Runtime
{
    void Application::Run() const
    {
        while (!window.ShouldClose())
        {
            glfwPollEvents();
        }
    }
}
