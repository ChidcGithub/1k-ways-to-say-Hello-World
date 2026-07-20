---
id: 0028
language: python
paradigm: procedural
output: audio
platform: cli
era: contemporary
tags: []
notes: "Prints 'Hello, World!' as Morse code AND uses console bell (\\a) to beep the pattern."
author: ChidcGithub
date: 2026-07-20
---

# #0028 · Morse Code Beep

## Description

A cross-platform audio Hello World that needs no audio library at all. "HELLO WORLD" is translated to International Morse Code, the resulting dot/dash string is printed to stdout (so there is a visible record), and then the same pattern is replayed as terminal-bell (`\a`) characters — one bell per dot or dash, with short pauses for dots and longer pauses for dashes. Unlike the `winsound` entry (0024), this works on any OS because it relies only on the terminal bell, a feature of virtually every console.

## Source Code

`main.py`:

```python
import sys
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

DOT_DUR = 0.12      # seconds a "dot" beep lasts
DASH_DUR = 0.30     # seconds a "dash" beep lasts
SYMBOL_GAP = 0.10   # gap between symbols within a letter
LETTER_GAP = 0.30   # gap between letters
WORD_GAP = 0.60     # gap between words (the '/' marker)

text = "HELLO WORLD"
morse_str = " ".join(MORSE[ch] for ch in text)
print(morse_str)

for ch in text:
    code = MORSE[ch]
    if code == '/':
        time.sleep(WORD_GAP)
        continue
    for sym in code:
        sys.stdout.write('\a')
        sys.stdout.flush()
        time.sleep(DOT_DUR if sym == '.' else DASH_DUR)
        time.sleep(SYMBOL_GAP)
    time.sleep(LETTER_GAP)
```

## Run

```bash
cd hello-worlds/python/0028-morse-code-beep
python main.py
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `python` | Python 3 standard library (`sys`, `time`) |
| paradigm | `procedural` | Sequential loop over a fixed string, sleeping and writing a byte per symbol |
| output | `audio` | The greeting reaches the user as a pattern of terminal-bell beeps |
| platform | `cli` | Runs in any terminal; the bell is a console feature |
| era | `contemporary` | Uses the modern cross-platform `\a` bell + `time.sleep` pattern typical of current (2021+) minimal-audio scripts |
| tags | `[]` | No special technique beyond the bell-driven audio output |

## Reference

- [International Morse Code (Wikipedia)](https://en.wikipedia.org/wiki/Morse_code)
