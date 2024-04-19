cmake_minimum_required(VERSION 3.5)
project(Cub_Engine VERSION 0.0.1 LANGUAGES CXX)

Set(CMAKE_CXX_STANDARD 17)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(App)
add_subdirectory(Engine)
add_subdirectory(Editor)