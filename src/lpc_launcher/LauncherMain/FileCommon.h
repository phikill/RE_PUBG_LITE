#ifndef _FILECOMMON_H_
#define _FILECOMMON_H_

#include<windows.h>
#include<shlwapi.h>
#include<stdio.h>
#include<string.h>

#pragma comment(lib, "shlwapi.lib")


#ifndef MAX_PATH_LEN
	#define MAX_PATH_LEN 260
#endif


typedef struct FileCommon_
{
    int (*CreatePath)(const WCHAR* path);
    int (*EnsurePath)(const WCHAR* filePath);
    int (*DeleteFileIfExist)(const WCHAR* filePath);
    int (*DeleteDirectory)(const WCHAR* dirPath);
    LONGLONG (*GetFileSize)(const WCHAR* filePath);
    LONGLONG (*GetFileSizeByHandle)(HANDLE hFile);
    LONGLONG (*ReadFile)(HANDLE hFile, void* buffer, LONGLONG bytesToRead);
    LONGLONG (*WriteFile)(HANDLE hFile, const void* buffer, LONGLONG bytesToWrite);
} FileCommon_;


int FileCommon_CreatePath(const WCHAR* path);
int FileCommon_EnsurePath(const WCHAR* filePath);
int FileCommon_DeleteFileIfExist(const WCHAR* filePath);
int FileCommon_DeleteDirectory(const WCHAR* dirPath);
LONGLONG FileCommon_GetFileSize(const WCHAR* filePath);
LONGLONG FileCommon_GetFileSizeByHandle(HANDLE hFile);
LONGLONG FileCommon_ReadFile(HANDLE hFile, void* buffer, LONGLONG bytesToRead); 
LONGLONG FileCommon_WriteFile(HANDLE hFile, const void* buffer, LONGLONG bytesToWrite);

int FileCommon_FileExists(const WCHAR* filePath);
int FileCommon_DirectoryExists(const WCHAR* dirPath);

FileCommon_ FileCommon = {  .CreatePath           = FileCommon_CreatePath,
							.EnsurePath           = FileCommon_EnsurePath,
							.DeleteFileIfExist    = FileCommon_DeleteFileIfExist,
							.DeleteDirectory      = FileCommon_DeleteDirectory,
							.GetFileSize          = FileCommon_GetFileSize,
							.GetFileSizeByHandle  = FileCommon_GetFileSizeByHandle,
							.ReadFile             = FileCommon_ReadFile,
							.WriteFile            = FileCommon_WriteFile
						};

/* Cria diretório e todos os pais necessários */
int FileCommon_CreatePath(const WCHAR* path)
{
    DWORD attrs;
    
    if(!path) return 0;
    
    attrs = GetFileAttributesW(path);
    
    if(attrs == INVALID_FILE_ATTRIBUTES) 
    {
        /* Diretório não existe, tenta criar */
        if(!FileCommon_EnsurePath(path)) 
        {
            return 0;
        }
        
        if(!CreateDirectoryW(path, NULL)) 
        {
            DWORD error = GetLastError();
            if (error != ERROR_ALREADY_EXISTS) 
            {
                return 0;
            }
        }
    } 
    else if(!(attrs & FILE_ATTRIBUTE_DIRECTORY)) 
    {
        /* Existe mas não é diretório */
        return 0;
    }
    
    return 1;
}

/* Garante que o caminho pai existe */
int FileCommon_EnsurePath(const WCHAR* filePath)
{
    WCHAR pathCopy[MAX_PATH_LEN];
    WCHAR* lastSlash;
    
    if (!filePath) return 0;
    
    wcsncpy(pathCopy, filePath, MAX_PATH_LEN - 1);
    pathCopy[MAX_PATH_LEN - 1] = L'\0';
    
    lastSlash = wcsrchr(pathCopy, L'\\');
    if(!lastSlash) 
    {
        return 1; /* Sem caminho pai */
    }
    
    *lastSlash = L'\0';
    return FileCommon_CreatePath(pathCopy);
}

/* Deleta arquivo se existir */
int FileCommon_DeleteFileIfExist(const WCHAR* filePath)
{
    DWORD attrs;
    
    if(!filePath) return 0;
    
    attrs = GetFileAttributesW(filePath);
    
    /* Remove atributo read-only se presente */
    if(attrs != INVALID_FILE_ATTRIBUTES && (attrs & FILE_ATTRIBUTE_READONLY)) 
    {
        SetFileAttributesW(filePath, attrs & ~FILE_ATTRIBUTE_READONLY);
    }
    
    if(!DeleteFileW(filePath)) 
    {
        DWORD error = GetLastError();
        
        if(error == ERROR_FILE_NOT_FOUND || error == ERROR_PATH_NOT_FOUND) 
        {
            return 1; /* Arquivo não existe, consideramos sucesso */
        }
        
        /* Se é diretório, tenta deletar como diretório */
        if(GetFileAttributesW(filePath) & FILE_ATTRIBUTE_DIRECTORY) 
        {
            return FileCommon_DeleteDirectory(filePath);
        }
        
        return 0;
    }
    
    return 1;
}

