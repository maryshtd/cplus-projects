#include <windows.h>
#include "resource.h"


LRESULT CALLBACK WindowEventHandler(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR lpszCmdLine, int nCmdShow)
{
	return DialogBox(hInst, MAKEINTRESOURCE(ID_FRACTION), NULL, (DLGPROC)WindowEventHandler);
}

LRESULT CALLBACK WindowEventHandler(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_DESTROY:
		EndDialog(hWnd, 0);
		return TRUE;
	case ID_CALC:
		if 9
		break;
	case WM_COMMAND:
		switch (LOWORD(wParam))
		{
		case ID_QUIT:
			EndDialog(hWnd, 0);
			return TRUE;
		}
	default:
		DefWindowProc(hWnd, message, wParam, lParam);
		break;
	}
	return NULL;
}