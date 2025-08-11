/* main.c

    copy this crap, it's open source
        2025 - OG:Battlegrounds 

*/

/*
    This is the main executable, 
        the objective of this project is to recreate/decompile the original pubg lite launcher, 
        with the aim of being lighter/more portable/and more compatible, 
        without the need for the .net crap, 
        this code is being developed to work with Windows XP Service pack 3 and higher , Linux and Macos.


    the project is using CEF 2623 b1401 for windows systems, and CEF 2704 b1415 for linux and macos.

    This program is focused on opening on your potato, so do not use 3D web elements like css3d, webgl etc,
            because this program may be focused on working with coding in software mode, not on gpus

    why do you want it to work on windows xp?
        for experiments, and also good portability


    
    Note! The original launcher uses CEF 3578 b1870 so some features may not be available.
    
    cef libraries should be c only, 
        do not include c++ wrappers, they require boring libraries and use __stdcall differently than __cdecl

        you can code this program with c++, but do not include the cef c++ libraries.

    the code for this program must be written with C 89 or C++ 98, 
            for compatibility with other compilers, and for readability.

        avoid specific compiler calls.

        avoid compiler specific syntax

    the code will use doxygen, so document the implemented code well



    compatible compilers are Open Watcom 1.9, Visual Studio 2019/2022, clang for macos

    I won't have access to the mac, so I'll leave that in someone else's hands.



    maybe some original launcher implementations don't work on linux and macos, 
                    like hiding the launcher window and leaving an icon in the tray


    use or create abstractions so that the code is the same on multiple platforms

    The CEF localization files for macOS are messier and uglier, 
        if you want to use Xcode or Cocoa it will look like this, 
            if not we will use the manual loading method.


    Now an IMPORTANT note, 
        I put libcef 2623 as libcef_ in the include directory, 
            and I put libcef 2704 in its place, 
            in case the program presents any problem, 
            or some inclusion code for Windows gives problems, 
            just use a macro and include libcef_ in place of libcef : this feat was done by phikill


*/

#ifdef _WIN32
    #include<windows.h>
#else
    #include<X11/Xlib.h>
    #include<unistd.h> // for  sleep()
#endif

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include<stdint.h>

#include<libcef/capi/cef_app_capi.h>
#include<libcef/capi/cef_client_capi.h>
#include<libcef/capi/cef_browser_capi.h>
#include<libcef/capi/cef_life_span_handler_capi.h>

#include"display_manager/display_manager.h"

#include"cef_manager/cef_core.h"

//#include"fukAnimatedGif/fukAnimatedGif.h"
//#include"LauncherModule/IniParser.h"

#include"LauncherMain/LOG_manager.h"

#include"LauncherMain/LauncherupdateInfo.h"
#include"LauncherMain/FileCommon.h"



/* Structure for mutex control */
typedef struct 
{
    HANDLE mutex;
    int locked;
} SimpleLocker;






int CheckSingleInstance(void) // this is not the same mutex as launcherIpc.dll, but it's a quick fix
{
    HANDLE mutex;
    
    /* Creates mutex for single instance control */
    mutex = CreateMutexA(NULL, TRUE, "LauncherSingleInstanceMutex");
    
    if(!mutex) 
    {
        return 1; /* Error creating mutex */
    }
    
    /* Check if mutex already exists */
    if(GetLastError() == ERROR_ALREADY_EXISTS) 
    {
        CloseHandle(mutex);
        return 1; /* Another instance is already running */
    }
    
    /* This is the first instance */
    return 0;
}


static int RestoreLauncherWindow(void)
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


int programLoop = 1; // This is the main loop of the program, if you reset it the program will close

LE_Display *progDisplay; // defined structure of the window handler component

int cefInitialized = 0;


int LoginWindowWidth = 400;
int LoginWindowHeight = 630;

int MainWindowWidth = 1280;
int MainWindowHeight = 760;


// Handler and client
cef_app_t g_app = {0};


BrowserContext g_client;
MyLifeSpanHandler g_lifeSpanHandler;


DragRegion *progDragRegion; // 346x30 / 500x40 / 1152x30

