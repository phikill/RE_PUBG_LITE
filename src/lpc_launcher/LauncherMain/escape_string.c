

#include"escape_string.h"

#include<stdlib.h>
#include<stddef.h>

int escape_string_resize(escape_string* self, size_t len)
{
    if (!self) 
    {
        printf("\nescape_string_resize(); if(!self)\n");
        return 0;
    }

    if (self->size >= len)
        return 1;

    char* new_data = NULL;

    if (self->data)
        new_data = realloc(self->data, len);
    else
        new_data = malloc(len);

    if (!new_data)
        return 0;

    self->data = new_data;
    self->size = len;
    return 1;
}


/*
int escape_string_resize(escape_string* self, unsigned long len)
{
    if(!self) 
    {
        printf("\n \n escape_string_resize(); if(!self) \n ");
        return 0;
    }

    if(self->size >= (long)len) 
    {
        return 1;
    }

    if(self->data) 
    {
        char* new_data = (char*)realloc(self->data, len);
        if (!new_data) return 0;
        self->data = new_data;
    } 
    else 
    {
        self->data = (char*)malloc(len);
        if (!self->data) return 0;
    }

    self->size = len;
    return 1;
}*/