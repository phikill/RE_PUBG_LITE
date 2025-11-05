#ifndef _IPC_LOCKER_H_
#define _IPC_LOCKER_H_


typedef struct 
{
    char* ptr;
    size_t size;
    size_t capacity;
} basic_string_;



/* Estrutura do locker */
typedef struct 
{
    // field                    | SIZE  | OFFSET
    HANDLE mutex_handle;        // 8     0x00
    bool is_launcher;           // 1     0x08
    char   _pad1[7];            // 7     0x09
    basic_string_* mutex_name;  // 8     0x10
    void*  reserved;            // ?     0x18   
    bool is_locked;             // 1     0x20
    char   _pad2[7];            // 7     0x21..0x27 (padding final)
} ipc_locker;                   // total: 0x28

/* Função para gerar UUID para mutex (similar ao lc_client) */
char* ipc_uuid_mutex_lc_client(void);

/* Versão alternativa usando hash de "launcher_client" */
char* ipc_uuid_mutex_lc_client_hashed(void);

/* Cria um novo locker */
ipc_locker* new_lc_client(bool is_launcher);

/* Tenta adquirir o lock */
bool locker_acquire(ipc_locker* lck, DWORD timeout_ms);

/* Libera o lock */
bool locker_release(ipc_locker* lck);

/* Destroi o locker */
void locker_destroy(ipc_locker* lck);

/* Função para verificar se o locker é válido */
bool locker_is_valid(ipc_locker* lck);

ipc_locker *lc_lc_locker(void);






























#endif /* _IPC_LOCKER_H_ */
