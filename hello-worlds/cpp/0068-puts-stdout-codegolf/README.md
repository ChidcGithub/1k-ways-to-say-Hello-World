---
id: 0068
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: [code-golf]
notes: "Minimized char count using puts() from <cstdio>; shortest viable C++ Hello World."
author: ChidcGithub
date: 2026-07-20
---

# #0068 · puts stdout code golf

## Description

A code-golfed C++ Hello World that minimizes character count. The whole program is two lines: an `#include <cstdio>` directive and a one-line `main` that calls `puts("Hello, World!")`. `puts` is preferred over `printf` because it appends a newline for free (saving two characters `\n`) and requires no format string. The body of `main` has no explicit `return` statement: under the C++ standard, `main` is the only function for which falling off the end implicitly returns `0`. The source file is **52 characters** excluding the trailing newline (53 bytes on disk with the trailing newline).

### Character count breakdown

| Component | Characters |
|-----------|-----------:|
| `#include <cstdio>` | 17 |
| newline | 1 |
| `int main(){puts("Hello, World!");}` | 34 |
| **Total (excl. trailing newline)** | **52** |
| Total bytes on disk (with trailing `\n`) | 53 |

## Source Code

`main.cpp`:

```cpp
#include <cstdio>
int main(){puts("Hello, World!");}
```

## Run

```bash
cd hello-worlds/cpp/0068-puts-stdout-codegolf
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in C++ |
| paradigm | `procedural` | Single call to `puts` in `main` |
| output | `stdout` | `puts` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `puts` from `<cstdio>` is a C-era (K&R) I/O routine |
| tags | `[code-golf]` | Source minimized to 52 characters excluding trailing newline |

## Reference

- [cppreference — puts](https://en.cppreference.com/w/c/io/puts)
- C++ standard: implicit `return 0;` from `main` ([basic.start.main]).
