#ifndef _LAUNCHER_FILEDOWNLOADER_H_
#define _LAUNCHER_FILEDOWNLOADER_H_

#include<stdio.h>
#include<stdbool.h>

#include<curl/curl.h>

#include"DownloadFile.h"
#include"DownloadSpeed.h"
#include"MemoryFile.h"

// Define constantes para as opções cURL
#define CURLOPT_SSL_VERIFYPEER 64
#define CURLOPT_FOLLOWLOCATION 52
#define CURLOPT_CONNECTTIMEOUT 78
#define CURLOPT_NOSIGNAL 99
#define CURLOPT_TIMEOUT 13
#define CURLOPT_VERBOSE 41
#define CURLOPT_SSL_VERIFYHOST 81
#define CURLOPT_SSLVERSION 32
#define CURLOPT_MAXREDIRS 68
#define CURLOPT_HTTP_VERSION 84
#define CURLOPT_NOPROGRESS 43
#define CURLOPT_PROGRESSFUNCTION 20056
#define CURLOPT_PROGRESSDATA 10057
#define CURLOPT_WRITEFUNCTION 20011
#define CURLOPT_WRITEDATA 10001
#define CURLOPT_PRIVATE 10010

typedef struct
{


    CURL *curl_handle; // 8L
    
    
    /* Offset 32 - */
    char* A_032L; // 32L

    // Offset 0x40 (64L)
    //char* download_url[256]; // URL de download (buffer de 256 bytes)
    char A_064L; // 64L - signed char

    // Outros membros (posições desconhecidas)
    void* callback_data;

    // Offset (320L)
    long flags;          // Flags de estado (320L = offset 0x140)

    //long A_0328L; // 328L
    HANDLE A_0328L; // 328L

    /* Offset 368 - */
    CRITICAL_SECTION A_0368L; // 386L

    /* Offset 408 - */
    DownloadSpeed* download_speed; // 408L

} FileDownloader;

static CURLcode CurlSetDefaultOpt(CURL *curl)
{
	CURLcode result;


	//Configura versão SSL/TLS (opção 181)
	result = curl_easy_setopt(curl, 181, 1027);
    if(result != 0)
    {
        return result;
    }


	// Configura versão SSL/TLS (opção 182) *
    result = curl_easy_setopt(curl, 182, 1027);
    if(result != 0)
    {
        return result;
    }
    
    // Habilita redirecionamento automático *
    result = curl_easy_setopt(curl, 52, 1);
    if(result != 0)
    {
        return result;
    }
    
    // Define timeout de conexão para 30 segundos *
    result = curl_easy_setopt(curl, 78, 30);
    if(result != 0)
    {
        return result;
    }
    
    // Configura opção 19 *
    result = curl_easy_setopt(curl, 19, 1);
    if(result != 0)
    {
        return result;
    }
    
    // Define timeout para 30 segundos *
    result = curl_easy_setopt(curl, 20, 30);
    if(result != 0)
    {
        return result;
    }
    
    // Repete a mesma configuração (provavelmente um erro no código original) *
    result = curl_easy_setopt(curl, 20, 30);
    if(result != 0)
    {
        return result;
    }
    
    // Desativa verificação de certificado SSL *
    result = curl_easy_setopt(curl, 64, 0);
    if(result != 0)
    {
        return result;
    }
    
    // Desativa verificação de host SSL *
    return curl_easy_setopt(curl, 81, 0);

}






/* Protótipos das funções de callback */

/* Define constante para o resultado de WaitForSingleObject */
//#define WAIT_TIMEOUT 258



int ProgressFunction(void* clientp, 
                        double dltotal, 
                        double dlnow, 
                        double ultotal, 
                        double ulnow)
{
    HANDLE hEvent;
    FileDownloader* self;

	if(clientp == NULL) 
    {
        return -1;
    }
    
    self = (FileDownloader*)clientp;
    
    if (self->A_0328L != 0 && WaitForSingleObject((HANDLE)self->A_0328L, 0) != WAIT_OBJECT_0)
    {
        return -1;
    }


    return 0;  // Continuar download 
}



