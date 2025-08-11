#ifndef _LAUNCHERUPDATEINFO_H_
#define _LAUNCHERUPDATEINFO_H_

#include<windows.h>
#include<string.h>
#include<stdio.h>
#include<wchar.h>
#include<stddef.h> /* Para size_t */

#include<stdbool.h>

#include<curl/curl.h>

#include"FileDownloader.h"
#include"IniParser.h"

#include"C_WString.h"


typedef struct
{
	char* updateFilePath;    // Offset +64
    char* expectedFileHash;  // Offset +96
    char* infoFilePath;

    C_WString A_016;  // Substitui os offsets 0-31
    C_WString A_024;  // Substitui os offsets 32-63

    /* Offset 32 - URL de atualização */
    //char* update_url; // 32L
    C_WString update_url; // 32L

    /* Offset 48 -  */ 
    unsigned long A_048L; // 48L

    /* Offset 64 - Caminho base */
    //char* base_path;
    C_WString base_path; // 64L
    /* Offset 96 - */ 
    //char *A_096L; // 96L
    C_WString A_096L;
    /* Offset 128 - */
    C_WString A_0128L;
    /* Offset 160 - */
    C_WString A_0160L;
    /* Offset 192 - */
    C_WString A_0192L;
    /* Offset 224 - */
    C_WString A_0224L; 
    /* Offset 256 - */
    C_WString A_0256L;

    /* Offset 288 - Status de inicialização */
    int init_status; // 288L
    /* Offset 292 - Código de erro */
    int error_code; // 292L
    /* Offset 296 - String ??? */
    C_WString A_0296L;
    /* Offset 328 - Downloader */
    FileDownloader *file_downloader; // 328L

    /* Offset 800 - Thread Handle */
    HANDLE A_0800L; // 800L

    /* Offset 808 - IniParser struct */
    IniParser *ini_parser; // 808L

} LauncherupdateInfo;




int CheckLauncherInfo(LauncherupdateInfo* A_0)
{

    return 0;
}

int CheckUpdate(LauncherupdateInfo* A_0, 
                bool* need_update, 
                bool run_check_thread)
{
    return 0;
}

int DeleteLauncherInfoFile(LauncherupdateInfo* A_0)
{
    return 0;
}

int DownloadLauncherIni(LauncherupdateInfo* self, 
                        char* current_work_path)
{
    unsigned int num = 0;
    wchar_t STRING_1[256];
    bool flag;

    wcscpy(STRING_1, L"file://");


    // try 1
    {
        wchar_t time_str[32];  // Buffer wide para "time=N"
        time_t now = time(NULL) / 60;  // Tempo atual em minutos
        wchar_t STRING_5[512] = {0};
        wchar_t STRING_7[512] = {0};

        // LauncherupdateInfo* ptr = A_0 + 32L; == update_url; // 32L , self->update_url.data

        if(wcsstr(self->update_url.data, STRING_1) == NULL && current_work_path != NULL) 
        {
            /* setting it to 0, because I don't know what it is, it's not in the constructor */
            self->A_048L = 0;

            if(self->A_048L > wcslen(STRING_1))
            {
            }
        }

        swprintf(time_str, 32, L"time=%d", now);
        
        // update_url + / -> STRING_5
        wcscpy(STRING_5, self->update_url.data);
        wcscat(STRING_5, L"/");


        // try
        {
            wchar_t STRING_6[512] = {0};
            wchar_t launcher_ini[] = L"launcher.ini";

            // try
            {
                char *ptr6 = (char*)launcher_ini;
                long num4;
                wchar_t *ptr7, *ptr8;
                wchar_t concat1[256];

                if(ptr6 != NULL) 
                {
                    while(*ptr6 != L'\0') 
                    {
                        ptr6++;
                    }
                }

                num4 = (wchar_t*)ptr6 - launcher_ini; /* Length in characters (not bytes) */

                wcscpy(concat1, STRING_5);
                wcscat(concat1, launcher_ini);
                ptr7 = concat1;

                ptr8 = (wchar_t*)malloc((wcslen(ptr7) + 1) * sizeof(wchar_t));
                wcscpy(ptr8, ptr7);

                wcscpy(STRING_7, ptr8);
                wcscat(STRING_7, time_str);

                num = 8;

                free(ptr8);

            }

        }

        // STRING_7 = http://lpc-dl.playbattlegrounds.com/launcher_patch/
        //printf("\n \n TEST : %s \n \n", (char*)STRING_7);

        // try 
        {

        }


    }

    return 0;
}

