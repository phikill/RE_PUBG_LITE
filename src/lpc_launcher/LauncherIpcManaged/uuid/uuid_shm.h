#ifndef _UUID_SHM_H_
#define _UUID_SHM_H_

#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#pragma comment(lib, "rpcrt4.lib") 

/* Função para gerar UUID para shared memory */
/*
char* ipc_uuid_shm() 
{
    UUID uuid;
    RPC_STATUS status;
    char* uuid_str = NULL;
    RPC_CSTR rpc_str;
    
    /* Gera UUID único *
    status = UuidCreate(&uuid);
    if(status != RPC_S_OK) 
    {
        printf("\n Error generating UUID: %d\n", status);
        return NULL;
    }
    
    /* Converte UUID para string *
    status = UuidToStringA(&uuid, &rpc_str);
    if(status == RPC_S_OK) 
    {
        /* Copia para buffer próprio *
        uuid_str = (char*)malloc(strlen((char*)rpc_str) + 1);
        if(uuid_str) 
        {
            strcpy(uuid_str, (char*)rpc_str);
        }
        RpcStringFreeA(&rpc_str);
    }
    
    return uuid_str;
}*/







































#endif /* _UUID_SHM_H_ */
