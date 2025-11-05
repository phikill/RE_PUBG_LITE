
#include"ApiServer.h"

volatile int svr_isRunning = 0;  // flag do servidor



void initializeWinsock() 
{
    WSADATA wsaData;
    int iResult;

    iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if(iResult != 0) 
    {
        printf("WSAStartup failed with error: %d\n", iResult);
        printf("\n  Error Code : %d\n ", WSAGetLastError());
        exit(EXIT_FAILURE);
    }
}

SOCKET createServerSocket(int port) 
{
    SOCKET server_socket;
    struct sockaddr_in server;

    if((server_socket = socket(AF_INET, SOCK_STREAM, 0)) == INVALID_SOCKET) 
    {
        //printERR(" Could not create socket. Error code: { %d }\n", WSAGetLastError());
        printf(" Could not create socket. Error code: { %d }\n", WSAGetLastError());
        WSACleanup();
       // exit(EXIT_FAILURE);
        return 1;
    }

    server.sin_family = AF_INET;
    server.sin_addr.s_addr = INADDR_ANY;
    server.sin_port = htons(port);

    if(bind(server_socket, (struct sockaddr *)&server, sizeof(server)) == SOCKET_ERROR) 
    {
        //printERR(" Error associating socket. Error code: { %d } \n", WSAGetLastError());
        printf("Error associating socket. Error code: { %d } \n", WSAGetLastError());
        closesocket(server_socket);
        WSACleanup();
        //exit(EXIT_FAILURE);
        return 2;
    }

    if(listen(server_socket, 3) == SOCKET_ERROR) 
    {
        printf(" Error putting socket into listening mode. Error code: { %d } \n", WSAGetLastError());
        closesocket(server_socket);
        WSACleanup();
        //exit(EXIT_FAILURE);
        return 3;
    }

    return server_socket;
}

static int clientCounter = 0;

HANDLE thread_main;      /* main Thread */ 
static DWORD WINAPI tMain(LPVOID param); /* main server thread func */

