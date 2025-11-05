#ifndef _LAUNCHERAPP_H_
#define _LAUNCHERAPP_H_

#include"LauncherView/LauncherView.h"

typedef struct LauncherApp
{
	
	int i;

} LauncherApp;



/*
static bool LauncherApp_LoadResource(LauncherApp* self, IniParser* launcher_ini, App view, IniModuleSection* ini_d)
{
	
}
*/


// internal unsafe static void LauncherApp.Run(LauncherApp* A_0, App view, global::IniModuleSection* ini_d)

void LauncherApp_Run(LauncherApp* 	self, 
					int 			view, 
					int* 			ini_d,
					int 			argc,
					char** 			argv);











#endif /* _LAUNCHERAPP_H_ */
