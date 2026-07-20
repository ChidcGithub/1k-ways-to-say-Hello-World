---
id: 0195
language: c
paradigm: procedural
output: serial
platform: embedded
era: modern
tags: []
notes: "Arduino-style setup()/loop() mock; simulates Serial.print() to UART."
author: ChidcGithub
date: 2026-07-20
---

# #0195 · C embedded Arduino serial

## Description

An Arduino-flavored Hello World that mimics the Wiring `setup()`/`loop()` structure and the `Serial` UART object. A `Serial` struct holds function pointers (`begin`, `print`, `println`) just like the Arduino API, and the mock implementations route output to `printf` tagged with a `[Serial]:` prefix, simulating what would appear on a real UART monitor. `setup()` initializes the serial port at 9600 baud and emits `Hello, World!`; `loop()` is empty as in real Arduino sketches. `main()` simply calls `setup()` so the program is runnable on a host. The struct uses function pointers (rather than C++ member functions) so the source is valid C11.

## Source Code

`main.c`:

```c
#include <stdio.h>
/* Mock Arduino Serial (C11-compatible via function pointers) */
static void serial_begin(int b) { (void)b; }
static void serial_print(const char *s) { printf("[Serial]: %s", s); }
static void serial_println(const char *s) { printf("[Serial]: %s\n", s); }
static struct {
    void (*begin)(int);
    void (*print)(const char *);
    void (*println)(const char *);
} Serial = { serial_begin, serial_print, serial_println };
void setup(void) { Serial.begin(9600); Serial.println("Hello, World!"); }
void loop(void) {}
int main(void) { setup(); return 0; }
```

## Run

```bash
cd hello-worlds/c/0195-embedded-arduino-serial
gcc main.c -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language (C11) |
| paradigm | `procedural` | `setup`/`loop` functions called from `main` |
| output | `serial` | Greeting is routed through the mock `Serial` UART object |
| platform | `embedded` | Mimics the Arduino/embedded sketch model |
| era | `modern` | Arduino/Wiring API dates to 2005 |
| tags | `[]` | Standard Arduino sketch pattern (mocked for host) |

## Reference

- Arduino — `Serial.begin()`, `Serial.print()`, `Serial.println()` and the `setup()`/`loop()` sketch structure.
- ISO/IEC 9899 — function pointers (6.7.5.3) used to emulate object methods in C.
