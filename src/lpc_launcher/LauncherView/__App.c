


#include<winsock2.h>
#include<ws2tcpip.h>

#include"__App.h"
#include"LauncherIpcManaged/shm/shm_new_writer.h"
#include"LauncherIpcManaged/mutex/ipc_locker.h"

#include"LauncherView/TrayRefresher.h"

#include"LauncherApiServer/ApiServer.h"

#include<stdbool.h>



int cefInitialized = 0;

int programLoop = 1; // main programm loop, 

// Handler and client
//cef_app_t g_app = {0};
MyApp g_app = {0};

//BrowserContext g_client;

MyLifeSpanHandler g_lifeSpanHandler;

//DragRegion *progDragRegion; // 346x30 / 500x40 / 1152x30

//RouteService service;
//ApiServer apiServer;
ApiService service;
ApiServer server;


GifAnim g_gif = {0};

DWORD last_frame_time = 0;
DWORD last_draw_time = 0;

int app_quit_loop()
{
    printf("\n \n app_quit_loop Called ! ");

    svr_isRunning = 0; // turn off the server

    if(progDisplay && progDisplay->platformHandle) 
    {
        /* posts WM_CLOSE to the message loop of the thread that owns the window */
        PostMessage((HWND)progDisplay->platformHandle, WM_CLOSE, 0, 0);
    }
    else
    {
        /* fallback: force quit */
        PostQuitMessage(0);
    }

    programLoop = 0; // forces the loop ends

    // If this shit got this far, I'll use evil quit

    //exit(18);

    return 0;
}

void getFileURL(const char *subPath, char *outURL, int maxLen) 
{
    char exePath[MAX_PATH];
    char dirPath[MAX_PATH];
    DWORD len;

    /* Gets full path of executable */
    len = GetModuleFileName(NULL, exePath, MAX_PATH);
    if(len == 0) 
    {
        outURL[0] = '\0'; /* error */
        return;
    }

    /* Remove the executable name */
    {
        char *lastSlash = strrchr(exePath, '\\');
        if (lastSlash) *lastSlash = '\0';
        strcpy(dirPath, exePath);
    }

    /* Concatenates subdirectory and file */
    {
        char filePath[MAX_PATH];
        snprintf(filePath, MAX_PATH, "%s\\%s", dirPath, subPath);

        /* Converts to file:// by replacing \ with / */
        int i, 
            j = 0;
        
        if(maxLen < 8) /* minimum space for file:/// + \0 */
        {
            outURL[0] = '\0';
            return;
        }

        outURL[j++] = 'f'; 
        outURL[j++] = 'i'; 
        outURL[j++] = 'l'; 
        outURL[j++] = 'e'; 
        outURL[j++] = ':'; 
        outURL[j++] = '/'; 
        outURL[j++] = '/';

        for(i = 0; filePath[i] && j < maxLen - 1; i++) 
        {
            if(filePath[i] == '\\') 
            {
                outURL[j++] = '/';
            }
            else 
            {
                outURL[j++] = filePath[i];
            }
        }
        outURL[j] = '\0';
    }
}

int App_Run()
{
    static DWORD last_time = 0;
    DWORD current_time = GetTickCount();
    DWORD elapsed = current_time - last_time;

    static int last_x = 0;
    static int last_y = 0;

    cef_do_message_loop_work(); // process CEF events

    if(elapsed < 16) // ~60 FPS
    {
        Sleep(10);
        return 0;
    }
    last_time = current_time;

    if(is_page_loading())  // while page is loading
    {
        // draw gif while brownser is loading
        if(g_gif.nframes > 0) 
        {
            DWORD now = GetTickCount();
                
            // Advance frame if delay time has passed
            if(now - last_frame_time >= (DWORD)g_gif.delays[g_gif.current_frame]) 
            {
                g_gif.current_frame = (g_gif.current_frame + 1) % g_gif.nframes;
                last_frame_time = now;
            }
                
            // Redraws every 16ms (~60 FPS) or when the frame changes
            if(now - last_draw_time > 16 || last_frame_time == now)
            {
                DrawCurrentFrame(progDisplay->platformHandle, &g_gif);
                last_draw_time = now;
            }
        }
        else
        {
            // Draw something even without a GIF
            DrawCurrentFrame(progDisplay->platformHandle, &g_gif);
        }

    } 
    else 
    {
        //printf("Page ready!\n");
    }

    // update the browser region for specifi elements
    if(progDisplay && progDisplay->platformHandle)
    {
        RECT rect;
        GetWindowRect((HWND)progDisplay->platformHandle, &rect);

        if(rect.left != last_x || rect.top != last_y)
        {
            int i = 0;

            last_x = rect.left;
            last_y = rect.top;

            // percorre todos os browsers ativos
            for(i = 0; i < MAX_BROWSERS; i++)
            {
                cef_browser_t* browser = g_client.browser[i];
                if(browser != NULL && browser->get_host != NULL)
                {
                    cef_browser_host_t* host = browser->get_host(browser);
                    if(host && host->notify_move_or_resize_started)
                    {
                        host->notify_move_or_resize_started(host);
                    }
                }
            }
        }
    }

	
    //usleep(1000); // avoid 100% CPU usage

    checkDragRegion(progDisplay, progDragRegion);


    return 0;
}


