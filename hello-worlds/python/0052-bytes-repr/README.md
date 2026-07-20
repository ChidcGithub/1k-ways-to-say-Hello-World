---
id: 0052
language: python
paradigm: procedural
output: stderr
platform: cli
era: contemporary
tags: []
notes: "Constructs the greeting as a bytes literal, decodes, writes to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0052 · Bytes Repr Hello

## Description

A procedural Hello World that starts life as a `bytes` literal — the raw ASCII byte sequence `b"Hello, World!"` — and is then decoded back to a `str` before being written to standard error. Compared to the canonical `print("Hello, World!")`, this version makes the byte-level representation of the greeting explicit and routes it through the error stream, which is the right channel for diagnostics and log-style output in shell pipelines.

## Source Code

`main.py`:

```python
import sys

b = b"Hello, World!"
sys.stderr.write(b.decode() + "\n")
```

## Run

```bash
cd hello-worlds/python/0052-bytes-repr
python main.py
```

To confirm the greeting lands on stderr (and *not* on stdout), redirect stderr to stdout and discard stdout:

```bash
# Windows (cmd / PowerShell)
python main.py 2>&1 1>nul

# POSIX shells
python main.py 2>&1 1>/dev/null
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, standard library only (`sys`) |
| paradigm | `procedural` | A short sequence of statements: build bytes, decode, write — no higher-order abstraction |
| output | `stderr` | Writes via `sys.stderr.write`, going to the standard error stream rather than stdout |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | Idiomatic Python 3 byte/str handling (`bytes.decode`) routed to stderr, in line with contemporary (2021+) logging conventions |
| tags | `[]` | No special technique worth indexing beyond the non-default output stream and bytes literal |

## Reference

- [Python `bytes` and `bytes.decode`](https://docs.python.org/3/library/stdtypes.html#bytes.decode)
- [Python `sys.stderr`](https://docs.python.org/3/library/sys.html#sys.stderr)
