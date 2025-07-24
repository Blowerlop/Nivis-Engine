#include <iostream>

#include "Application.h++"

int main()
{
    NivisEngine::Runtime::Application application{};

    try
    {
        application.Run();
    } catch (const std::exception &e)
    {
        std::cerr << "An error occurred: " << e.what() << std::endl;
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
