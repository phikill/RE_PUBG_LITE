/* cef_core.c - libcef management functions

    2025 - OG:BATTLEGROUNDS

    - H4TIUX
    - PHIKILL

    This part was supposed to be like a library for easier implementation in code, 
        and it turns out I'm supplementing things directly here.
*/

#include<string.h>


#include"cef_core.h"




#include<libcef/capi/cef_app_capi.h>
#include"libcef/capi/cef_command_line_capi.h"
#include<libcef/capi/cef_client_capi.h>
#include<libcef/capi/cef_browser_capi.h>
#include<libcef/capi/cef_life_span_handler_capi.h>
#include<libcef/capi/cef_context_menu_handler_capi.h>

#include"lpc_launcher/LauncherView/JsInterop/LauncherObject.h"

typedef struct _my_v8_handler_t 
{
    cef_v8handler_t base;
} my_v8_handler_t;


static struct _cef_render_process_handler_t handler; // render process , main handler


static cef_v8handler_t* g_handlers[16];
static int g_handler_count = 0;

static int g_browser_count = 0;



void CEF_CALLBACK on_context_created(struct _cef_render_process_handler_t   *self,
                                     struct _cef_browser_t                  *browser,
                                     struct _cef_frame_t                    *frame,
                                     struct _cef_v8context_t                *context);

void CEF_CALLBACK on_context_released(struct _cef_render_process_handler_t  *self,
                                      struct _cef_browser_t                 *browser,
                                      struct _cef_frame_t                   *frame,
                                      struct _cef_v8context_t               *context);

void CEF_CALLBACK on_before_close(struct _cef_life_span_handler_t   *self,
                                  struct _cef_browser_t             *browser);

void CEF_CALLBACK on_before_context_menu(struct _cef_context_menu_handler_t     *self,
                                         struct _cef_browser_t                  *browser,
                                         struct _cef_frame_t                    *frame,
                                         struct _cef_context_menu_params_t      *params,
                                         struct _cef_menu_model_t               *model);

int CEF_CALLBACK on_context_menu_command(struct _cef_context_menu_handler_t     *self,
                                         struct _cef_browser_t                  *browser,
                                         struct _cef_frame_t                    *frame,
                                         struct _cef_context_menu_params_t      *params,
                                         int                                    command_id,
                                         cef_event_flags_t                      event_flags);

int CEF_CALLBACK on_process_message_received(struct _cef_client_t           *self,
                                             struct _cef_browser_t          *browser,
                                             cef_process_id_t               source_process,
                                             struct _cef_process_message_t  *message);


extern BrowserContext g_client; // spaghetti code, but works

void CEF_CALLBACK on_after_created(struct _cef_life_span_handler_t  *self, 
                                   struct _cef_browser_t            *browser)
{
    printf("[CEF] Browser created! %p \n", browser);

    if(g_browser_count < MAX_BROWSERS)
    {
        ((cef_base_t*)browser)->add_ref((cef_base_t*)browser);
        g_client.browser[g_browser_count++] = browser;
    }

    /*
    if(browser) 
    {
        /* Retém o ponteiro do browser para uso posterior *
        /* usa cef_base_t add_ref *
        ((cef_base_t*)browser)->add_ref((cef_base_t*)browser);
        g_client.browser = browser;
    } */

}

void CEF_CALLBACK on_before_close(struct _cef_life_span_handler_t   *self,
                                  struct _cef_browser_t             *browser)
{
    int i = 0, 
        j = 0;

    if(!browser) 
    {
        return;
    }

    for(i = 0; i < g_browser_count; ++i)
    {
        if(g_client.browser[i] == browser)
        {
            // release the reference we saved in on_after_created
            ((cef_base_t*)browser)->release((cef_base_t*)browser);
            cef_do_message_loop_work(); // makes a single frame for cef to clean up resources
            /* be careful! only call the loop if it has settings.multi_threaded_message_loop = 0; 
             if it is on it may present deadlock problems. 
    
                I hope we won't need to use this later.

            */
            // remove from list
            for(j = i; j < g_browser_count - 1; ++j)
                g_client.browser[j] = g_client.browser[j + 1];
            g_browser_count--;
            break;
        }
    }


    printf("[CEF] Browser before_close / released\n");
}

// Sets the interface vtable
void setup_lifespan_handler(MyLifeSpanHandler *g_lifeSpanHandler_a)
{
    g_lifeSpanHandler_a->handler.base.size = sizeof(cef_life_span_handler_t);
    g_lifeSpanHandler_a->handler.on_after_created = on_after_created;
    g_lifeSpanHandler_a->handler.on_before_close = on_before_close;
}

cef_life_span_handler_t* CEF_CALLBACK get_life_span_handler(struct _cef_client_t* self)
{
    static cef_life_span_handler_t life_span_handler;

    // Initializes only once
    if(life_span_handler.base.size == 0)
    {
        life_span_handler.base.size = sizeof(cef_life_span_handler_t);
        life_span_handler.on_after_created = on_after_created;
        // If you want to add more handler functions, here too.
    }

    return &life_span_handler;
}

cef_render_process_handler_t* CEF_CALLBACK get_render_process_handler(struct _cef_app_t* self) 
{
    //static cef_render_process_handler_t handler;
    if(handler.base.size == 0) 
    {
        handler.base.size = sizeof(cef_render_process_handler_t);
        handler.on_context_created = on_context_created;
        handler.on_context_released = on_context_released;
        // aqui você pode setar callbacks como on_context_created
    }
    return &handler;
}


