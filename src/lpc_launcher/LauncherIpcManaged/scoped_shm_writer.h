#ifndef _SCOPED_SHM_WRITER_H_
#define _SCOPED_SHM_WRITER_H_



#include<windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<string.h>

#include"uuid.h"

/* Estrutura de 8 bytes (x64) */
/*
typedef struct 
{
    //void* impl;  // Ponteiro para a implementação
    unsigned long *impl;
} ipc_scoped_shm_writer;*/


/*
typedef struct
{
	ipc_scoped_shm_writer *p_writer_;

} scoped_shm_writer;*/

typedef struct {
    void**      vtable;          // Ponteiro para vtable
    uint32_t    unknown1;
    uint8_t     unknown2;
    uint32_t    unknown3;
    uint32_t    unknown4;
    HANDLE      file_mapping;    // Handle do file mapping
    void*       mapped_view;      // Vista mapeada da memória
} scoped_shm_writer;

scoped_shm_writer *p_writer_;


scoped_shm_writer *create_scoped_shm_writer(char* name);

void write_window_handle(HWND handle);

void write_api_server_port(int port);


/* Função do construtor da DLL */
//typedef ipc_scoped_shm_writer* (__cdecl *IPC_SHM_WRITER_CTOR)(ipc_scoped_shm_writer* result, const char* shm_name);



/*
/* Função wrapper para criar scoped_shm_writer *
ipc_scoped_shm_writer* create_shm_writer(const char* shm_name);

/* Função para destruir o writer *
void destroy_shm_writer(ipc_scoped_shm_writer* writer);


void write_window_handle(ipc_scoped_shm_writer* writer, HWND handle);

void write_api_server_port(ipc_scoped_shm_writer* writer, int port);*/
























#endif /* _SCOPED_SHM_WRITER_H_ */
