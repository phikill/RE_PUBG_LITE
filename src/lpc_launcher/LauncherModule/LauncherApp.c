
#include"LauncherApp.h"

#include"lpc_launcher/LauncherView/__App.h"

void LauncherApp_Run(LauncherApp* self, 
							int view, 
							int* ini_d,
							int argc,
							char** argv)
{

	App startArgs;

	startArgs.argc = argc;
	startArgs.argv = argv;

	// try
	{





		// view.Init(startArgs);
		App_Init(startArgs);
	}

}