cef_context_menu_handler_t* CEF_CALLBACK get_context_menu_handler(struct _cef_client_t* self)
{
    static cef_context_menu_handler_t ctx_handler;

    if(ctx_handler.base.size == 0) 
    {
        ctx_handler.base.size = sizeof(cef_context_menu_handler_t);
        ctx_handler.on_before_context_menu = on_before_context_menu;
        ctx_handler.on_context_menu_command = on_context_menu_command;
    }

    return &ctx_handler;
}




void cef_setup_app(MyApp *app) 
{
    memset(app, 0, sizeof(MyApp));
    app->app.base.size = sizeof(cef_app_t);

    app->app.base.size = sizeof(cef_app_t);
    app->app.get_render_process_handler = get_render_process_handler;
}

void cef_setup_client(cef_client_t *client)
{
    memset(client, 0, sizeof(cef_client_t));
    client->base.size = sizeof(cef_client_t);
    client->get_life_span_handler = get_life_span_handler;
    client->get_load_handler = get_load_handler;
    client->get_context_menu_handler = get_context_menu_handler;

    client->on_process_message_received = on_process_message_received;
}



/*  

    use this before entering the display loop

*/
void create_browser(const char*     espec_url,
                    cef_client_t*   client,
                    void*           platformHandle,
                    int             width,
                    int             height)
{
    cef_window_handle_t     cef_whandle = {0};
    cef_window_info_t       window_info = {0};
    cef_browser_settings_t  browser_settings = {0};
    cef_string_utf16_t      url = {0};

    memset(&cef_whandle, 0, sizeof(cef_window_handle_t));
    memset(&window_info, 0, sizeof(cef_window_info_t));
    memset(&browser_settings, 0, sizeof(cef_browser_settings_t));
    memset(&url, 0, sizeof(cef_string_utf16_t));

    cef_whandle = (cef_window_handle_t)platformHandle;

    #ifdef _WIN32
        window_info.parent_window = cef_whandle;
        window_info.style = WS_CHILD | WS_VISIBLE;
        window_info.windowless_rendering_enabled = 0;
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

    if(!cef_browser_host_create_browser(&window_info,
                                         client,
                                         &url,
                                         &browser_settings,
                                         NULL))
    {
        //printf("[ERROR] Failed to create CEF browser\n");
        MessageBox(NULL, "Failed to create CEF browser", "[!ERROR]", MB_OK);
    }
}

void ResizeBrowser(cef_browser_t* browser, int width, int height)
{
    HWND hwndBrowser = {0};
    cef_browser_host_t *host = {0};

    if(!browser)
    {
        LogMessage(" ResizeBrowser() !browser ");
        return;
    }

    host = browser->get_host(browser);
    if(!host)
    {
        LogMessage(" ResizeBrowser() !host ");
        return;
    }

    hwndBrowser = host->get_window_handle(host);
    if(!hwndBrowser)
    {
        LogMessage(" ResizeBrowser() !hwndBrowser ");
        return;
    }

    // Resizing the child window (the browser)
    MoveWindow(hwndBrowser, 0, 0, width, height, TRUE);

}



void LoadUrl(cef_browser_t* browser, const char* url)
{
    cef_string_t    cef_url = {0};
    cef_frame_t     *frame  = {0};

    if(!browser || !url)
    {
        return;
    }

    if(!browser || !browser->get_host(browser)) 
    {
        return;
    }

    frame = browser->get_main_frame(browser);
    if(!frame)
    {
        return;
    }

    memset(&cef_url, 0, sizeof(cef_string_t));

    cef_string_utf8_to_utf16(url, strlen(url), &cef_url);

    frame->load_url(frame, &cef_url);

    cef_string_clear(&cef_url);
}



int cef_setup_pre_display(void* platformConnection, int argc, char** argv, cef_app_t* app)
{
    cef_main_args_t main_args = {0};
    int             exit_code = 0;

    memset(&main_args, 0, sizeof(cef_main_args_t));

    #ifdef _WIN32
        main_args.instance = (HINSTANCE)platformConnection;
    #elif defined(__linux__)
        main_args.argc = argc;
        main_args.argv = argv;
    #endif

        printf("[CEF] on_context_created - PID=%d\n", GetCurrentProcessId());

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

    memset(&main_args, 0, sizeof(cef_main_args_t));
    memset(&settings, 0, sizeof(cef_settings_t));

    #ifdef _WIN32
        main_args.instance = (HINSTANCE)platformConnection;
    #elif defined(__linux__)
        main_args.argc = argc;
        main_args.argv = argv;
    #endif

    settings.size = sizeof(cef_settings_t);


    // App OnStartup or App init manual configs
    settings.log_severity = LOGSEVERITY_DISABLE;

    cef_string_utf16_set(L"en-US", 5, &settings.locale, 1);
    cef_string_utf16_set(L"en-US,en;q=0.9", 14, &settings.accept_language_list, 1);

    cef_enable_highdpi_support();

    init_load_handler(); // loading pages handler.

    #ifdef cef_enable_threaded_message_loop
        settings.multi_threaded_message_loop = 1;
    #else
        settings.multi_threaded_message_loop = 0;
    #endif

        settings.no_sandbox = 1;

    /* Note, (cef_enable_single_process) 
        Depending on the architecture and the system, 
            this component can create unwanted additional displays.

    */
    #ifdef cef_enable_single_process
        settings.single_process = 1; // v8_handler dont work
    #else
        settings.single_process = 0; // multi process
    #endif

    printf("\n[CEF] Settings.single_process = %d\n", settings.single_process);

    // Initializes the CEF
    if(!cef_initialize(&main_args, &settings, app, NULL)) 
    {
        fprintf(stderr, "CEF initialization failed\n");
        return 1;
    }

    return 0;
}

