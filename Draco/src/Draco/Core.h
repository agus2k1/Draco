#pragma once

#ifdef DC_PLATFORM_WINDOWS
	#ifdef DC_BUILD_DLL
		#define DRACO_API __declspec(dllexport)
	#else
		#define DRACO_API __declspec(dllimport)
	#endif
#else
	#error Draco only supports Windows
#endif
