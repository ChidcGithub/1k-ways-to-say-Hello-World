---
id: 0196
language: c
paradigm: procedural
output: serial
platform: embedded
era: vintage
tags: [hand-assembled]
notes: "AVR bare-metal style: direct UART register access (mocked for compilation)."
author: ChidcGithub
date: 2026-07-20
---

# #0196 · C embedded AVR serial hand-assembled

## Description

A bare-metal AVR-style Hello World that talks directly to the UART peripheral through memory-mapped register macros: `UDR0` (the UART data register at `0xC6`) and `UCSR0A` (the control/status register at `0xC0`). The `uart_tx()` helper busy-waits on the `UDRE0` (data-register-empty) bit before writing each character to `UDR0`, exactly as one would on a real ATmega328P. The register addresses are written as raw pointer dereferences, evoking the hand-assembled register-level programming style of early AVR toolchains. A `printf` in `main` mirrors the UART payload on `stdout` so the program is observable when compiled for a host (the real register addresses only have meaning on AVR hardware).

## Source Code

`main.c`:

```c
#include <stdio.h>
/* Mock AVR registers */
#define UDR0 (*((volatile unsigned char*)0xC6))
#define UCSR0A (*((volatile unsigned char*)0xC0))
#define UDRE0 5
static int uart_ready(void) { return UCSR0A & (1 << UDRE0); }
static void uart_tx(char c) { while(!uart_ready()); UDR0 = c; }
void setup(void) {
    const char *s = "Hello, World!\n";
    while (*s) uart_tx(*s++);
}
int main(void) { setup(); printf("[AVR UART]: Hello, World!\n"); return 0; }
```

## Run

```bash
cd hello-worlds/c/0196-embedded-avr-serial-handasm
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Register-level helpers called from `setup`/`main` |
| output | `serial` | Greeting is written byte-by-byte to the UART data register |
| platform | `embedded` | Targets AVR-class microcontroller hardware |
| era | `vintage` | Memory-mapped register access mirrors early bare-metal MCU programming |
| tags | `[hand-assembled]` | Direct register addressing reminiscent of hand-assembled firmware |

## Reference

- Atmel AVR — `UDR0`, `UCSR0A`, `UDRE0` register definitions (ATmega328P datasheet).
- ISO/IEC 9899 — `volatile` qualifier and pointer-to-volatile for memory-mapped I/O (6.7.3).