// X11 error handlers 
#ifdef __linux__

    int XErrorHandlerImpl(Display* display, XErrorEvent* event) 
    {
        fprintf(stderr, "X11 Error: type=%d, serial=%lu, code=%d, request=%d, minor=%d\n",
                event->type, 
                event->serial, 
                event->error_code,
                event->request_code, 
                event->minor_code);
        return 0;
    }
#endif // __linux__





void progLoop()
{

	cef_do_message_loop_work(); // process CEF events
    //usleep(1000); // avoid 100% CPU usage

    checkDragRegion(progDisplay, progDragRegion);

}

int main(int argc, char** argv) 
{

    int result = 0;
    char appName[256];
    SimpleLocker locker;

    /* Inicializa estruturas */
    memset(&locker, 0, sizeof(SimpleLocker));
    memset(appName, 0, sizeof(appName));


    //system("chcp 65001 | echo."); // set system console support UTF-8
    system("chcp 65001 > nul | echo.");

    /* Obtém nome da aplicação */
    GetModuleFileNameA(NULL, appName, sizeof(appName) - 1);


    /* Inicializa sistema de logging */
    if(InitializeLogging(appName) != 0) 
    {
        return 1;
    }

    /* Verifica instância única */
    if(CheckSingleInstance() != 0) 
    {
        LogMessage("Launcher exited because another instance is running");
        
        /* Tenta restaurar janela existente */
        if(RestoreLauncherWindow() == 0) 
        {
            result = 0; /* Sucesso - janela restaurada */
        } 
        else 
        {
            LogMessage("Failed to restore existing launcher window");
            result = 132; /* Erro - janela não encontrada */
        }
        
        goto cleanup;
    }
    
    // simulação do goto IL_297 
    
    // try
    {
        int num8;
        int num13;
        int num17;
        int num19;
        int num21;
        int num22;
        int num23;
        int num26;
        int num29;
        int num31;
        int num32;
        int num35;
        //winapi_call_error* ptr26; // Ponteiro para estrutura de erro da API do Windows
        int num39;
        //exception* ptr30; // Ponteiro para objeto de exceção C++
        int num41;
        int hresult;  // Código de erro COM do Windows (tipicamente HRESULT)
            

        LogMessage("Launcher started successfully");

        // FilterMessage(); 
        // UnhandledExceptionHandler();

        // try
        {
            char STRING_6[1024]; // launcher path location address
            char STRING_9[512]; // UPDATE_URL



            LauncherupdateInfo *launcherupdateInfo;
        
            launcherupdateInfo = malloc(sizeof(LauncherupdateInfo));
            memset(launcherupdateInfo, 0, sizeof(LauncherupdateInfo));

            // try
            {
                int i = 0;
                wchar_t wbuffer[512];
                HINSTANCE hInstance;
                wchar_t baseDir[MAX_PATH] = {0};


                // Obtém o diretório do executável atual
                DWORD len = GetModuleFileNameW(NULL, baseDir, MAX_PATH);
                if(len == 0 || len >= MAX_PATH) 
                {
                    wprintf(L"Erro ao obter caminho do executável.\n");
                    return 1;
                }

                // Remove o nome do executável do caminho para obter só o diretório
                for(i = len - 1; i >= 0; i--) 
                {
                    if(baseDir[i] == L'\\' || baseDir[i] == L'/') 
                    {
                        baseDir[i + 1] = L'\0';
                        break;
                    }
                }

                // Define diretório de trabalho atual
                if(!SetCurrentDirectoryW(baseDir)) 
                {
                    LogMessage("Error setting current directory.");
                    return 1;
                }


                // carrega a string que estão nos arquivos de recurso.
                // com o código 101 que é o link de update
                hInstance = GetModuleHandleW(NULL);
                LoadStringW(hInstance, 101, wbuffer, sizeof(wbuffer)/sizeof(wchar_t));

                // convert work directory to ANSI
                WideCharToMultiByte(CP_ACP, 0, baseDir, -1, STRING_6, sizeof(STRING_6), NULL, NULL);
                //printf("%s\n", STRING_6);

                // convert 101 string to ANSI
                WideCharToMultiByte(CP_ACP, 0, wbuffer, -1, STRING_9, sizeof(STRING_9), NULL, NULL);
                //printf("%s\n", STRING_9);

                // Loga o diretório atual
                LogMessage("current working directory : [%s]\n", STRING_6);

                // try
                {

                    //memset(&launcherupdateInfo, 0, 824);

                    memset(launcherupdateInfo, 0, sizeof(LauncherupdateInfo));

                    LauncherupdateInfo_ctor(launcherupdateInfo);

                    // try
                    {
                        wchar_t STRING_10[512];
                        
                        if(0 != LauncherupdateInfo_Init(launcherupdateInfo, 
                                                        (wchar_t*)STRING_6, 
                                                        (wchar_t*)STRING_9))
                        {
                            // test error
                            /*
                            ErrorMsg(2, 
                                     112, 
                                     14,
                                     L"C:/OGBG_LPC/GameLauncher/Client/Dynamic/pornographicContentManager");*/

                            goto IL_4CB; // normal program
                        }

                        // try
                        { // update init fail

                            long num7;

                            wcscpy(STRING_10, launcherupdateInfo->A_0296L.data);

                            num7 = ((uint64_t)launcherupdateInfo->init_status << 32) | 
                                    ((uint64_t)launcherupdateInfo->error_code & 0xFFFFFFFFL);

                            ErrorMsg(2, 112, num7, STRING_10);    

                        }
                    
                        num8 = -1;
                    }
                
                }
            }
            goto IL_15AA;

            
            // LauncherupdateInfo_Init Sucess !
            IL_4CB:
            // try 1
            {
                // try 2
                {
                    // try 3
                    {
                        int num10;


                        if(STRING_9[0] == '\0')
                        {
                            num10 = 1; // String empty
                        }
                        else
                        {
                            num10 = 0; // String Contain Data
                        }

                        if(num10 == 1)
                        {// empty string , load local launcher.ini
                            
                            char STRING_11[512];

                            strcpy(STRING_11, "launcher.ini");

                            LoadLocalLauncherIni(launcherupdateInfo, STRING_11);

                            free(STRING_11);

                            //goto IL_BA5;
                        }

                        if(DownloadLauncherIni(launcherupdateInfo, NULL) == NULL)
                        {

                            printf("\n \n DownloadLauncherIni() == NULL \n");
                            // goto IL_6E5;
                        }


                    }
                }
            }

        }

        /**
        * IL_15AA: Retorno para erro geral
        * Código: num8 (operação mal-sucedida)
        */
        IL_15AA:
            //<Module>.ipc.mutex.locker.{dtor}(ref locker);
        printf(" \n \n goto IL_15AA num8 = -1 \n \n");
        //return num8; // -1

    }
        
    


    

    // Phase 1: Before the window (only if multiprocessor)
    result = cef_setup_pre_display(NULL, argc, argv, &g_app);
    if(result != 0)
    {
        return result;
    }

    //http://127.0.0.1/oidc/interaction/login

    progDisplay = engineCreateDisplay("PUBG LITE Launcher", 
                                        LoginWindowWidth, 
                                        LoginWindowHeight); // create Program Display/Window

    windowBorderless(progDisplay, 1, LoginWindowWidth, LoginWindowHeight);
    setWindowCentered(progDisplay);

    result = cef_setup_post_display(progDisplay->platformConnection, argc, argv, &g_app);
    if(result != 0)
    {
        return result;
    }

    progDragRegion = createDragRegion(0, 0, 346, 30);


    // X11: configurar handlers de erro
    #ifdef __linux__
        XSetErrorHandler(XErrorHandlerImpl); // without this the x11 communication with the cef does not work
    #endif
    
    setup_lifespan_handler(&g_lifeSpanHandler);
    setup_client(&g_client.client);
    create_browser("http://127.0.0.1/oidc/interaction/login",
                    &g_client.client,
                    progDisplay->platformHandle,
                    LoginWindowWidth,
                    LoginWindowHeight);

    //redirect_browser(g_client.browser, "https://google.com");

    engineSetLoop(progDisplay, &programLoop, progLoop);

cleanup:
    /* Cleanup de recursos */
    if(locker.mutex) 
    {
        CloseHandle(locker.mutex);
    }
    
    CleanupLogging();
    
    // CEF concludes
    cef_quit_message_loop();
    cef_shutdown();

    deleteDragRegion(progDragRegion);

    return result;
}
