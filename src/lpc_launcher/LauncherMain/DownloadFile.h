#ifndef _LAUNCHER_DOWNLOADFILE_H_
#define _LAUNCHER_DOWNLOADFILE_H_

#include<windows.h>

typedef struct DownloadFile 
{

    int A_08L; // 8L
    int A_012L; // 12L
    long A_016L; // 16L
    long A_024L; // 24L

    CRITICAL_SECTION crit; // 32L
} DownloadFile;

static int IsDownloadFailed(struct DownloadFile* A_0)
{
    EnterCriticalSection(&A_0->crit);

    if(A_0->A_012L >= 400)
    {
        LeaveCriticalSection(&A_0->crit);
        return 1;
    }

    LeaveCriticalSection(&A_0->crit);
    return 0;
}

static DownloadFile* DownloadFile_ctor(DownloadFile* self)
{

    InitializeCriticalSection(&self->crit);

    self->A_08L = 0;
    self->A_012L = 0;
    self->A_016L = 0;
    self->A_024L = 0;

    return self;
}




















#endif /* _LAUNCHER_DOWNLOADFILE_H_ */