/* Deleta diretório recursivamente */
int FileCommon_DeleteDirectory(const WCHAR* dirPath)
{
    WCHAR searchPath[MAX_PATH_LEN];
    WIN32_FIND_DATAW findData;
    HANDLE hFind;
    
    if(!dirPath) return 0;
    
    /* Constrói padrão de busca */
    swprintf(searchPath, MAX_PATH_LEN, L"%s\\*.*", dirPath);
    
    hFind = FindFirstFileW(searchPath, &findData);
    
    if(hFind == INVALID_HANDLE_VALUE) 
    {
        /* Diretório vazio ou não existe */
        if(!RemoveDirectoryW(dirPath)) 
        {
            DWORD error = GetLastError();
            if(error != ERROR_FILE_NOT_FOUND && error != ERROR_PATH_NOT_FOUND) 
            {
                return 0;
            }
        }
        return 1;
    }
    
    do 
    {
    	WCHAR fullPath[MAX_PATH_LEN];

        /* Pula . e .. */
        if(wcscmp(findData.cFileName, L".") == 0 || 
            wcscmp(findData.cFileName, L"..") == 0) 
        {
            continue;
        }
        
        /* Constrói caminho completo */
        swprintf(fullPath, MAX_PATH_LEN, L"%s\\%s", dirPath, findData.cFileName);
        
        if(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) 
        {
            /* É diretório, deleta recursivamente */
            if(!FileCommon_DeleteDirectory(fullPath)) 
            {
                FindClose(hFind);
                return 0;
            }
        } 
        else 
        {
            /* É arquivo, deleta */
            if(!FileCommon_DeleteFileIfExist(fullPath)) 
            {
                FindClose(hFind);
                return 0;
            }
        }
        
    } while (FindNextFileW(hFind, &findData));
    
    FindClose(hFind);
    
    /* Remove o diretório vazio */
    if(!RemoveDirectoryW(dirPath)) 
    {
        DWORD error = GetLastError();
        if(error != ERROR_FILE_NOT_FOUND && error != ERROR_PATH_NOT_FOUND) 
        {
            return 0;
        }
    }
    
    return 1;
}

/* Obtém tamanho do arquivo por caminho */
LONGLONG FileCommon_GetFileSize(const WCHAR* filePath)
{
    WIN32_FILE_ATTRIBUTE_DATA fileData;
    LARGE_INTEGER size;
    
    if(!filePath) return -1;
    
    if(!GetFileAttributesExW(filePath, GetFileExInfoStandard, &fileData)) 
    {
        return -1;
    }
    
    size.HighPart = fileData.nFileSizeHigh;
    size.LowPart = fileData.nFileSizeLow;
    
    return size.QuadPart;
}

/* Obtém tamanho do arquivo por handle */
LONGLONG FileCommon_GetFileSizeByHandle(HANDLE hFile)
{
    LARGE_INTEGER size;
    
    if (hFile == INVALID_HANDLE_VALUE) return -1;
    
    if (!GetFileSizeEx(hFile, &size)) 
    {
        return -1;
    }
    
    return size.QuadPart;
}

/* Lê arquivo em chunks grandes */
LONGLONG FileCommon_ReadFile(HANDLE hFile, void* buffer, LONGLONG bytesToRead)
{
    LONGLONG totalRead = 0;
    DWORD bytesRead;
    
    if(hFile == INVALID_HANDLE_VALUE || !buffer || bytesToRead <= 0) 
    {
        return -1;
    }
    
    while(totalRead < bytesToRead) 
    {
        LONGLONG remaining = bytesToRead - totalRead;
        DWORD chunkSize = (remaining > 0x7FFFFFFF) ? 0x7FFFFFFF : (DWORD)remaining;
        
        if(!ReadFile(hFile, (BYTE*)buffer + totalRead, chunkSize, &bytesRead, NULL)) 
        {
            return -1; /* Erro de leitura */
        }
        
        if(bytesRead != chunkSize) 
        {
            /* Leitura parcial - fim do arquivo */
            return totalRead + bytesRead;
        }
        
        totalRead += bytesRead;
    }
    
    return totalRead;
}

/* Escreve arquivo em chunks grandes */
LONGLONG FileCommon_WriteFile(HANDLE hFile, const void* buffer, LONGLONG bytesToWrite)
{
    LONGLONG totalWritten = 0;
    DWORD bytesWritten;
    
    if(hFile == INVALID_HANDLE_VALUE || !buffer || bytesToWrite <= 0) 
    {
        return -1;
    }
    
    while(totalWritten < bytesToWrite) 
    {
        LONGLONG remaining = bytesToWrite - totalWritten;
        DWORD chunkSize = (remaining > 0x7FFFFFFF) ? 0x7FFFFFFF : (DWORD)remaining;
        
        if(!WriteFile(hFile, (const BYTE*)buffer + totalWritten, chunkSize, &bytesWritten, NULL)) 
        {
            return -1; /* Erro de escrita */
        }
        
        if(bytesWritten != chunkSize) 
        {
            /* Escrita parcial */
            return totalWritten + bytesWritten;
        }
        
        totalWritten += bytesWritten;
    }
    
    return totalWritten;
}



/* Verifica se arquivo existe */
int FileCommon_FileExists(const WCHAR* filePath)
{
    DWORD attrs;
    
    if(!filePath) return 0;
    
    attrs = GetFileAttributesW(filePath);
    return (attrs != INVALID_FILE_ATTRIBUTES && !(attrs & FILE_ATTRIBUTE_DIRECTORY));
}

/* Verifica se diretório existe */
int FileCommon_DirectoryExists(const WCHAR* dirPath)
{
    DWORD attrs;
    
    if (!dirPath) return 0;
    
    attrs = GetFileAttributesW(dirPath);
    return (attrs != INVALID_FILE_ATTRIBUTES && (attrs & FILE_ATTRIBUTE_DIRECTORY));
}













#endif /* _FILECOMMON_H_ */
