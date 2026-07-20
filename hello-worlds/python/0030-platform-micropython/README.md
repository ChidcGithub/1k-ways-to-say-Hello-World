---
id: 0030
language: python
paradigm: procedural
output: stdout
platform: embedded
era: modern
tags: []
notes: "MicroPython-style: would print to UART on real hardware; falls back to print() on CPython."
author: ChidcGithub
date: 2026-07-20
---

# #0030 · Python Platform MicroPython

## Description

A MicroPython-flavoured Hello World targeting microcontrollers. On real hardware it opens UART0 at 115200 baud and writes the greeting over the serial line; on a developer's CPython machine the `machine` module is unavailable, so the `ImportError` fallback emits the same text via `print()`. The same source file runs in both worlds without modification.

## Source Code

`main.py`:

```python
try:
    from machine import UART

    uart = UART(0, 115200)
    uart.write("Hello, World!\n")
except ImportError:
    print("Hello, World!")
```

## Run

```bash
cd hello-worlds/python/0030-platform-micropython
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3 syntax shared by CPython and MicroPython |
| paradigm | `procedural` | Sequential try/except block; no classes or closures |
| output | `stdout` | On CPython the fallback `print()` writes to standard output (on hardware it goes to UART) |
| platform | `embedded` | Targets microcontrollers running MicroPython (e.g. ESP8266, ESP32, RP2040) |
| era | `modern` | MicroPython debuted in 2014, placing it in the 2001–2020 modern era |
| tags | `[]` | The platform itself is the distinguishing feature; no extra technique tag |

## Reference

- [MicroPython `machine.UART` documentation](https://docs.micropython.org/en/latest/library/machine.UART.html)