bool InitializeServer(ApiServer* server, 
                      ApiService* service, 
                      const char* ip, 
                      int port)
{


	initializeWinsock();



    server->service = service;
    server->port = port;

    // cria socket TCP
    server->listenSock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(server->listenSock == INVALID_SOCKET) 
    {
        printf("Socket creation failed: %d\n", WSAGetLastError());
        return false;
    }

    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = inet_addr(ip);
    addr.sin_port = htons(port);  // pode ser 0 para porta dinâmica

    if(bind(server->listenSock, (struct sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR) 
    {
        printf("Bind failed: %d\n", WSAGetLastError());
        closesocket(server->listenSock);
        return false;
    }

    // if port == 0, get the real port assigned by the OS
    if(port == 0) 
    {
        struct sockaddr_in assignedAddr;
        int len = sizeof(assignedAddr);
        if(getsockname(server->listenSock, (struct sockaddr*)&assignedAddr, &len) == SOCKET_ERROR) 
        {
            printf("getsockname failed: %d\n", WSAGetLastError());
            closesocket(server->listenSock);
            return false;
        }
        server->port = ntohs(assignedAddr.sin_port); // guarda a porta real
    }

    return true;
}



bool StartServer(ApiServer* server, bool init)
{
    if(init) 
    {
        if(listen(server->listenSock, SOMAXCONN) == SOCKET_ERROR) 
        {
            printf("Listen failed: %d\n", WSAGetLastError());
            return false;
        }
    }

    if(InterlockedCompareExchange(&svr_isRunning, 1, 0) == 0) 
    {
    	HANDLE thread_main = CreateThread(NULL, 0, tMain, server, 0, NULL);

        return true;
    }

    return false;
}


void serverStop()
{

	svr_isRunning = 0;


}

typedef struct 
{
    SOCKET sock;
    struct sockaddr_in client_addr;
} ClientTData;

static DWORD WINAPI tClient(LPVOID param);

static DWORD WINAPI tMain(LPVOID param)
{

	ApiServer* server = (ApiServer*)param;

    printf("\n \n Server active on the port %d , SOCKET %lld \n", server->port, server->listenSock);


    for(;;)
    {

    	HANDLE thread_id;

        int client_addr_len;
        ClientTData* data;


        data = malloc(sizeof(ClientTData));
        if(!data)
        {
            //printERR("Erro de malloc");
            printf("\n malloc error tMain() ApiServer.c \n ");
            Sleep(10);
            continue;
        }

        client_addr_len = sizeof(data->client_addr);

        data->sock = accept(server->listenSock, 
                            (struct sockaddr*)&data->client_addr, 
                            &client_addr_len);

        if(data->sock == INVALID_SOCKET)
        {
            int err = WSAGetLastError();
            
            if(err == WSAEWOULDBLOCK || err == WSAEINTR)
	        {
	            Sleep(10); // wait 10 ms
	            continue;
	        }

            //printERR("Error accepting connection: %d", err);
            printf("\n \n Error accepting connection: %d", err);
            free(data);
            Sleep(10);
            continue;
        }


        thread_id = CreateThread(NULL, 0, tClient, data, 0, NULL);
        if(thread_id == NULL)
        {
            //printERR("Error creating thread");
            printf("\n \n [!ERROR]:Error creating thread\n \n");
            closesocket(data->sock);
            free(data);
        }
        else
        {
            char* client_ip = inet_ntoa(data->client_addr.sin_addr);

            //pthread_detach(thread_id);

            CloseHandle(thread_id); // libera o handle (a thread continua executando)

            //printECHO(" New Thread connection created \n");
            printf(" \n \n New Thread connection created \n");
            //printLOGON("Client Port [%d] / IP: %s", PORT_MAIN, client_ip);
            printf("\n \n Client Port [%d] / IP: %s", server->port, client_ip);

        }

        Sleep(5);
    	
        // check the loop var
    	if(svr_isRunning == 0)
        {
            break;
        } 

    }




    return 0;
	
}

void ProcessRequest(const char* req, 
                    SOCKET client_socket, 
                    int id);

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

static DWORD WINAPI tClient(LPVOID param)
{
	int ID = 0;
    ClientTData* data = (ClientTData*)param;
    SOCKET client_socket_t = data->sock;
    struct sockaddr_in addr = data->client_addr;
    char* ip;
    char buffer[4096]; 
    int bytes_received = 0;
    fd_set read_fds;
    struct timeval timeout;
    int activity = 0;

    ip = inet_ntoa(addr.sin_addr);

    printf("\n Connection received from: %s", ip);

    free(param);

    ID = clientCounter++;

    FD_ZERO(&read_fds);
    FD_SET(client_socket_t, &read_fds);

    timeout.tv_sec = 10; // 10 seconds
    timeout.tv_usec = 0;

    activity = select(client_socket_t + 1, &read_fds, NULL, NULL, &timeout);

    if(activity > 0 && FD_ISSET(client_socket_t, &read_fds))
    {
        bytes_received = recv(client_socket_t, buffer, sizeof(buffer), 0);
        if(bytes_received == SOCKET_ERROR)
        {
            //printERR("[Client %d] Connection error or the Client Disconnected !\n", ID);
            printf("\n [Client %d] Connection error or the Client Disconnected !\n", ID);
            closesocket(client_socket_t);
            return 0;
        }
        else if(bytes_received == 0)
        {
            //printALERT("[Client %d] no byte handling.\n", ID);
            printf("\n [Client %d] no byte handling.\n", ID);
            closesocket(client_socket_t);
            return 0;
        }
    }
    else
    {
        //printALERT("Timeout de leitura ou erro no select.\n");
        printf("\n Read timeout or select error.\n");
        closesocket(client_socket_t);
        return 0;
    }


    //printALERT(" (tClient) bytes_received <- END ");

    
    // Here we ensure that the string is terminated correctly.
    if(bytes_received < sizeof(buffer))
    {
        buffer[bytes_received] = '\0';
    }
    else
    {
        buffer[sizeof(buffer) - 1] = '\0';
    }



    //printECHO("[Client %d] RAW request:\n { \n %s \n }\n", ID, buffer);
    printf("[Client %d] RAW request:\n { \n %s \n }\n", ID, buffer);


    // Process the request (create this function)
    ProcessRequest(buffer, client_socket_t, ID);

    // Close connection when finished.
    closesocket(client_socket_t);


	return 0;
}

void ProcessRequest(const char* req, 
                    SOCKET client_socket, 
                    int id) 
{
    const char* line_start = req;
    const char* line_end = NULL;

    while((line_end = strstr(line_start, "\r\n")) != NULL) 
    {
        int line_len = line_end - line_start;
        char line[1024] = {0};

        if (line_len >= sizeof(line)) line_len = sizeof(line) - 1;
        strncpy(line, line_start, line_len);
        line[line_len] = '\0';

        if(strncmp(line, "GET ", 4) == 0) 
        {
            ProcessGET(line, client_socket, id);
            break;
        } 
        else if(strncmp(line, "POST ", 5) == 0) 
        {
            ProcessPOST(line, client_socket, id);
            break;
        }

        line_start = line_end + 2; // Skip "\r\n"
    }
}


int SendData(SOCKET sock, const void *buf, size_t len) 
{
    size_t sent = 0;
    
    if(sock == INVALID_SOCKET) 
    {
        //printERR("  SendData() -> received invalid socket!\n");
        printf("\n  SendData() -> received invalid socket!\n");
        return -1;
    }

    while(sent < len) 
    {
        int result = send(sock, (char *)buf + sent, len - sent, 0);
        if(result == SOCKET_ERROR) 
        {
            //printERR("  SendData() -> returned error: %d\n", WSAGetLastError());
            printf("\n  SendData() -> returned error: %d\n", WSAGetLastError());
            return -1;
        }
        sent += result;
    }
    return sent;
}


void ProcessPOST(const char* req, SOCKET client_socket, int id)
{
    const char* path_start = strchr(req, ' ');
    const char* path_end;
    int path_len;
    char file[512] = {0};
    char* q;
    char fullpath[1024] = "host";
    int i = 0;
    FILE* f;

    //printECHO("[Client %d] POST: %s\n", id, req);
    printf("\n[Client %d] POST: %s\n", id, req);

    if(!path_start) return;
    path_start++; /* Skip space */

    path_end = strchr(path_start, ' ');
    if(!path_end) return;

    path_len = path_end - path_start;
    if(path_len <= 0 || path_len >= 512) return;

    strncpy(file, path_start, path_len);
    file[path_len] = '\0';

    /* Remove arguments from URL */
    q = strchr(file, '?');
    if(q) *q = '\0';

    /* Ride the real path */
    strcat(fullpath, file);
    for(i = 0; fullpath[i]; ++i)
        if (fullpath[i] == '/') fullpath[i] = '\\';

    /*
    f = fopen(fullpath, "rb");
    if(f)
    {
        fclose(f);
        DeliverFile(client_socket, fullpath);
    }
    else
    {
        const char* res = "HTTP/1.1 301 Moved Permanently\r\n\r\n";

        printECHO("[Client %d] File not found: %s\n", id, fullpath);
        SendData(client_socket, res, strlen(res));
    }*/

    DeliverFile(client_socket, fullpath);
}



void ProcessGET(const char* req, SOCKET client_socket, int id)
{

    const char* path_start = strchr(req, ' ');
    const char* path_end;
    int path_len;
    char file[512] = {0};
    char* q;
    char fullpath[1024] = "host";
    int i = 0;
    FILE* f;

    //printECHO("[Client %d] GET: %s\n", id, req);
    printf("\n [Client %d] GET: %s\n", id, req);

    if(!path_start) 
    {
        return;
    }

    path_start++; /* Skip space */

    path_end = strchr(path_start, ' ');
    if(!path_end) 
    {
        return;
    }

    path_len = path_end - path_start;
    if(path_len <= 0 || path_len >= 512) 
    {
        return;
    }

    strncpy(file, path_start, path_len);
    file[path_len] = '\0';

    /* Remove arguments from URL */
    q = strchr(file, '?');
    if(q) 
    {
        *q = '\0';
    }

    /* Ride the real path */
    strcat(fullpath, file);
    for(i = 0; fullpath[i]; ++i)
    {
        if(fullpath[i] == '/') 
        {
            fullpath[i] = '\\';
        }
    }

    /*
    f = fopen(fullpath, "rb");
    if(f)
    {
        fclose(f);
        DeliverFile(client_socket, fullpath);
    }
    else
    {
        const char* res = "HTTP/1.1 301 Moved Permanently\r\n\r\n";

        printECHO("[Client %d] File not found: %s\n", id, fullpath);
        SendData(client_socket, res, strlen(res));
    }*/

    // ALWAYS calls DeliverFile, regardless of whether the file exists or not
    DeliverFile(client_socket, fullpath);
}

#include"SessionDto.h"

void DeliverFile(SOCKET s, const char *file) 
{
    const char *ext = strrchr(file, '.');
    
    //printALERT(" DeliverFile() -> Request: %s \n", file);
    printf("\n DeliverFile() -> Request: %s \n", file);

    //if(client_socket == INVALID_SOCKET) 
    if(s == INVALID_SOCKET) 
    {
        //printERR(" DeliverFile() -> Invalid Socket = SOCKET [%d] \n", s);
        printf("\n DeliverFile() -> Invalid Socket = SOCKET [%lld] \n", s);
        return;
    }



    if(ext) 
    {
        if(strcmp(ext, ".png") == 0) 
        {
            //printALERT(" PNG Request \n");
            printf("\n PNG Request \n");
            DeliverRaw(s, file, "image/png");
            return;
        }

        if(strcmp(ext, ".svg") == 0) 
        {
            //printALERT(" SVG Request \n");
            printf("\n SVG Request \n");
            DeliverRaw(s, file, "image/svg+xml");
            return;
        }

        if(strcmp(ext, ".css") == 0) 
        {
            //printALERT(" CSS Request \n");
            printf("\n CSS Request \n");
            DeliverRaw(s, file, "text/css");
            return;
        }

        if(strcmp(ext, ".html") == 0) 
        {
            //printALERT(" HMTL Request \n");
            printf("\n HMTL Request \n");
            DeliverRaw(s, file, "text/html; charset=utf-8");
            return;
        }

        if(strcmp(ext, ".js") == 0) 
        {
            //printALERT(" JS Request \n");
            printf("\n JS Request \n");
            DeliverRaw(s, file, "application/javascript; charset=UTF-8");
            return;
        }
    }

    /* Special cases */
    

    if(strcmp(file, "host\\api\\session") == 0) 
    {
        const char *tmpfile = "session.json";
        FILE *f;

        //char *sessionID = "UUZPTUY0WjVSUzdYRUxMR0ZZQ1FOWlZVSDVGVk9BS0ZNUlpRUUFPUzdVUkJHUlNWSkwzUQ";
        //char *accountGUID = "PHIKILL";
        //char *email_ID = "dGVzdEBtYWlsLmNvbQ==";
        //char *provider_ID = "gacct";

        // buffer for final json
        char json_response[512];

        char *svr_sessionID = NULL;
        char *svr_accountGUID = NULL;
        char *svr_email_ID = NULL;
        char *svr_provider_ID = NULL;

        /*
        const char *json_response = 
            "{\n"
            "    \"SessionId\": \"UUZPTUY0WjVSUzdYRUxMR0ZZQ1FOWlZVSDVGVk9BS0ZNUlpRUUFPUzdVUkJHUlNWSkwzUQ\",\n"
            "    \"AccountGuid\": \"PHIKILL\",\n"
            "    \"Email\": \"dGVzdEBtYWlsLmNvbQ==\",\n"
            "    \"Provider\": \"gacct\"\n"
            "}";*/

        /*
        const char *json_response = 
            "{\n"
            "    \"SessionId\": \"\",\n"
            "    \"AccountGuid\": \"\",\n"
            "    \"Email\": \"\",\n"
            "    \"Provider\": \"\"\n"
            "}";*/

        if(sessionID == NULL)
        {
            svr_sessionID = "\0";
        }
        else
        {
            svr_sessionID = sessionID;
        }

        if(accountGUID == NULL)
        {
            svr_accountGUID = "\0";
        }
        else
        {
            svr_accountGUID = accountGUID;
        }

        if(email_ID == NULL)
        {   
            svr_email_ID = "\0";
        }
        else
        {
            svr_email_ID = email_ID;
        }

        if(provider_ID == NULL)
        {
            svr_provider_ID = "\0";
        }
        else
        {
            svr_provider_ID = provider_ID;
        }

        sprintf(json_response,
                "{\n"
                "    \"SessionId\": \"%s\",\n"
                "    \"AccountGuid\": \"%s\",\n"
                "    \"Email\": \"%s\",\n"
                "    \"Provider\": \"%s\"\n"
                "}",
                svr_sessionID, 
                svr_accountGUID, 
                svr_email_ID, 
                svr_provider_ID);


        //printALERT(" Session API Request \n");
        printf("\n\n Session API Request \n");

        // creates a temporary file just for compatibility
        
        f = fopen(tmpfile, "wb");
        if(f)
        {
            fwrite(json_response, 1, strlen(json_response), f);
            fclose(f);

            // use DeliverRaw normally
            DeliverRaw(s, tmpfile, "application/json; charset=utf-8");

            remove(tmpfile); // remove after sending
        }
        else
        {

            printf("\n Failed to create temporary JSON file\n");
            closesocket(s);
        }

        return;
    }
    

    /* Fallback */
    DeliverRaw(s, file, NULL);
}



void DeliverRaw(SOCKET client_socket, 
                const char* filepath, 
                const char* content_type) 
{
    FILE* fp;
    char* buffer;
    char header[512];
    long filesize;
    
    int sendHeader;
    int sendBuffer;

    if(client_socket == INVALID_SOCKET) 
    {
        //printERR(" -> client_socket inválido!\n");
        printf("\n -> Invalid client_socket!\n");
        return;
    }

    fp = fopen(filepath, "rb");
    if(!fp) 
    {
        // If the file does not exist, sends a simple 404
        const char* not_found = "HTTP/1.1 404 Not Found\r\nContent-Length: 0\r\n\r\n";
        SendData(client_socket, not_found, (int)strlen(not_found));
        closesocket(client_socket);
        return;
    }

    // Find file size
    fseek(fp, 0, SEEK_END);
    filesize = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    // Reads the contents of the file
    buffer = (char*)malloc(filesize);
    if(!buffer) 
    {
        fclose(fp);
        closesocket(client_socket);
        return;
    }

    fread(buffer, 1, filesize, fp);
    fclose(fp);

    // If content_type is NULL, use default
    if(!content_type) 
    {
        content_type = "application/octet-stream";
    }

    // Mount the HTTP header
    snprintf(header, 
             sizeof(header),
             "HTTP/1.1 200 OK\r\n"
             "Content-Type: %s\r\n"
             "Content-Length: %ld\r\n"
             "\r\n",
             content_type, 
             filesize);


    // Send header
    printf("\n DeliverRaw() : Send Header Init");
    sendHeader = SendData(client_socket, header, (int)strlen(header));
    if(sendHeader == -1)
    {
        printf("\n DeliverRaw() : Send Header Failed");
    }
    else
    {
        //printALERT(" DeliverRaw() : Send Header Sucess");
    }


    // Send file content
    //printALERT(" DeliverRaw() : Send Buffer Init");
    printf("\n DeliverRaw() : Send Buffer Init");
    sendBuffer = SendData(client_socket, buffer, filesize);
    if(sendBuffer == -1)
    {// ERROR
        //printERR(" DeliverRaw() : Send Buffer Failed");
        printf("\n DeliverRaw() : Send Buffer Failed");
    }
    else
    {
        //printALERT(" DeliverRaw() : Send Buffer Sucess");
    }



    // Limpa recursos
    free(buffer);
    closesocket(client_socket);
}


static void DeliverHttp(SOCKET s, 
                        const char *file, 
                        const char **extra, 
                        int extra_count, 
                        int code) 
{
    FILE *fp = fopen(file, "rb");
    long file_size;
    unsigned char *data;
    char sb[1024];
    int length;
    int i = 0;

    if(!fp) return;

    fseek(fp, 0, SEEK_END);
    file_size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    
    data = (unsigned char *)malloc(file_size);
    fread(data, 1, file_size, fp);
    fclose(fp);

    length = snprintf(sb, 
                    sizeof(sb), 
                    "HTTP/1.1 %d OK\r\nContent-Type: text/html; charset=utf-8\r\n", 
                    code);
    
    for(i = 0; i < extra_count; i++) 
    {
        length += snprintf(sb + length, sizeof(sb) - length, "%s\r\n", extra[i]);
    }
    
    length += snprintf(sb + length, 
                        sizeof(sb) - length, 
                        "Content-Length: %ld\r\n\r\n", 
                        file_size);
    
    send(s, sb, length, 0);
    send(s, data, file_size, 0);
    
    free(data);
    closesocket(s);
}


