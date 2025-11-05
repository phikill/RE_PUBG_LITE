
#include"scoped_shm_writer.h"

#include<stdbool.h>

/* Função auxiliar para criar basic_string */
basic_string* create_basic_string(const char* str)
{
	size_t len;

    basic_string* bs = (basic_string*)malloc(sizeof(basic_string));
    if(!bs) 
    {
    	return NULL;
    }
    
    len = strlen(str);
    bs->ptr = (char*)malloc(len + 1);
    if (!bs->ptr)
    {
        free(bs);
        return NULL;
    }
    
    strcpy(bs->ptr, str);
    bs->size = len;
    bs->capacity = len + 1;
    
    return bs;
}

void destroy_basic_string(basic_string* bs)
{
    if (bs)
    {
        if (bs->ptr) free(bs->ptr);
        free(bs);
    }
}

void char_to_basic_string(const char* src, basic_string* dest) 
{
    if (src == NULL || dest == NULL) 
    {
        return;
    }
    
    // Limpa a estrutura
    memset(dest, 0, sizeof(basic_string));
    
    size_t len = strlen(src);
    dest->ptr = (char*)malloc(len + 1);
    
    if (dest->ptr != NULL) 
    {
        strcpy(dest->ptr, src);
        dest->size = len;
        dest->capacity = len;
    }
}

typedef scoped_shm_writer* (__cdecl *scoped_shm_writer_ctor_t)(scoped_shm_writer* this_ptr, basic_string* name);

