

#include"FileCommon.h"

FileCommon_ FileCommon = {  .CreatePath           = FileCommon_CreatePath,
                            .EnsurePath           = FileCommon_EnsurePath,
                            .DeleteFileIfExist    = FileCommon_DeleteFileIfExist,
                            .DeleteDirectory      = FileCommon_DeleteDirectory,
                            .GetFileSize          = FileCommon_GetFileSize,
                            .GetFileSizeByHandle  = FileCommon_GetFileSizeByHandle,
                            .ReadFile             = FileCommon_ReadFile,
                            .WriteFile            = FileCommon_WriteFile
                        };

/* Creates directory and all necessary parents */
int FileCommon_CreatePath(const WCHAR* path)
{
    DWORD attrs;
    
    if(!path) return 0;
    
    attrs = GetFileAttributesW(path);
    
    if(attrs == INVALID_FILE_ATTRIBUTES) 
    {
        /* Directory does not exist, try to create it */
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
        /* It exists but is not a directory */
        return 0;
    }
    
    return 1;
}

/* Ensures that the parent path exists */
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
        return 1; /* No way father */
    }
    
    *lastSlash = L'\0';
    return FileCommon_CreatePath(pathCopy);
}

/* Delete file if it exists */
int FileCommon_DeleteFileIfExist(const WCHAR* filePath)
{
    DWORD attrs;
    
    if(!filePath) return 0;
    
    attrs = GetFileAttributesW(filePath);
    
    /* Remove read-only attribute if present */
    if(attrs != INVALID_FILE_ATTRIBUTES && (attrs & FILE_ATTRIBUTE_READONLY)) 
    {
        SetFileAttributesW(filePath, attrs & ~FILE_ATTRIBUTE_READONLY);
    }
    
    if(!DeleteFileW(filePath)) 
    {
        DWORD error = GetLastError();
        
        if(error == ERROR_FILE_NOT_FOUND || error == ERROR_PATH_NOT_FOUND) 
        {
            return 1; /* File does not exist, we consider it successful */
        }
        
        /* If it is a directory, try deleting it as a directory */
        if(GetFileAttributesW(filePath) & FILE_ATTRIBUTE_DIRECTORY) 
        {
            return FileCommon_DeleteDirectory(filePath);
        }
        
        return 0;
    }
    
    return 1;
}

/* Delete directory recursively */
int FileCommon_DeleteDirectory(const WCHAR* dirPath)
{
    WCHAR searchPath[MAX_PATH_LEN];
    WIN32_FIND_DATAW findData;
    HANDLE hFind;
    
    if(!dirPath) return 0;
    
    /* Builds search pattern */
    swprintf(searchPath, MAX_PATH_LEN, L"%s\\*.*", dirPath);
    
    hFind = FindFirstFileW(searchPath, &findData);
    
    if(hFind == INVALID_HANDLE_VALUE) 
    {
        /* Directory is empty or does not exist */
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

        /* Jump . and .. */
        if(wcscmp(findData.cFileName, L".") == 0 || 
            wcscmp(findData.cFileName, L"..") == 0) 
        {
            continue;
        }
        
        /* Builds complete path */
        swprintf(fullPath, MAX_PATH_LEN, L"%s\\%s", dirPath, findData.cFileName);
        
        if(findData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) 
        {
            /* It is directory, delete recursively */
            if(!FileCommon_DeleteDirectory(fullPath)) 
            {
                FindClose(hFind);
                return 0;
            }
        } 
        else 
        {
            /* It's a file, delete it */
            if(!FileCommon_DeleteFileIfExist(fullPath)) 
            {
                FindClose(hFind);
                return 0;
            }
        }
        
    } while (FindNextFileW(hFind, &findData));
    
    FindClose(hFind);
    
    /* Remove empty directory */
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

/* Get file size by path */
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

/* Get file size by handle */
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

/* Reads file in large chunks */
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
            return -1; /* Reading error */
        }
        
        if(bytesRead != chunkSize) 
        {
            /* Partial reading - end of file */
            return totalRead + bytesRead;
        }
        
        totalRead += bytesRead;
    }
    
    return totalRead;
}

/* Write file in large chunks */
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
            return -1; /* Writing error */
        }
        
        if(bytesWritten != chunkSize) 
        {
            /* Partial writing */
            return totalWritten + bytesWritten;
        }
        
        totalWritten += bytesWritten;
    }
    
    return totalWritten;
}



/* Check if file exists */
int FileCommon_FileExists(const WCHAR* filePath)
{
    DWORD attrs;
    
    if(!filePath) return 0;
    
    attrs = GetFileAttributesW(filePath);
    return (attrs != INVALID_FILE_ATTRIBUTES && !(attrs & FILE_ATTRIBUTE_DIRECTORY));
}

/* Checks if directory exists */
int FileCommon_DirectoryExists(const WCHAR* dirPath)
{
    DWORD attrs;
    
    if (!dirPath) return 0;
    
    attrs = GetFileAttributesW(dirPath);
    return (attrs != INVALID_FILE_ATTRIBUTES && (attrs & FILE_ATTRIBUTE_DIRECTORY));
}



