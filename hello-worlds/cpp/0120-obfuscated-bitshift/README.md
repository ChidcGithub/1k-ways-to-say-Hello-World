---
id: 0120
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: [obfuscated]
notes: "Constructs chars via bit-shift of integer constants; vintage obfuscation."
author: ChidcGithub
date: 2026-07-20
---

# #0120 · Obfuscated Bitshift Hello

## Description

An obfuscated Hello World where every character of `Hello, World!` is computed at runtime from integer bit-shift expressions such as `(1<<6)+(1<<3)` (which evaluates to 72, the ASCII code for `H`). The source contains no string literal and no decimal character constants — only powers of two combined with `<<` and `+`. The style is deliberately vintage: it mimics the kind of bit-twiddling obfuscation common in early IOCCC entries, where the goal is to make the printed output a surprise.

## Source Code

`main.cpp`:

```cpp
#include <iostream>

int main() {
    std::cout << (char)((1 << 6) + (1 << 3))                                        // 'H'  = 72
              << (char)((1 << 6) + (1 << 5) + (1 << 2) + 1)                        // 'e'  = 101
              << (char)((1 << 6) + (1 << 5) + (1 << 3) + (1 << 2))                  // 'l'  = 108
              << (char)((1 << 6) + (1 << 5) + (1 << 3) + (1 << 2))                  // 'l'  = 108
              << (char)((1 << 6) + (1 << 5) + (1 << 3) + (1 << 2) + (1 << 1) + 1)   // 'o'  = 111
              << (char)((1 << 5) + (1 << 3) + (1 << 2))                            // ','  = 44
              << (char)((1 << 5))                                                  // ' '  = 32
              << (char)((1 << 6) + (1 << 4) + (1 << 2) + (1 << 1) + 1)             // 'W'  = 87
              << (char)((1 << 6) + (1 << 5) + (1 << 3) + (1 << 2) + (1 << 1) + 1)  // 'o'  = 111
              << (char)((1 << 6) + (1 << 5) + (1 << 4) + (1 << 1))                 // 'r'  = 114
              << (char)((1 << 6) + (1 << 5) + (1 << 3) + (1 << 2))                  // 'l'  = 108
              << (char)((1 << 6) + (1 << 5) + (1 << 2))                            // 'd'  = 100
              << (char)((1 << 5) + 1)                                              // '!'  = 33
              << std::endl;
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0120-obfuscated-bitshift
g++ -std=c++20 main.cpp -o hello
./hello
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using only `<iostream>` from the standard library |
| paradigm | `procedural` | A single chained `std::cout` expression of casted integers |
| output | `stdout` | Each computed character is written to `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | Bit-shift obfuscation evokes the early IOCCC / K&R-era style |
| tags | `[obfuscated]` | Characters are constructed from bit-shift expressions; no string or char literals |

## Reference

- [ASCII table](https://en.wikipedia.org/wiki/ASCII)
- [Bitwise operations in C and C++](https://en.wikipedia.org/wiki/Bitwise_operations_in_C)
