#pragma once
#include "Window.h++"

namespace NivisEngine::Runtime
{
    class Application
    {
    public:
        static constexpr int width = 800;
        static constexpr int height = 600;

        void Run() const;

    private:
        Window window{width, height, "Nivis Engine"};
    };
}
