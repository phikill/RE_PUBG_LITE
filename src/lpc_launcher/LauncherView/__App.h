#ifndef __APP_H_
#define __APP_H_


#include"MainWindow.h"
#include"LauncherMain/LOG_manager.h"


#include"display_manager/display_manager.h"
#include"cef_manager/cef_core.h"

#include"LauncherIpcManaged/scoped_shm_writer.h"
#include"LauncherIpcManaged/mutex/ipc_locker.h"

//ipc_scoped_shm_writer *LcWriter;
//scoped_shm_writer* LcWriter = NULL;
ipc_locker *ClientLocker;

typedef struct 
{
    // Dados da aplicação
    int argc;
	char** argv;
} App;

bool _contentLoaded;

static int _exitCalled;

bool _initialized;

static int _logoutting;



LE_Display *progDisplay; // defined structure of the window handler component

BrowserContext g_client;

DragRegion *progDragRegion; // 346x30 / 500x40 / 1152x30

MainWindowPage page;

// Aa


//extern int programLoop;
extern int cefInitialized;



int App_Run();
int App_Init(App args);

int app_quit_loop(void);

void getFileURL(const char *subPath, char *outURL, int maxLen);


























#endif /* __APP_H_ */
