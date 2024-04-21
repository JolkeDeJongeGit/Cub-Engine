#pragma once

// C++ Libraries
#include <string>
#include <vector>
#include <unordered_map>

#include <memory>


#ifdef CUB_BUILD_DLL
#define CUB_API __declspec(dllexport)
#else
#define CUB_API __declspec(dllimport)
#endif