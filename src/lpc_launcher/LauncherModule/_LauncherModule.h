#ifndef _LAUNCHERMODULE_H_
#define _LAUNCHERMODULE_H_


#include"LauncherApp.h"

#include<windows.h>
#include<stdbool.h>

// internal unsafe static int lmRun(HINSTANCE__* hInstance, sbyte* ini_buffer, ulong ini_buffer_size, [MarshalAs(UnmanagedType.U1)] bool enable_log)

typedef struct
{
	int argc;
	char** argv;

} LauncherModule_args;

int lmRun(HINSTANCE* 		hInstance, 
		unsigned char* 		ini_buffer, 
		unsigned long 		ini_buffer_size, 
		bool 				enable_log, 
		LauncherModule_args args);

























#endif /* _LAUNCHERMODULE_H_ */
