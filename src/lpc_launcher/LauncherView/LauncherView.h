#ifndef _LAUNCHERVIEW_H_
#define _LAUNCHERVIEW_H_

#include"ErrorCodes.h"
//#include"LifeS"
//#include"__App.h"


typedef struct 
{
    char* GameStarterExecutableName;
    char* GameExecutableName;
    char* GameExecuteArguments;
    char* LauncherAgentName;
    char* UrlLogin;
    char* UrlLogout;
    char* UrlMain;
    char* UrlSessionValidator;
    char* UrlPatchSource;
    char* QA_ID;
    char* QA_PW;
} IniModuleSection;

typedef struct 
{
    char* InstallPathOverride;
    int DisableGameClientValidation;
    IniModuleSection* IniData;
} SharedDataContainer;


typedef struct 
{
    SharedDataContainer* SharedData;
    IniModuleSection* IniModuleSectionData;
} StartArgs;







#endif /* _LAUNCHERVIEW_H_ */
