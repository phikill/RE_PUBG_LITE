#ifndef _ipc_uuid_h_
#define _ipc_uuid_h_


typedef struct 
{
    char  *ptr;
    size_t size;
    size_t capacity;
} basic_string;


typedef void (__cdecl *lc_client_t)(basic_string* out_string, unsigned long long param2, unsigned long long param3);

basic_string* lc_client() 
{
    HMODULE dll = LoadLibraryA("LauncherIpc.dll");
    if(!dll) 
    {
    	return NULL;
    }

    lc_client_t lc_client = (lc_client_t)GetProcAddress(dll,
        "?lc_client@mutex@uuid@ipc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");
    

    if(!lc_client) 
    {
    	return NULL;
    }

    basic_string* out_str = (basic_string*)malloc(sizeof(basic_string));
    out_str->ptr = NULL;
    out_str->size = 0;
    out_str->capacity = 0;

    lc_client(out_str, 0, 0);  // call function

    return out_str;
}


























#endif /* _ipc_uuid_h_ */
