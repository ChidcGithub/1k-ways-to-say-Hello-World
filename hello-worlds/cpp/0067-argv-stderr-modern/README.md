---
id: 0067
language: cpp
paradigm: procedural
output: stderr
platform: cli
era: modern
tags: []
notes: "Uses command-line argv to pass the greeting; outputs to stderr. Modern C++ with argc check."
author: ChidcGithub
date: 2026-07-20
---

# #0067 · argv stderr modern

## Description

A modern C++ Hello World that reads the greeting from the command line. `main` takes the standard `(argc, argv)` signature, and if at least one argument is supplied it is echoed to `std::cerr`; otherwise the program falls back to the canonical `"Hello, World!"` string. Routing through `std::cerr` (rather than `std::cout`) makes this a useful template for diagnostic or error-style output, and the explicit `argc` guard keeps the program well-defined when invoked with no arguments.

## Source Code

`main.cpp`:

```cpp
#include <iostream>

int main(int argc, char* argv[]) {
    if (argc > 1) {
        std::cerr << argv[1] << std::endl;
    } else {
        std::cerr << "Hello, World!" << std::endl;
    }
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0067-argv-stderr-modern
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe 2>&1
```

> Note: redirect `2>&1` so stderr is visible alongside stdout in the same shell. With no arguments, the program prints the default greeting to stderr.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in C++ |
| paradigm | `procedural` | Sequential statements in `main` with a simple `argc` guard |
| output | `stderr` | Output written to `std::cerr` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses the modern C++ I/O streams library and `argc`/`argv` convention |
| tags | `[]` | No special technique; standard idiomatic modern C++ |
