#ifndef _LOG_MANAGER_H_
#define _LOG_MANAGER_H_

#include<stdint.h>

/* Basic structures for logging */
typedef struct 
{
    int enabled;
    FILE* logFile;
} LogSystem;

/* Global variables */
static LogSystem g_logSystem = {0, NULL};
static char g_logFileName[MAX_PATH];

/* Implementation of auxiliary functions */
static int InitializeLogging(const char* appName)
{

    char* dot;
    char baseName[MAX_PATH];
    char* lastSlash = strrchr(appName, '\\');

    if(lastSlash) 
    {
        appName = lastSlash + 1;
    }

    strncpy(baseName, appName, sizeof(baseName));
    baseName[sizeof(baseName)-1] = '\0';

    dot = strrchr(baseName, '.');
    if(dot) 
    {
        *dot = '\0';
    }

    /* Constructs log file name */
    sprintf(g_logFileName, "%s.log", baseName);
    

    return 0;
}

static void CleanupLogging(void)
{
    if (g_logSystem.logFile) 
    {
        CloseHandle(g_logSystem.logFile);
        g_logSystem.logFile = NULL;
    }
    g_logSystem.enabled = 0;
}


static void LogMessage(const char* fmt, ...)
{
    FILE* logFile;
    SYSTEMTIME st;
    char messageBuffer[1024];
    va_list args;

    if (!g_logFileName[0])
    {
        return;
    }

    logFile = fopen(g_logFileName, "a");
    if (!logFile)
    {
        return;
    }

    GetLocalTime(&st);

    // Processa argumentos variáveis
    va_start(args, fmt);
    vsnprintf(messageBuffer, sizeof(messageBuffer), fmt, args);
    va_end(args);

    fprintf(logFile, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            st.wYear, st.wMonth, st.wDay,
            st.wHour, st.wMinute, st.wSecond,
            messageBuffer);

    fclose(logFile);

    printf("[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            st.wYear, st.wMonth, st.wDay,
            st.wHour, st.wMinute, st.wSecond,
            messageBuffer);
}

void FormatError(wchar_t* buffer, 
					size_t size, 
                 	const wchar_t* errorTitle, 
                 	long error_code, 
                 	const wchar_t* current_file) 
{
    
    // Formata a mensagem completa
    swprintf(buffer, size, 
             L"%ls][%ld][%ls", 
             errorTitle, error_code, current_file);
}


static wchar_t* GetErrorTitle(wchar_t* self, unsigned int res_id)
{
	HMODULE hModule = GetModuleHandleW(NULL);  // Obtém handle do módulo atual

	wchar_t* loaded_string = NULL;
    wchar_t temp_buffer[256];  // Buffer temporário (ajuste o tamanho conforme necessário)

    // Carrega string do recurso (ID + 1000)
    int length = LoadStringW(hModule, res_id + 1000, temp_buffer, sizeof(temp_buffer)/sizeof(wchar_t));
    
    if(length > 0) 
    {
        // Copia a string para o buffer de saída
        wcscpy(self, temp_buffer);
    } 
    else 
    {
        // String não encontrada - define string vazia
        self[0] = L'\0';
    }

    return self;
}


wchar_t* GetErrorCodeFormat(wchar_t* self)
{

    HMODULE hModule = GetModuleHandleW(NULL);
    wchar_t temp_buffer[512];
    int i = 0;
    int j = 0;
    
    // 1. Carrega string do recurso (ID 1000)
    if(LoadStringW(hModule, 1000, temp_buffer, sizeof(temp_buffer)/sizeof(wchar_t)) == 0) 
    {
        self[0] = L'\0'; // Falha: retorna string vazia
        return self;
    }

    // 2. Processamento adicional (ex: remover escapes)
    // (Aqui você implementaria UnescapeString se necessário)
    for(i = 0, j = 0; temp_buffer[i]; i++) 
    {
        if(temp_buffer[i] != L'\\') // Exemplo simples: remove backslashes
        {
            self[j++] = temp_buffer[i];
        }
    }
    
    return self;
}


static wchar_t* GetErrorMessageByID(wchar_t* self, unsigned int error_id)
{
    HMODULE hModule = GetModuleHandleW(NULL);
    wchar_t temp_buffer[512];
    wchar_t processed_buffer[512];
    int i, j;

    // 1. Load string from resources (ID = error_id + 2000)
    if(LoadStringW(hModule, error_id + 2000, temp_buffer, 
                   sizeof(temp_buffer)/sizeof(wchar_t))) 
    {
        
        // 2. Unescape string (simple implementation)
        for(i = 0, j = 0; temp_buffer[i] != L'\0'; i++) 
        {
            if(temp_buffer[i] == L'\\') 
            {
                // Handle escape sequences
                switch(temp_buffer[++i]) 
                {
                    case L'n': processed_buffer[j++] = L'\n'; break;
                    case L't': processed_buffer[j++] = L'\t'; break;
                    // Add other escape sequences as needed
                    default: processed_buffer[j++] = temp_buffer[i]; break;
                }
            } 
            else 
            {
                processed_buffer[j++] = temp_buffer[i];
            }
        }
        processed_buffer[j] = L'\0';
        
        // 3. Copy to output
        wcscpy(self, processed_buffer);
    } 
    else 
    {
        // 4. On failure: empty string
        self[0] = L'\0';
    }
    
    return self;

}

