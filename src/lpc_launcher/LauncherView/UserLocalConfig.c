
#include"UserLocalConfig.h"

#include<stdio.h>
#include<stdint.h>
#include<stddef.h>
#include<stdbool.h>

#define BUFFER_SIZE 4096

/* Função para decodificar base64 */
int base64_decode(const char *encoded, unsigned char *decoded, int *decoded_len) 
{
    const char *base64_chars = 
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    
    int i = 0, j = 0;
    int val[4];
    
    while(encoded[i] != '\0') 
    {
    	const char *pos;

        /* Pula caracteres que não são base64 */
        if(encoded[i] == '=' || encoded[i] == '\n' || encoded[i] == '\r' || 
            encoded[i] == ' ' || encoded[i] == '\t') {
            i++;
            continue;
        }
        
        /* Converte caracteres base64 para valores */
        pos = strchr(base64_chars, encoded[i]);
        
        if(pos == NULL) 
        {
            return -1; /* Caractere inválido */
        }
        
        val[j++] = pos - base64_chars;
        i++;
        
        if(j == 4) 
        {
            /* Decodifica 4 caracteres para 3 bytes */
            decoded[*decoded_len] = (val[0] << 2) | (val[1] >> 4);
            (*decoded_len)++;
            decoded[*decoded_len] = ((val[1] & 0x0F) << 4) | (val[2] >> 2);
            (*decoded_len)++;
            decoded[*decoded_len] = ((val[2] & 0x03) << 6) | val[3];
            (*decoded_len)++;
            j = 0;
        }
    }
    
    /* Lida com padding */
    if(j > 0) 
    {
    	int k = 0;

        for(k = j; k < 4; k++) 
        {
            val[k] = 0;
        }
        
        decoded[*decoded_len] = (val[0] << 2) | (val[1] >> 4);
        (*decoded_len)++;
        
        if(j > 2) 
        {
            decoded[*decoded_len] = ((val[1] & 0x0F) << 4) | (val[2] >> 2);
            (*decoded_len)++;
        }
        
        if(j > 3) 
        {
            decoded[*decoded_len] = ((val[2] & 0x03) << 6) | val[3];
            (*decoded_len)++;
        }
    }
    
    return 0;
}

/* Função para desserializar UserLocalConfig a partir de buffer binário */
int deserialize_user_local_config(const unsigned char 	*buffer, 
								  int 					buffer_len, 
                                  UserLocalConfig 		*config) 
{
    int email_len = 0;

    /* Verifica se o buffer tem tamanho suficiente */
    if(buffer_len < (int)(MAX_EMAIL_LENGTH + MAX_LANG_LENGTH)) 
    {
        return -1;
    }
    
    /* Copia email (assume que é uma string terminada em null no buffer) */
    strncpy(config->email, (const char *)buffer, MAX_EMAIL_LENGTH - 1);
    config->email[MAX_EMAIL_LENGTH - 1] = '\0';
    
    /* Copia language (pula o email e assume string terminada em null) */
    email_len = strlen(config->email) + 1;
    if(email_len < MAX_EMAIL_LENGTH) 
    {
        strncpy(config->defaultLanguage, 
        		(const char *)(buffer + email_len), 
                MAX_LANG_LENGTH - 1);
        
        config->defaultLanguage[MAX_LANG_LENGTH - 1] = '\0';
    } 
    else 
    {
        config->defaultLanguage[0] = '\0';
    }
    
    return 0;
}


void initUserLocalConfig(UserLocalConfig* cfg) 
{
    cfg->email[0] = '\0';
    cfg->defaultLanguage[0] = '\0';
}


void setEmail(UserLocalConfig* cfg, const char* email) 
{
    strncpy(cfg->email, email, MAX_EMAIL_LENGTH - 1);
    cfg->email[MAX_EMAIL_LENGTH - 1] = '\0';
}

void setDefaultLanguage(UserLocalConfig* cfg, const char* lang) 
{
    strncpy(cfg->defaultLanguage, lang, MAX_LANG_LENGTH - 1);
    cfg->defaultLanguage[MAX_LANG_LENGTH - 1] = '\0';
}

