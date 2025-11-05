#ifndef _LOCALFILE_H_
#define _LOCALFILE_H_


typedef struct LocalFile
{

	int A_08L; // status ?

	long A_016L;

	unsigned long A_024L; // file size

	CRITICAL_SECTION *A_032L;

	char *A_072L;

	void *A_0592L; // fileHandle

	HANDLE *A_0600L; // +600 mapping handle 

	unsigned long *A_0608L; // LPVOID ?

} LocalFile;

typedef struct
{
	LocalFile *ptr;
	int* ref_count;

} shared_LocalFile;


















#endif /* _LOCALFILE_H_ */
