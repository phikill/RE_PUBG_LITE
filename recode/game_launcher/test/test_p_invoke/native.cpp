// native.cpp
#include<stdio.h>

extern "C" __declspec(dllexport) int Add(int a, int b) 
{
    printf("cavalo \n");

    while(1)
    {
        printf("Loop");
    }

    return a + b;
}