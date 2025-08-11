#ifndef _C_WSTRING_H_
#define _C_WSTRING_H_

typedef struct 
{
    wchar_t* data;
    size_t length; // 16L
    size_t capacity; // 24L
} C_WString;

void C_Wstring_init(C_WString *str, 
                    wchar_t* udata,
                    size_t ulength)
{
    if(!str) return;

    str->data = udata;
    str->length = ulength;
    str->capacity = udata ? (ulength + 1) : 0; // +1 para null-terminator
    //str->capacity = ucapacity;
};

bool C_Wstring_create(C_WString *str, 
                        size_t initial_capacity) 
{
    if(!str) return false;
    
    str->data = (wchar_t*)malloc(initial_capacity * sizeof(wchar_t));
    if(!str->data) return false;
    
    str->length = 0;
    str->capacity = initial_capacity;
    return true;
}

bool C_Wstring_resize(C_WString *str, 
                        size_t new_capacity) 
{
    wchar_t* new_data;

    if(!str) 
    {
        return false;
    }       
    
    new_data = (wchar_t*)realloc(str->data, new_capacity * sizeof(wchar_t));
    if(!new_data) 
    {
        return false;
    }

    str->data = new_data;
    str->capacity = new_capacity;
    
    if(str->length >= new_capacity) 
    {
        str->length = new_capacity - 1;
        str->data[str->length] = L'\0';
    }
    return true;
}


// Adiciona um caractere ao final
bool C_Wstring_push_back(C_WString *str, wchar_t ch) 
{
    if (!str) return false;
    
    // Precisa de mais espaço?
    if (str->length + 1 >= str->capacity) 
    {
        size_t new_cap = str->capacity ? str->capacity * 2 : 16;
        if (!C_Wstring_resize(str, new_cap)) return false;
    }
    
    str->data[str->length++] = ch;
    str->data[str->length] = L'\0'; // Mantém null-terminated
    return true;
}

void C_Wstring_clear(C_WString *str)
{
    if(!str) return;
    
    free(str->data);
    str->data = NULL;
    str->length = 0;
    str->capacity = 0;
};










#endif /* _C_WSTRING_H_ */
