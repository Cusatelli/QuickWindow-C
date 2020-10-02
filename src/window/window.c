/*
 * author: Cusatelli
 * date: 2020-10-02
 */
#include <windows.h>
#include "messages.c"
#include "loop.c"
#include "../settings.h"

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE pInstance, PWSTR cmd, int showCmd)
{
	// Initialize App:
	WNDCLASS wc = { 0 };
	wc.lpszClassName = window_title;
	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;

	RegisterClass(&wc);

	// Create Window:
	HWND window = CreateWindow(window_title, window_title,
		WS_OVERLAPPEDWINDOW | WS_VISIBLE,
		window_position_X, window_position_Y,
		window_width, window_height,
		0, 0, hInstance, 0);

	if (window == NULL)
	{
		return 0;
	}
	ShowWindow(window, showCmd);

	MSG msg = { 0 };
	gameLoop(msg, 1);

	return 0; // Will only reach this once application is closed.
}
