#ifndef __CEF_CORE_H__
#define __CEF_CORE_H__

#include<stdio.h>
#include<stdbool.h>

#include<libcef/capi/cef_app_capi.h>
#include"libcef/capi/cef_command_line_capi.h"
#include<libcef/capi/cef_client_capi.h>
#include<libcef/capi/cef_browser_capi.h>
#include<libcef/capi/cef_life_span_handler_capi.h>
#include<libcef/capi/cef_process_message_capi.h>
#include<libcef/capi/cef_values_capi.h>
#include<libcef/capi/cef_v8_capi.h>
#include<libcef/capi/cef_render_process_handler_capi.h>

// Struct de handler
typedef struct 
{
    cef_life_span_handler_t handler;
} MyLifeSpanHandler;

typedef struct 
{
    cef_load_handler_t handler;
    bool is_loading;
} SimpleLoadHandler;

static SimpleLoadHandler g_load_handler = {0};

#ifndef MAX_BROWSERS
    #define MAX_BROWSERS 16
#endif

typedef struct 
{
    cef_browser_t *browser[MAX_BROWSERS];
    cef_client_t client;
    // outros campos
} BrowserContext;

typedef struct 
{
    cef_app_t app;
} MyApp;



void CEF_CALLBACK on_after_created(struct _cef_life_span_handler_t* self, 
                                    struct _cef_browser_t*          browser);

void setup_lifespan_handler(MyLifeSpanHandler *g_lifeSpanHandler_a);

cef_life_span_handler_t* CEF_CALLBACK get_life_span_handler(struct _cef_client_t* self);

void setup_client(cef_client_t* client);

void create_browser(const char*     espec_url,
                    cef_client_t*   client,
                    void*           platformHandle,
                    int             width,
                    int             height);

void ResizeBrowser(cef_browser_t* browser, int width, int height);

void LoadUrl(cef_browser_t* browser, const char* url);

int cef_setup_pre_display(void* platformConnection, int argc, char** argv, cef_app_t* app);

int cef_setup_post_display(void* platformConnection, int argc, char** argv, cef_app_t* app);

void CEF_CALLBACK on_loading_state_change(struct _cef_load_handler_t* self,
                                            struct _cef_browser_t* browser,
                                            int isLoading,
                                            int canGoBack,
                                            int canGoForward);

cef_load_handler_t* CEF_CALLBACK get_load_handler(struct _cef_client_t* self);

void init_load_handler();

bool is_page_loading();

bool is_page_loaded();

//void ShowDevTools(cef_browser_t* browser);

void CheckDevToolsSupport(cef_browser_t* browser);







#endif /* __CEF_CORE_H__ */
