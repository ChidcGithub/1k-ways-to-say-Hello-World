---
id: 0060
language: cpp
paradigm: procedural
output: stderr
platform: cli
era: classic
tags: []
notes: "Writes to stderr using std::cerr instead of stdout."
author: ChidcGithub
date: 2026-07-20
---

# #0060 · Cerr stderr Hello

## Description

A C++ Hello World that deliberately writes the greeting to the standard **error** stream instead of standard output, using `std::cerr`. Syntactically this is a one-token change from the canonical `std::cout` version, but the effect on shell pipelines is significant: the greeting is unbuffered and goes to file descriptor 2 rather than file descriptor 1, so `program | grep Hello` will not match it without redirection.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
int main() { std::cerr << "Hello, World!" << std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0060-cerr-stderr
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

To confirm the greeting is on stderr (and *not* on stdout), redirect stderr to stdout:

```bash
# Windows (cmd / PowerShell)
./hello.exe 2>&1 1>nul

# POSIX shells
./hello.exe 2>&1 1>/dev/null
```

Expected output (with stderr redirected): `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using the standard `<iostream>` library |
| paradigm | `procedural` | A single statement in `main`; no classes or higher-order functions |
| output | `stderr` | Writes to the standard error stream via `std::cerr` (file descriptor 2) |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `std::cerr` has been part of the iostreams library since the original AT&T C++ releases (1985+) |
| tags | `[]` | No special technique worth indexing beyond the non-default output stream |

## Reference

- [C++ Reference: `std::cerr`](https://en.cppreference.com/w/cpp/io/cerr)
- [Standard streams](https://en.wikipedia.org/wiki/Standard_streams)
