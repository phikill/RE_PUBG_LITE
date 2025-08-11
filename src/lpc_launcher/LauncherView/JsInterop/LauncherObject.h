#ifndef _JSINTEROP_LAUNCHEROBJECT_H_
#define _JSINTEROP_LAUNCHEROBJECT_H_


char Name = "_launcher_object_";

// private static readonly Regex Whitespaces = new Regex("\\s+", RegexOptions.Compiled);

bool _isLoggedIn;

//MainWindow _mainWindow;

// Rectangle _mainWindowDragger;

// ChromiumWebBrowser _wb;

// IBrowser _b;

 int HeartBeatTick = 3000;

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

void InstallInfo_Init() {}




int LauncherObject() {}

int resize() {}

int ResizeDragger() {}

void ResizeOriginSizePosition() {}

int ResizeAndMove() {}

int GetSize() {}

int Minimize() {}

int Close() {}

int Show() {}

int Hide() {}

int Reload() {}

int ClearCookie() {}

int OpenDefaultBrowser() {}

int Is64BitLauncher() {}

int Is64BitOS() {}

int GetLauncherVersion() {}

int GetInstallInfo() {}

int JSIOP_Alert() {}

int OnLogin() {}

void SaveEmail() {}

char GetLoginInfo() {}

int ExecuteGame() {return 0;}

char GetSessionValidatorUrl() {}

char GetPatchSourceUrl() {}

void Logout() {}

void RestartLoginFlow() {}

void SetExitEventOnGameClient() {}

void SetExitEventOnGameStarter() {}

int SaveUserLocalConfig() {}

int SaveUserLocalConfig() {}

int SetSavedId() {}

void HeartBeat() {}

char GetSavedId() {}

char GetLang() {}

void SetLang() {}

void ClearCache() {}

void PopFocus() {}

int PrepareInstall() {}

char GetMachineUid() {}

bool IsClientValidationDisabled() {}

bool IsClientInstallPathOverridden() {}

bool IsRunning() {}







#endif /* _JSINTEROP_LAUNCHEROBJECT_H_ */
