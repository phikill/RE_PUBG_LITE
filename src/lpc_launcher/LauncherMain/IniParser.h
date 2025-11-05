#ifndef _INIPARSER_H_
#define _INIPARSER_H_

#include<windows.h>

#include<stddef.h>
#include<stdbool.h>

typedef struct IniParser
{
	int i;
	struct ci_comp
	{
		int i2;
	};

} IniParser;

/* Estrutura equivalente ao shared_ptr<IniParser> */
typedef struct 
{
    IniParser* ptr;       // +0 Ponteiro para o objeto
    int* ref_count;       // +8 Contador de referências (ponteiro para permitir compartilhamento)
} IniParserShared;

/* Cria um novo shared_ptr */
IniParserShared IniParserShared_Create(IniParser* parser);


/* Incrementa a contagem de referências */
void IniParserShared_AddRef(IniParserShared* shared);

/* Decrementa e libera se chegar a zero */
void IniParserShared_Release(IniParserShared* shared);


int CheckSignature(IniParser* self, 
					unsigned char* public_key_buffer, 
					int key_buffer_size, 
					char* signature_section_name, 
					char* signature_key_name);

bool ci_comp(IniParser* self, // nao usado
			wchar_t* s1,
			wchar_t* s2);


unsigned char GetCharValue(IniParser* self, char wch);


void IniParser_GetIniBuffer(IniParser* self, char* ini_buffer);

char* IniParser_GetSignatureBuffer(IniParser* self, char* A_1, char* signature_str);

int IniParser_GetValueIntW(IniParser* self, 
							char* section_name, 
							char* key_name, 
							int default_value);

wchar_t* IniParser_GetValueStringW(IniParser* self, 
									wchar_t* A_1, 
									char* section_name, 
									char* key_name, 
									char* default_value);


IniParserShared* IniParser_LoadIniData(IniParserShared* A_0, 
										unsigned char* ini_buffer, 
										unsigned int buffer_size);

IniParserShared* IniParser_LoadIniW(IniParserShared* self, char* int_file_path);


void IniParser_OverrideIni();











#endif /* _INIPARSER_H_ */
