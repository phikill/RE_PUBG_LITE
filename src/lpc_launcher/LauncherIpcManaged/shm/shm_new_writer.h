#ifndef _SHM_NEW_WRITER_H_
#define _SHM_NEW_WRITER_H_



#include"LauncherIpcManaged/scoped_shm_writer.h"
#include"LauncherIpcManaged/uuid/uuid_shm.h"

#include<stdbool.h>

/*
/* Função para gerar UUID alternativa *
char* generate_fallback_uuid(void)
{
    static int counter = 0;
    char* uuid = (char*)malloc(50);
    if (uuid)
    {
        sprintf(uuid, "Global\\SHM_%08X_%d", GetTickCount(), counter++);
    }
    return uuid;
}

/* Função equivalente à shm() *
ipc_scoped_shm_writer* ipc_new_writer(void) 
{
    char* uuid_str = ipc_uuid_shm();
    ipc_scoped_shm_writer* writer = NULL;
    char* fallback_uuid = NULL;
    
    if(!uuid_str) 
    {
        /* Fallback se UUID falhar *
        uuid_str = generate_fallback_uuid();
        if(!uuid_str)
        {
            printf("\n Critical error: Unable to generate UUID\n");
            return NULL;
        }
    }

    //printf("\n Creating writer with UUID: %s\n", uuid_str);
    writer = create_shm_writer(uuid_str);
    
    if(!writer)
    {
    	printf(" \n DBG: ipc_new_writer() writer == NULL \n");
    }

    free(uuid_str);
    return writer;
}*/














#endif /* _SHM_NEW_WRITER_H_ */
