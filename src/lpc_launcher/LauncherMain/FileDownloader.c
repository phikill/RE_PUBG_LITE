

#include"FileDownloader.h"


// Defines constants for cURL options
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

/* Defines constants for cURL information */
#define CURLINFO_RESPONSE_CODE 2097154
#define CURLINFO_CONTENT_LENGTH_DOWNLOAD 3145743
#define ERROR_DOWNLOAD_TOO_LARGE -7
#define CURLOPT_DEFAULT_PROTOCOL 43



void FileDownloader_Clear(FileDownloader* self)
{
    CRITICAL_SECTION* ptr = self->A_0368L;

    EnterCriticalSection(ptr);

    self->A_0320L = 0;
    self->A_0368L = 0;



}



CURLcode CurlSetDefaultOpt(CURL *curl)
{
	CURLcode result;


	//Configure SSL/TLS version (option 181)
	result = curl_easy_setopt(curl, 181, 1027);
    if(result != 0)
    {
        return result;
    }


	// Configure SSL/TLS version (option 182) *
    result = curl_easy_setopt(curl, 182, 1027);
    if(result != 0)
    {
        return result;
    }
    
    // Enables automatic redirection *
    result = curl_easy_setopt(curl, 52, 1);
    if(result != 0)
    {
        return result;
    }
    
    // Set connection timeout to 30 seconds *
    result = curl_easy_setopt(curl, 78, 30);
    if(result != 0)
    {
        return result;
    }
    
    // Set option 19 *
    result = curl_easy_setopt(curl, 19, 1);
    if(result != 0)
    {
        return result;
    }
    
    // Set timeout to 30 seconds *
    result = curl_easy_setopt(curl, 20, 30);
    if(result != 0)
    {
        return result;
    }
    
    // Repeats the same configuration (probably a bug in the original code) *
    result = curl_easy_setopt(curl, 20, 30);
    if(result != 0)
    {
        return result;
    }
    
    // Disable SSL certificate verification *
    result = curl_easy_setopt(curl, 64, 0);
    if(result != 0)
    {
        return result;
    }
    
    // Disable SSL host verification *
    return curl_easy_setopt(curl, 81, 0);

}


bool FileDownloader_Download(FileDownloader* self, void* hAbortEvent, long nFileSize)
{
    if(self->curl_handle != 0)
    {

        DownloadFile* df = self->A_0320L;
        if(df != 0L)
        {
            DownloadFile *df2;
            long num3;;
            long num4;
            long num5;
            int num6;

            self->A_0328L = hAbortEvent;
        
            EnterCriticalSection(&df->crit);

            df2 = self->A_0320L;
            num3 = df2->A_024L;

            if(nFileSize > 0L && df2->A_016L == 0)
            {
                num4 = nFileSize;
            }
            else
            {
                num4 = df2->A_016L;
            }

            num5 = num4;
            num6 = df2->A_08L;

            LeaveCriticalSection(&df2->crit);

            if(0L < num3)
            {
                if (0L == num4)
                {
                }


            }

        }

    }

    return 0;
}

bool FileDownloader_DownloadFileInfo(FileDownloader* self, void* hAbortEvent)
{
    if(self->curl_handle != 0)
    {
        DownloadFile* df = self->A_0320L;
        if(df != 0L)
        {
            DownloadFile* df2;
            CURLcode curlcode;

            self->A_0328L = hAbortEvent;
            EnterCriticalSection(&df->crit);

            df2 = self->A_0320L;

            if(1 != df2->A_08L)
            {
                LeaveCriticalSection(&df2->crit);
                return 0;
            }

            if(curl_easy_setopt(self->curl_handle, 44, 1L) != CURLE_OK)
            {
                LeaveCriticalSection(&self->A_0320L->crit);
                return 0;
            }
            if(curl_easy_setopt(self->curl_handle, 21, 0L) != CURLE_OK)
            {
                LeaveCriticalSection(&self->A_0320L->crit);
                return 0;
            }

            self->A_0320L->A_08L = 2;
            self->A_0320L->A_012L = 0;

            LeaveCriticalSection(&self->A_0320L->crit);

            curlcode = curl_easy_perform(self->curl_handle);

            if(curlcode != CURLE_OK)
            {
                //<Module>.OutputDebugStringA(A_0 / sizeof(sbyte) + 64L);
                //<Module>.FileDownloader.SetDownloadError(A_0, curlcode);

                OutputDebugStringA(&self->A_064L);
                return 0;
            }

        }

    }


    return 0;
}


