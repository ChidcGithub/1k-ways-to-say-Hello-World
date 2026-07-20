---
id: 0122
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: vintage
tags: [code-golf]
notes: "Absolute minimum char count using puts(); vintage code-golf."
author: ChidcGithub
date: 2026-07-20
---

# #0122 · Code Golf puts (Vintage)

## Description

A vintage code-golf Hello World that drives the source down to the absolute minimum character count by relying on the C-predecessor idiom of a single `puts` call with no explicit `return`. Conceptually this descends from the K&R-era convention of `main(){...}` with implicit `int` return — the shortest form that was ever valid in pre-C99 C. Modern C++ (and C99 onward) rejects implicit `int`, so the actual source uses the explicit `int main()` form to remain standard-conforming while preserving the one-statement, no-explicit-return body. `puts` is chosen over `printf` because it appends the trailing newline for free (saving two characters) and needs no format string.

### Character count breakdown

| Component | Characters |
|-----------|-----------:|
| `#include <cstdio>` | 17 |
| newline | 1 |
| `int main(){puts("Hello, World!");}` | 34 |
| **Total (excl. trailing newline)** | **52** |
| Total bytes on disk (with trailing `\n`) | 53 |

The hypothetical implicit-int variant `main(){puts("Hello, World!");}` would be **30** characters for the body (47 total), but is rejected by `g++ -std=c++20`.

## Source Code

`main.cpp`:

```cpp
#include <cstdio>
int main(){puts("Hello, World!");}
```

## Run

```bash
cd hello-worlds/cpp/0122-code-golf-puts
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

> Antivirus note: the user's environment deletes generated `.exe` files, so syntax-only verification (`g++ -std=c++20 -fsyntax-only main.cpp`) is the supported verification path on this machine.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `procedural` | Single call to `puts` in `main` |
| output | `stdout` | `puts` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | Idiom descends from K&R / pre-C99 implicit-int golfing tradition |
| tags | `[code-golf]` | Source minimized to 52 characters excluding trailing newline |

## Reference

- [cppreference — puts](https://en.cppreference.com/w/c/io/puts)
- C++ standard: implicit `return 0;` from `main` ([basic.start.main])
- [Wikipedia — K&R C](https://en.wikipedia.org/wiki/C_(programming_language)#K&R_C)