void CEF_CALLBACK on_loading_state_change(struct _cef_load_handler_t*   self,
                                          struct _cef_browser_t*        browser,
                                          int                           isLoading,
                                          int                           canGoBack,
                                          int                           canGoForward) 
{
    SimpleLoadHandler *handler = (SimpleLoadHandler*)self;
    handler->is_loading = (isLoading != 0);
    
    //printf("PAGE %s\n", handler->is_loading ? "LOADING" : "READY");
}

cef_load_handler_t* CEF_CALLBACK get_load_handler(struct _cef_client_t* self)
{
    return (cef_load_handler_t*)&g_load_handler;
}

void init_load_handler()
{
    g_load_handler.handler.base.size = sizeof(cef_load_handler_t);
    g_load_handler.handler.on_loading_state_change = on_loading_state_change;
    g_load_handler.is_loading = false;
}

// Simple function to check if it is charging
bool is_page_loading()
{
    return g_load_handler.is_loading;
}

// Function to check if it has finished loading
bool is_page_loaded()
{
    return !g_load_handler.is_loading;
}






/* processing v8 */


static inline char* get_arg_string(cef_v8value_t** args, int argc, int index)
{
    cef_string_userfree_t s = {0};
    int len = 0;
    char* buf;

    if(index >= argc || !args[index]->is_string(args[index]))
    {
        return strdup("");
    }

    memset(&s, 0, sizeof(cef_string_userfree_t));
    s = args[index]->get_string_value(args[index]);
    if(!s || !s->str) 
    {
        cef_string_userfree_free(s);
        return strdup("");
    }

    len = WideCharToMultiByte(CP_UTF8, 
                              0, 
                              (LPCWCH)s->str, 
                              (int)s->length, 
                              NULL, 
                              0, 
                              NULL, 
                              NULL);
    buf = malloc(len + 1);
    WideCharToMultiByte(CP_UTF8, 
                        0, 
                        (LPCWCH)s->str, 
                        (int)s->length, 
                        buf, 
                        len, 
                        NULL, 
                        NULL);
    buf[len] = 0;
    cef_string_userfree_free(s);
    return buf;
}

static inline int get_arg_int(cef_v8value_t** args, int argc, int index)
{
    if(index >= argc || !args[index]->is_int(args[index]))
    {
        return 0;
    }

    return args[index]->get_int_value(args[index]);
}

static inline double get_arg_double(cef_v8value_t** args, int argc, int index)
{
    if(index >= argc || !args[index]->is_double(args[index]))
    {
        return 0.0;
    }

    return args[index]->get_double_value(args[index]);
}

static inline int get_arg_bool(cef_v8value_t** args, int argc, int index)
{
    if(index >= argc || !args[index]->is_bool(args[index]))
    {
        return 0;
    }

    return args[index]->get_bool_value(args[index]);
}




/*  */
static inline char* get_ipc_string(cef_list_value_t* args, int index)
{
    if(!args) 
    {
        return strdup("");
    }

    if(args->get_size(args) > index && args->get_type(args, index) == VTYPE_STRING)
    {
        cef_string_userfree_t s = {0};

        memset(&s, 0, sizeof(cef_string_userfree_t));
        s = args->get_string(args, index);
        if(s && s->str && s->length > 0)
        {
            int len = WideCharToMultiByte(CP_UTF8, 0,
                                          (LPCWCH)s->str, (int)s->length,
                                          NULL, 0, NULL, NULL);
            if(len > 0)
            {
                char* buffer = (char*)malloc(len + 1);
                if(buffer)
                {
                    WideCharToMultiByte(CP_UTF8, 
                                        0,
                                        (LPCWCH)s->str, 
                                        (int)s->length,
                                        buffer, 
                                        len, 
                                        NULL, 
                                        NULL);
                    buffer[len] = '\0';
                    cef_string_userfree_free(s);
                    return buffer;
                }
            }
        }
        if(s) 
        {
            cef_string_userfree_free(s);
        }
    }

    return strdup("");
}

static inline int get_ipc_int(cef_list_value_t* args, int index)
{
    if(!args) 
    {
        return 0;
    }

    if(args->get_size(args) > index && 
       args->get_type(args, index) == VTYPE_INT)
    {
        return args->get_int(args, index);
    }

    return 0;
}

static inline int get_ipc_bool(cef_list_value_t* args, int index)
{
    if(!args) 
    {
        return 0;
    }

    if(args->get_size(args) > index && 
       args->get_type(args, index) == VTYPE_BOOL)
    {
        return args->get_bool(args, index);
    }

    return 0;
}

static inline double get_ipc_double(cef_list_value_t* args, int index)
{
    if(!args) 
    {
        return 0.0;
    }

    if(args->get_size(args) > index && 
       args->get_type(args, index) == VTYPE_DOUBLE)
    {
        return args->get_double(args, index);
    }

    return 0.0;
}

