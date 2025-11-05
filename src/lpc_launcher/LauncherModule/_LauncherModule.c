
#include"_LauncherModule.h"


int lmRun(HINSTANCE* 		hInstance, 
		unsigned char* 		ini_buffer, 
		unsigned long 		ini_buffer_size, 
		bool 				enable_log, 
		LauncherModule_args args)
{
	int num;

	LauncherApp *App_;
	memset(&App_, 0, sizeof(LauncherApp));


	CoInitialize(NULL);
	//g_hInstance = hInstance;

	// try 1
	{

		if(enable_log) 
		{
        	//LogMessage(" launcher execut \n"); // log.write
    	}

    	// try2
    	{
    		// try 3
    		{
    			// try 4
    			{
    				/*
						if(checkcheck)
 		  				{
	
 		  				}
 		  			*/
    				LauncherApp_Run(App_, 0, 0, args.argc, args.argv);
    				//LogMessage(" Launcher Closed \n"); // log.write
    			}
    			CoUninitialize();
    		}
    	}

	}

	return 0;


}