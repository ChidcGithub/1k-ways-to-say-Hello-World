---
id: 0222
language: c
paradigm: procedural
output: image
platform: cli
era: modern
tags: []
notes: "Generates a PPM (P6) image file with white background and black border."
author: ChidcGithub
date: 2026-07-20
---

# #0222 · C Image (PPM)

## Description

Writes a 100×30 pixel image to `hello.ppm` in the binary PPM (P6) format. Every pixel starts white (RGB 255,255,255); pixels on the four border edges are overwritten to black (0,0,0), producing a framed rectangle. The file is opened in text mode for the header lines and the RGB bytes are written with `fwrite`. The result is viewable in any image viewer that accepts the Netpbm P6 format.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) {
    FILE *f = fopen("hello.ppm", "w");
    fprintf(f, "P6\n100 30\n255\n");
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 100; j++) {
            unsigned char r = 255, g = 255, b = 255;
            if (i == 0 || i == 29 || j == 0 || j == 99) { r = g = b = 0; }
            fwrite(&r, 1, 1, f); fwrite(&g, 1, 1, f); fwrite(&b, 1, 1, f);
        }
    }
    fclose(f);
    printf("Written hello.ppm\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0222-image-ppm
gcc -std=c11 main.c -o hello.exe
./hello.exe
# open hello.ppm in any image viewer
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Nested loops write pixels one by one |
| output | `image` | Output is a binary PPM image file |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses C99-style `for`-loop declaration under C11 |
| tags | `[]` | No additional tags; image output is the distinguishing trait |

## Reference

- Netpbm PPM Specification — http://netpbm.sourceforge.net/doc/ppm.html
