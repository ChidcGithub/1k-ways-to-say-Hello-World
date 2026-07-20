---
id: 0103
language: cpp
paradigm: generic
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "SFINAE with std::enable_if to enable greet only for string-like types; obfuscated to untrained eye."
author: ChidcGithub
date: 2026-07-20
---

# #0103 · SFINAE Constraints

## Description

A function template `greet<T>` is constrained via a default template-argument of `typename std::enable_if<std::is_convertible<T,const char*>::value>::type`. Only types convertible to `const char*` can satisfy the substitution, so overload resolution silently drops `greet` for everything else — the canonical SFINAE pattern. To the untrained eye the signature looks like line noise; the reward is a single template that prints the greeting for string-like arguments and refuses to compile for the rest. Compared with #0105's `if constexpr` (which dispatches at runtime-ish inside one body) or #0101's specialisation (which writes a second body), SFINAE disables the candidate outright at substitution time.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <type_traits>
template<typename T, typename=typename std::enable_if<std::is_convertible<T,const char*>::value>::type> void greet(T msg){ std::cout<<msg<<std::endl; }
int main(){ greet("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/cpp/0103-sfinae-constraints
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 source compiled with `g++` |
| paradigm | `generic` | Template constrained by a `std::enable_if` SFINAE expression |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::enable_if` + `std::is_convertible` are C++11 (2011), modern era |
| tags | `[obfuscated]` | The `enable_if`-as-default-template-argument trick is famously hard to read |

## Reference

- [cppreference — std::enable_if](https://en.cppreference.com/w/cpp/types/enable_if)
- [cppreference — std::is_convertible](https://en.cppreference.com/w/cpp/types/is_convertible)
