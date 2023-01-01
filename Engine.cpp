#include "Engine.h"

using namespace std;


namespace ChaosEngine {
	ID2D1Factory* pD2DFactory = NULL;


	// IEngine //
	bool IEngine::Initialize(HWND Hwnd) {
		ID2D1HwndRenderTarget* HwndRenderTarget = NULL;

		HRESULT hr = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &pD2DFactory);
		// cout << hr << endl;

		RECT rect;
		GetClientRect(Hwnd, &rect);

		pD2DFactory->CreateHwndRenderTarget(
			D2D1::RenderTargetProperties(),
			D2D1::HwndRenderTargetProperties(
				Hwnd,
				D2D1::SizeU(rect.right - rect.left, rect.bottom - rect.top)
			),
			&HwndRenderTarget
		);

		return(true);

	}
}