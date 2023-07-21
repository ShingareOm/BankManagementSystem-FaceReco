//
//#include <windows.h> // Allows you to use the MessageBox command along with all of its parameters and flags, click here to learn about windows.h: https://docs.microsoft.com/en-us/windows/win32/api/winbase/
//#include <iostream> // Allows you to input and output into console such as: cout and cin.
//using namespace std; // So you dont have to type std:: everytime you write a string
//int main()
//{
//	int MessageBox(
//		HWND    hWnd,
//		LPCTSTR lpText,
//		LPCTSTR lpCaption,
//		UINT    uType
//	);
//	// This example will display a Messagebox with the title, "MessageTitle", and containing the message, "Hello there".
//	// The MB_OK flag gives the MessageBox an OK button which returns an int value.
//	// The MB_ICONINFORMATION gives the message box the windows information icon on the left while playing the windows information sound.
//	// ---------------------------------------------- MessageBox Example 1: ----------------------------------------------
//	cout << "OK!";
//	cout << "NOT OK :(";
//
//}



#define WM_KEYDOWN                      0x0100
#define _WIN32_WINNT 0x0500

#include <iostream>
#include <windows.h>
#include <winuser.h>

using namespace std;

LRESULT CALLBACK HookProc(int nCode, WPARAM wParam, LPARAM lParam) {


    PKBDLLHOOKSTRUCT keypointer = (PKBDLLHOOKSTRUCT)(lParam);
    if (wParam == WM_KEYDOWN) {

        switch (keypointer->vkCode) {


        case VK_RIGHT:
            cout << "**RIGHT**";
            goto skip;
        case VK_LEFT:
            cout << "**LEFT**";
            goto skip;
        case VK_DOWN:
            cout << "**DOWN**";
            goto skip;
        case VK_UP:
            cout << "**UP**";
        skip:
        default:
            cout << "";
        }
    }
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {


    SetWindowsHookEx(WH_KEYBOARD_LL, HookProc, hInstance, 0);

    MessageBox(NULL, NULL, "KLMBOX", NULL);

    return 0;

}