int GetLauncherIni()
{
    return 0;
}

bool LoadLocalLauncherIni(LauncherupdateInfo* self, 
                            char* file_name) // launcher.ini
{

    wchar_t STRING_1[1024] = {L'\0'};
    wchar_t* ptr = STRING_1;

    wchar_t STRING_2[1024] = {L'\0'};

    bool flag = 0;

    wcscpy(ptr, self->base_path.data);  // Copia o caminho base
    wcscat(ptr, L"\\");     // Adiciona a barra invertida
    //wcscat(ptr, (wchar_t*)file_name); // Adiciona o nome do arquivo

    // TRY 1
    {
        if(wcslen(ptr) + wcslen((wchar_t*)file_name) < 1024) 
        {
            wcscpy(STRING_2, ptr);         // Copia o resultado anterior
            wcscat(STRING_2, (wchar_t*)file_name);   // Adiciona o nome do arquivo
        } 
        else 
        {
            // Tratamento de erro para overflow (substitui o bloco catch)
            STRING_1[0] = L'\0'; // Limpa a string
            free(STRING_1);
            return false;
        }

    }


    // try 2
    {
        IniParser* ini_parser;
        IniParserShared shared_IniParser = {0};

        // try 3
        {
            free(STRING_1);
        }

        memset(&shared_IniParser, 0, sizeof(IniParserShared));

        shared_IniParser = IniParserShared_Create(ini_parser);

        IniParser_LoadIniW(&shared_IniParser, (char*)STRING_2);

    }

    return flag;
}

void MakeEventName(wchar_t* filename)
{
    if(*filename != L'\0') 
    {
        size_t num = 0;
        wchar_t* ptr = filename;
        
        do 
        {
            if (L'\\' == *ptr) 
            {
                *ptr = L'/';
            }
            num++;
            ptr = filename + num; /* Avança para o próximo caractere wide */
        } while (*ptr != L'\0');
    }
}

int ParseUpdateUrlName(char* base_url, 
                        char* url_name, 
                        char* download_url, 
                        char* update_file_name, 
                        char* file_name, 
                        char* file_size, 
                        char* file_hash)
{
    return 0;
}

int ThreadProc(void* pData)
{
    CheckLauncherInfo(pData);
    return 0;
}

int LauncherupdateInfo_Init(LauncherupdateInfo *self, 
                            wchar_t* path,  // wchart_t - but ANSI is better
                            wchar_t* update_url) // wchart_t - but ANSI is better
{
    int i = 0;

    if(!self) 
    {
        printf("\n \nERRO: self é NULL\n");
    }

    if(!self->file_downloader) 
    {
        printf("ERRO: file_downloader é NULL\n");
    }

    if(self->init_status != 0) 
    {
        printf("\n LauncherupdateInfo_Init() \n \n self-> init_status != 0 \n \n");
        return 0;
    }

    // Initialize empty wchar_t string *
    self->A_0296L.data = L'\0'; // 296L

    // Initialize cURL *
    if(curl_global_init(3) != 0) 
    {
        self->init_status = 2;
        self->error_code = 0;
        return 0;
    }


    /* agora consertar isso, o curl_handle está bugado */
    
    if(self->file_downloader->curl_handle == NULL)
    {
        printf("\n CURL HANDLE NULL \n ");
    }



    if(FileDownloader_Prepare(self->file_downloader) == NULL) 
    {
        self->init_status = 3;
        self->error_code = 0;
        return 0;
    }

    // Copy strings to struct *
    self->base_path.data = _wcsdup(path); // 64L
    self->update_url.data = _wcsdup(update_url); // 32L

    printf(" \n PATH = %s \n UPDATE_URL = %s \n", path, update_url);

    return 1;
}

bool LauncherupdateInfo_Update(LauncherupdateInfo* A_0)
{
    return 0;
}