int FileDownloader_easy_escape(const char* string, 
                                    unsigned long inlength, 
                                    char **out_string)
{
    
    unsigned long length, out_pos = 0, capacity;
    unsigned long i;
    char *buffer;

    if(!string || !out_string)
    {
        printf("\n \n FileDownloader_easy_escape(); if(!string || !out_string) \n ");
        return 0;
    }

    // calculate length
    if(inlength != 0) 
    {
        length = inlength;
    } 
    else 
    {
        const char *ptr = string;
        while (*ptr) ptr++;
        length = (unsigned long)(ptr - string);
    }
    

    // initial buffer size (may be larger later)
    capacity = length * 3 + 1; // worst case: everything escaped (%XX) 
    buffer = (char *)malloc(capacity);
    

    if(!buffer)
    {
        printf("\n \n FileDownloader_easy_escape(); if(!buffer) \n ");
        return 0;
    }

    
    // scroll through characters 
    for(i = 0; i < length; i++) 
    {
        unsigned char c = (unsigned char)string[i];

        // safe characters
        if ((c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9') ||
            c == '-' || c == '_' || c == '.' || c == '~' ||
            c == '!' || c == '$' || c == '&' || c == '\'' ||
            c == '(' || c == ')' || c == '*' || c == '+' ||
            c == ',' || c == '/' || c == ':' || c == ';' ||
            c == '=' || c == '?' || c == '@') 
        {

            buffer[out_pos++] = (char)c;
        } 
        else 
        {
            
            // escape
            sprintf(buffer + out_pos, "%%%02X", c);
            out_pos += 3;
        }
    }

    buffer[out_pos] = '\0';
    *out_string = buffer; // returns the allocated string

    
    return 1;
}

int FileDownloader_GetErrorCode(FileDownloader* self)
{

    //A_0320L | self->DownloadFile
    int num2,
        num3;

    DownloadFile* df = self->A_0320L;

    if(df == NULL)
    {
        return 0;
    }

    num2 = df->A_012L;


    EnterCriticalSection(&df->crit);
        num3 = df->A_08L; // offset 8L
    LeaveCriticalSection(&df->crit);

    return num2 * 100 - num3;
}

MemoryFile* FileDownloader_OpenMemory(MemoryFile* self)
{



    return self;
}



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
    
    if(self->A_0328L != 0 && WaitForSingleObject((HANDLE)self->A_0328L, 0) != WAIT_OBJECT_0)
    {
        return -1;
    }


    return 0;  // Continue download
}


