# me-graphics
Repository for Computer Graphics course.

# External libraries used

| Library            | Description                                                                                   |
|--------------------|-----------------------------------------------------------------------------------------------|
| [Khoronos headers](https://registry.khronos.org/EGL/api/KHR/khrplatform.h) | Headers defining platform-specific types for Khronos APIs.                                    |
| [glad](https://glad.dav1d.de/)                                              | An OpenGL loader generator that manages function pointers for OpenGL.                         |
| [glfw](https://www.glfw.org/)                                               | A library for creating windows, contexts, and managing input for OpenGL.                     |
| [glm](https://github.com/g-truc/glm)                                        | A header-only C++ mathematics library for graphics software based on the GLSL specification. |
| [stb_image](https://github.com/nothings/stb/tree/master)                    | A single-header library for loading images in various formats.                               |
| [assimp](https://github.com/assimp/assimp)                                  | A library to import and export various 3D model formats.                                      |

# Features

| Feature                  | Status |
|--------------------------|--------|
| Shader Loading           | ✅     |
| Mesh Loading             | ✅     |
| Model Loading            | ✅     |
| Simple Camera Movement   | ✅     |
| Basic Materials          | ❌     |
| Shadows                  | ❌     |
| Basic Post Processing    | ❌     |
| Face Culling             | ❌     |
| Cube Maps                | ❌     |
| Instancing               | ❌     |
| Advanced Post Processing | ❌     |
| Advanced Lighting        | ❌     |
| PBR                      | ❌     |

# Compilation Instructions

## Linux
1. Ensure you have `cmake`, `make`, and a C++ compiler (e.g., `g++`) installed.
2. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/me-graphics.git
   cd me-graphics
   ```
3. Create a build directory and navigate to it:
   ```bash
   mkdir build && cd build
   ```
4. Run `cmake` to configure the project:
   ```bash
   cmake ..
   ```
5. Build the project:
   ```bash
   make
   ```
6. Run the executable:
   ```bash
   ./me-graphics
   ```

## Windows
1. Ensure you have `cmake` and a C++ compiler (e.g., Visual Studio or MinGW) installed.
2. Clone the repository:
   ```powershell
   git clone https://github.com/yourusername/me-graphics.git
   cd me-graphics
   ```
3. Create a build directory and navigate to it:
   ```powershell
   mkdir build
   cd build
   ```
4. Run `cmake` to configure the project:
   - For Visual Studio:
     ```powershell
     cmake .. -G "Visual Studio 16 2019"
     ```
   - For MinGW:
     ```powershell
     cmake .. -G "MinGW Makefiles"
     ```
5. Build the project:
   - For Visual Studio, open the generated `.sln` file and build the project.
   - For MinGW:
     ```powershell
     mingw32-make
     ```
6. Run the executable:
   ```powershell
   .\me-graphics.exe
   ```

# License

This project is licensed under the GNU General Public License (GPL). You are free to use, modify, and distribute this software, but any derivative work must also be open-sourced under the same license. For more details, see the [LICENSE](./LICENSE) file.

