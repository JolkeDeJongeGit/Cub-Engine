cmake_minimum_required(VERSION 3.5)
project(Engine VERSION 0.0.1 LANGUAGES CXX)

Set(CMAKE_CXX_STANDARD 17)

Set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

#add External Libary
#add_subdirectory(External/Assimp)
add_subdirectory(External/Glfw)

add_library(${PROJECT_NAME} Source/Private/Engine.cpp)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:Source/Public>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Source/Public>
    PRIVATE
    #assimp
    glfw
)

GROUPSOURCES(${CMAKE_CURRENT_SOURCE_DIR}/Source/Public Source/Public)
GROUPSOURCES(${CMAKE_CURRENT_SOURCE_DIR}/Source/Private Source/Private)

target_link_libraries(${PROJECT_NAME}
    PUBLIC

    PRIVATE
    #assimp
    glfw
) 

target_compile_options(${PROJECT_NAME} PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic -Werror>
)