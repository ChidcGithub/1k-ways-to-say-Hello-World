---
id: 0124
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [quine]
notes: "A quine that prints its own source, followed by 'Hello, World!' on the next line."
author: ChidcGithub
date: 2026-07-20
---

# #0124 · Quine Appended Hello World

## Description

A self-reproducing C++ program that prints its own source code to `stdout`, then prints `Hello, World!` on the next line. It uses the classic C-style quine technique: a single string `s` holds the source template with `%c`/`%s` placeholders, and `main` calls `printf(s, ...)` with the right argument list (newline = `10`, double-quote = `34`, the string itself = `s`) to materialise the source. Because `printf` re-substitutes `s` into itself, the byte-for-byte output of the first `printf` matches the program source verbatim. A second `printf("\nHello, World!\n")` then appends the greeting on its own line.

This entry differs from a pure quine in that it deliberately adds a non-quine tail — the greeting is the "payload" the quine wraps. The interesting tension is that the greeting appears twice in the output: once inside the reproduced source (as a string literal) and once as the actual runtime greeting.

### Why `const char*`

C++ deprecates (and rejects in stricter modes) the conversion from a string literal to a plain `char*`, so `s` is declared `const char*` to remain warning-clean under `-std=c++20`.

### Argument-list bookkeeping

`s` contains 7 format specifiers (`%c %c %s %c %c %c %c`) — newline, `"`, `s` itself, `"`, newline, `"`, `"`. The matching call is `printf(s, 10, 34, s, 34, 10, 34, 34)`.

## Source Code

`main.cpp`:

```cpp
#include <cstdio>
const char*s="#include <cstdio>%cconst char*s=%c%s%c;%cint main(){printf(s,10,34,s,34,10,34,34);printf(%c\\nHello, World!\\n%c);return 0;}";
int main(){printf(s,10,34,s,34,10,34,34);printf("\nHello, World!\n");return 0;}
```

## Run

```bash
cd hello-worlds/cpp/0124-quine-appended
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

Expected output is exactly the source file content followed by a blank line and the greeting:

```
#include <cstdio>
const char*s="...";
int main(){printf(s,10,34,s,34,10,34,34);printf("\nHello, World!\n");return 0;}
Hello, World!
```

> Antivirus note: the user's environment deletes generated `.exe` files, so syntax-only verification (`g++ -std=c++20 -fsyntax-only main.cpp`) is the supported verification path on this machine.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `procedural` | Two sequential `printf` calls in `main` |
| output | `stdout` | Both `printf` calls write to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses `const char*` discipline and C++20-compatible string literal handling |
| tags | `[quine]` | Reproduces its own source before printing the greeting |

## Reference

- [Wikipedia — Quine (computing)](https://en.wikipedia.org/wiki/Quine_(computing))
- [cppreference — printf](https://en.cppreference.com/w/c/io/fprintf)
