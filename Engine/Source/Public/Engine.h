#pragma once

#ifdef CUB_BUILD_DLL
#define CUB_API __declspec(dllexport)
#else
#define CUB_API __declspec(dllimport)
#endif