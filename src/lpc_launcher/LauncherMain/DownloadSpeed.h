#ifndef _LAUNCHER_DOWNLOADSPEED_H_
#define _LAUNCHER_DOWNLOADSPEED_H_

#include<string.h>

#include<curl/curl.h>



/* Structure for download information */
typedef struct 
{
    long A_08L; // 

    long A_016L; //

    long A_024L; //

    long A_032L; //



    unsigned int size;
    unsigned int time;
} DOWNLOAD_INFO;


typedef struct
{
    DOWNLOAD_INFO* download_info; // +8L

    int A_048L;

    int A_052L;

    int A_056L; // 56L , int 

} DownloadSpeed;

/* Function to add download information and calculate speed */
void AddDownloadInfo(DownloadSpeed* self, 
                            unsigned int dwSize, 
                            unsigned int dwCurrTime);


DownloadSpeed* DownloadSpeed_ctor(DownloadSpeed* self);


















#endif /* _LAUNCHER_DOWNLOADSPEED_H_ */