bool FileDownloader_SetDownload(FileDownloader* self, 
                                    DownloadFile* pFile, 
                                    char* cszUrl, 
                                    int nUrlLen)
{

    
    int file_status;

    // 1. Initial Checks
    if(pFile == NULL || self->curl_handle == 0 || self->A_0320L != NULL) 
    {
        printf("\n \n FileDownloader_SetDownload() Verificacao 1 falhou ! \n");
        return 0;
    }


    // 2. Locks the critical section of DownloadFile
    EnterCriticalSection(&pFile->crit);
        file_status = pFile->A_08L;
    LeaveCriticalSection(&pFile->crit);

    
    if(file_status != 1) 
    {
        printf("\n \n FileDownloader_SetDownload() (file_status != 1) \n ");
        printf(" FileDownloader_SetDownload() : file_status == %d \n ", file_status);
        return 0;
    }

    
    printf("\n cszUrl = %s ", cszUrl);



    //self->A_016L.data = NULL;
    //self->A_016L.size = 0;


    
    // 3. Processes the URL (escaping)
    //if(!FileDownloader_easy_escape(cszUrl, (nUrlLen < 0) ? 0 : (size_t)nUrlLen, &self->A_016L)) 
    if(!FileDownloader_easy_escape(cszUrl, 0, &self->A_016L))
    {
        printf("\n \n FileDownloader_SetDownload() step 3 failed: FileDownloader_easy_escape\n ");
        return 0;
    }

    printf("\n self->A_016L = %s ", self->A_016L);

    
    if(self->curl_handle == NULL)
    {
        printf("\n \n FileDownloader_SetDownload(); if(self->curl_handle == NULL) \n ");
        return 0;
    }


    printf("\n \n TEST TEST TEST TEST \n ");
    

    // 4. Configure the URL in cURL
    //if(curl_easy_setopt(self->curl_handle, 10002, self->A_016L) != CURLE_OK) 
    /*if(curl_easy_setopt(self->curl_handle, CURLOPT_URL, self->A_016L) != CURLE_OK) 
    {
        printf("\n \n FileDownloader_SetDownload() step 4 failed: curl_easy_setopt\n ");
        return 0;
    }*/

    
    // 5. Updates the current file (with lock)
    EnterCriticalSection(self->A_0368L);
        self->A_0320L = pFile;
    LeaveCriticalSection(self->A_0368L);
    

    return 1;
}

void FileDownloader_SetDownloadError(FileDownloader* self, CURLcode nResult)
{

    if(nResult != CURLE_OK)
    {
        if(nResult != CURLE_COULDNT_CONNECT &&   // 7
            nResult != CURLE_PARTIAL_FILE) // 18
        {
            if(nResult == CURLE_OPERATION_TIMEDOUT)  // 28
            { 
                EnterCriticalSection(&self->A_0320L->crit);
                self->A_0320L->A_08L = -1;
                LeaveCriticalSection(&self->A_0320L->crit);
                return;
            }
            if(nResult == CURLE_OBSOLETE)  // 42
            {
                EnterCriticalSection(&self->A_0320L->crit);
                self->A_0320L->A_08L = -2;
                LeaveCriticalSection(&self->A_0320L->crit);
                return;
            }
            if (nResult != CURLE_RECV_ERROR) // 56
            {
                DownloadFile num = *self->A_0320L;
                EnterCriticalSection(&self->A_0320L->crit);
                if(num.A_012L >= 400) 
                {
                    num.A_08L = 0;
                } 
                else 
                {
                    num.A_08L = (-10) - (int)nResult;
                }
                LeaveCriticalSection(&self->A_0320L->crit);
                return;
            }
        }
    
        EnterCriticalSection(&self->A_0320L->crit);
        self->A_0320L->A_08L = -3;
        LeaveCriticalSection(&self->A_0320L->crit);
    }
}

/* Callback function for writing received data */
size_t WriteFunction(void* ptr, 
                            size_t size, 
                            size_t nmemb, 
                            void* stream)
{
    
    
    return 0;
}