static wchar_t* GetErrorMessageByCode(wchar_t* self, long long error_code)
{
    unsigned int high_bits = (unsigned int)((unsigned long long)error_code >> 32);

    // If high 32 bits contain an error ID
    if(high_bits > 0) 
    {
        return GetErrorMessageByID(self, high_bits);
    }

    // Default empty string
    self[0] = L'\0';
    return self;

}

int is_string_empty(const wchar_t* str) {
    return str[0] == L'\0';  // Verifica primeiro caractere
}

void UnescapeString_C89(wchar_t* dest, const wchar_t* src) 
{
    
    int i = 0, j = 0;
    if (!dest || !src) return;
    
    
    while(src[i] != L'\0') 
    {
        if(src[i] == L'\\') 
        {
            switch (src[++i]) 
            {
                case L'n':  dest[j++] = L'\n'; break;
                case L't':  dest[j++] = L'\t'; break;
                case L'\\': dest[j++] = L'\\'; break;
                case L'\"': dest[j++] = L'\"'; break;
                case L'\'': dest[j++] = L'\''; break;
                case L'r':  dest[j++] = L'\r'; break;
                default:    dest[j++] = src[i]; break; // Mantém o escape desconhecido
            }
            i++;
        } 
        else 
        {
            dest[j++] = src[i++];
        }
    }
    dest[j] = L'\0'; // Terminador nulo
}

wchar_t* LoadStringFromResource(wchar_t* output_buffer,  // Buffer de saída (pré-alocado)
                                int buffer_size,         // Tamanho do buffer em caracteres
                                int resource_id,         // ID do recurso (ex: 101)
                                HINSTANCE hModule)        // Handle do módulo
                                 
{
    // 1. Carrega a string do recurso
    int chars_copied = LoadStringW(hModule,
                                    resource_id,
                                    output_buffer,
                                    buffer_size);

    // 2. Verifica se falhou
    if(chars_copied == 0) 
    {
        output_buffer[0] = L'\0'; // Retorna string vazia
    }

    // 3. Retorna o ponteiro para conveniência
    return output_buffer;
}

char* WideToAnsi(const wchar_t* wideStr) 
{
    char* ansiStr;
    int ansiSize;

    if(wideStr == NULL) 
    {
        return NULL;
    }

    // 1. Calcula o tamanho necessário para a string ANSI
    ansiSize = WideCharToMultiByte(CP_ACP,                 // Codepage ANSI
                                    0,                     // Flags (nenhum)
                                    wideStr,               // String wide de origem
                                    -1,                    // Tamanho automático (até o null-terminator)
                                    NULL,                  // Buffer de saída (NULL para cálculo)
                                    0,                     // Tamanho do buffer (0 para cálculo)
                                    NULL,                  // Caractere padrão (NULL)
                                    NULL);                 // Indica se caractere padrão foi usado

    if(ansiSize == 0) 
    {
        return NULL;
    }

    // 2. Aloca memória para a string ANSI
    ansiStr = (char*)malloc(ansiSize);
    if(ansiStr == NULL) 
    {
        return NULL;
    }

    // 3. Faz a conversão real
    if(WideCharToMultiByte(CP_ACP,
                            0,
                            wideStr,
                            -1,
                            ansiStr,
                            ansiSize,
                            NULL,
                            NULL) == 0) 
    {
        free(ansiStr);
        return NULL;
    }

    return ansiStr;
}


