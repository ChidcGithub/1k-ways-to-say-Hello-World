---
id: 0064
language: cpp
paradigm: procedural
output: stderr
platform: cli
era: vintage
tags: []
notes: "fputs to stderr from <cstdio>; vintage C-style error output."
author: ChidcGithub
date: 2026-07-20
---

# #0064 · Fputs stderr Vintage Hello

## Description

A vintage C-style Hello World that writes the greeting to the standard **error** stream using `fputs` from `<cstdio>`. Unlike the `std::cerr` entry (which uses the C++ iostreams library), this version uses the C standard library's `fputs` with an explicit `stderr` argument — the form a K&R-era C programmer would reach for when writing a diagnostic message. The program is compiled as C++ but uses no C++-specific machinery beyond the `<cstdio>` header.

## Source Code

`main.cpp`:

```cpp
#include <cstdio>
int main() { fputs("Hello, World!\n", stderr); }
```

## Run

```bash
cd hello-worlds/cpp/0064-fputs-stderr-vintage
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
| language | `cpp` | Compiled as C++20, but uses only the C standard library subset |
| paradigm | `procedural` | A single call to a C library function; no C++-specific abstractions |
| output | `stderr` | `fputs(..., stderr)` writes to the standard error stream (file descriptor 2) |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `fputs` and `stderr` are K&R-era C (late 1970s); using them in C++ reflects the "better C" era |
| tags | `[]` | No special technique worth indexing beyond the non-default output stream |

## Reference

- [C++ Reference: `std::fputs`](https://en.cppreference.com/w/cpp/io/c/fputs)
- [C++ Reference: `std::stderr`](https://en.cppreference.com/w/c/io)
- [Standard streams](https://en.wikipedia.org/wiki/Standard_streams)
