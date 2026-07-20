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
