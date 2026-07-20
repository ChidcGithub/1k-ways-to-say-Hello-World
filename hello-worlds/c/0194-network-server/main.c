#ifdef _WIN32
#ifndef _WIN32_WINNT
#define _WIN32_WINNT 0x0601
#endif
#include <winsock2.h>
#include <ws2tcpip.h>
#else
#define _POSIX_C_SOURCE 200809L
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#endif
#include <stdio.h>
int main(void) {
    int server = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in addr = {0};
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = INADDR_ANY;
    addr.sin_port = htons(8080);
    /* bind(server, (struct sockaddr*)&addr, sizeof(addr)); */
    /* listen(server, 1); */
    /* int client = accept(server, NULL, NULL); */
    /* send(client, "Hello, World!\n", 14, 0); */
    printf("Server prepared: Hello, World!\n");
#ifdef _WIN32
    closesocket(server);
#else
    close(server);
#endif
    return 0;
}
