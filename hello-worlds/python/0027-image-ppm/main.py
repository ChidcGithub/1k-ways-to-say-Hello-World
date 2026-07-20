# 3-wide x 5-tall bitmap font. Each glyph is 5 rows of 3 chars ('1' = on, '0' = off).
FONT = {
    'H': ["101", "111", "101", "101", "101"],
    'E': ["111", "100", "111", "100", "111"],
    'L': ["100", "100", "100", "100", "111"],
    'O': ["111", "101", "101", "101", "111"],
    'W': ["101", "101", "101", "101", "111"],
    'R': ["110", "101", "110", "100", "100"],
    'D': ["110", "101", "101", "101", "110"],
    ',': ["000", "000", "000", "010", "100"],
    ' ': ["000", "000", "000", "000", "000"],
    '!': ["010", "010", "010", "000", "010"],
}

CHAR_W = 3
CHAR_H = 5
GAP = 1          # blank column gap between glyphs (in font pixels)
SCALE = 6        # each font pixel becomes SCALE x SCALE output pixels
MARGIN = 6       # output-pixel margin around the whole image

text = "HELLO, WORLD!"

cols = len(text) * (CHAR_W + GAP) - GAP
rows = CHAR_H
width = MARGIN * 2 + cols * SCALE
height = MARGIN * 2 + rows * SCALE

# Build a 2-D grid: 0 = black, 1 = white.
grid = [[0] * width for _ in range(height)]


def draw_char(ch, ox, oy):
    glyph = FONT[ch]
    for r in range(CHAR_H):
        for c in range(CHAR_W):
            if glyph[r][c] == '1':
                for dy in range(SCALE):
                    for dx in range(SCALE):
                        grid[oy + r * SCALE + dy][ox + c * SCALE + dx] = 1


x = MARGIN
for ch in text:
    draw_char(ch, x, MARGIN)
    x += (CHAR_W + GAP) * SCALE

# Write a binary P6 PPM: header in ASCII, then raw RGB triplets.
with open("hello.ppm", "wb") as f:
    f.write(f"P6\n{width} {height}\n255\n".encode("ascii"))
    data = bytearray()
    for row in grid:
        for v in row:
            c = 255 if v == 1 else 0
            data += bytes((c, c, c))
    f.write(bytes(data))

print("Wrote hello.ppm")
