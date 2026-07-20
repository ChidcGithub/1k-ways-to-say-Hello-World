---
id: 0024
language: python
paradigm: procedural
output: audio
platform: cli
era: modern
tags: []
notes: "Windows-only: uses winsound to beep the rhythm of 'Hello, World!' in Morse code."
author: ChidcGithub
date: 2026-07-20
---

# #0024 · Audio Winsound

## Description

A Windows-only audio Hello World. The string "HELLO WORLD" is translated into International Morse Code, printed to stdout as a visible record, and then played as a sequence of beeps through the system speaker via the `winsound` module. Dots are 200 ms tones, dashes are 600 ms tones, both at 800 Hz. This differs from the classic stdout entry by making the output auditory rather than textual.

## Source Code

`main.py`:

```python
import winsound
import time

MORSE = {
    'A': '.-',    'B': '-...',  'C': '-.-.',  'D': '-..',
    'E': '.',     'F': '..-.',  'G': '--.',   'H': '....',
    'I': '..',    'J': '.---',  'K': '-.-',   'L': '.-..',
    'M': '--',    'N': '-.',    'O': '---',   'P': '.--.',
    'Q': '--.-',  'R': '.-.',   'S': '...',   'T': '-',
    'U': '..-',   'V': '...-',  'W': '.--',   'X': '-..-',
    'Y': '-.--',  'Z': '--..',
    ' ': '/',
}

FREQ = 800
DOT_MS = 200
DASH_MS = 600
SYMBOL_GAP_MS = 200
LETTER_GAP_MS = 600

text = "HELLO WORLD"
morse_str = " ".join(MORSE[ch] for ch in text)
print(morse_str)

for ch in text:
    code = MORSE[ch]
    if code == '/':
        time.sleep(LETTER_GAP_MS / 1000)
        continue
    for sym in code:
        duration = DOT_MS if sym == '.' else DASH_MS
        winsound.Beep(FREQ, duration)
        time.sleep(SYMBOL_GAP_MS / 1000)
    time.sleep(LETTER_GAP_MS / 1000)
```

## Run

```bash
cd hello-worlds/python/0024-audio-winsound
python main.py
```

> Note: `winsound` is only available on Windows. On other platforms the `import winsound` line fails with `ModuleNotFoundError`.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3 standard library (`winsound`) |
| paradigm | `procedural` | Sequential statements iterating over a fixed string; no classes or higher-order abstractions |
| output | `audio` | The greeting reaches the user as audible beeps via `winsound.Beep` |
| platform | `cli` | Runs from a terminal; `winsound` is a Windows console API |
| era | `modern` | `winsound` module and its `Beep` API have been stable since Python 3.0 (2008), in the 2001–2020 modern era |
| tags | `[]` | No special trick worth indexing beyond the audio output medium |

## Reference

- [Python `winsound` documentation](https://docs.python.org/3/library/winsound.html)
