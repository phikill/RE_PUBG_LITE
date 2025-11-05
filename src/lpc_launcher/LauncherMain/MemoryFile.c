

#include"MemoryFile.h"


void MemoryFile_Close(MemoryFile* self)
{
}

bool MemoryFile_FlushFileData(MemoryFile* self)
{
	return 1;
}


void MemoryFile_GetDstFilePath(MemoryFile* self, char* wszFilePath, int nLen)
{
}

unsigned char MemoryFile_GetFileBuffer(MemoryFile* self)
{

	return 0;
}

bool MemoryFile_ResetFilePointer(MemoryFile* self)
{

	return 1;
}

bool MemoryFile_SetFullSize(MemoryFile* self, long nFullSize)
{

	return 1;
}


bool MemoryFile_WriteFileData(MemoryFile* self, 
								unsigned char* pBuffer, 
								unsigned int dwSize)
{

	return 0;
}