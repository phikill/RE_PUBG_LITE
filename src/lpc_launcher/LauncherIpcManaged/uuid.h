#ifndef _IPC_UUID_H_
#define _IPC_UUID_H_

typedef struct _basic_string
{
    char    *ptr;
    size_t  size;
    size_t  capacity; // 16
} basic_string;

typedef struct _std_string_x64
{
    union 
    {
        struct 
        {
            char sso[15];    // small string buffer
            unsigned char sso_size; // tamanho SSO
        };
        struct 
        {
            char *ptr;
            size_t size;
            size_t capacity;
        } heap;
    };
} std_string_x64;


const char* ipc_uuid_shm();



















#endif /* _IPC_UUID_H_ */