/* Define constantes para informações cURL */
#define CURLINFO_RESPONSE_CODE 2097154
#define CURLINFO_CONTENT_LENGTH_DOWNLOAD 3145743
#define ERROR_DOWNLOAD_TOO_LARGE -7
#define CURLOPT_DEFAULT_PROTOCOL 43

/* Função de callback para escrita de dados recebidos */
static size_t WriteFunction(void* ptr, 
                            size_t size, 
                            size_t nmemb, 
                            void* stream)
{
    
    
    return 0;
}



/* Função para preparar o downloader */
static bool FileDownloader_Prepare(FileDownloader* self)
{

    // Verifica se o handle cURL existe e se não está já preparado
    if(self->curl_handle == NULL || self->flags != 0) 
    {
        return 0;
    }
    

    
    if(CurlSetDefaultOpt(self->curl_handle) != 0)
    {
        return 0;
    }
    
    
    // Configura para não verificar SSL (CURLOPT_SSL_VERIFYPEER = 43)
    if(curl_easy_setopt(self->curl_handle, 43, 0L) != CURLE_OK) 
    {
        return 0;
    }

    // Configura função de progresso (CURLOPT_XFERINFOFUNCTION = 20056)
    if (curl_easy_setopt(self->curl_handle, 20056, &ProgressFunction) != CURLE_OK) 
    {
        return 0;
    }

    // Configura dados para o callback de progresso (CURLOPT_XFERINFODATA = 10057)
    if(curl_easy_setopt(self->curl_handle, 10057, self) != CURLE_OK) 
    {
        return 0;
    }

    // Configura função de escrita (CURLOPT_WRITEFUNCTION = 20011)
    if(curl_easy_setopt(self->curl_handle, 20011, 
                        &WriteFunction) != CURLE_OK)
    {
        return 0;
    }

    // Configura dados para o callback de escrita (CURLOPT_WRITEDATA = 10001)
    if(curl_easy_setopt(self->curl_handle, 10001, self) != CURLE_OK) 
    {
        return 0;
    }

    return (curl_easy_setopt(self->curl_handle, 10010, self->A_064L) == CURLE_OK) ? 1 : 0;

}

static FileDownloader* FileDownloader_ctor(FileDownloader* self)
{
    // *A_0 = ref <Module>.??_7FileDownloader@@6B@;
    // escape_string* ptr = A_0 + 16L;


    if(!self) 
    {

        return NULL;
    }


    self->curl_handle = NULL;

    
    // try 1
    {
        // shared_ptr<LocalFile>* ptr2 = A_0 + 336L;

        // try 2
        {
            // shared_ptr<MemoryFile>* ptr3 = A_0 + 352L;
            
            // try 3
            {
                self->download_speed = malloc(sizeof(DownloadSpeed));
                if(!self->download_speed) 
                {
                    printf("Falha ao alocar download_speed\n");
                    return NULL;
                }
                memset(self->download_speed, 0, sizeof(DownloadSpeed));
                
                DownloadSpeed_ctor(self->download_speed); // 408L

                // try 4
                {
                    InitializeCriticalSection(&self->A_0368L); // 368L

                    if(curl_global_init(CURL_GLOBAL_ALL) != 0)
                    {
                        printf("Erro: curl_global_init() falhou\n");
                        return NULL;
                    }

                    self->curl_handle = curl_easy_init(); // 8L
                    if(!self->curl_handle) 
                    {
                        printf("\n \n FileDownloader_ctor() -> curl_handle() init problem !\n \n");
                        DeleteCriticalSection(&self->A_0368L); // 368L
                        return NULL;
                    }

                    self->A_064L = 0;
                    self->flags = 0;
                    self->A_0328L = 0;

                }
            }
        }
    }


    return self;
}









#endif /* _LAUNCHER_FILEDOWNLOADER_H_ */
