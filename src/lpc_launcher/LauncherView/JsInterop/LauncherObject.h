#ifndef _JSINTEROP_LAUNCHEROBJECT_H_
#define _JSINTEROP_LAUNCHEROBJECT_H_

#include"lpc_launcher/display_manager/display_manager.h"

#include<windows.h>
#include<stdbool.h>


//char Name = "_launcher_object_";

// private static readonly Regex Whitespaces = new Regex("\\s+", RegexOptions.Compiled);

bool _isLoggedIn;

//MainWindow _mainWindow;

// Rectangle _mainWindowDragger;

// ChromiumWebBrowser _wb;

// IBrowser _b;

//int HeartBeatTick = 3000;

typedef struct 
{
    double Width;
    double Height;
} WindowSize;


typedef struct 
{
    char* InstallPath;
    int IsInstallDirExist;
    int IsSameNamedFileWithInstallDirExist;
} InstallInfo;



void InstallInfo_Init();




int LauncherObject();

int resize();

int ResizeDragger();

void ResizeOriginSizePosition();

int ResizeAndMove();

int GetSize();
int Minimize();

int Close();

int Show();

int Hide();

int Reload();

int ClearCookie();

int OpenDefaultBrowser(const char *url);

int Is64BitLauncher();

int Is64BitOS();

int GetLauncherVersion();

int GetInstallInfo();

int js_Alert(const char *content, const char *title);

int OnLogin(const char *sessionId,
            const char *accountGuid,
            const char *email,
            int         checkSavedId,
            const char *countryCode,
            const char *createdAt);


void SaveEmail();

const char *GetLoginInfo(void);

int ExecuteGame();

char GetSessionValidatorUrl();


char GetPatchSourceUrl();

void Logout();

void RestartLoginFlow();

void SetExitEventOnGameClient();

void SetExitEventOnGameStarter();

int SaveUserLocalConfig();

int SetSavedId();

void HeartBeat();

char GetSavedId();

char GetLang();

void SetLang();

void ClearCache();

void PopFocus();

int PrepareInstall();

char GetMachineUid();

bool IsClientValidationDisabled();

bool IsClientInstallPathOverridden();

bool IsRunning(); 








#endif /* _JSINTEROP_LAUNCHEROBJECT_H_ */
