#ifndef _MEMORYFILE_H_
#define _MEMORYFILE_H_


typedef struct MemoryFile
{
	int i;
} MemoryFile;

typedef struct
{
	MemoryFile *ptr; // +0
	int* ref_count;  // +8
} shared_MemoryFile;

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

















#endif /* _MEMORYFILE_H_ */
