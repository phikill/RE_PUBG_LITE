#ifndef _LAUNCHERVIEW_TRAYREFRESHER_H_
#define _LAUNCHERVIEW_TRAYREFRESHER_H_


#include <windows.h>

/*  

HWND tray = FindWindow("Shell_TrayWnd", NULL);
HWND notify = FindWindowEx(tray, NULL, "TrayNotifyWnd", NULL);
HWND sysPager = FindWindowEx(notify, NULL, "SysPager", NULL);
HWND toolbar = FindWindowEx(sysPager, NULL, "ToolbarWindow32", "Notification Area");

if (!toolbar)
    toolbar = FindWindowEx(sysPager, NULL, "ToolbarWindow32", "User Promoted Notification Area");

RECT rect;
GetClientRect(toolbar, &rect);

for (int x = 0; x < rect.right; x += 5)
{
    for (int y = 0; y < rect.bottom; y += 5)
    {
        SendMessage(toolbar, WM_MOUSEMOVE, 0, MAKELPARAM(x, y));
    }
}

*/

void RefreshTrayArea(HWND hWnd)
{
    RECT rect;
    int x, y;

    if (!GetClientRect(hWnd, &rect))
    {
        return;
    }

    for(x = 0; x < rect.right; x += 5)
    {
        for (y = 0; y < rect.bottom; y += 5)
        {
            SendMessage(hWnd, WM_MOUSEMOVE, 0, (y << 16) | (x & 0xFFFF));
        }
    }
}

void RefreshTrayIcons()
{
    HWND hShellTrayWnd;
    HWND hTrayNotifyWnd;
    HWND hSysPager;
    HWND hToolbar;

    hShellTrayWnd = FindWindowA("Shell_TrayWnd", NULL);
    if (!hShellTrayWnd) return;

    hTrayNotifyWnd = FindWindowExA(hShellTrayWnd, NULL, "TrayNotifyWnd", NULL);
    if (!hTrayNotifyWnd) return;

    hSysPager = FindWindowExA(hTrayNotifyWnd, NULL, "SysPager", NULL);
    if (!hSysPager) return;

    hToolbar = FindWindowExA(hSysPager, NULL, "ToolbarWindow32", "Notification Area");

    if(!hToolbar)
    {
        // Tenta área promovida no Windows 7+ (compatível com XP também)
        hToolbar = FindWindowExA(hSysPager, NULL, "ToolbarWindow32", "User Promoted Notification Area");

        // Overflow window (às vezes usado em sistemas mais recentes)
        if(!hToolbar)
        {
            HWND hNotifyOverflow = FindWindowA("NotifyIconOverflowWindow", NULL);
            if(hNotifyOverflow)
            {
                hToolbar = FindWindowExA(hNotifyOverflow, NULL, "ToolbarWindow32", NULL);
            }
        }
    }

    if (hToolbar)
    {
        RefreshTrayArea(hToolbar);
    }
}






























#endif /* _LAUNCHERVIEW_TRAYREFRESHER_H_ */
