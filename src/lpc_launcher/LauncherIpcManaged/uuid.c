
#include"uuid.h"

#include<windows.h>

typedef std_string_x64* (__cdecl *ipc_uuid_shm_t)(std_string_x64*);

const char* ipc_uuid_shm()
{
    static char buffer[128];
    //std_string_x64 str = {0};
    std_string_x64 str;
    str.heap.ptr = "launcher_shm";

    HMODULE hDll = LoadLibraryA("LauncherIpc.dll");
    if(!hDll)
    {
        printf("\nFailed to load DLL\n");
        return NULL;
    }

    ipc_uuid_shm_t ipc_uuid_shm_ = (ipc_uuid_shm_t)
        GetProcAddress(hDll, "?shm@uuid@ipc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");

    if(!ipc_uuid_shm_)
    {
        printf("\nFailed to locate shm() function\n");
        FreeLibrary(hDll);
        return NULL;
    }

    std_string_x64* result = ipc_uuid_shm_(&str);

    if(!result)
    {
        printf("\n[Error] shm() returned NULL\n");
        FreeLibrary(hDll);
        return NULL;
    }

    size_t len = 0;
    char* src = NULL;

    // Determina se é SSO ou heap
    if(result->heap.ptr == NULL && (result->sso_size & 0x80) == 0) {
        // SSO
        len = result->sso_size;
        src = result->sso;
    } else {
        // Heap
        len = result->heap.size;
        src = result->heap.ptr;
    }

    if(src && len > 0)
    {
        size_t copy_len = (len < sizeof(buffer)-1) ? len : sizeof(buffer)-1;
        memcpy(buffer, src, copy_len);
        buffer[copy_len] = '\0';
    }
    else
    {
        buffer[0] = '\0';
    }


    FreeLibrary(hDll);
    return buffer;
}


/*
typedef basic_string* (__cdecl *ipc_uuid_shm_t)(basic_string*);


const char* ipc_uuid_shm()
{
    static char buffer[128];
    basic_string str = {0};



    HMODULE hDll = LoadLibraryA("LauncherIpc.dll");
    if(!hDll)
    {
        printf("\n Failed to load DLL\n");
        return NULL;
    }

    ipc_uuid_shm_t ipc_uuid_shm_ = (ipc_uuid_shm_t)
        GetProcAddress(hDll, "?shm@uuid@ipc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");

    if(!ipc_uuid_shm_)
    {
        printf("\n \n Failed to locate shm() function\n");
        FreeLibrary(hDll);
        return NULL;
    }


    basic_string* result = ipc_uuid_shm_(&str);
    
    if(!result || !result->ptr)
    {
        printf("\n[Error] shm() returned null\n");
        FreeLibrary(hDll);
        return NULL;
    }


	size_t copy_len = (result->size < sizeof(buffer) - 1) ? result->size : sizeof(buffer) - 1;
    memcpy(buffer, result->ptr, copy_len);
    buffer[copy_len] = '\0';

    FreeLibrary(hDll);

    return buffer;
}
*/

/*
basic_string* ipc_uuid_shm_call(const char* text)
{
    HMODULE hDll = LoadLibraryA("LauncherIpc.dll");
    if(!hDll)
    {
        printf("\n Failed to load DLL\n");
        return NULL;
    }

    ipc_uuid_shm_t ipc_uuid_shm = (ipc_uuid_shm_t)
        GetProcAddress(hDll, "?shm@uuid@ipc@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ");

    if(!ipc_uuid_shm)
    {
        printf("\n \n Failed to locate shm() function\n");
        FreeLibrary(hDll);
        return NULL;
    }

    basic_string input;
    input.ptr = (char*)text;
    input.size = strlen(text);
    input.capacity = input.size + 1;

    basic_string* result = ipc_uuid_shm(&input);

    if(result)
    {
        printf("Returned string: %.*s\n", (int)result->size, result->ptr);
    }
    else
    {
        printf("Return null.\n");
    }

    FreeLibrary(hDll);

    return result;
}*/







