#ifndef _LAUNCHERVIEW_MAINWINDOW_H_
#define _LAUNCHERVIEW_MAINWINDOW_H_



bool IsTitleFixed;

// NotifyIcon NotifyIcon;

// HashSet<IBrowser> PopupBrowsers;

bool IsTerminating;

int LoginWindowWidth = 400;
int LoginWindowHeight = 630;
int MainWindowWidth = 1280;
int MainWindowHeight = 760;

// string mStartAddress = string.Empty;

// Dictionary<ContextMenuItems, Action> mCommandDictionary = new Dictionary<ContextMenuItems, Action>();

// List<KeyValuePair<ContextMenuItems, string>> mContextMenuStringMatchList = new List<KeyValuePair<ContextMenuItems, string>>();


enum WindowsMessage
{
	WM_CLOSE = 16,
	WM_QUIT = 18
}

enum MainWindowPage
{
	Login,
	Launcher
}


void OnMainBrowserMouseDown() {}

void OnMainBrowserTitleChanged() {}

void OnMainBrowserLoadingStateChanged() {}

void OnMainBrowserLoadError() {}

void OnMainBrowserDragEnter() {}

void OnMainWindowDraggerMouseMove() {}


int MainWindow() {}

MainWindowPage GetCurrentPage() {}

void ResizeToOrigin() {}

void Resize() {}

void PositionToCenter() {}

void ResizeOriginSizePosition() {}

void OnClosing() {}

void OnDisplaySettingChanging() {}

void OnDisplaySettingChanged() {}

void TerminateApp() {}

UserLocalConfig LoadUserLocalConfig() {}

char GetLang() {}

void ShowCloseModal() {}

void NotifyIconMouseClick() {}

void PrepareNotifyIcon() {}

void OnNotifyIconContextMenu() {}

void InitializeCommandTable() {}

void ExecuteCommand() {}

void OnLogin() {}

void OnLogout() {}

void OnRestartLoginFlow() {}

void OnCloseCommand() {}

void GetMenu() {}

void CollapseToTrayIcon() {}









#endif /* _LAUNCHERVIEW_MAINWINDOW_H_ */

