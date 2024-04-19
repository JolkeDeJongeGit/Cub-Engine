cmake_minimum_required(VERSION 3.5)
project(Engine VERSION 0.0.1 LANGUAGES CXX)

Set(CMAKE_CXX_STANDARD 17)

Set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

#add External Libary
add_subdirectory(External/Assimp)
add_subdirectory(External/Glfw)

Set(PROJECT_SOURCES
    Source/Private/Core/Application.cpp
)




add_library(${PROJECT_NAME} 
    ${PROJECT_SOURCES}
    Source/Private/Engine.cpp
)

if (MSVC)
    set_source_files_properties(Source/Private/Engine.cpp
        PROPERTIES
        COMPILE_FLAGS "/YcSource/Public/Engine.h"
        )

    set_source_files_properties(${PROJECT_SOURCES}
        PROPERTIES
        COMPILE_FLAGS "/YuSource/Public/Engine.h"
        )

    add_compile_options(/MP)

endif (MSVC)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        $<INSTALL_INTERFACE:Source/Public>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Source/Public>
        $<INSTALL_INTERFACE:Source/Public/Core>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/Source/Public/Core>
    PRIVATE
    assimp
    glfw
)

GROUPSOURCES(${CMAKE_CURRENT_SOURCE_DIR}/Source/Public Source/Public)
GROUPSOURCES(${CMAKE_CURRENT_SOURCE_DIR}/Source/Private Source/Private)

target_link_libraries(${PROJECT_NAME}
    PUBLIC

    PRIVATE
    assimp
    glfw
) 

target_compile_options(${PROJECT_NAME} PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic -Werror>
)

add_compile_definitions(CUB_BUILD_DLL)