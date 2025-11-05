#ifndef _MEMORYFILE_H_
#define _MEMORYFILE_H_

#include<windows.h>
#include<stdbool.h>

typedef struct MemoryFile
{

	int A_08L; // 8L
	int A_012L; // 12L

	unsigned long A_016L; // 16L
	unsigned long A_024L; // 24L

	CRITICAL_SECTION crit; // 32L

	unsigned long A_072L; // 72L

} MemoryFile;

typedef struct
{
	MemoryFile *ptr; // +0
	int* ref_count;  // +8
} shared_MemoryFile;

void MemoryFile_Close(MemoryFile* self);

bool MemoryFile_FlushFileData(MemoryFile* self);


void MemoryFile_GetDstFilePath(MemoryFile* 	self, 
								char* 		wszFilePath, 
								int 		nLen);

unsigned char MemoryFile_GetFileBuffer(MemoryFile* self);

bool MemoryFile_ResetFilePointer(MemoryFile* self);

bool MemoryFile_SetFullSize(MemoryFile* self, 
							long 		nFullSize);

bool MemoryFile_WriteFileData(MemoryFile* 		self, 
								unsigned char* 	pBuffer, 
								unsigned int 	dwSize);

















#endif /* _MEMORYFILE_H_ */
