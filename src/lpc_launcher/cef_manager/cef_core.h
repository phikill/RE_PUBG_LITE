#ifndef __CEF_CORE_H__
#define __CEF_CORE_H__

#include<stdio.h>

#include<libcef/capi/cef_app_capi.h>
#include"libcef/capi/cef_command_line_capi.h"
#include<libcef/capi/cef_client_capi.h>
#include<libcef/capi/cef_browser_capi.h>
#include<libcef/capi/cef_life_span_handler_capi.h>

// Struct de handler
typedef struct 
{
    cef_life_span_handler_t handler;
} MyLifeSpanHandler;

typedef struct 
{
    cef_browser_t* browser;
    cef_client_t client;
    // outros campos
} BrowserContext;

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

void redirect_browser(cef_browser_t* browser, const char* new_url);

int cef_setup_pre_display(void* platformConnection, int argc, char** argv, cef_app_t* app);

int cef_setup_post_display(void* platformConnection, int argc, char** argv, cef_app_t* app);


#endif /* __CEF_CORE_H__ */
