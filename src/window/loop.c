/*
 * author: Cusatelli
 * date: 2020-10-02
 */
#include "../game.c"

void gameLoop(MSG msg, int isRunning)
{
	while (isRunning)
	{
		while (PeekMessage(&msg, 0, 0, 0, PM_REMOVE))
		{
			if (msg.message == WM_QUIT)
			{
				isRunning = 0;
			}
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}

		// Update
		update();

		// Render
		render();
	}
}