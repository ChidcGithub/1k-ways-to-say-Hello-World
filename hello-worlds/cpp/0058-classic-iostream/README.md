---
id: 0058
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: []
notes: "The canonical C++ Hello World using std::cout from <iostream>."
author: ChidcGithub
date: 2026-07-20
---

# #0058 · Classic iostream Hello

## Description

The canonical C++ Hello World using `std::cout` from `<iostream>`. This is the form found in Stroustrup's *The C++ Programming Language* and nearly every C++ textbook since the standardization of the iostreams library. The program inserts the string literal `"Hello, World!"` into the standard output stream followed by `std::endl`, which flushes the buffer and emits a newline.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
int main() { std::cout << "Hello, World!" << std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0058-classic-iostream
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using the standard `<iostream>` library |
| paradigm | `procedural` | A single statement in `main`; no classes, templates, or free functions |
| output | `stdout` | Writes to standard output via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `std::cout` dates to the original iostreams library (1985+) and is the textbook-canonical form |
| tags | `[]` | No special technique; the reference C++ form |

## Reference

- Bjarne Stroustrup, *The C++ Programming Language* — the canonical C++ Hello World form.
- [C++ Reference: `std::cout`](https://en.cppreference.com/w/cpp/io/cout)
