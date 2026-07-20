---
id: 0057
language: python
paradigm: procedural
output: file
platform: cli
era: contemporary
tags: []
notes: "Decodes a base64-encoded 'Hello, World!' and writes it to a file."
author: ChidcGithub
date: 2026-07-20
---

# #0057 · Python Base64 Encoded

## Description

A Hello World whose payload travels as base64. The source holds the encoded form `b"SGVsbG8sIFdvcmxkIQ=="` (the base64 encoding of the ASCII bytes of `Hello, World!`); `base64.b64decode` reverses the encoding to recover the raw bytes, which are then written to `hello.txt` on disk. The file is re-opened and its contents printed to stdout as a verification echo, but the durable destination of the greeting is the filesystem — making this distinct from entry #0019 (file-write of a plain literal) by virtue of the base64 transport encoding. Uses only the standard-library `base64` module and built-in `open()`.

## Source Code

`main.py`:

```python
import base64

encoded = b"SGVsbG8sIFdvcmxkIQ=="
decoded = base64.b64decode(encoded)

with open("hello.txt", "wb") as f:
    f.write(decoded)

with open("hello.txt", "rb") as f:
    content = f.read()

print(content.decode("utf-8"))
```

## Run

```bash
cd hello-worlds/python/0057-base64-encoded
python main.py
```

After running, a file `hello.txt` will appear next to `main.py` containing `Hello, World!`, and the same string will be printed to stdout as verification.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3, using the `base64` standard library module |
| paradigm | `procedural` | A sequence of statements with no classes or higher-order functions |
| output | `file` | The decoded greeting is written to `hello.txt` on disk; stdout is only a verification echo |
| platform | `cli` | Runs from a terminal/command-line interpreter |
| era | `contemporary` | Uses base64 decoding as a current-era transport-style technique layered over standard file I/O |
| tags | `[]` | No special technique worth indexing beyond the base64 transport — straightforward decode-and-write |

## Reference

- [Python 3 `base64` module documentation](https://docs.python.org/3/library/base64.html)
