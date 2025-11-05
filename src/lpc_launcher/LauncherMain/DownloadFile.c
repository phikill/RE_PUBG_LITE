


#include"DownloadFile.h"






int IsDownloadFailed(struct DownloadFile* A_0)
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

DownloadFile* DownloadFile_ctor(DownloadFile* self)
{

    //self->crit = malloc(sizeof(CRITICAL_SECTION));
    InitializeCriticalSection(&self->crit);

    self->A_08L = 0;
    self->A_012L = 0;
    self->A_016L = 0;
    self->A_024L = 0;


    return self;
}


