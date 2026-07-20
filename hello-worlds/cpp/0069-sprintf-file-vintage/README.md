---
id: 0069
language: cpp
paradigm: procedural
output: file
platform: cli
era: vintage
tags: []
notes: "Formats the greeting into a buffer via sprintf (vintage), writes buffer to a file."
author: ChidcGithub
date: 2026-07-20
---

# #0069 · sprintf file vintage

## Description

A vintage C++ Hello World that goes through a file rather than printing directly. The greeting is first formatted into a stack buffer with `sprintf` (the K&R-era C formatting routine), then the buffer is written to `hello.txt` via `fopen` / `fputs`, read back with `fgets`, and finally echoed to `stdout` with `printf` to confirm the round-trip succeeded. The temporary `hello.txt` is deleted with `remove` before the program exits, so the workspace is left clean. The entry is tagged `vintage` because `sprintf`, `fopen`, `fputs`, and `fgets` are all original C I/O routines carried forward through `<cstdio>`.

## Source Code

`main.cpp`:

```cpp
#include <cstdio>

int main(void) {
    char buf[32];
    std::sprintf(buf, "Hello, World!");

    FILE* out = std::fopen("hello.txt", "w");
    if (out == nullptr) {
        return 1;
    }
    std::fputs(buf, out);
    std::fclose(out);

    FILE* in = std::fopen("hello.txt", "r");
    if (in == nullptr) {
        return 2;
    }
    char readback[64];
    if (std::fgets(readback, sizeof(readback), in) != nullptr) {
        std::printf("%s\n", readback);
    }
    std::fclose(in);

    std::remove("hello.txt");
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0069-sprintf-file-vintage
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

> The program writes `hello.txt`, reads it back, prints `Hello, World!` to stdout, then deletes `hello.txt`. No file is left behind.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in C++ |
| paradigm | `procedural` | Sequential calls to C I/O routines in `main` |
| output | `file` | The greeting is persisted to `hello.txt` (then read back and printed for verification) |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `sprintf`, `fopen`, `fputs`, `fgets` are K&R-era C I/O routines |
| tags | `[]` | No special technique; straightforward file round-trip |

## Reference

- [cppreference — sprintf](https://en.cppreference.com/w/c/io/fprintf)
- [cppreference — fopen / fputs / fgets](https://en.cppreference.com/w/c/io)
