---
id: 0107
language: cpp
paradigm: meta
output: stdout
platform: cli
era: vintage
tags: [obfuscated]
notes: "Preprocessor macro #defines the entire greeting; obfuscated vintage C style."
author: ChidcGithub
date: 2026-07-20
---

# #0107 · C++ Macro Obfuscated

## Description

A vintage-style Hello World where the entire greeting is assembled by the C preprocessor before the compiler ever sees the source. Three `#define` directives layer up the message: `H` expands to `"Hello"`, `W` to `"World"`, and `MSG` to `H ", " W "!"`. Because adjacent string literals are concatenated by the compiler after macro expansion, `MSG` ultimately becomes the single literal `"Hello, World!"`. The actual `main` body is a single `std::cout<<MSG<<std::endl;` that prints the already-built string. This entry showcases the preprocessor-driven, macro-heavy idiom typical of obfuscated C code (e.g. IOCCC entries) ported into a C++ source file.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#define H "Hello"
#define W "World"
#define MSG H ", " W "!"
int main(){ std::cout<<MSG<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0107-macro-obfuscated
g++ -std=c++20 main.cpp -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `meta` | Greeting is built by the preprocessor before compilation |
| output | `stdout` | `std::cout` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | Heavy preprocessor macro style echoes obfuscated vintage C |
| tags | `[obfuscated]` | Greeting hidden behind opaque single-letter macro names |

## Reference

- [cppreference — #define directive](https://en.cppreference.com/w/cpp/preprocessor/replace)
- [cppreference — String literal concatenation](https://en.cppreference.com/w/cpp/language/string_literal)
