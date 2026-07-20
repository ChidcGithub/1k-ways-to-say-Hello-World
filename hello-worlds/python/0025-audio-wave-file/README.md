---
id: 0025
language: python
paradigm: procedural
output: file
platform: cli
era: contemporary
tags: [one-liner]
notes: "Generates a WAV file containing a beep sequence; one-liner body using wave + struct."
author: ChidcGithub
date: 2026-07-20
---

# #0025 · Audio Wave File

## Description

A file-output Hello World that synthesises audio rather than text. The core write logic is a single line: it opens a WAV file, configures it as mono 16-bit PCM at 44.1 kHz, and writes a 0.5-second square-wave beep (~880 Hz) whose samples are generated inline with a generator expression and packed with `struct`. The greeting therefore lives inside `hello.wav` as an audible tone, with only a confirmation message printed to stdout. Standard library only — `wave` and `struct`.

## Source Code

`main.py`:

```python
import wave, struct

w = wave.open("hello.wav", "w"); w.setnchannels(1); w.setsampwidth(2); w.setframerate(44100); w.writeframes(b"".join(struct.pack("<h", int(32767 * (1 - 2 * ((i // 25) % 2)))) for i in range(22050))); w.close()

print("Wrote hello.wav")
```

## Run

```bash
cd hello-worlds/python/0025-audio-wave-file
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3 standard library (`wave`, `struct`) |
| paradigm | `procedural` | A single sequential write pipeline; no classes or higher-order functions beyond the inline generator |
| output | `file` | The greeting is delivered as the contents of `hello.wav`; stdout only carries a confirmation |
| platform | `cli` | Runs from a terminal and writes a file to the working directory |
| era | `contemporary` | Uses the walrus-free generator-expression + `struct.pack` style common in modern Python 3 code golf (2021+) |
| tags | `[one-liner]` | The entire WAV write — open, configure, synthesise frames, close — is one statement chain on a single line |

## Reference

- [Python `wave` documentation](https://docs.python.org/3/library/wave.html)
- [Python `struct` documentation](https://docs.python.org/3/library/struct.html)
