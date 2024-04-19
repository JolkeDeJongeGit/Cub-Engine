cmake_minimum_required(VERSION 3.5)
project(Editor VERSION 0.0.1 LANGUAGES CXX)

Set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} Source/main.cpp)

GROUPSOURCES(${CMAKE_CURRENT_SOURCE_DIR}/Source/Public Source/Public)
GROUPSOURCES(${CMAKE_CURRENT_SOURCE_DIR}/Source/Private Source/Private)

target_link_libraries(${PROJECT_NAME} Engine)
target_include_directories(${PROJECT_NAME} PRIVATE Engine)

target_compile_options(${PROJECT_NAME} PRIVATE
  $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
  $<$<NOT:$<CXX_COMPILER_ID:MSVC>>:-Wall -Wextra -Wpedantic -Werror>
)