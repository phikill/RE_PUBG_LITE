

#include"IniParser.h"

/* Cria um novo shared_ptr */
IniParserShared IniParserShared_Create(IniParser* parser) 
{
    IniParserShared shared;
    shared.ptr = parser;
    shared.ref_count = malloc(sizeof(int));
    //*shared.ref_count = 1;  // Inicia com 1 referência
    if(shared.ref_count)
    {
        *shared.ref_count = 1;
    }
    return shared;
}

/* Incrementa a contagem de referências */
void IniParserShared_AddRef(IniParserShared* shared) 
{
    if(shared && shared->ref_count) 
    {
        (*shared->ref_count)++;
    }
}

/* Decrementa e libera se chegar a zero */
void IniParserShared_Release(IniParserShared* shared) 
{
    if(shared && shared->ref_count) 
    {
        if(--(*shared->ref_count) == 0) 
        {
            if (shared->ptr) 
            {
                //IniParser_Destroy(shared->ptr);  // Função de destruição específica
            }
            free(shared->ref_count);
        }
    }
}


int CheckSignature(IniParser* self, 
							unsigned char* public_key_buffer, 
							int key_buffer_size, 
							char* signature_section_name, 
							char* signature_key_name)
{
	// vazio por causa do crack, ignora o hash de assinatura digital
	return 1;
}


bool ci_comp(IniParser* self, // nao usado
			wchar_t* s1,
			wchar_t* s2)
{

	return 0;
}

unsigned char GetCharValue(IniParser* self, char wch)
{

	return 255;
}

void IniParser_GetIniBuffer(IniParser* self, char* ini_buffer) 
{

}

char* IniParser_GetSignatureBuffer(IniParser* self, char* A_1, char* signature_str) 
{
	return 0;
}

int IniParser_GetValueIntW(IniParser* self, 
							char* section_name, 
							char* key_name, 
							int default_value)
{
	return 0;
}

wchar_t* IniParser_GetValueStringW(IniParser* self, 
									wchar_t* A_1, 
									char* section_name, 
									char* key_name, 
									char* default_value)
{
	return 0;
}

IniParserShared* IniParser_LoadIniData(IniParserShared* A_0, 
										unsigned char* ini_buffer, 
										unsigned int buffer_size)
{
	return 0;
}

IniParserShared* IniParser_LoadIniW(IniParserShared* self, char* int_file_path)
{
	unsigned int num = 0;

	HANDLE hFile = INVALID_HANDLE_VALUE;
    DWORD fileSize = 0;
    BYTE* buffer = NULL;
    int num2;
    DWORD bytesRead = 0; // num3

    IniParserShared *ptr3 = {0};

    /* Inicializa o resultado */
    self->ptr = NULL;
    self->ref_count = NULL;

    printf("\n \n  LoadIniW() TEST \n ");

	hFile = CreateFileW((wchar_t*)int_file_path,
				        GENERIC_READ, //  int.MinValue
				        FILE_SHARE_READ, // 1
				        NULL,
				        OPEN_EXISTING, // 3
				        FILE_ATTRIBUTE_NORMAL, // 128
				        NULL);

	if(hFile == INVALID_HANDLE_VALUE) 
	{

		self->ptr = NULL;
		self->ref_count = 0;

		{
			num = 1;

			printf("\n \n  LoadIniW() returned INVALID_HANDLE_VALUE; \n ");
			return self;
		}
    }

    /* 2. Obtém o tamanho do arquivo */
    fileSize = GetFileSize(hFile, NULL);
    if(fileSize == INVALID_FILE_SIZE) 
    {
    	CloseHandle(hFile);

    	self->ptr = NULL;
		self->ref_count = 0;

    	{
			num = 1;

			printf("\n \n  LoadIniW() returned INVALID_FILE_SIZE; \n ");
			return self;
		}

    }

    /* 3. Aloca buffer para o conteúdo */
    buffer = (BYTE*)malloc(fileSize);
    if(buffer == NULL) 
    {
    	CloseHandle(hFile);

    	{
			num = 1;

			printf("\n \n  LoadIniW() returned buffer == NULL; \n ");
			return self;
		}

    }

    /* 4. Lê o arquivo */
    num2 = ReadFile(hFile, buffer, fileSize, &bytesRead, NULL);
    CloseHandle(hFile);

    if(0 != num2 && bytesRead == fileSize)
    {

    	IniParserShared shared_IniParser = {0};

    	memset(&shared_IniParser, 0, sizeof(IniParserShared));

    	self = IniParser_LoadIniData(&shared_IniParser, buffer, fileSize);

    	printf("\n \n  LoadIniW() if(0 != num2 && bytesRead == fileSize) \n ");

    	// try 
    	{
    		// try
    		{
    			free(buffer); // ptr2

    			self->ptr = shared_IniParser.ptr;
    			self->ref_count = shared_IniParser.ref_count;

    			shared_IniParser.ptr = NULL;
    			*shared_IniParser.ref_count = 0;

    			num = 1;
    		}

    		if(shared_IniParser.ref_count != 0)
    		{
    			(*shared_IniParser.ref_count)--;
    		}

    		return self;
    	}
    }


    free(buffer);
    self->ptr = NULL;
    self->ref_count = 0;
    
    num = 1;
    ptr3->ptr = self->ptr;
    ptr3->ref_count = self->ref_count;



    printf("\n \n  LoadIniW() returned ptr3; \n ");
	return ptr3;
}


void IniParser_OverrideIni() {}

