cmake_minimum_required(VERSION 3.31)
project(me-graphics)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# GLFW
add_subdirectory(external/glfw-3.4)
# Assimp
add_subdirectory(external/assimp-5.4.3)

# Find OpenGL package
find_package(OpenGL REQUIRED)

# Include directories
include_directories(include)
include_directories(include/core)
include_directories(external/include)

# Add executable
add_executable(me-graphics src/main.cpp src/core/Camera.cpp src/core/Mesh.cpp src/core/Model.cpp src/core/Shader.cpp external/glad.c external/stb_image.cpp)

# Link GLFW, OpenGL, and Assimp
target_link_libraries(me-graphics glfw assimp OpenGL::GL)
