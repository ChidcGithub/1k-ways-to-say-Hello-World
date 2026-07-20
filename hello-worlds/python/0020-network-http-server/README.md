---
id: 0020
language: python
paradigm: procedural
output: network
platform: cli
era: modern
tags: [self-hosted]
notes: "Self-hosted HTTP server using http.server; responds with 'Hello, World!' on GET /."
author: ChidcGithub
date: 2026-07-20
---

# #0020 · Python Network HTTP Server

## Description

A self-hosted HTTP Hello World. The program spins up an `http.server.HTTPServer` bound to `127.0.0.1:8765` in a background thread, with a `BaseHTTPRequestHandler` subclass that answers every `GET /` request with the body `Hello, World!`. The main thread then acts as a client, fetching `http://127.0.0.1:8765/` via `urllib.request` and printing the response body to stdout before shutting the server down. The primary output medium is a network HTTP response; the stdout print is only the client-side confirmation. Uses only the Python standard library — no Flask, no requests, no external runtime.

## Source Code

`main.py`:

```python
"""Self-hosted HTTP server that responds with 'Hello, World!' on GET /."""

import http.server
import threading
import urllib.request

PORT = 8765


class HelloHandler(http.server.BaseHTTPRequestHandler):
    def do_GET(self):
        body = b"Hello, World!"
        self.send_response(200)
        self.send_header("Content-Type", "text/plain; charset=utf-8")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def log_message(self, *args):
        pass  # silence default request logging


def main():
    server = http.server.HTTPServer(("127.0.0.1", PORT), HelloHandler)
    thread = threading.Thread(target=server.serve_forever, daemon=True)
    thread.start()
    try:
        with urllib.request.urlopen(f"http://127.0.0.1:{PORT}/") as response:
            print(response.read().decode())
    finally:
        server.shutdown()
        server.server_close()


if __name__ == "__main__":
    main()
```

## Run

```bash
cd hello-worlds/python/0020-network-http-server
python main.py
```

Expected stdout: `Hello, World!` (the body fetched from the self-hosted server).

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using the standard-library `http.server` and `urllib.request` modules |
| paradigm | `procedural` | A `main()` function orchestrating sequential steps; the handler class is framework plumbing, not domain modeling |
| output | `network` | The greeting is delivered as the body of an HTTP response over TCP |
| platform | `cli` | Runs from a terminal; the server binds to a localhost port |
| era | `modern` | `http.server` and `urllib.request` in their modern form date to Python 3.0 (2008) |
| tags | `[self-hosted]` | The program hosts its own HTTP server from boot — no external web framework or runtime dependency |

## Reference

- [Python 3 `http.server` documentation](https://docs.python.org/3/library/http.server.html)
- [Python 3 `urllib.request` documentation](https://docs.python.org/3/library/urllib.request.html)
