"""Render 'HELLO WORLD' as a large ASCII-art banner using a hardcoded font."""

FONT = {
    "H": ["H   H", "H   H", "HHHHH"],
    "E": ["EEEEE", "E    ", "EEEEE"],
    "L": ["L    ", "L    ", "LLLLL"],
    "O": ["OOOOO", "O   O", "OOOOO"],
    "W": ["W   W", "W   W", "W W W"],
    "R": ["RRRR ", "R  R ", "R RR "],
    "D": ["DDDD ", "D   D", "DDDD "],
}

LETTER_GAP = " "
WORD_GAP = "   "


def render(text):
    lines = ["", "", ""]
    for char in text:
        if char == " ":
            for i in range(3):
                lines[i] += WORD_GAP
        elif char.upper() in FONT:
            glyph = FONT[char.upper()]
            for i in range(3):
                lines[i] += glyph[i] + LETTER_GAP
    return lines


def main():
    for line in render("HELLO WORLD"):
        print(line)


if __name__ == "__main__":
    main()
