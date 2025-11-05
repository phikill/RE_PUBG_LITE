#ifndef _LAUNCHER_FILEDOWNLOADER_H_
#define _LAUNCHER_FILEDOWNLOADER_H_

#include<stdio.h>
#include<stdbool.h>

#define CURL_STATICLIB // avoids the visual studio warning, and we are also not calling any dll
#include<curl/curl.h>

#include"DownloadFile.h"
#include"DownloadSpeed.h"
#include"MemoryFile.h"
#include"LocalFile.h"
#include"escape_string.h"



typedef struct
{


    CURL *curl_handle; // 8L
    
    //escape_string A_016L;
    char *A_016L;

    /* Offset 32 - */
    char* A_032L; // 32L

    // Offset 0x40 (64L)
    //char* download_url[256]; // URL de download (buffer de 256 bytes)
    char A_064L; // 64L - signed char

    // Outros membros (posições desconhecidas)
    void* callback_data;

    // Offset (320L)
    DownloadFile *A_0320L;

    //long A_0328L; // 328L
    HANDLE A_0328L; // 328L

    LocalFile *A_0336L;

    MemoryFile *A_0352L;

    /* Offset 368 - */
    CRITICAL_SECTION *A_0368L; // 386L

    /* Offset 408 - */
    DownloadSpeed* download_speed; // 408L

} FileDownloader;


void FileDownloader_Clear(FileDownloader* self);


CURLcode CurlSetDefaultOpt(CURL *curl);


bool FileDownloader_Download(FileDownloader*    self, 
                            void*               hAbortEvent, 
                            long                nFileSize);

bool FileDownloader_DownloadFileInfo(FileDownloader*    self, 
                                    void*               hAbortEvent);


int FileDownloader_easy_escape(const char*      string, 
                                unsigned long   inlength, 
                                char            **out_string);

int FileDownloader_GetErrorCode(FileDownloader* self);

MemoryFile* FileDownloader_OpenMemory(MemoryFile* self);



int ProgressFunction(void* clientp, 
                    double dltotal, 
                    double dlnow, 
                    double ultotal, 
                    double ulnow);


bool FileDownloader_SetDownload(FileDownloader* self, 
                                DownloadFile*   pFile, 
                                char*           cszUrl, 
                                int             nUrlLen);

void FileDownloader_SetDownloadError(FileDownloader*    self, 
                                    CURLcode            nResult);



/* Callback function for writing received data */
size_t WriteFunction(void* ptr, 
                    size_t size, 
                    size_t nmemb, 
                    void*  stream);


/* Function to prepare the downloader */
bool FileDownloader_Prepare(FileDownloader *self);

FileDownloader* FileDownloader_ctor(FileDownloader* self);









#endif /* _LAUNCHER_FILEDOWNLOADER_H_ */
