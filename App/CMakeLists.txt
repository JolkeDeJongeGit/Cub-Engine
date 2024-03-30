cmake_minimum_required(VERSION 3.5)
project(App VERSION 0.0.1 LANGUAGES CXX)

Set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} Source/main.cpp)

target_link_libraries(${PROJECT_NAME} Engine)
target_include_directories(${PROJECT_NAME} PRIVATE Engine)