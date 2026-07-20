---
id: 0065
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: [hand-assembled]
notes: "Calls the OS write() syscall directly via <io.h> _write on Windows (fd 1=stdout); hand-assembled FFI style."
author: ChidcGithub
date: 2026-07-20
---

# #0065 · Write syscall hand-assembled

## Description

A hand-assembled style Hello World that skips the usual `printf` / `std::cout` machinery and invokes the OS-level write routine directly. On Windows, `_write` (declared in `<io.h>`) is the low-level C-runtime wrapper over the OS file-write call; passing file descriptor `1` (stdout) and an explicit byte count of `14` mirrors the way a hand-assembled program would set up registers and issue `write(1, buf, len)` on a Unix syscall interface. The result is a Hello World where the only library function touched is the bare kernel-facing I/O primitive.

## Source Code

`main.cpp`:

```cpp
#include <io.h>     // _write
#include <fcntl.h>  // file descriptor constants

int main(void) {
    _write(1, "Hello, World!\n", 14);
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0065-write-syscall-handasm
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in C++ |
| paradigm | `procedural` | Sequential call to a low-level write routine |
| output | `stdout` | Written to file descriptor 1 (stdout) |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `_write` / syscall-style I/O predates the C++ streams abstraction |
| tags | `[hand-assembled]` | Hand-assembled FFI style: direct syscall wrapper, no formatting layer |

## Reference

- [Microsoft Learn — _write](https://learn.microsoft.com/en-us/cpp/c-runtime-library/reference/write)
- POSIX `write(2)` — the syscall this entry mimics.
