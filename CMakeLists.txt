cmake_minimum_required(VERSION 3.31)
project(me-graphics)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find GLFW
find_package(glfw3 REQUIRED)

# Find Assimp
find_package(assimp REQUIRED)

# Include directories
include_directories(include)
include_directories(include/core)

# Add executable
add_executable(me-graphics src/main.cpp src/core/Camera.cpp src/core/Mesh.cpp src/core/Model.cpp src/core/Shader.cpp src/external/glad.c src/external/stb_image.cpp)

find_library(OPENGL_LIB NAMES GL PATHS /usr/lib /usr/lib64 /usr/local/lib)
# Link GLFW and OpenGL
target_link_libraries(me-graphics glfw assimp ${OPENGL_LIB})