static void send_ipc_message(const char* name, 
                             const char** strArgs, 
                             int            strCount, 
                             const int*     boolArgs, 
                             int            boolCount)
{
    cef_string_t            msg_name = {0};
    cef_process_message_t   *msg = {0};
    cef_list_value_t        *args = {0};
    int                     idx = 0;
    cef_string_t            tmp = {0};
    int                     i = 0;
    cef_v8context_t         *ctx = {0};
    cef_frame_t             *f = {0};
    cef_browser_t           *b = {0};
    
    memset(&msg_name, 0, sizeof(cef_string_t));
    memset(msg, 0, sizeof(cef_process_message_t));

    cef_string_utf8_to_utf16(name, strlen(name), &msg_name);
    msg = cef_process_message_create(&msg_name);
    cef_string_clear(&msg_name);


    if(!msg) 
    {
        if(msg) 
        {
            ((cef_base_t*)msg)->release((cef_base_t*)msg);
        }
        return;
    }

    memset(args, 0, sizeof(cef_list_value_t));
    args = msg->get_argument_list(msg);
    if(!args) 
    {
        if(msg) 
        {
            ((cef_base_t*)msg)->release((cef_base_t*)msg);
        }
        if(args) 
        {
            ((cef_base_t*)args)->release((cef_base_t*)args);
        }
        return;
    }


    memset(&tmp, 0, sizeof(cef_string_t));

    for(i = 0; i < strCount; ++i) 
    {
        cef_string_utf8_to_utf16(strArgs[i], strlen(strArgs[i]), &tmp);
        args->set_string(args, idx++, &tmp);
        cef_string_clear(&tmp);
    }

    for(i = 0; i < boolCount; ++i) 
    {
        args->set_bool(args, idx++, boolArgs[i]);
    }

    memset(ctx, 0, sizeof(cef_v8context_t));
    ctx = cef_v8context_get_current_context();
    if(!ctx) 
    {
        if(msg) 
        {
            ((cef_base_t*)msg)->release((cef_base_t*)msg);
        }
        if(args) 
        {
            ((cef_base_t*)args)->release((cef_base_t*)args);
        }
        if(ctx) 
        {
            ((cef_base_t*)ctx)->release((cef_base_t*)ctx);
        }
        return;
    }

    memset(f, 0, sizeof(cef_frame_t));
    f = ctx->get_frame(ctx);
    if(!f) 
    {
        if(msg) 
        {
            ((cef_base_t*)msg)->release((cef_base_t*)msg);
        }
        if(args) 
        {
            ((cef_base_t*)args)->release((cef_base_t*)args);
        }
        if(ctx) 
        {
            ((cef_base_t*)ctx)->release((cef_base_t*)ctx);
        }
        if(f) 
        {
            ((cef_base_t*)f)->release((cef_base_t*)f);
        }
        return;
    }

    memset(b, 0, sizeof(cef_browser_t));
    b = f->get_browser(f);
    if(b) 
    {
        b->send_process_message(b, PID_BROWSER, msg);
        if(msg) 
        {
            ((cef_base_t*)msg)->release((cef_base_t*)msg);
        }
        if(args) 
        {
            ((cef_base_t*)args)->release((cef_base_t*)args);
        }
        if(ctx) 
        {
            ((cef_base_t*)ctx)->release((cef_base_t*)ctx);
        }
        if(f) 
        {
            ((cef_base_t*)f)->release((cef_base_t*)f);
        }
        if(b) 
        {
            ((cef_base_t*)b)->release((cef_base_t*)b);
        }
    }
}


/*
void cef_register_js_func(cef_v8value_t* global, 
                            const char* name,
                            int (CEF_CALLBACK *callback)(struct _cef_v8handler_t* self,
                                                          const cef_string_t* name,
                                                          struct _cef_v8value_t* object,
                                                          size_t argumentsCount,
                                                          struct _cef_v8value_t* const* arguments,
                                                          struct _cef_v8value_t** retval,
                                                          cef_string_t* exception))*/

typedef int (CEF_CALLBACK *c8_register_funct_t)(struct _cef_v8handler_t *self,
                                                  const cef_string_t    *name,
                                                  struct _cef_v8value_t *object,
                                                  size_t                argumentsCount,
                                                  struct _cef_v8value_t * const* arguments,
                                                  struct _cef_v8value_t **retval,
                                                  cef_string_t          *exception);

void cef_register_js_func(cef_v8value_t*        global, 
                          const char*           name,
                          c8_register_funct_t   callback)
{
    cef_v8handler_t *handler = {0};
    cef_string_t    func_name = {0};
    cef_v8value_t   *func = {0};

    memset(handler, 0, sizeof(cef_v8handler_t));

    handler = calloc(1, sizeof(cef_v8handler_t)); // atention! alloc here!
    handler->base.size = sizeof(cef_v8handler_t);
    handler->execute = callback;

    memset(&func_name, 0, sizeof(cef_string_t));
    cef_string_utf8_to_utf16(name, strlen(name), &func_name);

    memset(func, 0, sizeof(cef_v8value_t));
    func = cef_v8value_create_function(&func_name, handler);

    global->set_value_bykey(global, &func_name, func, V8_PROPERTY_ATTRIBUTE_NONE);

    cef_string_clear(&func_name);

    printf("[CEF] JS function '%s' registered!\n", name);
}


/*
void cef_register_launcher_func(cef_v8value_t* global, 
                                const char* name,
                                int (CEF_CALLBACK *callback)(struct _cef_v8handler_t    *self,
                                                              const cef_string_t        *name,
                                                              struct _cef_v8value_t     *object,
                                                              size_t                    argumentsCount,
                                                              struct _cef_v8value_t*    const* arguments,
                                                              struct _cef_v8value_t     **retval,
                                                              cef_string_t              *exception))*/

typedef int (CEF_CALLBACK *v8_execute_func_t)(struct _cef_v8handler_t   *self,
                                                const cef_string_t      *name,
                                                struct _cef_v8value_t   *object,
                                                size_t                  argumentsCount,
                                                struct _cef_v8value_t   **arguments,
                                                struct _cef_v8value_t   **retval,
                                                cef_string_t            *exception);

