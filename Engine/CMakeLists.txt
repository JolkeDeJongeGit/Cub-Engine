cmake_minimum_required(VERSION 3.5)
project(Engine VERSION 0.0.1 LANGUAGES CXX)

Set(CMAKE_CXX_STANDARD 17)

add_library(${PROJECT_NAME} Source/Private/Engine.cpp)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:Source/Public>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Source/Public>
    PRIVATE
)

target_link_libraries(${PROJECT_NAME}
    PUBLIC

    PRIVATE
)