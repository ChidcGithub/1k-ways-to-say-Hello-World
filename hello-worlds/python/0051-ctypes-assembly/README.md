---
id: 0051
language: python
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [hand-assembled]
notes: "Uses ctypes to call the C library's puts function directly (hand-assembled FFI)."
author: ChidcGithub
date: 2026-07-20
---

# #0051 · Ctypes Assembly Hello

## Description

A procedural Hello World that bypasses Python's `print` entirely and calls the C runtime library's `puts` function by hand through `ctypes`. The program loads `msvcrt.dll` on Windows and falls back to `libc.so.6` on POSIX, then hands a `bytes` buffer straight to the foreign function. This is hand-assembled FFI: the Python code itself is the glue, but the actual write to stdout happens inside the C library, with no Python object layer in between.

## Source Code

`main.py`:

```python
import ctypes

try:
    libc = ctypes.CDLL("msvcrt.dll")
except OSError:
    libc = ctypes.CDLL("libc.so.6")

libc.puts(b"Hello, World!")
```

## Run

```bash
cd hello-worlds/python/0051-ctypes-assembly
python main.py
```

Expected output: `Hello, World!` (the C `puts` appends its own trailing newline).

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only (`ctypes`) |
| paradigm | `procedural` | A short sequence of statements: load library, call function — no classes, closures, or data flow |
| output | `stdout` | `puts` writes to the C process's standard output stream |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `modern` | `ctypes` FFI to the C runtime has been idiomatic Python 3 since the modern era (2001–2020) |
| tags | `[hand-assembled]` | Directly invokes the C runtime's `puts` by FFI rather than going through Python's I/O layer |

## Reference

- [Python `ctypes`](https://docs.python.org/3/library/ctypes.html)
- [C `puts`](https://en.cppreference.com/w/c/io/puts)