void cef_register_launcher_func(cef_v8value_t*      global,
                                const char*         name,
                                v8_execute_func_t   callback)
{
    cef_v8value_t       *launcher_obj = NULL;
    cef_string_t        launcher_name = {0};
    cef_v8handler_t     *handler = {0};
    cef_string_t        func_name = {0};
    cef_v8value_t       *func = {0};

    memset(&launcher_name, 0, sizeof(cef_string_t));
    cef_string_utf8_to_utf16("_launcher_object_", strlen("_launcher_object_"), &launcher_name);

    if(global->has_value_bykey(global, &launcher_name)) 
    {
        launcher_obj = global->get_value_bykey(global, &launcher_name);
    } 
    else 
    {
        launcher_obj = cef_v8value_create_object(NULL);
        global->set_value_bykey(global, &launcher_name, launcher_obj, V8_PROPERTY_ATTRIBUTE_NONE);
    }

    // Creates the handler and saves it globally
    handler = calloc(1, sizeof(cef_v8handler_t));
    handler->base.size = sizeof(cef_v8handler_t);
    handler->execute = (void*)callback;

    if(g_handler_count < 16)
    {
        g_handlers[g_handler_count++] = handler; // mantém referência
    }

    memset(&func_name, 0, sizeof(cef_string_t));
    cef_string_utf8_to_utf16(name, strlen(name), &func_name);

    func = cef_v8value_create_function(&func_name, handler);
    launcher_obj->set_value_bykey(launcher_obj, &func_name, func, V8_PROPERTY_ATTRIBUTE_NONE);

    printf("[CEF] JS launcher function '%s' registered!\n", name);

    cef_string_clear(&func_name);
    cef_string_clear(&launcher_name);
}


// call main process 
int CEF_CALLBACK on_process_message_received(struct _cef_client_t*          self,
                                             struct _cef_browser_t*         browser,
                                             cef_process_id_t               source_process,
                                             struct _cef_process_message_t* message)
{
    char buf[128] = {0};
    cef_string_userfree_t name = {0};

    if(!message) 
    {
        return 0;
    }

    name = message->get_name(message);
    
    if(name && name->str && name->length > 0) 
    {
        WideCharToMultiByte(CP_UTF8, 
                            0,
                            (LPCWCH)name->str, 
                            (int)name->length,
                            buf, 
                            sizeof(buf)-1,
                            NULL, 
                            NULL);

        buf[sizeof(buf)-1] = '\0';
    }

    printf("\n [browser] on_process_message_received: %s\n", buf);

    if(strcmp(buf, "launcher_close") == 0) 
    {
        printf("[browser] launcher_close received, calling Close()/quitting loop\n");
        Close();  // ou app_quit_loop();
        cef_string_userfree_free(name);
        return 1;
    }
    else if(strcmp(buf, "launcher_minimize") == 0)
    {
        printf("[browser] launcher_minimize received\n");
        Minimize();
        cef_string_userfree_free(name);
        return 1;
    }
    else if(strcmp(buf, "onLogin") == 0)
    {

        cef_list_value_t* args = {0};
        char* sessionId = 0;
        char* accountGuid = 0;
        char* email = 0;
        int   checkSaved = 0;
        char* countryCode = 0;
        char* createdAt = 0;

        args = message->get_argument_list(message);
        if(!args)
        {
            printf("[browser] ERROR: Could not get arguments from message\n");
            cef_string_userfree_free(name);
            return 1;
        }

        sessionId   = get_ipc_string(args, 0);
        accountGuid = get_ipc_string(args, 1);
        email       = get_ipc_string(args, 2);
        checkSaved  = get_ipc_bool(args, 3);
        countryCode = get_ipc_string(args, 4);
        createdAt   = get_ipc_string(args, 5);

        OnLogin(sessionId, accountGuid, email, checkSaved, countryCode, createdAt);
        
        free(sessionId);
        free(accountGuid);
        free(email);
        free(countryCode);
        free(createdAt);

        cef_string_userfree_free(name);

        return 1;
    }
    else if(strcmp(buf, "logout") == 0)
    {
        printf("[browser] logout received\n");
        Logout();
        cef_string_userfree_free(name);
        return 1;
    }

    cef_string_userfree_free(name);
    return 0;
}

