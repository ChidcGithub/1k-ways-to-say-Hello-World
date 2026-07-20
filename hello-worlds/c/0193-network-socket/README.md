---
id: 0193
language: c
paradigm: procedural
output: network
platform: cli
era: classic
tags: []
notes: "Classic BSD socket: connects to localhost:8080 and sends greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0193 · C network socket

## Description

A classic BSD-style socket client that prepares a TCP connection to `127.0.0.1:8080` and would send the greeting `Hello, World!` over the wire. The actual `connect()` and `send()` calls are commented out so the program performs no real network I/O; instead it prints a confirmation line to `stdout`. The logical output channel is the network socket, which is what distinguishes this entry from the canonical `printf`-to-`stdout` Hello World. The source uses conditional compilation so it builds with POSIX headers (`<sys/socket.h>`, `<netinet/in.h>`, `<arpa/inet.h>`) on Unix and with Winsock2 (`<winsock2.h>`, `<ws2tcpip.h>`) on Windows.

## Source Code

`main.c`:

```c
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
```

## Run

```bash
cd hello-worlds/c/0193-network-socket
gcc main.c -o hello -D_POSIX_C_SOURCE=200809L && ./hello
# On Windows link with: -lws2_32
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential socket setup in `main` |
| output | `network` | Greeting is destined for a TCP socket (calls commented out for safety) |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | BSD sockets API dates to 4.2BSD (1983) |
| tags | `[]` | Standard socket client pattern |

## Reference

- BSD Sockets — `socket(2)`, `connect(2)`, `send(2)`, `inet_pton(3)`.
- Winsock2 — `winsock2.h`, `ws2tcpip.h` (Windows equivalent of the BSD API).
