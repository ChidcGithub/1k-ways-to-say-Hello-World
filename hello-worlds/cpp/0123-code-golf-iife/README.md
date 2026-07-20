---
id: 0123
language: cpp
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [code-golf]
notes: "Code-golfed IIFE using puts inside a lambda; modern minimalism."
author: ChidcGithub
date: 2026-07-20
---

# #0123 · Code Golf IIFE (Modern)

## Description

A modern code-golf Hello World that wraps the `puts` call inside a lambda and immediately invokes it — a JavaScript-borrowed IIFE (Immediately Invoked Function Expression) idiom expressed in C++11 lambda syntax. The body of `main` is a single expression: define a closure `[](){...}` with no captures and call it in place with `()`. This is the shortest functional-style Hello World in standard C++: the work happens inside a first-class function value, satisfying the "functional" paradigm, while the byte count stays low enough to qualify as code-golf. It contrasts with the vintage procedural golf entry (#0122) by exhibiting the lambda-as-value mindset that became idiomatic after C++11.

### Character count breakdown

| Component | Characters |
|-----------|-----------:|
| `#include <cstdio>` | 17 |
| newline | 1 |
| `int main(){[](){puts("Hello, World!");}();}` | 43 |
| — of which: body of `main` (inside `{}`) | 31 |
| **Total (excl. trailing newline)** | **61** |
| Total bytes on disk (with trailing `\n`) | 62 |

## Source Code

`main.cpp`:

```cpp
#include <cstdio>
int main(){[](){puts("Hello, World!");}();}
```

## Run

```bash
cd hello-worlds/cpp/0123-code-golf-iife
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

> Antivirus note: the user's environment deletes generated `.exe` files, so syntax-only verification (`g++ -std=c++20 -fsyntax-only main.cpp`) is the supported verification path on this machine.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `functional` | Greeting emitted by invoking a lambda value (IIFE) |
| output | `stdout` | `puts` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | C++11 lambdas (2011) place this in the modern era |
| tags | `[code-golf]` | Source minimized to 61 characters excluding trailing newline |

## Reference

- [cppreference — Lambda expressions](https://en.cppreference.com/w/cpp/language/lambda)
- [Wikipedia — Immediately invoked function expression](https://en.wikipedia.org/wiki/Immediately_invoked_function_expression)
