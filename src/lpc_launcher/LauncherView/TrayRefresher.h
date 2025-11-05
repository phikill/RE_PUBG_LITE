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

static void RefreshTrayArea(HWND hWnd)
{
    RECT rect;
    int i, j;
    
    if(!hWnd || !IsWindow(hWnd)) 
    {
        return;
    }
    
    /* Obtém o tamanho do cliente */
    GetClientRect(hWnd, &rect);
    
    /* Envia mensagens de movimento do mouse em uma grade */
    for(i = 0; i < rect.right; i += 5)
    {
        for(j = 0; j < rect.bottom; j += 5)
        {
            /* WM_MOUSEMOVE = 512, coordenadas: (j << 16) | i */
            SendMessage(hWnd, WM_MOUSEMOVE, 0, MAKELPARAM(i, j));
        }
    }
}

static void RefreshSystemTray(void)
{
    HWND hTrayWnd, hTrayNotify, hSysPager, hToolbar;
    
    /* Encontra a janela principal da bandeja do sistema */
    hTrayWnd = FindWindow("Shell_TrayWnd", NULL);
    if(!hTrayWnd) 
    {
        return;
    }
    
    /* Encontra a janela de notificação dentro da bandeja */
    hTrayNotify = FindWindowEx(hTrayWnd, NULL, "TrayNotifyWnd", NULL);
    if(!hTrayNotify) 
    {
        return;
    }
    
    /* Encontra o SysPager dentro do TrayNotifyWnd */
    hSysPager = FindWindowEx(hTrayNotify, NULL, "SysPager", NULL);
    if(!hSysPager) 
    {
        return;
    }
    
    /* Encontra a ToolbarWindow32 (área de notificação) */
    hToolbar = FindWindowEx(hSysPager, NULL, "ToolbarWindow32", "Notification Area");
    
    /* Em versões mais novas do Windows, o nome pode ser diferente */
    if(!hToolbar)
    {
        hToolbar = FindWindowEx(hSysPager, NULL, "ToolbarWindow32", "User Promoted Notification Area");
        
        /* Também atualiza a área de overflow (ícones ocultos) */
        HWND hOverflow = FindWindow("NotifyIconOverflowWindow", NULL);
        if (hOverflow)
        {
            HWND hOverflowToolbar = FindWindowEx(hOverflow, NULL, "ToolbarWindow32", NULL);
            if (hOverflowToolbar)
            {
                RefreshTrayArea(hOverflowToolbar);
            }
        }
    }
    
    /* Atualiza a área de notificação principal */
    if (hToolbar)
    {
        RefreshTrayArea(hToolbar);
    }
}



// more better

void RefreshSystemTrayEx(void)
{
    const char* tray_names[] = {
        "Notification Area",
        "User Promoted Notification Area", 
        "System Promoted Notification Area",
        NULL
    };
    
    const char* overflow_names[] = {
        "NotifyIconOverflowWindow",
        NULL
    };
    
    int i;
    HWND hTrayWnd, hTrayNotify, hSysPager, hToolbar;
    
    /* 1. Encontra a janela principal da bandeja */
    hTrayWnd = FindWindow("Shell_TrayWnd", NULL);
    if(!hTrayWnd) 
    {
        return;
    }
    
    /* 2. Encontra TrayNotifyWnd */
    hTrayNotify = FindWindowEx(hTrayWnd, NULL, "TrayNotifyWnd", NULL);
    if(!hTrayNotify) 
    {
        return;
    }
    
    /* 3. Encontra SysPager */
    hSysPager = FindWindowEx(hTrayNotify, NULL, "SysPager", NULL);
    if(!hSysPager) 
    {
        return;
    }
    
    /* 4. Procura pela toolbar da área de notificação */
    for(i = 0; tray_names[i] != NULL; i++)
    {
        hToolbar = FindWindowEx(hSysPager, NULL, "ToolbarWindow32", tray_names[i]);
        if (hToolbar)
        {
            RefreshTrayArea(hToolbar);
            break;
        }
    }
    
    /* 5. Atualiza área de overflow (ícones ocultos) */
    for (i = 0; overflow_names[i] != NULL; i++)
    {
        HWND hOverflow = FindWindow(overflow_names[i], NULL);
        if (hOverflow)
        {
            HWND hOverflowToolbar = FindWindowEx(hOverflow, NULL, "ToolbarWindow32", NULL);
            if (hOverflowToolbar)
            {
                RefreshTrayArea(hOverflowToolbar);
            }
        }
    }
}





























#endif /* _LAUNCHERVIEW_TRAYREFRESHER_H_ */
