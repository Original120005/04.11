#include <windows.h>
#include <tchar.h>
#include "resource.h"

BOOL CALLBACK DlgProc(HWND, UINT, WPARAM, LPARAM);

HWND hButton2, hButton3, hButton4, hButton5, hButton6, hButton7, hButton8, hButton9, hButton10, hButton11, hButton12;
HBITMAP hBitmapX, hBitmapO, hBitmap;

int CheckButtonO2 = 0, CheckButtonO3 = 0, CheckButtonO4 = 0, CheckButtonO5 = 0,
CheckButtonO6 = 0, CheckButtonO7 = 0, CheckButtonO8 = 0, CheckButtonO9 = 0, CheckButtonO10 = 0;

int CheckButtonX2 = 0, CheckButtonX3 = 0, CheckButtonX4 = 0, CheckButtonX5 = 0,
CheckButtonX6 = 0, CheckButtonX7 = 0, CheckButtonX8 = 0, CheckButtonX9 = 0, CheckButtonX10 = 0;


int WINAPI _tWinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPTSTR lpszCmdLine, int nCmdShow)
{
	return  DialogBox(hInstance, MAKEINTRESOURCE(IDD_DIALOG1), NULL, (DLGPROC)DlgProc);
}

void Function() {
	hBitmap = hBitmapX;
	if (EnableWindow(hButton11, FALSE)) {
		EnableWindow(hButton11, TRUE);
		EnableWindow(hButton12, FALSE);
		hBitmap == hBitmapX;
	}
	else if (EnableWindow(hButton12, FALSE)) {
		EnableWindow(hButton12, TRUE);
		EnableWindow(hButton11, FALSE);
		hBitmap = hBitmapO;
	}
}