#define MAX_URL 1024

scoped_shm_writer *LcWriter = NULL;

int App_Init(App args) // i put OnStartup() code direct here
{ 

    // some or most things will be in cef_core.h / cef_core.c

    int i = 0;
	int result;

	WSADATA wsaData;
    SOCKET sock = INVALID_SOCKET;
    struct sockaddr_in addr;
    char url[128];
    int addrLen;
    char portInfo[128];



    int  enable_console = 0;
    HWND console_handle = GetConsoleWindow();


    
    // check the args called 
    for(i = 0; i < args.argc; i++) 
    {
        if(strcmp(args.argv[i], "-console_dbg") == 0) 
        {
            enable_console = 1;
            break;
        }
    }

    //ShowWindow(console_handle, SW_HIDE); // hide the console window, but the prints keep working with opening program with console
    if(!enable_console) 
    {
        ShowWindow(console_handle, SW_HIDE); // hide the windows dos console 
    } 
    else 
    {
        ShowWindow(console_handle, SW_SHOW); // show the windows dos console to debug output strings
    }

    //http://127.0.0.1/oidc/interaction/login // full link

    // create Program Display/Window
    progDisplay = engineCreateDisplay("OG:BG Game Launcher", // param1 window name
                                        LoginWindowWidth,    // param2 window width size 
                                        LoginWindowHeight);  // param3 window heith size

    if(!progDisplay)
    {
        goto app_cleanup;
    }

    windowBorderless(progDisplay, 1, LoginWindowWidth, LoginWindowHeight); // set the window no border
    setWindowCentered(progDisplay); // center the window in the screen

    engineSetWindowIcon(progDisplay, "app.ico"); // change the icon of the window by .ico files 

    result = cef_setup_post_display(progDisplay->platformConnection, args.argc, args.argv, &g_app.app);
    if(result != 0)
    {
        return result;
    }

    

    progDragRegion = createDragRegion(0, 0, 335, 30);

    setup_lifespan_handler(&g_lifeSpanHandler);

    cef_setup_client(&g_client.client);
    
    getFileURL("ui/login.html", url, MAX_URL);

    //create_browser("http://127.0.0.1/oidc/interaction/login", // old link 
    create_browser(url,                             // the url , i used local file
                    &g_client.client,               // libcef client
                    progDisplay->platformHandle,    // uses handle os the window system - X or win32
                    LoginWindowWidth,               // uses param2 of display
                    LoginWindowHeight);             // uses param3 of display

    page = Login;

    PrepareNotifyIcon(progDisplay->platformHandle); // tray system icon 

    RefreshSystemTray(); // hack , this refresh the tray area

    // load gif to memory
    if(!load_gif("ui/assets/img/Loading-animation-03.gif", &g_gif)) 
    {
        MessageBox(progDisplay->platformHandle, "Failed to open gif file", "Erro", MB_ICONERROR);
    }

    // init the struct with necessary bytes
    LcWriter = (scoped_shm_writer*)malloc(sizeof(scoped_shm_writer));
    

    // Create lockers, etc., from the launcher
    new_writer(); // start the buffers, structs and more.
    write_window_handle(progDisplay->platformHandle); // the game checks the window is alive
    ClientLocker = new_lc_client(true); // this is made pubg lite check launcher alive


    // server loopback


    if(!InitializeServer(&server, &service, "127.0.0.1", 0)) // ramdom PORT
    {
        printf("Server initialization failed\n");
        return 1;
    }

    if(!StartServer(&server, true)) 
    {
        printf("Server start failed\n");
        programLoop = 0;
        return 1;
    }


    LogMessage("API Server listening on port %d", server.port); // print in log file and console the port id
    write_api_server_port(server.port); // informs the game's memory which port it should communicate with

    // RUN , is a loop
    engineSetLoop(progDisplay, &programLoop, App_Run); // main loop abstract function

    app_cleanup:

    // program ends here

    // after loop clear

    CleanupLogging();
    
    // CEF concludes
    cef_quit_message_loop();
    cef_shutdown();

    deleteDragRegion(progDragRegion); // clear dragRegion memory region

    closesocket(sock); // close the socket
    WSACleanup(); // end wsa

    free(&g_gif); // clear gif memory region

    return 0;

}

 
