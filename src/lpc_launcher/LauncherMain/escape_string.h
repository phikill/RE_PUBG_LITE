#ifndef _escape_string_h_
#define _escape_string_h_


typedef struct 
{
    char* data; // +0
    
    #ifdef __WATCOMC__
        unsigned long size; // +8
    #else
        size_t size; //+8
    #endif    
} escape_string;



int escape_string_resize(escape_string* self, size_t len);

//int escape_string_resize(escape_string* self, unsigned long len);




















#endif /* _escape_string_h_ */
