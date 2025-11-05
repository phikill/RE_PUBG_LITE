#ifndef _LOG_MANAGER_H_
#define _LOG_MANAGER_H_

#include<stdio.h>
#include<stddef.h>
#include<stdint.h>
#include<stdbool.h>

#include<windows.h>

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
int InitializeLogging(const char* appName);

void CleanupLogging(void);

void LogMessage(const char* fmt, ...);

void FormatError(wchar_t* buffer, 
					size_t size, 
                 	const wchar_t* errorTitle, 
                 	long error_code, 
                 	const wchar_t* current_file);


wchar_t* GetErrorTitle(wchar_t* self, unsigned int res_id);

wchar_t* GetErrorCodeFormat(wchar_t* self);

wchar_t* GetErrorMessageByID(wchar_t* self, unsigned int error_id);

wchar_t* GetErrorMessageByCode(wchar_t* self, long long error_code);

int is_string_empty(const wchar_t* str);

void UnescapeString_C89(wchar_t* dest, const wchar_t* src);

wchar_t* LoadStringFromResource(wchar_t* output_buffer,     // Buffer de saída (pré-alocado)
                                int buffer_size,            // Tamanho do buffer em caracteres
                                int resource_id,            // ID do recurso (ex: 101)
                                HINSTANCE hModule);         // Handle do módulo


char* WideToAnsi(const wchar_t* wideStr);


void ErrorMsgBox(unsigned int res_id, 
							long error_code, 
							wchar_t* current_file);


void ErrorMsg(int report_id, 
				unsigned int res_id, 
				long error_code, 
				wchar_t* current_file);
































#endif /* _LOG_MANAGER_H_ */
