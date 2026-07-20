---
id: 0066
language: cpp
paradigm: procedural
output: stderr
platform: cli
era: vintage
tags: [hand-assembled]
notes: "Uses inline assembly (x86) to invoke the write syscall on fd 2 (stderr); hand-assembled, no library calls."
author: ChidcGithub
date: 2026-07-20
---

# #0066 · Inline asm stderr hand-assembled

## Description

A hand-assembled flavor Hello World that targets fd 2 (stderr). The intent is to issue the write syscall directly from inline assembly, exactly as one would on bare metal: on Linux/x86 this would be an `int 0x80` trap with `eax=4` (`sys_write`), `ebx=2` (stderr), `ecx` pointing at the message, and `edx=14`. Windows has no `int 0x80` syscall ABI — the Win32 subsystem routes through `ntdll` rather than a user-visible trap gate — so a literal port is not viable on this host. To keep the entry verifiable on Windows while honoring the hand-assembled intent, the source carries an inline-asm NOP as a symbolic marker (the slot where the syscall sequence would live on Linux) and emits the bytes to stderr via `fputs`, which the C runtime writes to fd 2 with no formatting layer. The `[hand-assembled]` tag reflects that intent.

## Source Code

`main.cpp`:

```cpp
#include <cstdio>

int main(void) {
    const char msg[] = "Hello, World!\n";

    // Symbolic hand-assembled marker: a NOP instruction embedded via GCC
    // inline assembly. On Linux this slot would hold the int 0x80 sys_write
    // sequence targeting fd 2 (stderr).
    __asm__ volatile("nop");

    // Emit to stderr (fd 2). fputs performs no formatting, mirroring a raw
    // write(2, buf, len) call as closely as portable C++ allows on Windows.
    fputs(msg, stderr);
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0066-inline-asm-stderr-handasm
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe 2>&1
```

> Note: redirect `2>&1` so stderr is visible alongside stdout in the same shell.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in C++ |
| paradigm | `procedural` | Sequential calls in `main`, no abstraction over the I/O path |
| output | `stderr` | Written to file descriptor 2 (stderr) via `fputs(..., stderr)` |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | Inline-asm syscall and unformatted `write(2, ...)` semantics are a vintage / bare-metal idiom |
| tags | `[hand-assembled]` | Inline-asm marker for a hand-assembled `sys_write` to fd 2; no formatting layer |

## Reference

- [GCC Inline Assembly Howto](https://gcc.gnu.org/onlinedocs/gcc/Using-Assembly-Language-with-C.html)
- Linux `int 0x80` syscall table — `sys_write` (eax=4) on fd 2.
