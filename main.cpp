#include "Engine.h"

using namespace std;
using namespace ChaosEngine;


ChaosEngine::IEngine Engine;

int main() {

	HWND Hwnd;

	Hwnd = CreateWindowExA(); // New a window demo

	WNDCLASSEXA WndClassExA;
	WndClassExA.cbSize = 48;

	RegisterClassExA(&WndClassExA);

	//while (true)
	//{
	//	//GetMessage(,Hwnd)
	//	//TranslateMessage()
	//}

	//cout << Hwnd << endl;

	Engine.Initialize(Hwnd);

	while (true) {

	}

	return(0);
}