/* warning, the functions called here are created by another process, 
    to modify the main process a specific treatment must be implemented 
*/
static int CEF_CALLBACK my_v8_execute(struct _cef_v8handler_t*      self,
                                      const cef_string_t*           name,
                                      struct _cef_v8value_t*        object,
                                      size_t                        argumentsCount,
                                      struct _cef_v8value_t       **arguments,
                                      struct _cef_v8value_t**       retval,
                                      cef_string_t*                 exception)
{
    char fname[128] = {0};

    /* Convert name (cef_string_t) -> fname (utf8) */
    if(name && name->str && name->length > 0) 
    {
        int out = WideCharToMultiByte(CP_UTF8, 
                                      0,
                                      (LPCWCH)name->str, 
                                      (int)name->length,
                                      fname, 
                                      sizeof(fname)-1,
                                      NULL, 
                                      NULL);
        if(out >= 0) 
        {
            fname[out] = '\0';
        }
        else 
        {
            fname[0] = '\0';
        }
    } 
    else 
    {
        strcpy(fname, "<null>");
    }

    printf("\n[JS->C] Called: %s()\n", fname);

    /* Example of dispatch with strcmp */
    if(strcmp(fname, "nativePrint") == 0) 
    {
        printf("[nativePrint] called\n");
        return 1;
    }
    else if(strcmp(fname, "Alert") == 0)
    {
        char* content = 0;
        char* title = 0;

        printf("\n[Alert] called\n");

        content = get_arg_string(arguments, argumentsCount, 0);
        title   = get_arg_string(arguments, argumentsCount, 1);

        js_Alert(content, title);
        return 1;
    }
    else if(strcmp(fname, "launcher_minimize") == 0) 
    {
        cef_v8context_t *ctx = {0};

        printf("[launcher_minimize] called (render) -> sending IPC to browser\n");

        // get current v8 context -> frame -> browser
        ctx = cef_v8context_get_current_context();
        if(ctx) 
        {
            cef_frame_t* f = ctx->get_frame(ctx);
            if(f) 
            {
                cef_browser_t* b = f->get_browser(f);
                if(b) 
                {
                    // create process message and send to browser process
                    cef_string_t msg_name = {0};
                    cef_process_message_t *msg = {0};
                    
                    cef_string_utf8_to_utf16("launcher_minimize", strlen("launcher_minimize"), &msg_name);
                    msg = cef_process_message_create(&msg_name);
                    cef_string_clear(&msg_name);

                    if(msg) 
                    {
                        b->send_process_message(b, PID_BROWSER, msg);
                    }
                }
            }
        }

        return 1;
    }
    else if(strcmp(fname, "launcher_close") == 0) 
    {
        cef_v8context_t *ctx = {0};

        printf("[launcher_close] called (render) -> sending IPC to browser\n");

        ctx = cef_v8context_get_current_context();
        if(ctx) 
        {
            cef_frame_t* f = ctx->get_frame(ctx);
            if(f) 
            {
                cef_browser_t* b = f->get_browser(f);
                if(b) 
                {
                    cef_string_t            msg_name = {0};
                    cef_process_message_t   *msg = {0};
                    

                    cef_string_utf8_to_utf16("launcher_close", strlen("launcher_close"), &msg_name);
                    msg = cef_process_message_create(&msg_name);
                    cef_string_clear(&msg_name);

                    if(msg) 
                    {
                        b->send_process_message(b, PID_BROWSER, msg);
                    }
                }
            }
        }

        return 1;
    }
    else if(strcmp(fname, "onLogin") == 0)
    {
        /* extracts up to 6 args:
           0: sessionId (string) - required
           1: accountGuid (string) - required
           2: email (string) - optional, default "test@email.net"
           3: checkSavedId (bool) - optional, default 0
           4: countryCode (string) - optional, default "Unknown"
           5: createdAt (string) - optional, default ""
        */

        cef_string_t            msg_name = {0};
        cef_process_message_t   *msg = {0};
        cef_list_value_t        *args = {0};
        char                    *sessionId = 0;
        char                    *accountGuid = 0;
        char                    *email = 0;
        int                     checkSaved = 0;
        char                    *countryCode = 0;
        char                    *createdAt = 0;
        cef_string_t            tmp = {0};
        cef_v8context_t         *ctx = {0};


        printf("[onLogin] called from render process\n");

        
        cef_string_utf8_to_utf16("onLogin", strlen("onLogin"), &msg_name);
        msg = cef_process_message_create(&msg_name);
        cef_string_clear(&msg_name);

        if(!msg)
        {
            printf("[onLogin] ERROR: Unable to create message\n");
            return 1;
        }

        args = msg->get_argument_list(msg);
        if(!args)
        {
            printf("[onLogin] ERROR: Could not get argument list\n");
            return 1;
        }

        // Extract arguments using helpers
        sessionId   = get_arg_string(arguments, argumentsCount, 0);
        accountGuid = get_arg_string(arguments, argumentsCount, 1);
        email       = get_arg_string(arguments, argumentsCount, 2);
        checkSaved  = get_arg_bool  (arguments, argumentsCount, 3);
        countryCode = get_arg_string(arguments, argumentsCount, 4);
        createdAt   = get_arg_string(arguments, argumentsCount, 5);

        // Sets default values if empty
        if(!*sessionId)   { free(sessionId);   sessionId   = strdup(""); }
        if(!*accountGuid) { free(accountGuid); accountGuid = strdup(""); }
        if(!*email)       { free(email);       email       = strdup("test@email.net"); }
        if(!*countryCode) { free(countryCode); countryCode = strdup("Unknown"); }
        if(!*createdAt)   { free(createdAt);   createdAt   = strdup(""); }

        // Converts and adds to cef_list_value
        memset(&tmp, 0, sizeof(cef_string_t));

        cef_string_utf8_to_utf16(sessionId,   strlen(sessionId),   &tmp);
        args->set_string(args, 0, &tmp); cef_string_clear(&tmp);

        cef_string_utf8_to_utf16(accountGuid, strlen(accountGuid), &tmp);
        args->set_string(args, 1, &tmp); cef_string_clear(&tmp);

        cef_string_utf8_to_utf16(email,       strlen(email),       &tmp);
        args->set_string(args, 2, &tmp); cef_string_clear(&tmp);

        args->set_bool(args, 3, checkSaved);

        cef_string_utf8_to_utf16(countryCode, strlen(countryCode), &tmp);
        args->set_string(args, 4, &tmp); cef_string_clear(&tmp);

        cef_string_utf8_to_utf16(createdAt,   strlen(createdAt),   &tmp);
        args->set_string(args, 5, &tmp); cef_string_clear(&tmp);

        // Sends IPC message to the main process
        ctx = cef_v8context_get_current_context();
        if(ctx)
        {
            cef_browser_t *browser = ctx->get_browser(ctx);
            if(browser)
            {
                browser->send_process_message(browser, PID_BROWSER, msg);
            }
            else
            {
                printf("[onLogin] ERROR: Browser not found\n");
            }
        }
        else
        {
            printf("[onLogin] ERROR: V8 context not found\n");
        }

        // Frees memory from allocated strings
        free(sessionId);
        free(accountGuid);
        free(email);
        free(countryCode);
        free(createdAt);

        return 1;
    }
    else if(strcmp(fname, "logout") == 0) 
    {
        cef_v8context_t *ctx = {0};

        printf("[logout] called (render) -> sending IPC to browser\n");

        ctx = cef_v8context_get_current_context();
        if(ctx) 
        {
            cef_frame_t* f = ctx->get_frame(ctx);
            if(f) 
            {
                cef_browser_t* b = f->get_browser(f);
                if(b) 
                {
                    cef_string_t            msg_name = {0};
                    cef_process_message_t   *msg = {0};
                    

                    cef_string_utf8_to_utf16("logout", strlen("logout"), &msg_name);
                    msg = cef_process_message_create(&msg_name);
                    cef_string_clear(&msg_name);

                    if(msg) 
                    {
                        b->send_process_message(b, PID_BROWSER, msg);
                    }
                }
            }
        }

        return 1;
    }
    else if(strcmp(fname, "openDefaultBrowser") == 0) 
    {
        /* takes argument 0 as a string */

        char* url = get_arg_string(arguments, argumentsCount, 0);

        if(url && *url) 
        {
            printf("[openDefaultBrowser] url = %s\n", url);
            OpenDefaultBrowser(url);
        } 
        else 
        {
            printf("[openDefaultBrowser] no url provided\n");
        }

        free(url);
        return 1;
    }

    return 0;
}