/* Function to prepare the downloader */
bool FileDownloader_Prepare(FileDownloader *self)
{

    // Checks if the cURL handle exists and is not already prepared
    if(self->curl_handle == NULL)
    {
        printf(" \n FileDownloader_Prepare() \n self->curl_handle == NULL) \n ");
        return 0;
    }

    if(self->A_0320L != 0) 
    {
        printf(" \n FileDownloader_Prepare() \n self->A_0320L != 0 \n ");

        return 0;
    }

    if(CurlSetDefaultOpt(self->curl_handle) != 0)
    {
        printf(" \n FileDownloader_Prepare() \n CurlSetDefaultOpt(self->curl_handle) != 0 \n");

        return 0;
    }
    
    // Set to not verify SSL (CURLOPT_SSL_VERIFYPEER = 43)
    if(curl_easy_setopt(self->curl_handle, 43, 0L) != CURLE_OK) 
    {
        printf(" \n FileDownloader_Prepare() \n curl_easy_setopt(self->curl_handle, 43, 0L) != CURLE_OK) \n");

        return 0;
    }

    // Configure progress function (CURLOPT_XFERINFOFUNCTION = 20056)
    if(curl_easy_setopt(self->curl_handle, 20056, &ProgressFunction) != CURLE_OK) 
    {
        printf(" \n FileDownloader_Prepare() \n curl_easy_setopt(self->curl_handle, 20056, &ProgressFunction) != CURLE_OK)  \n");

        return 0;
    }

    // Sets data for the progress callback (CURLOPT_XFERINFODATA = 10057)
    if(curl_easy_setopt(self->curl_handle, 10057, self) != CURLE_OK) 
    {
        printf(" \n FileDownloader_Prepare() \n curl_easy_setopt(self->curl_handle, 10057, self) != CURLE_OK)  \n");

        return 0;
    }

    // Configure write function (CURLOPT_WRITEFUNCTION = 20011)
    if(curl_easy_setopt(self->curl_handle, 20011, 
                        &WriteFunction) != CURLE_OK)
    {
        printf(" \n FileDownloader_Prepare() \n curl_easy_setopt(self->curl_handle, 20011, &WriteFunction) != CURLE_OK)  \n");

        return 0;
    }

    // Sets data for the write callback (CURLOPT_WRITEDATA = 10001)
    if(curl_easy_setopt(self->curl_handle, 10001, self) != CURLE_OK) 
    {
        printf(" \n FileDownloader_Prepare() \n curl_easy_setopt(self->curl_handle, 10001, self) != CURLE_OK)  \n");

        return 0;
    }

    return (curl_easy_setopt(self->curl_handle, 10010, self->A_064L) == CURLE_OK) ? 1 : 0;

}

FileDownloader* FileDownloader_ctor(FileDownloader* self)
{
    // *A_0 = ref <Module>.??_7FileDownloader@@6B@;
    // escape_string* ptr = A_0 + 16L;

    if(!self) 
    {

        return NULL;
    }

    // STEP 2
    self->A_016L = NULL;
    //self->curl_handle = NULL;
    //curl_easy_cleanup(self->curl_handle);
    
    // try 1
    {

        // shared_ptr<LocalFile>* ptr2 = A_0 + 336L;
        self->A_0336L = NULL;
        self->A_0336L = malloc(sizeof(LocalFile));
        memset(self->A_0336L, 0, sizeof(LocalFile));



        
        // try 2
        {
            // shared_ptr<MemoryFile>* ptr3 = A_0 + 352L;
            self->A_0352L = NULL;
            self->A_0352L = malloc(sizeof(MemoryFile));
            memset(self->A_0352L, 0, sizeof(MemoryFile));


            
            // try 3
            {
                
                self->download_speed = malloc(sizeof(DownloadSpeed));
                if(!self->download_speed) 
                {
                    printf("Falha ao alocar download_speed\n");
                    return NULL;
                }

                
                memset(self->download_speed, 0, sizeof(DownloadSpeed));
                

                DownloadSpeed_ctor(self->download_speed); // 408L*/

                printf("\n \n FileDownloader_ctor(); DownloadSpeed() OK \n ");

                
                // try 4
                { 

                    self->A_0368L = NULL;  
                    self->A_0368L = malloc(sizeof(CRITICAL_SECTION)); 
                    InitializeCriticalSection(self->A_0368L); // 368L // fixme! pointer error

                    self->curl_handle = curl_easy_init(); // 8L
                    if(!self->curl_handle) 
                    {
                        printf("\n \n FileDownloader_ctor() -> curl_handle() init problem !\n \n");
                        DeleteCriticalSection(self->A_0368L); // 368L
                        free(self->A_0368L);
                        curl_easy_cleanup(self->curl_handle);
                        return NULL;
                    }


                    self->A_064L = 0; // char
                    

                    self->A_0320L = 0;   // DownloadFile

                    
                    self->A_0328L = 0;   // HANDLE

                    
                } 
            }
        }
    }


    return self;
}

