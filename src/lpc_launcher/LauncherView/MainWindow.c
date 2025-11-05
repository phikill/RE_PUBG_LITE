

#include"MainWindow.h"

#include"lpc_launcher/LauncherView/JsInterop/LauncherObject.h"

#include"__App.h"


void OnMainBrowserMouseDown() 
{

}

void OnMainBrowserTitleChanged() 
{

}

void OnMainBrowserLoadingStateChanged() 
{

}

void OnMainBrowserLoadError() 
{

}

void OnMainBrowserDragEnter() 
{

}

void OnMainWindowDraggerMouseMove() 
{

}

int MainWindow() 
{
	return 0;
}

// MainWindowPage GetCurrentPage() { return 0;}

void ResizeToOrigin() 
{

}

void Resize() 
{

}

void PositionToCenter() 
{

}

/*
void ResizeOriginSizePosition() 
{

}*/

void OnClosing() 
{

}

void OnDisplaySettingChanging() 
{

}

void OnDisplaySettingChanged() 
{

}

void TerminateApp() 
{

}

// UserLocalConfig LoadUserLocalConfig() { return 0;}

/*
char GetLang() 
{ 
	return 0; 
}*/


int NotifyIconMouseClick() 
{

    HWND hwnd;
    
    /* Search for launcher window */
    hwnd = FindWindowA("LPC_LAUNCHER_NT_1", NULL); // window manager specific class

    /* hide the window */
    if (ShowWindow(hwnd, SW_SHOW)) 
    {
        return 1; /* Sucess */
    }

    return 0;

}


#define ID_TRAY_APP_ICON  5000
#define WM_NOTIFYICON     (WM_USER + 1)
#define ID_TRAY_EXIT      6000
#define ID_TRAY_SHOW      6001


void ShowTrayMenu(HWND hwnd);

static WNDPROC oldProc = NULL;

LRESULT CALLBACK TraySubclassProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if(msg == WM_NOTIFYICON)
    {
        if(lParam == WM_LBUTTONUP)
        {
            Show(hwnd);
            return 0;
        }
        else if(lParam == WM_RBUTTONUP)
        {
            ShowTrayMenu(hwnd);
            return 0;
        }
    }
    else if(msg == WM_COMMAND)
    {
        switch(LOWORD(wParam))
        {
            case ID_TRAY_SHOW:
                Show(hwnd);
                return 0;

            case ID_TRAY_EXIT:
                //PostQuitMessage(0);
                OnCloseCommand();
                return 0;
        }
    }

    return CallWindowProc(oldProc, hwnd, msg, wParam, lParam);
}

// Função auxiliar para detectar idioma do sistema
const char* GetLocalizedText(const char* en,    // default english
                             const char* pt_br, // brazilian portuguese
                             const char* es,    // Spanish
                             const char* fr)    // French
{
    LANGID lang = GetUserDefaultLangID();
    WORD primary = lang & 0x3FF;

    switch(primary)
    {
        case 0x16:  // Português
            return pt_br;
        case 0x0A:  // Espanhol
            return es;
        case 0x0C:  // Francês
            return fr;
        default:
            return en; // Inglês padrão
    }
}

// Mostra o menu popup no clique direito
void ShowTrayMenu(HWND hwnd)
{
    POINT pt;
    HMENU hMenu;

    GetCursorPos(&pt);

    hMenu = CreatePopupMenu();
    if(!hMenu)
        return;

    AppendMenuA(hMenu, MF_STRING, ID_TRAY_SHOW, GetLocalizedText("Show", "Mostrar", "Mostrar", "Afficher"));
    AppendMenuA(hMenu, MF_SEPARATOR, 0, NULL);
    AppendMenuA(hMenu, MF_STRING, ID_TRAY_EXIT, GetLocalizedText("Exit", "Fechar", "Salir", "Quitter"));

    SetForegroundWindow(hwnd);
    TrackPopupMenu(hMenu, TPM_BOTTOMALIGN | TPM_LEFTALIGN, pt.x, pt.y, 0, hwnd, NULL);
    DestroyMenu(hMenu);
}

void PrepareNotifyIcon(HWND hwnd) 
{
    NOTIFYICONDATA nid = {0};
    char exePath[MAX_PATH];

    // 1. Pegando caminho do exe atual
    GetModuleFileName(NULL, exePath, MAX_PATH);


    // 3. Preenchendo estrutura NOTIFYICONDATA
    nid.cbSize = sizeof(NOTIFYICONDATA);
    nid.hWnd = hwnd;
    nid.uID = ID_TRAY_APP_ICON;
    nid.uFlags = NIF_ICON | NIF_MESSAGE | NIF_TIP;
    nid.uCallbackMessage = WM_NOTIFYICON;
    nid.hIcon = ExtractIcon(NULL, exePath, 0); // ícone do exe atual
    

    strcpy_s(nid.szTip, sizeof(nid.szTip), "OG:BG Game Launcher");

    // 4. Adicionando ícone na bandeja
    Shell_NotifyIcon(NIM_ADD, &nid);

    oldProc = (WNDPROC)SetWindowLongPtr(hwnd, GWLP_WNDPROC, (LONG_PTR)TraySubclassProc);
}



void OnNotifyIconContextMenu() 
{

}

void InitializeCommandTable() 
{


}

void ExecuteCommand() 
{

}

/*
void OnLogin() 
{

}*/

void OnLogout() 
{

}

void OnRestartLoginFlow() 
{

}

#include"libcef/capi/cef_base_capi.h"
#include"libcef/capi/cef_browser_capi.h"
#include"libcef/capi/cef_frame_capi.h"

void ShowCloseModal(cef_browser_t* browser)
{
    cef_frame_t* frame;
    cef_string_t script = {0};
    const char* jsCode;

    if(!browser)
    {
        printf("[ShowCloseModal] Browser é NULL.\n");
        return;
    }

    frame = browser->get_main_frame(browser);
    if(!frame)
    {
        printf("\n [ShowCloseModal] Frame é NULL.\n");
        return;
    }

    jsCode = "document.dispatchEvent(new Event('ShowCloseModal'));";

    /* convert UTF-8 → UTF-16 */
    cef_string_utf8_to_utf16(jsCode, (size_t)strlen(jsCode), &script);

    /* executes the JS (required UI thread) */
    frame->execute_java_script(frame, &script, NULL, 0);

    /* clear string */
    cef_string_clear(&script);

    /* DO NOT release the frame manually — CEF manages */
}

void OnCloseCommand() 
{
    if(page == Login) // If you are on the login page, log out immediately.
    {
        app_quit_loop();
    }

    // If you are on the main page, 
    //  it will restore the window and call an internal javascript on the page.
    if(page == Launcher) 
    {
        Show(); // restore window
        ShowCloseModal(g_client.browser[0]); // call js 'ShowCloseModal'  
    }

}

void Main_window_GetMenu() 
{

}

void CollapseToTrayIcon() 
{

}









