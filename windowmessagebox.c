#include <WinUser.h>
#include <stdio.h>
#include <windows.h>

int main()
{
    /*
    int MessageBox(
        [ in, optional ] HWND hWnd,
        [ in, optional ] LPCTSTR lpText,
        [ in, optional ] LPCTSTR lpCaption,
        [in] UINT uType);
    */

   // gcc windowmessagebox.c -o msgbox
   // ./msgbox
   MessageBoxW(
        NULL,
        L"Hello you computer has been hacked by me",
        L"Hakker007",
        MB_ABORTRETRYIGNORE | MB_ICONEXCLAMATION);
    return EXIT_SUCCESS;
}
