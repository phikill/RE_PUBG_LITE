
#include<stdbool.h>
#include<stdint.h>

#include"SessionDto.h"



char *sessionID = NULL;
char *accountGUID = NULL;
char *email_ID = NULL;
char *provider_ID = NULL;

void setGlobal_String(char** target, const char* newValue)
{
    // libera o valor antigo, se houver
    if(*target)
    {
        free(*target);
        *target = NULL;
    }

    // se newValue for NULL ou vazio, apenas deixa a string vazia
    if(!newValue || newValue[0] == '\0')
    {
        return;
    }

    // aloca espaço e copia o novo valor
    *target = malloc(strlen(newValue) + 1);
    if(*target)
        strcpy(*target, newValue);
}

void clearGlobal_String(char **target)
{
	setGlobal_String(target, NULL);
}

