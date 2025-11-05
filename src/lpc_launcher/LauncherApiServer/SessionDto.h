#ifndef _SESSIONDTO_H_
#define _SESSIONDTO_H_


extern char *sessionID;
extern char *accountGUID;
extern char *email_ID;
extern char *provider_ID;



void setGlobal_String(char** target, const char* newValue);

void clearGlobal_String(char **target);
























#endif /* _SESSIONDTO_H_ */
