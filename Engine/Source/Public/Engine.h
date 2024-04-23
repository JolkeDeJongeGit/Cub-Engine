#pragma once

// C++ Libraries
#include <string>
#include <unordered_map>

#include <memory>
#include <cassert>

#ifdef _DEBUG
#define CUB_ASSERT(check, msg, ...) { if(!(check)) { /*ERROR(msg, __VA_ARGS__);*/ __debugbreak(); } }

#else
#define CUB_ASSERT(check, msg, ...)
#endif