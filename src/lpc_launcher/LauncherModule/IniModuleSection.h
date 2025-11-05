#ifndef _INIMODULESECTION_H_
#define _INIMODULESECTION_H_

#include<stdlib.h>
#include<wchar.h>



/* Estrutura simplificada do IniModuleSection */
typedef struct 
{
    wchar_t* string1;      // Offset +0
    size_t length1;        // Offset +16
    size_t capacity1;      // Offset +24
    
    wchar_t* string2;      // Offset +40
    size_t length2;        // Offset +56
    size_t capacity2;      // Offset +64
    
    /* ... mais strings ... (total de 15 strings baseado no código original) */
} IniModuleSection;



/* Função construtora simplificada */
IniModuleSection* IniModuleSection_ctor(IniModuleSection* section) 
{
	int i = 0;

    if(section == NULL) 
    {
        return NULL;
    }

    /* Inicializa todas as strings da estrutura */
    for(i = 0; i < 15; i++) 
    {
        size_t offset = i * 32; // Cada string ocupa 32 bytes (baseado nos offsets)
        wchar_t** str_ptr = (wchar_t**)((char*)section + offset);
        size_t* len_ptr = (size_t*)((char*)section + offset + 16);
        size_t* cap_ptr = (size_t*)((char*)section + offset + 24);

        *str_ptr = NULL;
        *len_ptr = 0;
        *cap_ptr = 7; // Capacidade inicial pequena (SSO - Small String Optimization)
    }

    return section;
}

/* Função destrutora simplificada */
void IniModuleSection_dtor(IniModuleSection* section) 
{
	int i = 0;
	
    if(section == NULL) 
    {
        return;
    }

    /* Libera todas as strings da estrutura */
    for(i = 0; i < 15; i++) 
    {
        size_t offset = i * 32; // Cada string ocupa 32 bytes
        wchar_t** str_ptr = (wchar_t**)((char*)section + offset);
        
        if(*str_ptr != NULL) 
        {
            free(*str_ptr);  // Libera a string alocada
            *str_ptr = NULL; // Previne double-free
        }
        
        // Opcional: zerar os tamanhos
        size_t* len_ptr = (size_t*)((char*)section + offset + 16);
        size_t* cap_ptr = (size_t*)((char*)section + offset + 24);
        *len_ptr = 0;
        *cap_ptr = 0;
    }
}






















#endif /* _INIMODULESECTION_H_ */