static void ErrorMsgBox(unsigned int res_id, 
							long error_code, 
							wchar_t* current_file)
{

    wchar_t STRING_1[512] = {0};

    GetErrorCodeFormat(&STRING_1);

    // try 1
    {
        wchar_t STRING_2[512] = {0};

        GetErrorTitle(&STRING_2, res_id);

        // try 2
        {
            wchar_t STRING_3[512] = {0};

            GetErrorMessageByCode(&STRING_3, error_code);

            // try 3
            {
                wchar_t STRING_7[512] = {0};
                char* ptr;

                if(STRING_3[0] == L'\0') // empty
                {
                    wchar_t STRING_4[512];

                    wchar_t* errorMessageByID = GetErrorMessageByID(&STRING_4, res_id);

                    // try 4
                    {
                        wcscpy(STRING_3, errorMessageByID);
                    }

                    // try 5
                    {

                    }

                }


                if(!is_string_empty(STRING_1) && 
                   !is_string_empty(STRING_2) && 
                   !is_string_empty(STRING_3)) 
                {// contain content
                    
                    if(is_string_empty(current_file))
                    {
                        ptr = (char*)L"none"; // Usa string padrão "none"
                    }
                    else
                    {
                        char* ptr2 = (char*)current_file;
            
                        if(wcslen(current_file) >= 8)
                        {
                            char buffer[512];
                            char *ptr2;

                            WideCharToMultiByte(CP_ACP, 0, current_file, -1, buffer, sizeof(buffer), NULL, NULL);
                            ptr2 = buffer;
                        }
                        ptr = ptr2;
                    }

                    swprintf(STRING_1, 512, L"Erro %d: %s", error_code, ptr);

                    MessageBoxW(NULL, STRING_3, STRING_2, 16);

                }
                else
                {// empty content

                    wchar_t STRING_5[512] = {0};


                    wchar_t* ptr7 = LoadStringFromResource(&STRING_5, 512, res_id, GetModuleHandle(NULL));

                    /*
                    if(!LoadStringW(GetModuleHandle(NULL), res_id, STRING_5, 512)) 
                    {
                        STRING_5[0] = L'\0'; // Retorna string vazia se falhar
                        return;
                    }*/


                    // try 6
                    {

                        //wchar_t STRING_6[512] = {0};

                        wchar_t* ptr8 = ptr7;

                        wchar_t* STRING_6 = (wchar_t*)malloc((wcslen(ptr8) + 1) * sizeof(wchar_t));
                        wcscpy(STRING_6, ptr8);


                        // try 7
                        {
                            //UnescapeString_C89(&STRING_7, STRING_6);
                            UnescapeString_C89(STRING_7, STRING_6);
                        }

                        // try 8
                        {
                            // try 9
                            {
                                free(STRING_6);
                            }

                        }

                    }

                    // try 10
                    {
                        wchar_t STRING_8[512] = {0};
                        wchar_t* ptr9;
                        //wchar_t* ptr11;
                        //wchar_t* ptr12;
                        char* ptr13;
                        char* ansiString;

                        wchar_t W2BUFFER[2048] = {0};

                        // try 11
                        {
                            free(STRING_5);
                        }


                        if(current_file == NULL || current_file[0] == L'\0')
                        {
                            ptr9 = L"none";
                        }
                        else
                        {
                            ptr9 = current_file;
                        }


                        //ptr11 = STRING_7;

                        swprintf(W2BUFFER, 1024, STRING_7, error_code, ptr9);

                        LoadStringFromResource(STRING_8, 512, 111, GetModuleHandle(NULL));

                        ansiString = WideToAnsi(STRING_7);
                        printf("String ANSI: %s\n", ansiString);
                        free(ansiString);  // Libera a memória alocada


                        // try 12
                        {
                            //ptr13 = ptr12;
                            /*ptr13 = (char*)ptr12;
                            if(!ptr12 == NULL || !ptr12[0] == L'\0')
                            {

                            }*/

                            MessageBoxW(NULL, W2BUFFER, STRING_8, 16);
                        }

                        // try 13
                        {
                            free(STRING_8);
                        }

                    }
                }
            }
        }
    }
}

static void ErrorMsg(int report_id, 
						unsigned int res_id, 
						long error_code, 
						wchar_t* current_file)
{


	unsigned int num = 0;

	// try 1
	{
		// try 2
		{
			//wchar_t* STRING_2;
			wchar_t errorTitle[512];
			

			//errorTitle = GetErrorTitle(STRING_2, res_id);

			GetErrorTitle(errorTitle, res_id);

			printf(" \n titulo de erro: %s \n", errorTitle);


			// try 3
			{
				wchar_t* formated_msg1;
				/*FormatError(formated_msg1, 
							512, 
							errorTitle, 
							error_code, 
							current_file);*/

			}

			// try 4
			{

			}

			// try 5
			{

			}

			// try 6
			{

			}

		}

		ErrorMsgBox(res_id, error_code, current_file);

	}

	/*
	wchar_t formatted_msg[1024];
	FILE* log;

	// 1. Formata a mensagem básica
    swprintf(formatted_msg, sizeof(formatted_msg)/sizeof(wchar_t),
             L"[%d][%u] Error %ld in file: %ls", 
             report_id, res_id, error_code, current_file);

    // 2. Log em arquivo (se habilitado)
    log = fopen("error.log", "a");
    if(log) 
    {
        fwprintf(log, L"%ls\n", formatted_msg);
        fclose(log);
    }

    // 3. Exibe caixa de mensagem
    MessageBoxW(NULL, formatted_msg, L"Error", MB_ICONERROR | MB_OK);*/

}
































#endif /* _LOG_MANAGER_H_ */
