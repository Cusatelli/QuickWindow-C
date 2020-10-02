/*
 * author: Cusatelli
 * date: 2020-10-02
 */
#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
	switch (msg)
	{
	case WM_CLOSE:
	{
		if (MessageBox(hwnd, L"Are you sure you wish to quit the application?", L"Quit Application?", MB_YESNO) == IDYES)
		{
			DestroyWindow(hwnd);
		}
		return 0;
	} break;

	case WM_DESTROY:
	{
		PostQuitMessage(0);
		return 0;
	} break;

	default:
	{
		return DefWindowProc(hwnd, msg, wParam, lParam);
	} break;
	}
}
