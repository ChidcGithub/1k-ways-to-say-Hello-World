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
