#ifndef _LAUNCHER_DOWNLOADFILE_H_
#define _LAUNCHER_DOWNLOADFILE_H_

#include<windows.h>

typedef struct DownloadFile 
{

    int A_08L; // 8L
    int A_012L; // 12L
    unsigned long A_016L; // 16L
    unsigned long A_024L; // 24L

    //CRITICAL_SECTION *crit; // 32L
    CRITICAL_SECTION crit; // 32L
} DownloadFile;

int IsDownloadFailed(struct DownloadFile* A_0);


DownloadFile* DownloadFile_ctor(DownloadFile* self);






#endif /* _LAUNCHER_DOWNLOADFILE_H_ */
