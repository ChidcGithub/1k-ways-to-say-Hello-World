svg = (
    '<?xml version="1.0" encoding="UTF-8"?>\n'
    '<svg xmlns="http://www.w3.org/2000/svg" width="320" height="120">\n'
    '  <rect width="100%" height="100%" fill="white"/>\n'
    '  <text x="20" y="70" font-family="sans-serif" font-size="36" fill="black">Hello, World!</text>\n'
    '</svg>\n'
)

with open("hello.svg", "w", encoding="utf-8") as f:
    f.write(svg)

print("Wrote hello.svg")
