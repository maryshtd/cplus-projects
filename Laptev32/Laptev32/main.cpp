#include "stdafx.h"
#include <windows.h>
#include "resource.h"

BOOL CALLBACK DlgPoc(HWND, UINT, WPARAM, LPARAM);

int  WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevIst, LPSTR  lpszCmdLine, int nCmdShou)
{
	return DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, DlgPoc);

}

BOOL CALLBACK DlgPoc(HWND hDlg, UINT massage, WPARAM wParam, LPARAM lParam)
{
	switch (massage)
	{
	case WM_INITDIALOG:
		break;

	case WM_COMMAND:

		break;
	case WM_CLOSE:
		EndDialog(hDlg, 0);
		return TRUE;

	}
	return FALSE;
}