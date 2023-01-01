#pragma once

// Windows Header Files
#include <Windows.h>
#include <iostream>

// Direct2D Header Files
#include <d2d1.h>
#pragma comment(lib, "d2d1.lib")

// Engine Header
namespace ChaosEngine {

	class IEngine {
	public:
		bool Initialize(HWND Hwnd);
	};


}

