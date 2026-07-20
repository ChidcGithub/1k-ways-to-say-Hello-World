---
id: 0194
language: c
paradigm: procedural
output: network
platform: cli
era: modern
tags: []
notes: "Modern-style: creates a TCP server that would send greeting to connecting clients."
author: ChidcGithub
date: 2026-07-20
---

# #0194 · C network server

## Description

A modern-style TCP server skeleton that binds to `0.0.0.0:8080` and would send `Hello, World!` to each connecting client. The `bind()`, `listen()`, `accept()`, and `send()` calls are commented out so the program performs no real network I/O; it prints a confirmation line to `stdout` instead. The logical output channel is the network: any client that connects would receive the greeting. This contrasts with 0193, which is a client connecting outward; here the program is the server side. Conditional compilation lets it build with POSIX headers on Unix and Winsock2 on Windows.

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
```

## Run

```bash
cd hello-worlds/c/0194-network-server
gcc main.c -o hello -D_POSIX_C_SOURCE=200809L && ./hello
# On Windows link with: -lws2_32
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential server setup in `main` |
| output | `network` | Greeting is destined for accepted TCP clients (calls commented out for safety) |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses `INADDR_ANY` + `SOCK_STREAM` server idiom common in modern networked C |
| tags | `[]` | Standard TCP server skeleton |

## Reference

- BSD Sockets — `bind(2)`, `listen(2)`, `accept(2)`, `send(2)`, `INADDR_ANY`.
- Winsock2 — `winsock2.h`, `ws2tcpip.h` (Windows equivalent of the BSD server API).
