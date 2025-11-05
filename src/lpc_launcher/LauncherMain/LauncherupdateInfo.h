#ifndef _LAUNCHERUPDATEINFO_H_
#define _LAUNCHERUPDATEINFO_H_

#include<windows.h>
#include<string.h>
#include<stdio.h>
#include<wchar.h>
#include<stddef.h> /* Para size_t */

#include<stdbool.h>

#define CURL_STATICLIB
#include<curl/curl.h>

#include"FileDownloader.h"
#include"IniParser.h"

//#include"C_WString.h"


typedef struct
{
	char* updateFilePath;    // Offset +64
    char* expectedFileHash;  // Offset +96
    char* infoFilePath;

    wchar_t *A_016;  // Substitui os offsets 0-31
    wchar_t *A_024;  // Substitui os offsets 32-63

    /* Offset 32 - URL de atualização */
    //char* update_url; // 32L
    wchar_t *update_url; // 32L

    /* Offset 48 -  */ 
    unsigned long A_048L; // 48L

    /* Offset 64 - Caminho base */
    //char* base_path;
    wchar_t *base_path; // 64L
    /* Offset 96 - */ 
    //char *A_096L; // 96L
    wchar_t *A_096L;
    /* Offset 128 - */
    wchar_t *A_0128L;
    /* Offset 160 - */
    wchar_t *A_0160L;
    /* Offset 192 - */
    wchar_t *A_0192L;
    /* Offset 224 - */
    wchar_t *A_0224L; 
    /* Offset 256 - */
    wchar_t *A_0256L;

    /* Offset 288 - Status de inicialização */
    int init_status; // 288L
    /* Offset 292 - Código de erro */
    int error_code; // 292L
    /* Offset 296 - String ??? */
    wchar_t *A_0296L;
    /* Offset 328 - Downloader */
    FileDownloader *file_downloader; // 328L

    /* Offset 800 - Thread Handle */
    HANDLE A_0800L; // 800L

    /* Offset 808 - IniParser struct */
    IniParser *ini_parser; // 808L

} LauncherupdateInfo;




int CheckLauncherInfo(LauncherupdateInfo* A_0);

int CheckUpdate(LauncherupdateInfo* A_0, 
                bool*               need_update, 
                bool                run_check_thread);

int DeleteLauncherInfoFile(LauncherupdateInfo* A_0);

int DownloadLauncherIni(LauncherupdateInfo* self, 
                        char*               current_work_path);

int GetLauncherIni();

bool LoadLocalLauncherIni(LauncherupdateInfo*   self, 
                            char*               file_name); // launcher.ini


void MakeEventName(wchar_t* filename);

int ParseUpdateUrlName(char*  base_url, 
                        char* url_name, 
                        char* download_url, 
                        char* update_file_name, 
                        char* file_name, 
                        char* file_size, 
                        char* file_hash);

int ThreadProc(void* pData);

int LauncherupdateInfo_Init(LauncherupdateInfo *self, 
                            wchar_t*            path,  // wchart_t - but ANSI is better
                            wchar_t*            update_url); // wchart_t - but ANSI is better


bool LauncherupdateInfo_Update(LauncherupdateInfo* A_0);

LauncherupdateInfo* LauncherupdateInfo_ctor(LauncherupdateInfo* self);












#endif /* _LAUNCHERUPDATEINFO_H_ */
