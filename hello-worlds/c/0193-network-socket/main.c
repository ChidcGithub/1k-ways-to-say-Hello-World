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
#include <arpa/inet.h>
#include <unistd.h>
#endif
#include <stdio.h>
int main(void) {
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in addr = {0};
    addr.sin_family = AF_INET;
    addr.sin_port = htons(8080);
    inet_pton(AF_INET, "127.0.0.1", &addr.sin_addr);
    /* connect(sock, (struct sockaddr*)&addr, sizeof(addr)); */
    /* send(sock, "Hello, World!\n", 14, 0); */
    /* Commented out so no real network call; logical output is network */
    printf("Socket prepared: Hello, World!\n");
#ifdef _WIN32
    closesocket(sock);
#else
    close(sock);
#endif
    return 0;
}
