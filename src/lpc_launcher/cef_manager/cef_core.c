

#include<string.h>


#include"cef_core.h"




#include<libcef/capi/cef_app_capi.h>
#include"libcef/capi/cef_command_line_capi.h"
#include<libcef/capi/cef_client_capi.h>
#include<libcef/capi/cef_browser_capi.h>
#include<libcef/capi/cef_life_span_handler_capi.h>


void CEF_CALLBACK on_after_created(struct _cef_life_span_handler_t* self, struct _cef_browser_t* browser)
{
    printf("[CEF] Browser created!\n");
}

// Sets the interface vtable
void setup_lifespan_handler(MyLifeSpanHandler *g_lifeSpanHandler_a)
{
    g_lifeSpanHandler_a->handler.base.size = sizeof(cef_life_span_handler_t);
    g_lifeSpanHandler_a->handler.on_after_created = on_after_created;
}

cef_life_span_handler_t* CEF_CALLBACK get_life_span_handler(struct _cef_client_t* self)
{
    static cef_life_span_handler_t life_span_handler;

    // Initializes only once
    if (life_span_handler.base.size == 0)
    {
        life_span_handler.base.size = sizeof(cef_life_span_handler_t);
        life_span_handler.on_after_created = on_after_created;
        // If you want to add more handler functions, here too.
    }

    return &life_span_handler;
}

void setup_client(cef_client_t* client)
{
    client->base.size = sizeof(cef_client_t);
    client->get_life_span_handler = get_life_span_handler;
}

/*  

    use this before entering the display loop

*/
void create_browser(const char* espec_url,
                    cef_client_t* client,
                    void* platformHandle,
                    int width,
                    int height)
{
    cef_window_handle_t     cef_whandle = (cef_window_handle_t)platformHandle;
    cef_window_info_t       window_info = {0};
    cef_browser_settings_t  browser_settings = {0};
    cef_string_utf16_t      url = {0};

    #ifdef _WIN32
        window_info.parent_window = cef_whandle;
        window_info.style = WS_CHILD | WS_VISIBLE;
    #elif defined(__linux__)
        window_info.parent_window = cef_whandle;
        // window_info.windowless_rendering_enabled = 0; // do not enable unless necessary
    #elif defined(__APPLE__)
        window_info.parent_window = cef_whandle;
        // you can add the macOS equivalent here
    #endif

    window_info.x = 0;
    window_info.y = 0;
    window_info.width  = width;
    window_info.height = height;

    browser_settings.size = sizeof(cef_browser_settings_t);
    cef_string_utf8_to_utf16(espec_url, strlen(espec_url), &url);

    if (!cef_browser_host_create_browser(&window_info,
                                         client,
                                         &url,
                                         &browser_settings,
                                         NULL))
    {
        printf("[ERROR] Failed to create CEF browser\n");
    }
}


/*


*/
void redirect_browser(cef_browser_t* browser, const char* new_url)
{
    cef_frame_t* frame;
    cef_string_t url_str = {0};

    if (!browser || !new_url) return;

    frame = browser->get_main_frame(browser);
    if (!frame) return;


    cef_string_utf8_to_utf16(new_url, strlen(new_url), &url_str);
    frame->load_url(frame, &url_str);
    cef_string_clear(&url_str);  // libera memória
}

int cef_setup_pre_display(void* platformConnection, int argc, char** argv, cef_app_t* app)
{
    cef_main_args_t main_args = {0};
    int exit_code = 0;

    #ifdef _WIN32
        main_args.instance = (HINSTANCE)platformConnection;
    #elif defined(__linux__)
        main_args.argc = argc;
        main_args.argv = argv;
    #endif

    #ifndef cef_enable_single_process
        // Executes CEF sub-processes (renderer/gpu etc)
        exit_code = cef_execute_process(&main_args, app, NULL);
        if(exit_code >= 0) 
        {
            return exit_code; // already executed and finished
        }
    #endif

    return 0; // continues with the main program
}

int cef_setup_post_display(void* platformConnection, int argc, char** argv, cef_app_t* app)
{
    cef_main_args_t main_args = {0};
    cef_settings_t settings   = {0};

    #ifdef _WIN32
        main_args.instance = (HINSTANCE)platformConnection;
    #elif defined(__linux__)
        main_args.argc = argc;
        main_args.argv = argv;
    #endif

    settings.size = sizeof(cef_settings_t);

    #ifdef cef_enable_threaded_message_loop
        settings.multi_threaded_message_loop = 1;
    #else
        settings.multi_threaded_message_loop = 0;
    #endif

        settings.no_sandbox = 1;

    /* Note, (cef_enable_single_process) 
        Depending on the architecture and the system, 
            this component can create unwanted additional displays.

        is linux disabled, and in windows enabled.
    */
    #ifdef cef_enable_single_process
        settings.single_process = 1;
    #else
        settings.single_process = 0; // linux
    #endif

    // Initializes the CEF
    if(!cef_initialize(&main_args, &settings, app, NULL)) 
    {
        fprintf(stderr, "CEF initialization failed\n");
        return 1;
    }

    return 0;
}

/*
int cef_setup(void* platformConnection, int argc, char** argv, cef_app_t* app)
{
    cef_main_args_t main_args = {0};
    cef_settings_t  settings  = {0};
    int exit_code = 0;

    // Fulfills the CEF's arguments
    #ifdef _WIN32
        main_args.instance = (HINSTANCE)platformConnection;
    #elif defined(__linux__)
        main_args.argc = argc;
        main_args.argv = argv;
    #endif

    // Basic CEF settings
    settings.size = sizeof(cef_settings_t);
    
    #ifdef cef_enable_threaded_message_loop
        // for some reason is causing errors now.
        settings.multi_threaded_message_loop = 1;
    #else
        settings.multi_threaded_message_loop = 0;
    #endif

    settings.no_sandbox = 1;
    
    #ifdef cef_enable_single_process
        settings.single_process = 1; // win xp support
    #else
        settings.single_process = 0;
        // Executes CEF sub-processes (renderer/gpu etc)
        // in case you want to use it in the near future
        exit_code = cef_execute_process(&main_args, app, NULL); 
        if(exit_code >= 0)
        {
            return exit_code;
        }
    #endif


    // Initializes the CEF
    if(!cef_initialize(&main_args, &settings, app, NULL)) 
    {
        fprintf(stderr, "CEF initialization failed\n");
        return 1;
    }

    return 0;
}*/












