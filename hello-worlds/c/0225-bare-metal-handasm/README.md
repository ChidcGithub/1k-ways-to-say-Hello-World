---
id: 0225
language: c
paradigm: procedural
output: stdout
platform: bare-metal
era: vintage
tags: [hand-assembled]
notes: "Bare-metal: direct VGA text buffer write (0xB8000); stdio mocked for compilation."
author: ChidcGithub
date: 2026-07-20
---

# #0225 · C Bare-Metal (VGA)

## Description

Illustrates how a freestanding C program writes to the screen on a PC without an operating system: it casts `0xB8000` to a `volatile char *` (the VGA colour text buffer) and stores each byte of the message followed by its attribute byte `0x07` (white-on-black). The real bare-metal snippet is kept in a comment so the file still compiles cleanly under a hosted C11 toolchain; the active code uses `printf` to mock the visible output so the entry is self-verifying.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) {
    /* Real bare-metal code (commented for compilation):
    volatile char *vga = (volatile char*)0xB8000;
    const char *msg = "Hello, World!";
    for (int i = 0; msg[i]; i++) {
        vga[i * 2] = msg[i];
        vga[i * 2 + 1] = 0x07;
    }
    */
    printf("[Bare-metal VGA]: Hello, World!\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0225-bare-metal-handasm
gcc -std=c11 main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Direct pointer writes (mocked) plus a `printf` |
| output | `stdout` | Hosted build prints to stdout; real build writes VGA |
| platform | `bare-metal` | Targets the PC VGA text buffer at `0xB8000` |
| era | `vintage` | VGA text mode dates to the IBM PC/AT era (1980s) |
| tags | `[hand-assembled]` | Manual memory-mapped I/O, no runtime stub |

## Reference

- IBM PC/AT Technical Reference — VGA text buffer at segment 0xB800.
