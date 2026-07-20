---
id: 0185
language: c
paradigm: procedural
output: stderr
platform: cli
era: vintage
tags: [hand-assembled]
notes: "x86 inline assembly using int 0x80 syscall to write to stderr (fd 2)."
author: ChidcGithub
date: 2026-07-20
---

# #0185 · C inline asm stderr hand-assembled

## Description

A hand-assembled flavor C Hello World that targets fd 2 (stderr) via inline assembly. The program loads the classic Linux/x86-32 `int 0x80` syscall sequence: `eax=4` (`sys_write`), `ebx=2` (stderr), `ecx` pointing at the message, `edx=14` (byte count), then traps. The GNU C extended `__asm__` block binds the C variables `msg` and `len` to the `ecx`/`edx` registers via operand constraints and declares `eax`/`ebx`/`ecx`/`edx` as clobbered. The source is valid GNU C extension syntax and parses cleanly under `-std=c11 -fsyntax-only`. Note: the `int 0x80` trap is specific to 32-bit Linux; on a 64-bit or non-Linux host the inline asm is syntactically valid but would not produce a working syscall at runtime.

## Source Code

`main.c`:

```c
#define _POSIX_C_SOURCE 200809L
#include <unistd.h>
int main(void) {
    const char *msg = "Hello, World!\n";
    int len = 14;
    __asm__ volatile (
        "movl $4, %%eax\n"
        "movl $2, %%ebx\n"
        "movl %0, %%ecx\n"
        "movl %1, %%edx\n"
        "int $0x80\n"
        :: "r"(msg), "r"(len) : "eax", "ebx", "ecx", "edx"
    );
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0185-inline-asm-stderr-handasm
gcc -std=c11 main.c -o hello
./hello 2>&1
```

> Note: redirect `2>&1` so stderr is visible alongside stdout in the same shell.
> Note: the `int 0x80` trap is specific to 32-bit Linux (i386). On a 64-bit host, compile with `-m32` for a working syscall; on non-Linux hosts the inline asm is syntactically valid but will not produce a runtime syscall.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language (GNU C extension) |
| paradigm | `procedural` | Sequential setup of registers and trap in `main`, no abstraction |
| output | `stderr` | Inline `sys_write` to fd 2 (stderr) |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `int 0x80` syscall and inline asm are vintage / bare-metal idioms |
| tags | `[hand-assembled]` | Hand-assembled `sys_write` via inline assembly, no library calls |

## Reference

- [GCC Inline Assembly Howto](https://gcc.gnu.org/onlinedocs/gcc/Using-Assembly-Language-with-C.html)
- Linux `int 0x80` syscall table — `sys_write` (eax=4) on fd 2.
