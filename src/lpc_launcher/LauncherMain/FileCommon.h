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




/* Creates directory and all necessary parents */
int FileCommon_CreatePath(const WCHAR* path);

/* Ensures that the parent path exists */
int FileCommon_EnsurePath(const WCHAR* filePath);

/* Delete file if it exists */
int FileCommon_DeleteFileIfExist(const WCHAR* filePath);

/* Delete directory recursively */
int FileCommon_DeleteDirectory(const WCHAR* dirPath);

/* Get file size by path */
LONGLONG FileCommon_GetFileSize(const WCHAR* filePath);

/* Get file size by handle */
LONGLONG FileCommon_GetFileSizeByHandle(HANDLE hFile);

/* Reads file in large chunks */
LONGLONG FileCommon_ReadFile(HANDLE hFile, void* buffer, LONGLONG bytesToRead);

/* Write file in large chunks */
LONGLONG FileCommon_WriteFile(HANDLE hFile, const void* buffer, LONGLONG bytesToWrite);

/* Check if file exists */
int FileCommon_FileExists(const WCHAR* filePath);

/* Checks if directory exists */
int FileCommon_DirectoryExists(const WCHAR* dirPath);













#endif /* _FILECOMMON_H_ */
