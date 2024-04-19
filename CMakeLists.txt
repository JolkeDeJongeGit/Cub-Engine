cmake_minimum_required(VERSION 3.5)
project(Cub_Engine VERSION 0.0.1 LANGUAGES CXX)


MACRO(GROUPSOURCES curdir folder_name)
    FILE(GLOB children RELATIVE ${curdir} ${curdir}/*)
    FOREACH(child ${children})
           IF(IS_DIRECTORY ${curdir}/${child})
              GROUPSOURCES(${curdir}/${child} ${folder_name}/${child})
           ELSE()
              SOURCE_GROUP(${folder_name} FILES ${curdir}/${child})
           ENDIF()
    ENDFOREACH()
ENDMACRO(GROUPSOURCES)

SET (BIN_DIR ${CMAKE_BINARY_DIR}\\Build)

# -------------------------------
# Setup project output directories
# -------------------------------
# Debug
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG 			"${BIN_DIR}")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY_DEBUG 			"${BIN_DIR}")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG 			"${BIN_DIR}")
# Release configuration with minimum size
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY_MINSIZEREL 		"${BIN_DIR}")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY_MINSIZEREL 		"${BIN_DIR}")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY_MINSIZEREL 		"${BIN_DIR}")
# Release configuration with debug information
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELWITHDEBINFO 	"${BIN_DIR}")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELWITHDEBINFO 	"${BIN_DIR}")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELWITHDEBINFO 	"${BIN_DIR}")
# Release configuration
set (CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE 		"${BIN_DIR}")
set (CMAKE_LIBRARY_OUTPUT_DIRECTORY_RELEASE 		"${BIN_DIR}")
set (CMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE 		"${BIN_DIR}")

# Enable folder structure in the IDE
SET_PROPERTY(GLOBAL PROPERTY USE_FOLDERS ON)
Set(CMAKE_CXX_STANDARD 17)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(App)
add_subdirectory(Engine)
add_subdirectory(Editor)