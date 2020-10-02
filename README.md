# QuickWindow-C
Create a window in C quick and easy.

### To run the application:
1. Open Command Prompt.
2. <b>Type</b> `cl window.c /FeQuickWindowC.exe /Zi /D "UNICODE" /D "_UNICODE" /nologo user32.lib gdi32.lib` <b>hit Enter</b>.
3. <b>Type</b> `QuickWindowC` <b>hit Enter</b>.
4. You now have a window.

### Settings
If you want to change the name of the .exe file just rename the text after `/Fe---.exe` to anything you like.
For example `/FeMyGame.exe` or `/FeApplication.exe`.

If you wish to modify the size, title or position of the window please refer to the `src/settings.h` file and change the appropriate setting.
*NOTE that size and position is measured in pixels!*

### Usage
If you want to use the window as it is currently setup you have to have your "main" inside `src/game.c` since the `src/window/loop.c` class is taking those methods directly.
You are, however, free to modify they `src/window/loop.c` to your liking and therefore change how you use QuickWindow - C.

If you wish to rename `src/game.c`, you have to go into `src/window/loop.c` and change the line <b>5. #include "../game.c"</b> to be identical to the new name and path.
