
#include<windows.h>
#include<stdbool.h>

#include"ipc_locker.h"
#include"LauncherIpcManaged/uuid/uuid.h"



typedef void (__cdecl *locker_ctor_t)(ipc_locker* this_ptr, basic_string* name, bool force_lock);

ipc_locker* create_locker(const char* mutex_name, bool force_lock) 
{
    HMODULE dll = LoadLibraryA("LauncherIpc.dll");
    if(!dll) 
    {
        return NULL;
    }

    locker_ctor_t ctor = (locker_ctor_t)GetProcAddress(dll,
        "??0locker@mutex@ipc@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z");
    
    if(!ctor) 
    {
        return NULL;
    }

    // aloca memória para o locker
    ipc_locker* locker = (ipc_locker*)malloc(sizeof(ipc_locker));
    if(!locker) 
    { 
        return NULL;
    }

    // cria basic_string simplificado
    basic_string name_str;
    name_str.size = strlen(mutex_name);
    name_str.capacity = name_str.size + 1;
    name_str.ptr = (char*)malloc(name_str.capacity);
    memcpy(name_str.ptr, mutex_name, name_str.capacity);

    // chama o construtor real
    ctor(locker, &name_str, force_lock);

    // libera a string temporária se a função fez cópia
    free(name_str.ptr);

    return locker;
}



/* Função para gerar UUID para mutex (similar ao lc_client) */
char* ipc_uuid_mutex_lc_client(void)
{
    /* Baseado na análise do Ghidra, parece gerar um UUID baseado em "launcher_client" */
    /* Implementação simplificada - gera um nome único para o mutex */
    
    static int counter = 0;
    DWORD pid = GetCurrentProcessId();
    DWORD tid = GetCurrentThreadId();
    
    char* mutex_name = (char*)malloc(50);
    if (mutex_name)
    {
        sprintf(mutex_name, "Global\\lc_client_%lu_%lu_%d", pid, tid, counter++);
    }
    
    return mutex_name;
}

/* Versão alternativa usando hash de "launcher_client" */
char* ipc_uuid_mutex_lc_client_hashed(void)
{
    /* Simula o comportamento visto no Ghidra */
    size_t i = 0;
    DWORD hash = 0;
    const char* str = "launcher_client";
    size_t len = strlen(str);
    
    /* Hash simples (substitua pelo algoritmo real se conhecido) */
    for(i = 0; i < len; i++)
    {
        hash = (hash << 5) - hash + str[i];
    }
    
    char* mutex_name = (char*)malloc(50);
    if(mutex_name)
    {
        sprintf(mutex_name, "Global\\lc_client_%08lX", hash);
    }
    
    return mutex_name;
}

/* Cria um novo locker */

ipc_locker* new_lc_client(bool is_launcher) 
{
    // obtém o nome do mutex via lc_client
    basic_string *bs;
    ipc_locker *locker; 

    locker = NULL;

    
    bs = lc_client();
    
    if(!bs) 
    { 
        printf("lc_client failed: null struct\n"); 
    }
    if(!bs->ptr) 
    { 
        printf("lc_client failed: null string\n"); 
    }

    /*
    if(!bs || !bs->ptr) 
    {

        if(bs) 
        {
            free(bs);
        }
        return NULL;
    }*/

    //printf("\n \n \n \n \n Mutex name: = %s \n \n \n", bs->ptr);

    // cria o locker com force_lock = false
    locker = create_locker(bs->ptr, is_launcher);
    
    if(!locker) 
    { 
        printf("Failed to create locker\n"); return 0; 
    }
    
    //printf("Locker criado em %p\n", locker);
    //printf("is_locked: %d\n", locker->is_locked);
    //printf("mutex_handle: %p\n", locker->mutex_handle);
    ////printf("mutex_name: %s\n", locker->mutex_name);
    ////printf("\n \n \n MUTEX_NAME: %s \n \n" , locker->mutex_name->ptr);

    // libera a string temporária
    free(bs->ptr);
    free(bs);

    //printf(" \n \n TEST TEST TEST TEST \n ");
    return locker;
}

