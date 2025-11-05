
#include<libcef/capi/cef_v8_capi.h>
#include<libcef/capi/cef_base_capi.h>
#include<libcef/capi/cef_client_capi.h>


#include<stdlib.h>
#include<string.h>


static cef_v8value_t* v8_get_login_info(struct _cef_v8handler_t*    self,
                                      const cef_string_t*           name,
                                      struct _cef_v8value_t*        object,
                                      size_t                        argumentsCount,
                                      struct _cef_v8value_t* const* arguments,
                                      struct _cef_v8value_t**       retval,
                                      cef_string_t*                 exception);





