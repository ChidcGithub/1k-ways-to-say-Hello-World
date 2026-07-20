---
id: 0021
language: python
paradigm: oop
output: network
platform: cli
era: modern
tags: []
notes: "TCP socket: server sends 'Hello, World!' to a connected client."
author: ChidcGithub
date: 2026-07-20
---

# #0021 · Python Network Socket TCP

## Description

A TCP socket Hello World. A `socketserver.TCPServer` bound to `127.0.0.1:8766` runs in a background thread, with a `BaseRequestHandler` subclass whose `handle()` method sends `b"Hello, World!"` to whichever client connects. The main thread then opens a TCP connection to that port with `socket.create_connection`, receives the bytes, decodes them, and prints the result. Unlike the HTTP entry, this speaks raw TCP — no request parsing, no headers, just a single `sendall` on the socket. The greeting's primary destination is a network socket; stdout is only the client-side echo.

## Source Code

`main.py`:

```python
"""TCP socket server that sends 'Hello, World!' to a connected client."""

import socket
import socketserver
import threading

PORT = 8766


class HelloHandler(socketserver.BaseRequestHandler):
    def handle(self):
        self.request.sendall(b"Hello, World!")


def main():
    server = socketserver.TCPServer(("127.0.0.1", PORT), HelloHandler)
    thread = threading.Thread(target=server.serve_forever, daemon=True)
    thread.start()
    try:
        with socket.create_connection(("127.0.0.1", PORT)) as sock:
            data = sock.recv(1024)
            print(data.decode())
    finally:
        server.shutdown()
        server.server_close()


if __name__ == "__main__":
    main()
```

## Run

```bash
cd hello-worlds/python/0021-network-socket-tcp
python main.py
```

Expected stdout: `Hello, World!` (the bytes received over the TCP socket).

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using the standard-library `socket` and `socketserver` modules |
| paradigm | `oop` | Behavior is defined by subclassing `BaseRequestHandler` and overriding `handle()` — a classic class-based template-method pattern |
| output | `network` | The greeting is written to a TCP socket via `sendall` |
| platform | `cli` | Runs from a terminal; the server binds to a localhost port |
| era | `modern` | `socketserver` has existed since Python 1.x, but the modern `with`-based socket API and the `create_connection` helper date to Python 2.6 / 3.0 (2008) |
| tags | `[]` | No special technique worth indexing — straightforward socket I/O |

## Reference

- [Python 3 `socketserver` documentation](https://docs.python.org/3/library/socketserver.html)
- [Python 3 `socket` documentation](https://docs.python.org/3/library/socket.html)