const char* getEmail(const UserLocalConfig* cfg) 
{
    return cfg->email;
}

const char* getDefaultLanguage(const UserLocalConfig* cfg) 
{
    return cfg->defaultLanguage;
}




/* Função principal equivalente ao C# */
UserLocalConfig LoadUserLocalConfig(void) 
{
    UserLocalConfig userLocalConfig;
    FILE *file = NULL;
    char *file_content = NULL;
    unsigned char *decoded_data = NULL;
    
    printf("\n=== DEBUG: Iniciando LoadUserLocalConfig() ===\n");
    
    /* Inicializa com valores padrão */
    memset(&userLocalConfig, 0, sizeof(UserLocalConfig));
    
    /* Tenta abrir o arquivo */
    file = fopen("launcher.custom.config", "rb"); /* Modo binário! */
    if(file == NULL) 
    {
        printf("DEBUG: Arquivo não encontrado, usando configuração padrão\n");
        goto cleanup;
    }
    
    /* Obtém tamanho do arquivo */
    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);
    fseek(file, 0, SEEK_SET);
    
    if(file_size <= 0 || file_size > 10000) /* Aumentei o limite */
    {
        fclose(file);
        goto cleanup;
    }
    
    /* Lê conteúdo do arquivo */
    file_content = (char *)malloc(file_size + 1);
    if(file_content == NULL) 
    {
        fclose(file);
        goto cleanup;
    }
    
    fread(file_content, 1, file_size, file);
    file_content[file_size] = '\0';
    fclose(file);
    file = NULL;
    
    /* Decodifica base64 */
    decoded_data = (unsigned char *)malloc(file_size * 3 / 4 + 10); /* Tamanho estimado */
    if(decoded_data == NULL) 
    {
        goto cleanup;
    }
    
    int decoded_len = 0;
    if (base64_decode(file_content, decoded_data, &decoded_len) != 0) 
    {
        printf("DEBUG ERRO: Falha na decodificação base64\n");
        goto cleanup;
    }
    
    printf("DEBUG: Dados decodificados - %d bytes\n", decoded_len);
    
    /* PROCURA OS DADOS NO FORMATO BINARYFORMATTER */
    /* Baseado na análise, os dados estão no final do buffer */
    
    /* Método 1: Procurar padrões conhecidos */
    int found_data = 0;
    
    /* Procura por "@" que indica email */
    for(int i = decoded_len - 100; i >= 0 && i < decoded_len; i++) 
    {
        if(i < 0) i = 0;
        
        /* Verifica se temos "@" seguido de ".com" ou similar */
        if(decoded_data[i] == '@') 
        {
            printf("DEBUG: Encontrado '@' na posição %d\n", i);
            
            /* Procura início do email (primeiro caractere imprimível antes do @) */
            int email_start = i;
            while(email_start > 0 && 
                  decoded_data[email_start-1] >= 32 && 
                  decoded_data[email_start-1] <= 126) 
            {
                email_start--;
            }
            
            /* Copia email */
            int j = 0;
            for(int k = email_start; k < decoded_len && j < MAX_EMAIL_LENGTH-1; k++) 
            {
                if(decoded_data[k] == 0) break; /* Null terminator do BinaryFormatter */
                if(decoded_data[k] < 32 || decoded_data[k] > 126) break;
                
                userLocalConfig.email[j++] = decoded_data[k];
            }
            userLocalConfig.email[j] = '\0';
            
            /* Procura language após o email */
            int lang_pos = email_start + j;
            while(lang_pos < decoded_len && decoded_data[lang_pos] == 0) 
            {
                lang_pos++; /* Pula null terminators */
            }
            
            /* Copia language */
            j = 0;
            for(int k = lang_pos; k < decoded_len && j < MAX_LANG_LENGTH-1; k++) 
            {
                if(decoded_data[k] == 0) break;
                if(decoded_data[k] < 32 || decoded_data[k] > 126) break;
                
                userLocalConfig.defaultLanguage[j++] = decoded_data[k];
            }
            userLocalConfig.defaultLanguage[j] = '\0';
            
            found_data = 1;
            break;
        }
    }
    
    if(!found_data) 
    {
        /* Método 2: Extrair do final do buffer baseado no padrão visto */
        printf("DEBUG: Tentando extração direta do final do buffer\n");
        
        /* Analisa os últimos 50 bytes em ASCII */
        printf("DEBUG: Últimos 50 bytes em ASCII:\n");
        for(int i = decoded_len - 50; i < decoded_len; i++) 
        {
            if(i >= 0) 
            {
                if(decoded_data[i] >= 32 && decoded_data[i] <= 126)
                    putchar(decoded_data[i]);
                else
                    printf("[%02X]", decoded_data[i]);
            }
        }
        printf("\n");
        
        /* Tenta encontrar "123@mail.com" no buffer */
        const char *search_email = "123@mail.com";
        int email_len = strlen(search_email);
        
        for(int i = 0; i < decoded_len - email_len; i++) 
        {
            if(memcmp(&decoded_data[i], search_email, email_len) == 0) 
            {
                printf("DEBUG: Encontrado email na posição %d\n", i);
                strncpy(userLocalConfig.email, search_email, MAX_EMAIL_LENGTH-1);
                
                /* Procura language após o email */
                int lang_pos = i + email_len;
                while(lang_pos < decoded_len && decoded_data[lang_pos] == 0) 
                {
                    lang_pos++;
                }
                
                /* Verifica se é "pt_BR" */
                if(lang_pos + 5 < decoded_len && 
                   memcmp(&decoded_data[lang_pos], "pt_BR", 5) == 0) 
                {
                    strncpy(userLocalConfig.defaultLanguage, "pt_BR", MAX_LANG_LENGTH-1);
                    found_data = 1;
                }
                break;
            }
        }
    }
    
    if(found_data) 
    {
        printf("DEBUG SUCESSO: Dados extraídos!\n");
        printf("  Email: %s\n", userLocalConfig.email);
        printf("  Language: %s\n", userLocalConfig.defaultLanguage);
    }
    else
    {
        printf("DEBUG: Não foi possível extrair dados do BinaryFormatter\n");
        printf("DEBUG: Tentando análise hexadecimal completa...\n");
        
        /* Mostra todo o conteúdo para análise */
        printf("DEBUG: Conteúdo completo (hex/ASCII):\n");
        for(int i = 0; i < decoded_len; i++) 
        {
            if(i % 16 == 0) printf("\n%04X: ", i);
            printf("%02X ", decoded_data[i]);
            
            if(i % 16 == 15) 
            {
                printf("  ");
                for(int j = i-15; j <= i; j++) 
                {
                    if(decoded_data[j] >= 32 && decoded_data[j] <= 126)
                        putchar(decoded_data[j]);
                    else
                        putchar('.');
                }
            }
        }
        
        /* Mostra os últimos bytes que parecem conter os dados */
        printf("\n\nDEBUG: Últimos 30 bytes (onde os dados devem estar):\n");
        int start = decoded_len - 30;
        if(start < 0) start = 0;
        
        for(int i = start; i < decoded_len; i++) 
        {
            printf("%02X ", decoded_data[i]);
        }
        printf("\n");
        
        for(int i = start; i < decoded_len; i++) 
        {
            if(decoded_data[i] >= 32 && decoded_data[i] <= 126)
                putchar(decoded_data[i]);
            else
                printf("[%02X]", decoded_data[i]);
        }
        printf("\n");
        
        goto cleanup;
    }
    
    /* Sucesso! */
    free(file_content);
    free(decoded_data);
    return userLocalConfig;
    
cleanup:
    if(file != NULL) fclose(file);
    if(file_content != NULL) free(file_content);
    if(decoded_data != NULL) free(decoded_data);
    
    /* Configuração padrão */
    strcpy(userLocalConfig.email, "");
    strcpy(userLocalConfig.defaultLanguage, "en_US"); /* Valor padrão */
    
    return userLocalConfig;
}
