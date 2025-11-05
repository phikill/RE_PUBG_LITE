

//#include<libcef/capi/cef_v8_capi.h>
#include"web_handler.h "

#include"lpc_launcher/LauncherView/JsInterop/LauncherObject.h"

static cef_v8value_t* v8_get_login_info(struct _cef_v8handler_t*      self,
                                       const cef_string_t*           name,
                                       struct _cef_v8value_t*        object,
                                       size_t                        argumentsCount,
                                       struct _cef_v8value_t* const* arguments,
                                       struct _cef_v8value_t**       retval,
                                       cef_string_t*                 exception)
{
    const char* info = GetLoginInfo();
    cef_string_t json_str = {0};
    cef_string_utf8_to_utf16(info, strlen(info), &json_str);

    return cef_v8value_create_string(&json_str);
}