scoped_shm_writer *create_scoped_shm_writer(char* name)
{
    // Aloca 8 bytes, como no wrapper C#
    scoped_shm_writer* ptr = (scoped_shm_writer*)malloc(8);
    basic_string STRING_01;
    scoped_shm_writer* ptr3;

    scoped_shm_writer_ctor_t ipc_scoped_shm_writer_ctor = NULL;

    if(!ptr) 
    {
        //return 1;
    }

    __try 
    {
        HMODULE hDll = NULL;

        hDll = LoadLibraryA("LauncherIpc.dll");
        if(!hDll) 
        {
            printf("\n Error loading DLL\n");
            __leave;
        }

        ipc_scoped_shm_writer_ctor = (scoped_shm_writer_ctor_t)GetProcAddress(hDll, 
                "??0scoped_shm_writer@ipc@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
        if(!ipc_scoped_shm_writer_ctor) 
        {
            printf("\n Error finding constructor: %d\n", GetLastError());
            __leave;
        }


        if(ptr != NULL)
        {
            basic_string *ptr2;

            char_to_basic_string(name, &STRING_01);
            ptr2 = &STRING_01;
            
            if(ptr2->ptr != NULL) 
            {
                //printf("\nConverted String: %s\n", ptr2->ptr);
            }

            ptr3 = ipc_scoped_shm_writer_ctor(ptr, ptr2);

            FreeLibrary(hDll);

            goto IL_0040;

        }
        ptr3 = NULL;
        IL_0040:;
    }
    __except(EXCEPTION_EXECUTE_HANDLER)
    {
        if (STRING_01.ptr != NULL) 
        {
            free(STRING_01.ptr);
        }
        free(ptr);
        //return 2;
    }

    __try 
    {
        p_writer_ = ptr3;
    }
    __except(EXCEPTION_EXECUTE_HANDLER)
    {

    }

    if(STRING_01.ptr != NULL) 
    {
        free(STRING_01.ptr);
    }
    free(ptr);

    
    return ptr3;
}

/* Typedef para a função write_window_handle */
typedef void (__cdecl *WRITE_WINDOW_HANDLE_FUNC)(void* this, HWND* param_1);

/* Função para escrever o handle da janela */
void write_window_handle(HWND handle)
{
    HINSTANCE hDll;
    WRITE_WINDOW_HANDLE_FUNC write_func;
    HWND hwnd_param;

    
    hDll = LoadLibraryA("LauncherIpc.dll");
    if(!hDll) 
    {
        printf("\n [!ERROR]: Could not load LauncherIpc.dll\n");
        return;
    }
    
    /* Obtém o endereço da função */
    write_func = (WRITE_WINDOW_HANDLE_FUNC)GetProcAddress(hDll,
        "?write_window_handle@scoped_shm_writer@ipc@@QEBAXAEBQEAUHWND__@@@Z");
    
    if(!write_func) 
    {
        printf("\n [!ERROR]: Could not find write_window_handle\n");
        FreeLibrary(hDll);
        return;
    }
    
    /* Prepara o parâmetro */
    hwnd_param = handle;
    
    __try 
    {
        //printf("\n Calling write_window_handle with HWND: %p\n", handle);
        write_func(p_writer_, &hwnd_param);
        //printf("\n write_window_handle executed successfully!\n");
    }
    __except(EXCEPTION_EXECUTE_HANDLER)
    {
        printf("\n [!ERROR]: CRASH in write_window_handle! Code: 0x%08X\n", GetExceptionCode());
    }
    
    FreeLibrary(hDll);
}


typedef void (__cdecl *write_api_server_port_t)(scoped_shm_writer* this_ptr, int port);

void write_api_server_port(int port)
{
    HMODULE hDLL = NULL;

    hDLL = LoadLibraryA("LauncherIpc.dll");
    if(!hDLL) 
    {
        printf("\n Error loading DLL\n");
    }

    const char* mangled_name = "?write_api_server_port@scoped_shm_writer@ipc@@QEBAXH@Z";

    write_api_server_port_t write_api_server_port_i =
        (write_api_server_port_t)GetProcAddress(hDLL, mangled_name);

    if(!write_api_server_port_i)
    {
        printf("\n [!ERROR]: Could not find function (GetLastError=%lu)\n", GetLastError());
        FreeLibrary(hDLL);
        //return 1;
    }

    //printf("Function located in %p\n", (void*)write_api_server_port_i);

    write_api_server_port_i(p_writer_, port);

    FreeLibrary(hDLL);



}

/*
typedef ipc_scoped_shm_writer* (__cdecl *IPC_SHM_WRITER_CTOR)(ipc_scoped_shm_writer* this, basic_string* param_1);

ipc_scoped_shm_writer* create_shm_writer(const char* shm_name) 
{
    HINSTANCE hDll = NULL;
    IPC_SHM_WRITER_CTOR ctor_func = NULL;
    ipc_scoped_shm_writer* writer = NULL;
    basic_string* str_param = NULL;
    void* call_result = NULL;
    
    hDll = LoadLibraryA("LauncherIpc.dll");
    if(!hDll) 
    {
        printf("\n [!ERROR]: Could not load LauncherIpc.dll\n");
        return NULL;
    }
    
    ctor_func = (IPC_SHM_WRITER_CTOR)GetProcAddress(hDll,
        "??0scoped_shm_writer@ipc@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z");
    
    if(!ctor_func) 
    {
        printf("\n [!ERROR]: Constructor not found\n");
        FreeLibrary(hDll);
        return NULL;
    }

    /* Prepara a string *
    str_param = create_basic_string(shm_name);
    if(!str_param)
    {
        printf("\n [!ERROR]: Could not create basic_string\n");
        FreeLibrary(hDll);
        return NULL;
    }
    
    /* Aloca memória para a estrutura *
    writer = (ipc_scoped_shm_writer*)malloc(sizeof(ipc_scoped_shm_writer));
    if(!writer) 
    {
        printf("\n [!ERROR]: Memory allocation failed\n");
        destroy_basic_string(str_param);
        FreeLibrary(hDll);
        return NULL;
    }

    writer->impl = NULL;
    
    /* Call the Constructor *
    __try 
    {
        //printf("\n Calling constructor with: %s\n", shm_name);
        
        call_result = ctor_func(writer, str_param);
        
        //printf("\n Contructor returned: %p\n", call_result);
        //printf("\n Writer after constructor: %p (impl=%p)\n", writer, writer->impl);
        
        /* Verifica se o construtor modificou a estrutura corretamente *
        if(writer->impl == NULL)
        {
            printf("\n WARNING: Constructor not initialized impl!\n");
        }
    }
    __except(EXCEPTION_EXECUTE_HANDLER)
    {
        printf("\n [!ERROR]: FATAL CRASH in the constructor! Code: 0x%08X\n", GetExceptionCode());
        free(writer);
        writer = NULL;
    }
    
    /* Limpeza *
    destroy_basic_string(str_param);
    FreeLibrary(hDll);
    
    /* Debug final *
    if(writer == NULL)
    {
        printf("\n FAILURE: Writer was not created\n");
        return NULL;
    }
    
    if(writer->impl == NULL)
    {
        printf("\n WARNING: Writer created but impl is NULL - may not work\n");
    }
    else
    {
        printf("\n SUCCESS: Writer created with impl=%p\n", writer->impl);
    }
    
    return writer;  // Returns writer, not call_result
}

/* Function to destroy the writer *
typedef void (__cdecl *IPC_SHM_WRITER_DTOR)(void* this);

void destroy_shm_writer(ipc_scoped_shm_writer* writer)
{
    if (!writer) return;
    
    HINSTANCE hDll = LoadLibraryA("LauncherIpc.dll");
    if (!hDll) return;
    
    IPC_SHM_WRITER_DTOR dtor_func = (IPC_SHM_WRITER_DTOR)GetProcAddress(hDll,
        "??1scoped_shm_writer@ipc@@QEAA@XZ");
    
    if (dtor_func)
    {
        __try 
        {
            dtor_func(writer);
        }
        __except(EXCEPTION_EXECUTE_HANDLER)
        {
            printf("Erro ao destruir writer\n");
        }
    }
    
    FreeLibrary(hDll);
    free(writer);
}



/* Typedef para a função write_window_handle *
typedef void (__cdecl *WRITE_WINDOW_HANDLE_FUNC)(void* this, HWND* param_1);

/* Função para escrever o handle da janela *
void write_window_handle(ipc_scoped_shm_writer* writer, HWND handle)
{
	HINSTANCE hDll;
	WRITE_WINDOW_HANDLE_FUNC write_func;
	HWND hwnd_param;


    if(!writer) 
    {
        printf("\n [!ERROR]: Invalid Writer (1) \n");
        return;
    }

    if(!writer->impl) 
    {
        printf("\n [!ERROR]: Invalid Writer->impl (2) \n");
        return;
    }


    
    hDll = LoadLibraryA("LauncherIpc.dll");
    if(!hDll) 
    {
        printf("\n [!ERROR]: Could not load LauncherIpc.dll\n");
        return;
    }
    
    /* Obtém o endereço da função *
    write_func = (WRITE_WINDOW_HANDLE_FUNC)GetProcAddress(hDll,
        "?write_window_handle@scoped_shm_writer@ipc@@QEBAXAEBQEAUHWND__@@@Z");
    
    if(!write_func) 
    {
        printf("\n [!ERROR]: Could not find write_window_handle\n");
        FreeLibrary(hDll);
        return;
    }
    
    /* Prepara o parâmetro *
    hwnd_param = handle;
    
    __try 
    {
        //printf("\n Calling write_window_handle with HWND: %p\n", handle);
        write_func(writer, &hwnd_param);
        //printf("\n write_window_handle executed successfully!\n");
    }
    __except(EXCEPTION_EXECUTE_HANDLER)
    {
        printf("\n [!ERROR]: CRASH in write_window_handle! Code: 0x%08X\n", GetExceptionCode());
    }
    
    FreeLibrary(hDll);
}


typedef void (__cdecl *IPC_SHM_WRITER_WRITE_PORT)(ipc_scoped_shm_writer* writer, int port);

void write_api_server_port(ipc_scoped_shm_writer* writer, int port)
{
    if(!writer) 
    {
        return;
    }

    HINSTANCE hDll = LoadLibraryA("LauncherIpc.dll");
    if(!hDll) 
    {
        printf("\n [!ERROR]: Failed to load LauncherIpc.dll\n");
        return;
    }

    IPC_SHM_WRITER_WRITE_PORT write_func = (IPC_SHM_WRITER_WRITE_PORT)GetProcAddress(
        hDll, "?write_api_server_port@scoped_shm_writer@ipc@@QEBAXH@Z");

    if(write_func) 
    {
        __try 
        {
            write_func(writer, port);
        }
        __except(EXCEPTION_EXECUTE_HANDLER) 
        {
            printf("\n [!ERROR]: Error calling write_api_server_port\n");
        }
    } 
    else 
    {
        printf("\n Did not find write_api_server_port symbol\n");
    }

    FreeLibrary(hDll);
}

*/


