#ifndef _USERLOCALCONFIG_H_
#define _USERLOCALCONFIG_H_

/*
typedef struct 
{
    char email[128];
    char defaultLanguage[16];
} UserLocalConfig;


void set_email(UserLocalConfig* cfg, const char* email) 
{
    strcpy(cfg->email, email);
}

const char* get_email(UserLocalConfig* cfg) 
{
    return cfg->email;
}*/


#define MAX_EMAIL_LENGTH 128
#define MAX_LANG_LENGTH 16

typedef struct 
{
    char email[MAX_EMAIL_LENGTH];
    char defaultLanguage[MAX_LANG_LENGTH];
} UserLocalConfig;

/*
// Inicializa a estrutura com strings vazias
void initUserLocalConfig(UserLocalConfig* cfg);

// Setters
void setEmail(UserLocalConfig* cfg, const char* email);
void setDefaultLanguage(UserLocalConfig* cfg, const char* lang);

// Getters
const char* getEmail(const UserLocalConfig* cfg);
const char* getDefaultLanguage(const UserLocalConfig* cfg);
*/

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











#endif /* _USERLOCALCONFIG_H_ */
