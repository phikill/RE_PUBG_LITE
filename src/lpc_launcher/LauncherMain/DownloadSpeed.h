#ifndef _LAUNCHER_DOWNLOADSPEED_H_
#define _LAUNCHER_DOWNLOADSPEED_H_

#include<string.h>

#include<curl/curl.h>



/* Estrutura para informações de download */
typedef struct 
{
    unsigned int size;
    unsigned int time;
} DOWNLOAD_INFO;


typedef struct
{
    DOWNLOAD_INFO* download_info;


} DownloadSpeed;

/* Função para adicionar informações de download e calcular velocidade */
static void AddDownloadInfo(DownloadSpeed* self, 
                            unsigned int dwSize, 
                            unsigned int dwCurrTime)
{
    
}


DownloadSpeed* DownloadSpeed_ctor(DownloadSpeed* self)
{

    return self;
}



















#endif /* _LAUNCHER_DOWNLOADSPEED_H_ */
