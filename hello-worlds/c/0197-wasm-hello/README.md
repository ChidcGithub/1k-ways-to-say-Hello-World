---
id: 0197
language: c
paradigm: procedural
output: stdout
platform: wasm
era: contemporary
tags: []
notes: "WebAssembly-targeted C; uses a mock js_print() that would call out to JS."
author: ChidcGithub
date: 2026-07-20
---

# #0197 · C wasm hello

## Description

A WebAssembly-targeted Hello World. In a real WASM build, `js_print` would be an imported host function (declared with `__attribute__((import_name("js_print")))` and supplied by the embedding JavaScript), so the greeting would be rendered by the browser or JS host rather than by C's own I/O. For local compilation the function is given a mock definition that delegates to `printf`, so the program also runs as an ordinary CLI executable. The structure illustrates the canonical WASM pattern of C code calling out to JS-provided imports for I/O.

## Source Code

`main.c`:

```c
#include <stdio.h>
/* In real WASM, this would be an extern import: __attribute__((import_name("js_print"))) */
extern void js_print(const char *s);
/* Mock for local compilation */
void js_print(const char *s) { printf("%s\n", s); }
int main(void) { js_print("Hello, World!"); return 0; }
```

## Run

```bash
cd hello-worlds/c/0197-wasm-hello
gcc main.c -o hello && ./hello
# For a real WASM build: emcc main.c -o hello.wasm
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Single call from `main` to the imported helper |
| output | `stdout` | Mock implementation uses `printf`; real WASM build would call a JS import |
| platform | `wasm` | Targeted at WebAssembly |
| era | `contemporary` | WebAssembly 1.0 shipped in 2017 |
| tags | `[]` | Standard WASM host-import pattern |

## Reference

- WebAssembly — C/C++ import attributes (`import_name`) for host-provided functions.
- Emscripten — `emcc` toolchain for compiling C to WASM.
