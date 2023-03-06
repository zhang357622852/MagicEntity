#pragma once

#ifdef ME_PLATFORM_WINDOWS
    #ifdef  ME_BUILD_DLL
        #define MAGIC_ENTITY_API __declspec(dllexport)
    #else
        #define MAGIC_ENTITY_API __declspec(dllimport)
    #endif
#else
    #error MagicEntity only support windows!
#endif

//#define MAGIC_ENTITY_API __declspec(dllexport)
