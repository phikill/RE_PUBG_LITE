
#include"LauncherObject.h"

#include<windows.h>
#include<stdbool.h>

#include"lpc_launcher/LauncherView/__App.h"
#include"lpc_launcher/LauncherMain/LOG_manager.h"
#include"lpc_launcher/LauncherView/UserLocalConfig.h"

int HeartBeatTick = 3000;

void InstallInfo_Init() 
{

}

int LauncherObject() 
{
    return 0;
}

int resize() 
{
    return 0;
}

int ResizeDragger() 
{
    return 0;
}

void ResizeOriginSizePosition() 
{}

int ResizeAndMove() {return 0;}

int GetSize() {return 0;}

int Minimize() 
{

    return Hide();
}


int Close() // force window closes and end the main loop
{
	app_quit_loop(); // __App.h & __App.c

	return 0;
}

int Show() 
{
    HWND hwnd;
    
    /* Search for launcher window */
    hwnd = FindWindowA("LPC_LAUNCHER_NT_1", NULL); // window manager specific class
    
    if(!hwnd) 
    {
        LogMessage(" [!ERROR]: window not found - restoration unavailable");
        return 1; /* Window not found */
    }
    
    if(!IsWindowVisible(hwnd))
    {
        ShowWindow(hwnd, SW_SHOWNORMAL);
    }

    /* Restore and bring window to front */
    if(IsIconic(hwnd)) 
    {
        ShowWindow(hwnd, SW_RESTORE);
    }
    
    SetForegroundWindow(hwnd);
    return 0; /* Success */
}

int Hide() // hide the system window 
{

	HWND hwnd;
    
    /* Search for launcher window */
    hwnd = FindWindowA("LPC_LAUNCHER_NT_1", NULL); // window manager specific class

    /* hide the window */
    if(ShowWindow(hwnd, SW_HIDE)) 
    {
        return 1; /* Sucess */
    }

	return 0;
}

int Reload() {return 0;}

int ClearCookie() {return 0;}

int OpenDefaultBrowser(const char *url) 
{
    HINSTANCE result = ShellExecuteA(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
    if ((INT_PTR)result > 32)
    {
        return 0; // sucesso
    }
    else
    {
        printf("\nFailure OpenDefaultBrowser(): code = %p\n", result);
        return -1;
    }
}

int Is64BitLauncher() {return 0;}

int Is64BitOS() {return 0;}

int GetLauncherVersion() {return 0;}

int GetInstallInfo() {return 0;}

int js_Alert(const char *content, const char *title) 
{

    const char *finalTitle = title ? title : "Launcher Alert!";
    HWND hwnd = GetForegroundWindow();


    MessageBoxA(hwnd, content, finalTitle, MB_OK | MB_TOPMOST | MB_SETFOREGROUND);
    SetForegroundWindow(hwnd);

    return 1;

}

#define MAX_URL 1024

#include"lpc_launcher/LauncherApiServer/SessionDto.h"

int OnLogin(const char *sessionId,
            const char *accountGuid,
            const char *email,
            int         checkSavedId,
            const char *countryCode,
            const char *createdAt) 
{
    char url[1024];

    if(!sessionId || !accountGuid)
    {
        return 1;
    }

    if(!email)
    {
        email = "test@email.net";
    }

    if(!countryCode)
    {
        countryCode = "Unknown";
    }

    if(!createdAt)
    {
        createdAt = "";
    }

    if(checkSavedId)
    {
        printf("Checking saved ID for account: %s\n", accountGuid);
    }

    setGlobal_String(&sessionID, sessionId);
    setGlobal_String(&accountGUID, accountGuid);
    setGlobal_String(&email_ID, email);
    setGlobal_String(&provider_ID, "gacct"); // gacct - for now it will stay like this

    //printf("OnLogin called:\n");
    printf("  Session ID: %s\n", sessionId);
    printf("  Account GUID: %s\n", accountGuid);
    printf("  Email: %s\n", email);
    printf("  Country: %s\n", countryCode);
    printf("  Created At: %s\n", createdAt);

    getFileURL("ui/launcher.html", url, 1024);

        GetSavedId();

    updateDragRegion(progDragRegion, 0, 0, 1152, 30);
    setWindowSize(progDisplay, MainWindowWidth, MainWindowHeight);
    ResizeBrowser(g_client.browser[0], MainWindowWidth, MainWindowHeight);
    LoadUrl(g_client.browser[0], url);

    page = Launcher;

	return 0;
}

void Logout() 
{
    char url[1024];

    setGlobal_String(&sessionID, "");
    setGlobal_String(&accountGUID, "");
    setGlobal_String(&email_ID, "");
    setGlobal_String(&provider_ID, "");

    getFileURL("ui/login.html", url, 1024);
    
    updateDragRegion(progDragRegion, 0, 0, 335, 30);
    setWindowSize(progDisplay, LoginWindowWidth, LoginWindowHeight);
    ResizeBrowser(g_client.browser[0], LoginWindowWidth, LoginWindowHeight);
    LoadUrl(g_client.browser[0], url);

    page = Login;
}

void SaveEmail() 
{

}

const char *GetLoginInfo(void) 
{
    static char json[512];

    const char* sessionId    = "ABC12345";
    const char* loginTime    = "2025-10-12T16:48:00Z";
    const char* email        = "user@example.com";
    const char* accountGuid  = "GUID-TEST-001";

    sprintf(json,
        "{ \"sessionId\": \"%s\", "
        "\"loginTimeStamp\": \"%s\", "
        "\"email\": \"%s\", "
        "\"accountGuid\": \"%s\" }",
        sessionId, loginTime, email, accountGuid
    );


    return json;
}

int ExecuteGame() 
{
    return 0;
}

char GetSessionValidatorUrl() 
{

    return 0;
}

char GetPatchSourceUrl() 
{
    return 0;
}


void RestartLoginFlow() 
{

}

void SetExitEventOnGameClient() 
{

}

void SetExitEventOnGameStarter() 
{

}

int SaveUserLocalConfig() 
{
    return 0;
}

int SetSavedId() 
{
    return 0;
}

void HeartBeat() 
{

}

const char* GetSavedId(void) 
{
    static char text[1024] = "\0";
    UserLocalConfig userLocalConfig;

    userLocalConfig = LoadUserLocalConfig();
    if(userLocalConfig.email[0] != '\0')
    {

        strncpy(text, userLocalConfig.email, MAX_EMAIL_LENGTH - 1);
        text[MAX_EMAIL_LENGTH - 1] = '\0';
        printf("\n DBG GetSavedId() from LauncherObject.c : %s \n", text);

    }
    else
    {
        text[0] = '\0';

        printf("\n DBG GetSavedId() from LauncherObject.c VALUE IS NULL \n");
    }



    return text;
}

char GetLang() 
{
    return 0;
}

void SetLang() 
{

}

void ClearCache() 
{

}

void PopFocus() 
{

}

int PrepareInstall() 
{
    return 0;
}

char GetMachineUid() 
{
    return 0;
}

bool IsClientValidationDisabled() 
{
    return 0;
}

bool IsClientInstallPathOverridden() 
{
    return 0;
}

bool IsRunning() 
{
    return 0;
}


