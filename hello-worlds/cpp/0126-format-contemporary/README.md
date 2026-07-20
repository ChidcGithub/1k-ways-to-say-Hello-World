---
id: 0126
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: contemporary
tags: []
notes: "C++20 std::format to build the greeting (contemporary, printf successor)."
author: ChidcGithub
date: 2026-07-20
---

# #0126 · std::format Contemporary Hello World

## Description

A contemporary Hello World that builds the greeting with `std::format`, the Python-`str.format`-inspired formatting facility introduced in C++20 as the type-safe successor to `printf`. The format string `"{}, {}!"` carries two replacement fields, filled positionally with `"Hello"` and `"World"`. The resulting `std::string` is streamed to `std::cout`. This entry contrasts with the `printf`-based entries (`#0059`, `#0122`) by showcasing the modern formatting vocabulary that avoids format-string/type-mismatch bugs while staying lighter-weight than streaming `<<` chains.

### Verification note

`<format>` support in libstdc++ landed over the 13/14 releases; this file passes `g++ -std=c++20 -fsyntax-only` on the user's installed toolchain (MinGW-W64 g++ 13.2.0). On older libstdc++ (< 13) the header may be absent and a `std::stringstream` fallback would be needed; that fallback is intentionally not used here because the contemporary-era classification depends on using the real `std::format` API.

## Source Code

`main.cpp`:

```cpp
#include <format>
#include <iostream>
int main(){ std::cout<<std::format("{}, {}!","Hello","World")<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0126-format-contemporary
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

> Antivirus note: the user's environment deletes generated `.exe` files, so syntax-only verification (`g++ -std=c++20 -fsyntax-only main.cpp`) is the supported verification path on this machine.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `procedural` | A single call to `std::format` whose result is streamed to `std::cout` |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | `std::format` is C++20 (2020), contemporary era |
| tags | `[]` | No special technique worth indexing beyond the contemporary formatting idiom |

## Reference

- [cppreference — std::format](https://en.cppreference.com/w/cpp/utility/format/format)
- [P0645 R10 — Text Formatting](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2019/p0645r10.html)
