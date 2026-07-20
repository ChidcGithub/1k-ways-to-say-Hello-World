---
id: 0119
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Builds the greeting from an array of int ASCII codes; no literal letters in source."
author: ChidcGithub
date: 2026-07-20
---

# #0119 · Obfuscated ASCII Codes Hello

## Description

An obfuscated Hello World where the source code contains no literal letters spelling the greeting. Instead, the twelve character codes of `Hello, World!` are stored as plain `int` values (`72, 101, 108, ...`), and the program casts each to `char` and streams it to `std::cout`. A reader skimming the source sees only a list of numbers; the greeting only materializes at runtime. Unlike the `putchar` loop entry (#0063), this one emphasizes the encoding-as-data trick rather than one-liner brevity.

## Source Code

`main.cpp`:

```cpp
#include <iostream>

int main() {
    int codes[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
    for (int c : codes) std::cout << (char)c;
    std::cout << std::endl;
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0119-obfuscated-ascii-codes
g++ -std=c++20 main.cpp -o hello
./hello
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using only `<iostream>` from the standard library |
| paradigm | `procedural` | A single range-for loop over an array of integers |
| output | `stdout` | Each character is written to `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Range-based `for` over a C array arrived with C++11 (2011) |
| tags | `[obfuscated]` | The greeting is hidden as integer ASCII codes; no string literal in source |

## Reference

- [ASCII table](https://en.wikipedia.org/wiki/ASCII)
- [C++ Reference: Range-based for loop](https://en.cppreference.com/w/cpp/language/range-for)