#include"web_handler.h"

void CEF_CALLBACK on_context_created(struct _cef_render_process_handler_t   *self,
                                     struct _cef_browser_t                  *browser,
                                     struct _cef_frame_t                    *frame,
                                     struct _cef_v8context_t                *context)
{
    cef_v8value_t   *global = {0};
    cef_string_t    launcher_name = {0};
    cef_v8value_t   *launcher_obj = NULL;
    cef_string_t    code = {0};

    global = context->get_global(context);

    // Creates _launcher_object_ if it does not exist
    cef_string_utf8_to_utf16("_launcher_object_", strlen("_launcher_object_"), &launcher_name);

    if(global->has_value_bykey(global, &launcher_name)) 
    {
        launcher_obj = global->get_value_bykey(global, &launcher_name);
    } 
    else 
    {
        launcher_obj = cef_v8value_create_object(NULL);
        global->set_value_bykey(global, &launcher_name, launcher_obj, V8_PROPERTY_ATTRIBUTE_NONE);
    }


    // Generic wrapper — easy to read and extend

    //cef_register_js_func(global, "nativePrint", my_v8_execute);
    //cef_register_js_func(global, "launcher_close", my_v8_execute);
    //cef_register_js_func(global, "launcher_minimize", my_v8_execute);
    //cef_register_js_func(global, "openDefaultBrowser", my_v8_execute);

    cef_register_launcher_func(global, "nativePrint", my_v8_execute);
    cef_register_launcher_func(global, "Alert", my_v8_execute);
    cef_register_launcher_func(global, "launcher_close", my_v8_execute);
    cef_register_launcher_func(global, "launcher_minimize", my_v8_execute);
    cef_register_launcher_func(global, "onLogin", my_v8_execute);
    cef_register_launcher_func(global, "logout", my_v8_execute);
    cef_register_launcher_func(global, "openDefaultBrowser", my_v8_execute);
    cef_register_launcher_func(global, "getLoginInfo", my_v8_execute);

    /* --- automatically injected JavaScript code --- */
    /* this injected code to connect to the launcher to access the cef commands */
    const char* init_script =
        "window.bindLauncherAsync = function() {"
        "  return new Promise(function(resolve) {"
        "    if (window._launcher_object_) {"
        "      resolve(window._launcher_object_);"
        "    } else {"
        "      resolve(null);"
        "    }"
        "  });"
        "};";

    /*  [=== --> (sample of use of this implement in javascript) <-- ===]

        var launcher;

        if(window.bindLauncherAsync) 
        {
            window.bindLauncherAsync().then(obj => {
                if(obj) 
                {
                    // CEF environment
                    launcher = obj;
                    launcher.openDefaultBrowser("http://ogbg.dev"); // test
                } 
                else 
                {
                    console.log("No CEF objects detected");
                }
            });
        } 
        else 
        {
            // Normal browser environment
            console.log("Running outside of CEF Launcher");
            window.bindLauncherAsync = () => Promise.resolve(null); // optional, to avoid future errors
        }
    */

    /* executes this JS automatically in the context of the page */
    cef_string_utf8_to_utf16(init_script, strlen(init_script), &code);

    frame->execute_java_script(frame, &code, NULL, 0);
    cef_string_clear(&code);

}

void CEF_CALLBACK on_context_released(struct _cef_render_process_handler_t  *self,
                                      struct _cef_browser_t                 *browser,
                                      struct _cef_frame_t                   *frame,
                                      struct _cef_v8context_t               *context)
{
    int i = 0;

    printf("[CEF] Context released! Cleaning handlers...\n");

    /*
    for(i = 0; i < g_handler_count; ++i)
    {
        if(g_handlers[i])
        {
            free(g_handlers[i]);
            g_handlers[i] = NULL;
        }
    }
    g_handler_count = 0;*/
}


#define MENU_ID_DEVTOOLS 26500
#define MENU_ID_RELOAD   26501

void CEF_CALLBACK on_before_context_menu(struct _cef_context_menu_handler_t* self,
                                            struct _cef_browser_t* browser,
                                            struct _cef_frame_t* frame,
                                            struct _cef_context_menu_params_t* params,
                                            struct _cef_menu_model_t* model)
{
    cef_string_t label = {0};
    memset(&label, 0, sizeof(cef_string_t));

    model->remove(model, MENU_ID_PRINT);        // remove default option ( Print...) option
    model->remove(model, MENU_ID_VIEW_SOURCE);  // remove default option ( view source code ) of page

    model->remove(model, MENU_ID_BACK);         // remove default option ( back ) page 
    model->remove(model, MENU_ID_FORWARD);      // remove default option ( forward ) page

