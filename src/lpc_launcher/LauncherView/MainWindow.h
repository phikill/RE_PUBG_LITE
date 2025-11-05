#ifndef _LAUNCHERVIEW_MAINWINDOW_H_
#define _LAUNCHERVIEW_MAINWINDOW_H_

#include<stdbool.h>
#include"fukAnimatedGif/fukAnimatedGif.h"

bool IsTitleFixed;

// NotifyIcon NotifyIcon;

// HashSet<IBrowser> PopupBrowsers;

bool IsTerminating;

static const int LoginWindowWidth = 400;
static const int LoginWindowHeight = 630;

static const int MainWindowWidth = 1280;
static const int MainWindowHeight = 760;


// string mStartAddress = string.Empty;

// Dictionary<ContextMenuItems, Action> mCommandDictionary = new Dictionary<ContextMenuItems, Action>();

// List<KeyValuePair<ContextMenuItems, string>> mContextMenuStringMatchList = new List<KeyValuePair<ContextMenuItems, string>>();


/*
enum WindowsMessage
{
	WM_CLOSE = 16,
	WM_QUIT = 18
};*/


typedef enum
{
	Login,
	Launcher
}MainWindowPage;


void OnMainBrowserMouseDown();

void OnMainBrowserTitleChanged();

void OnMainBrowserLoadingStateChanged();

void OnMainBrowserLoadError();

void OnMainBrowserDragEnter();

void OnMainWindowDraggerMouseMove();


int MainWindow();


// MainWindowPage GetCurrentPage() { return 0;}

void ResizeToOrigin();

void Resize();

void PositionToCenter();

//void ResizeOriginSizePosition();

void OnClosing();

void OnDisplaySettingChanging();

void OnDisplaySettingChanged();

void TerminateApp();

// UserLocalConfig LoadUserLocalConfig() { return 0;}

// char GetLang();

void ShowCloseModal();

int NotifyIconMouseClick();


void PrepareNotifyIcon(HWND hwnd);

void OnNotifyIconContextMenu();

void InitializeCommandTable();

void ExecuteCommand();

//void OnLogin();

void OnLogout();

void OnRestartLoginFlow();

void OnCloseCommand();

void Main_window_GetMenu();

void CollapseToTrayIcon();








#endif /* _LAUNCHERVIEW_MAINWINDOW_H_ */

