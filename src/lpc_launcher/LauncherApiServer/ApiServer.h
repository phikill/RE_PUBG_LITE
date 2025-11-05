#ifndef _APISERVER_H_
#define _APISERVER_H_


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<winsock2.h>
#include<ws2tcpip.h>

#include"stdbool.h"

#include"RouteService.h"



typedef struct 
{
    const char* method;       // "GET", "POST", etc
    const char* route;        // "/api/session"
    void (*handler)(SOCKET);  // função que processa a requisição
} Route;

typedef struct 
{
    Route* routes;
    int routeCount;
} ApiService;

typedef struct 
{
    SOCKET listenSock;
    ApiService* service;
    int port;
} ApiServer;

extern volatile int svr_isRunning;  // flag do servidor



bool InitializeServer(ApiServer* server, 
                      ApiService* service, 
                      const char* ip, 
                      int port);



bool StartServer(ApiServer* server, bool init);


int SendData(SOCKET sock, const void *buf, size_t len);

void ProcessGET(const char* req, SOCKET client_socket, int id);

void ProcessPOST(const char* req, SOCKET client_socket, int id);

static void DeliverHttp(SOCKET s, 
                        const char *file, 
                        const char **extra, 
                        int extra_count, 
                        int code);

void DeliverRaw(SOCKET client_socket, 
                const char* filepath, 
                const char* content_type);

void DeliverFile(SOCKET s, const char *file);







#endif /* _APISERVER_H_ */
