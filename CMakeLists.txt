cmake_minimum_required(VERSION 3.28)
project(sfml)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake")
set(CMAKE_PREFIX_PATH "C:/vcpkg/installed/x64-windows")

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)
add_executable(sfml
        main.cpp)
target_link_libraries(sfml PRIVATE sfml-graphics)