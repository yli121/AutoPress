#include "pch.h"
#include <iostream>
#include <windows.h>

int main()
{
	while (1) {
		if (GetAsyncKeyState(VK_SPACE)) {
			while (1) {
				keybd_event(0x46, 0, 0, 0);
				keybd_event(0x46, 0, 0x0002, 0);
				Sleep(500);
				if (GetAsyncKeyState(VK_ESCAPE)) return 0;
			}
		}
	}
	return 0;
}