    model->add_separator(model);
    
    // add a option Show Devtools 
    cef_string_utf8_to_utf16("Show DevTools", 14, &label);
    model->add_item(model, MENU_ID_DEVTOOLS, &label);
    cef_string_clear(&label);

    // add a option Reload Page
    cef_string_utf8_to_utf16("Reload Page", 11, &label);
    model->add_item(model, MENU_ID_RELOAD, &label);
    cef_string_clear(&label);
}

// Verifica se o DevTools está disponível nesta versão do CEF
void CheckDevToolsSupport(cef_browser_t* browser) {
    if (!browser) return;
    
    cef_browser_host_t* host = browser->get_host(browser);
    if (!host) return;
    
    printf("[CEF DEBUG] Browser host: %p\n", host);
    printf("[CEF DEBUG] show_dev_tools function pointer: %p\n", host->show_dev_tools);
    
    // Verifica outras funções relacionadas
    printf("[CEF DEBUG] close_dev_tools function pointer: %p\n", host->close_dev_tools);
    
    ((cef_base_t*)host)->release((cef_base_t*)host);
}

LRESULT CALLBACK DevToolsProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch(msg)
    {
        case WM_SIZE:
        {
            /* When the window is resized, adjust the contents of the DevTools (child browser) */
            HWND hwndChild = GetWindow(hwnd, GW_CHILD);
            if (hwndChild)
            {
                RECT rc;
                GetClientRect(hwnd, &rc);
                SetWindowPos(hwndChild, NULL, 0, 0, rc.right, rc.bottom, SWP_NOZORDER);
            }
            break;
        }

        case WM_CLOSE:
        {
            DestroyWindow(hwnd);
            return 0;
        }

        case WM_DESTROY:
        {
            PostMessage(GetParent(hwnd), WM_USER + 100, 0, 0); // opcional, avisa o pai
            return 0;
        }
    }

    return DefWindowProc(hwnd, msg, wParam, lParam);
}

HWND CreateDevToolsWindow(HINSTANCE hInstance)
{
    WNDCLASSA wc;
    HWND hwnd;

    memset(&wc, 0, sizeof(wc));
    wc.lpfnWndProc   = DevToolsProc;
    wc.hInstance     = hInstance;
    wc.lpszClassName = "CEF_DevToolsWindow";
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);

    RegisterClassA(&wc);

    hwnd = CreateWindowExA(0,
                            "CEF_DevToolsWindow",
                            "CEF DevTools",
                            WS_OVERLAPPEDWINDOW | WS_VISIBLE,
                            CW_USEDEFAULT, CW_USEDEFAULT,
                            900, 700,
                            NULL,
                            NULL,
                            hInstance,
                            NULL);

    return hwnd;
}

void ShowDevTools(cef_browser_t *browser, HINSTANCE hInstance)
{
    cef_browser_host_t *host;
    cef_window_info_t window_info;
    cef_browser_settings_t settings;
    cef_point_t point;
    cef_client_t *client;
    HWND hwndDevTools;

    if(!browser)
    {
        printf("[DEVTOOLS] [!ERROR]: Invalid browser.\n");
        return;
    }

    host = browser->get_host(browser);
    if(!host)
    {
        printf("\n [DEVTOOLS] [!ERROR]: Invalid browser host.\n");
        return;
    }

    client = host->get_client(host);
    if (!client)
    {
        printf("[DEVTOOLS] [!ERROR]: Invalid client.\n");
        ((cef_base_t*)host)->release((cef_base_t*)host);
        return;
    }

    hwndDevTools = CreateDevToolsWindow(hInstance);
    if(!hwndDevTools)
    {
        printf("[DEVTOOLS] [!ERROR]: Failed to create DevTools window.\n");
        ((cef_base_t*)host)->release((cef_base_t*)host);
        return;
    }

    memset(&window_info, 0, sizeof(window_info));
    memset(&settings, 0, sizeof(settings));
    memset(&point, 0, sizeof(point));

    #if defined(_WIN32)
        window_info.style = WS_CHILD | WS_VISIBLE;
        window_info.parent_window = hwndDevTools;
        window_info.width = 900;
        window_info.height = 700;
    #endif

    host->show_dev_tools(host, &window_info, client, &settings, &point);

    ((cef_base_t*)host)->release((cef_base_t*)host);
}



int CEF_CALLBACK on_context_menu_command(struct _cef_context_menu_handler_t*    self,
                                         struct _cef_browser_t*                 browser,
                                         struct _cef_frame_t*                   frame,
                                         struct _cef_context_menu_params_t*     params,
                                         int                                    command_id,
                                         cef_event_flags_t                      event_flags)
{
    printf("[CEF] on_context_menu_command called: id=%d, pid=%d\n", command_id, GetCurrentProcessId());

    if(command_id == MENU_ID_DEVTOOLS) 
    {
        ShowDevTools(browser, GetModuleHandle(NULL));

        return 1;
    }

    if(command_id == MENU_ID_RELOAD)
    {
        if(frame)
        {
            cef_string_t js_code = {0};
            cef_string_utf8_to_utf16("window.location.reload(true);",  // Javascript Code
                                     strlen("window.location.reload(true);"), 
                                     &js_code);

            cef_string_t url = {0};
            cef_string_utf8_to_utf16("about:blank", // you can pass frame->get_url(frame) if you want
                                     strlen("about:blank"),
                                     &url);

            frame->execute_java_script(frame, &js_code, &url, 0);

            cef_string_clear(&js_code);
            cef_string_clear(&url);
        }
        return 1;
    }
    

    return 0; // outros comandos
}







/* end of cef_core.c */
