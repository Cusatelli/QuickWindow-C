# QuickWindow-C
Create a window in C quick and easy.

To run the application:
1. Open Command Prompt.
2. <b>Type</b> `cl window.c /FeQuickWindowC.exe /Zi /D "UNICODE" /D "_UNICODE" /nologo user32.lib gdi32.lib` <b>hit Enter</b>.
3. <b>Type</b> `QuickWindowC` <b>hit Enter</b>.
4. You now have a window.

If you want to change the name of the .exe file just rename the text after `/Fe---.exe` to anything you like.
For example `/FeMyGame.exe` or `/FeApplication.exe`.

If you wish to modify the size, title or position of the window please refer to the `settings.h` file and change the appropriate setting.
*NOTE that size and position is measured in pixels!*