/* Tenta adquirir o lock */
bool locker_acquire(ipc_locker* lck, DWORD timeout_ms)
{
    if(!lck || !lck->mutex_handle)
    {
        return false;
    }
    
    DWORD result = WaitForSingleObject(lck->mutex_handle, timeout_ms);
    
    switch(result)
    {
        case WAIT_OBJECT_0:
            return true;
        
        case WAIT_TIMEOUT:
            printf("Timeout when acquiring lock\n");
            return false;
        
        case WAIT_ABANDONED:
            printf("Abandoned lock acquired\n");
            return true;
        
        case WAIT_FAILED:
            printf("Failed to acquire lock: %lu\n", GetLastError());
            return false;
        
        default:
            return false;
    }
}

/* Libera o lock */
bool locker_release(ipc_locker* lck)
{
    if(!lck || !lck->mutex_handle)
    {
        return false;
    }
    
    if(!ReleaseMutex(lck->mutex_handle))
    {
        printf("\n Error releasing mutex: %lu\n", GetLastError());
        return false;
    }
    
    return true;
}

/* Destroi o locker */
void locker_destroy(ipc_locker* lck)
{
    if(lck)
    {
        if(lck->mutex_handle && lck->mutex_handle != INVALID_HANDLE_VALUE)
        {
            CloseHandle(lck->mutex_handle);
        }
        
        if(lck->mutex_name)
        {
            free(lck->mutex_name);
        }
        
        free(lck);
    }
}

/* Function to check if the locker is valid */
bool locker_is_valid(ipc_locker* lck)
{
    return (lck != NULL && lck->mutex_handle != NULL && lck->mutex_handle != INVALID_HANDLE_VALUE);
}





typedef void (__cdecl *LOCKER_CTOR_FUNC)(ipc_locker* this, basic_string* name, bool is_launcher);
typedef ipc_locker* (__cdecl *LC_LC_LOCKER_FUNC)(ipc_locker* param_1);

/* Função para chamar lc_lc_locker */
ipc_locker *lc_lc_locker(void)
{
    HINSTANCE hDll = LoadLibraryA("LauncherIpc.dll");
    if(!hDll)
    {
        printf("\n [!ERROR]: Could not load LauncherIpc.dll\n");
        return NULL;
    }

    /* Obtém o endereço da função lc_lc_locker */
    LC_LC_LOCKER_FUNC lc_lc_locker_func = (LC_LC_LOCKER_FUNC)GetProcAddress(hDll,
        "?lc_lc_locker@mutex@ipc@@YA?AVlocker@12@XZ");
    
    if(!lc_lc_locker_func)
    {
        printf("\n [!ERROR]: lc_lc_locker not found! \n");
        FreeLibrary(hDll);
        return NULL;
    }

    /* Aloca memória para o locker */
    ipc_locker* result_locker = (ipc_locker*)malloc(sizeof(ipc_locker));
    if (!result_locker)
    {
        printf("\n [!ERROR]: Memory allocation failed ! \n");
        FreeLibrary(hDll);
        return NULL;
    }

    /* Inicializa com zeros */
    memset(result_locker, 0, sizeof(ipc_locker));

    /* Chama a função */
    ipc_locker* result = NULL;
    
    __try
    {
        //printf("Chamando ipc::mutex::lc_lc_locker...\n");
        result = lc_lc_locker_func(result_locker);
        //printf("Função retornou: %p\n", result);
    }
    __except(EXCEPTION_EXECUTE_HANDLER)
    {
        printf("CRASH in lc_lc_locker! CODE: 0x%08X\n", GetExceptionCode());
        free(result_locker);
        FreeLibrary(hDll);
        return NULL;
    }

    FreeLibrary(hDll);
    return result_locker;
}