LauncherupdateInfo* LauncherupdateInfo_ctor(LauncherupdateInfo* self)
{
    LauncherupdateInfo* ptr;


    C_Wstring_init(&self->A_016, NULL, 0);
    C_Wstring_init(&self->A_024, NULL, 0);
    

    // try 1 
    {
        self->A_016.length = 0;
        self->A_016.capacity = 7; // Small String Optimization
        self->A_016.data = NULL;  // Equivalente a *A_0 = 0

    }

    // try 2
    {

        C_Wstring_init(&self->update_url, NULL, 0);

        self->update_url.capacity = 7;  // Small String Optimization padrão

        // try 3
        {

        }

        // try 4
        {

            C_Wstring_init(&self->base_path, NULL, 0);

            self->base_path.capacity = 7;  // Small String Optimization padrão

            // try 5
            {

            }

            // try 6
            {
                C_Wstring_init(&self->A_096L, NULL, 0);

                // try 7
                {
                    self->A_096L.length = 0;
                    self->A_096L.capacity = 7;
                    self->A_096L.data = NULL;

                }

                // try 8
                {
                    
                    C_Wstring_init(&self->A_0128L, NULL, 0);

                    // try 9
                    {
                        self->A_0128L.capacity = 7;  // Small String Optimization padrão

                    }

                    // try 10
                    {
                        C_Wstring_init(&self->A_0160L, NULL, 0);

                        // try 11
                        {
                            self->A_0160L.capacity = 7;  // Small String Optimization padrão

                        }

                        // try 12
                        {
                            
                            C_Wstring_init(&self->A_0192L, NULL, 0);

                            // try 13
                            {
                                self->A_0192L.capacity = 7;  // Small String Optimization padrão
                            }

                            // try 14
                            {
                                C_Wstring_init(&self->A_0224L, NULL, 0);

                                // try 15
                                {
                                    self->A_0224L.capacity = 7;  // Small String Optimization padrão

                                }

                                // try 16
                                {
                                    C_Wstring_init(&self->A_0256L, NULL, 0);
                                    
                                    // try 17
                                    {
                                        self->A_0256L.length = 0;
                                        self->A_0256L.capacity = 7;
                                        self->A_0256L.data = NULL;
                                    }

                                    // try 18
                                    {
                                        self->init_status = 0;
                                        self->error_code = 0;

                                        C_Wstring_init(&self->A_0296L, NULL, 0);

                                        // try 19
                                        {
                                            self->A_0296L.capacity = 7;  // Small String Optimization padrão

                                        }

                                        // try 20
                                        {
                                            // <Module>.FileDownloader.{ctor}(A_0 + 328L);
                                            
                                            self->file_downloader = malloc(sizeof(FileDownloader));
                                            memset(self->file_downloader, 0, sizeof(FileDownloader));
                                            FileDownloader_ctor(self->file_downloader);

                                            if(!self->file_downloader)
                                            {
                                                printf("\n \n LauncherupdateInfo_ctor() \n ERROR: file_downloader is NULL\n");
                                            }

                                            // try 21
                                            {
                                                self->A_0800L = NULL; // thread handle 0x0000000

                                                // try 22
                                                {
                                                    #ifndef MAX_PATH_W
                                                        #define MAX_PATH_W 512
                                                    #endif

                                                    HANDLE hEvent; 
                                                    DWORD tick;
                                                    int i;

                                                    wchar_t modulePath[MAX_PATH_W] = {0};
                                                    wchar_t eventNameSuffix[32] = {0};
                                                    wchar_t fullEventName[MAX_PATH_W * 2] = {0};
                                                    
                                                    // Inicializa arrays com zero
                                                        for(i = 0; i < MAX_PATH_W; ++i) 
                                                        {
                                                            modulePath[i] = 0;
                                                        }
                                                        
                                                        for(i = 0; i < 32; ++i) 
                                                        {
                                                            eventNameSuffix[i] = 0;
                                                        }
                                                        
                                                        for(i = 0; i < MAX_PATH_W * 2; ++i) 
                                                        {
                                                            fullEventName[i] = 0;
                                                        }

                                                    // Get current module path
                                                    GetModuleFileNameW(NULL, modulePath, MAX_PATH_W);
                                                    
                                                    // Create random suffix
                                                    //swprintf_s(eventNameSuffix, MAX_PATH_W, L"_%d", GetTickCount());
                                                    tick = GetTickCount();
                                                    wsprintfW(eventNameSuffix, L"_%d", tick);


                                                    // Combine to create full event name
                                                    //wcscpy_s(fullEventName, MAX_PATH_W * 2, modulePath);
                                                    //wcscat_s(fullEventName, MAX_PATH_W * 2, eventNameSuffix);
                                                    
                                                    // Concatena caminho e sufixo
                                                    lstrcpyW(fullEventName, modulePath);
                                                    lstrcatW(fullEventName, eventNameSuffix);


                                                    // Create event
                                                    hEvent = CreateEventW(NULL, FALSE, TRUE, fullEventName);
                                                    if(hEvent != NULL) 
                                                    {
                                                        // Event created successfully
                                                        CloseHandle(hEvent);
                                                    }

                                                }

                                            }

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return self;
}












#endif /* _LAUNCHERUPDATEINFO_H_ */
