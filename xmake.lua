add_rules("mode.debug", "mode.release")
set_languages("c++20")
add_requires("vulkan-loader", "glfw", "glm")

target("Runtime")
    set_kind("binary")
    add_files("Runtime/src/*.cpp")
    add_packages("vulkan-loader", "glfw", "glm")