void CheckWin(HWND hWnd) {
	// нолик
	if (CheckButtonX2 == 1 && CheckButtonX3 == 1 && CheckButtonX4 == 1) {
		MessageBox(hButton2, TEXT("WIN Player O"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonX5 == 1 && CheckButtonX6 == 1 && CheckButtonX7 == 1) {
		MessageBox(hButton2, TEXT("WIN Player O"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonX8 == 1 && CheckButtonX9 == 1 && CheckButtonX10 == 1) {
		MessageBox(hButton2, TEXT("WIN Player O"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonX2 == 1 && CheckButtonX5 == 1 && CheckButtonX8 == 1) {
		MessageBox(hButton2, TEXT("WIN Player O"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonX3 == 1 && CheckButtonX6 == 1 && CheckButtonX9 == 1) {
		MessageBox(hButton2, TEXT("WIN Player O"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonX4 == 1 && CheckButtonX7 == 1 && CheckButtonX10 == 1) {
		MessageBox(hButton2, TEXT("WIN Player O"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonX2 == 1 && CheckButtonX6 == 1 && CheckButtonX10 == 1) {
		MessageBox(hButton2, TEXT("WIN Player O"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonX4 == 1 && CheckButtonX6 == 1 && CheckButtonX8 == 1) {
		MessageBox(hButton2, TEXT("WIN Player O"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}

	// крестик
	if (CheckButtonO2 == 1 && CheckButtonO3 == 1 && CheckButtonO4 == 1) {
		MessageBox(hButton2, TEXT("WIN Player X"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonO5 == 1 && CheckButtonO6 == 1 && CheckButtonO7 == 1) {
		MessageBox(hButton2, TEXT("WIN Player X"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonO8 == 1 && CheckButtonO9 == 1 && CheckButtonO10 == 1) {
		MessageBox(hButton2, TEXT("WIN Player X"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonO2 == 1 && CheckButtonO5 == 1 && CheckButtonO8 == 1) {
		MessageBox(hButton2, TEXT("WIN Player X"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonO3 == 1 && CheckButtonO6 == 1 && CheckButtonO9 == 1) {
		MessageBox(hButton2, TEXT("WIN Player X"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonO4 == 1 && CheckButtonO7 == 1 && CheckButtonO10 == 1) {
		MessageBox(hButton2, TEXT("WIN Player X"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonO2 == 1 && CheckButtonO6 == 1 && CheckButtonO10 == 1) {
		MessageBox(hButton2, TEXT("WIN Player X"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
	if (CheckButtonO4 == 1 && CheckButtonO6 == 1 && CheckButtonO8 == 1) {
		MessageBox(hButton2, TEXT("WIN Player X"), TEXT("WINNNER"), MB_OK);
		EndDialog(hWnd, 0);
	}
}

BOOL CALLBACK DlgProc(HWND hWnd, UINT message, WPARAM wp, LPARAM lp)
{
	switch (message)
	{
	case WM_INITDIALOG: {
		hButton2 = GetDlgItem(hWnd, IDC_BUTTON2);
		hButton3 = GetDlgItem(hWnd, IDC_BUTTON3);
		hButton4 = GetDlgItem(hWnd, IDC_BUTTON4);
		hButton5 = GetDlgItem(hWnd, IDC_BUTTON5);
		hButton6 = GetDlgItem(hWnd, IDC_BUTTON6);
		hButton7 = GetDlgItem(hWnd, IDC_BUTTON7);
		hButton8 = GetDlgItem(hWnd, IDC_BUTTON8);
		hButton9 = GetDlgItem(hWnd, IDC_BUTTON9);
		hButton10 = GetDlgItem(hWnd, IDC_BUTTON10);
		hButton11 = GetDlgItem(hWnd, IDC_BUTTON11);
		hButton12 = GetDlgItem(hWnd, IDC_BUTTON12);
		hBitmapX = LoadBitmap(GetModuleHandle(NULL), MAKEINTRESOURCE(IDB_BITMAP3));
		hBitmapO = LoadBitmap(GetModuleHandle(NULL), MAKEINTRESOURCE(IDB_BITMAP2));
		return TRUE;
	}
					  break;

	case WM_COMMAND: {
		if (LOWORD(wp) == IDC_BUTTON11) {
			EnableWindow(hButton12, FALSE);
			EnableWindow(hButton11, TRUE);
			SetFocus(hButton11);
			hBitmap = hBitmapX;
		}
		else if (LOWORD(wp) == IDC_BUTTON12) {
			EnableWindow(hButton11, FALSE);
			EnableWindow(hButton12, TRUE);
			SetFocus(hButton12);
			hBitmap = hBitmapO;
		}
		if (LOWORD(wp) == IDC_BUTTON2) {
			SetWindowLong(hButton2, GWL_STYLE, GetWindowLong(hButton2, GWL_STYLE) | BS_BITMAP);
			SendMessage(hButton2, BM_SETIMAGE, IMAGE_BITMAP, LPARAM(hBitmap));
			Function();
			if (hBitmap == hBitmapX) {
				CheckButtonX2 = 1;
			}
			else if (hBitmap == hBitmapO) {
				CheckButtonO2 = 1;
			}
		}
		if (LOWORD(wp) == IDC_BUTTON3) {
			SetWindowLong(hButton3, GWL_STYLE, GetWindowLong(hButton3, GWL_STYLE) | BS_BITMAP);
			SendMessage(hButton3, BM_SETIMAGE, IMAGE_BITMAP, LPARAM(hBitmap));
			Function();
			if (hBitmap == hBitmapX) {
				CheckButtonX3 = 1;
			}
			else if (hBitmap == hBitmapO) {
				CheckButtonO3 = 1;
			}
		}
		if (LOWORD(wp) == IDC_BUTTON4) {
			SetWindowLong(hButton4, GWL_STYLE, GetWindowLong(hButton4, GWL_STYLE) | BS_BITMAP);
			SendMessage(hButton4, BM_SETIMAGE, IMAGE_BITMAP, LPARAM(hBitmap));
			Function();
			if (hBitmap == hBitmapX) {
				CheckButtonX4 = 1;
			}
			else if (hBitmap == hBitmapO) {
				CheckButtonO4 = 1;
			}
		}
		if (LOWORD(wp) == IDC_BUTTON5) {
			SetWindowLong(hButton5, GWL_STYLE, GetWindowLong(hButton5, GWL_STYLE) | BS_BITMAP);
			SendMessage(hButton5, BM_SETIMAGE, IMAGE_BITMAP, LPARAM(hBitmap));
			Function();
			if (hBitmap == hBitmapX) {
				CheckButtonX5 = 1;
			}
			else if (hBitmap == hBitmapO) {
				CheckButtonO5 = 1;
			}
		}
		if (LOWORD(wp) == IDC_BUTTON6) {
			SetWindowLong(hButton6, GWL_STYLE, GetWindowLong(hButton6, GWL_STYLE) | BS_BITMAP);
			SendMessage(hButton6, BM_SETIMAGE, IMAGE_BITMAP, LPARAM(hBitmap));
			Function();
			if (hBitmap == hBitmapX) {
				CheckButtonX6 = 1;
			}
			else if (hBitmap == hBitmapO) {
				CheckButtonO6 = 1;
			}
		}
		if (LOWORD(wp) == IDC_BUTTON7) {
			SetWindowLong(hButton7, GWL_STYLE, GetWindowLong(hButton7, GWL_STYLE) | BS_BITMAP);
			SendMessage(hButton7, BM_SETIMAGE, IMAGE_BITMAP, LPARAM(hBitmap));
			Function();
			if (hBitmap == hBitmapX) {
				CheckButtonX7 = 1;
			}
			else if (hBitmap == hBitmapO) {
				CheckButtonO7 = 1;
			}
		}
		if (LOWORD(wp) == IDC_BUTTON8) {
			SetWindowLong(hButton8, GWL_STYLE, GetWindowLong(hButton8, GWL_STYLE) | BS_BITMAP);
			SendMessage(hButton8, BM_SETIMAGE, IMAGE_BITMAP, LPARAM(hBitmap));
			Function();
			if (hBitmap == hBitmapX) {
				CheckButtonX8 = 1;
			}
			else if (hBitmap == hBitmapO) {
				CheckButtonO8 = 1;
			}
		}
		if (LOWORD(wp) == IDC_BUTTON9) {
			SetWindowLong(hButton9, GWL_STYLE, GetWindowLong(hButton9, GWL_STYLE) | BS_BITMAP);
			SendMessage(hButton9, BM_SETIMAGE, IMAGE_BITMAP, LPARAM(hBitmap));
			Function();
			if (hBitmap == hBitmapX) {
				CheckButtonX9 = 1;
			}
			else if (hBitmap == hBitmapO) {
				CheckButtonO9 = 1;
			}
		}
		if (LOWORD(wp) == IDC_BUTTON10) {
			SetWindowLong(hButton10, GWL_STYLE, GetWindowLong(hButton10, GWL_STYLE) | BS_BITMAP);
			SendMessage(hButton10, BM_SETIMAGE, IMAGE_BITMAP, LPARAM(hBitmap));
			Function();
			if (hBitmap == hBitmapX) {
				CheckButtonX10 = 1;
			}
			else if (hBitmap == hBitmapO) {
				CheckButtonO10 = 1;
			}
		}
		CheckWin(hWnd);
	}
				   break;

	case WM_CLOSE:
		EndDialog(hWnd, 0); 
		return TRUE;
	}
	return FALSE;
}