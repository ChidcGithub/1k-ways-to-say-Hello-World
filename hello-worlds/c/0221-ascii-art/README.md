---
id: 0221
language: c
paradigm: procedural
output: ascii-art
platform: cli
era: modern
tags: [ascii-art]
notes: "Prints 'HELLO WORLD' as a 3-line ASCII art banner using # characters."
author: ChidcGithub
date: 2026-07-20
---

# #0221 · C ASCII Art

## Description

Renders the text `HELLO WORLD` as a three-line banner built from `#` characters. Each letter occupies a 5×3 cell and the cells are separated by spaces; the inter-word gap is widened by a blank cell so `HELLO` and `WORLD` read distinctly. The three lines are stored in a `const char *art[3]` array and emitted with a simple `for` loop.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) {
    const char *art[] = {
        "#   #  #####  #      #      #####         #   #  #####  ####    #      #### ",
        "#####  #      #      #      #   #         # # #  #   #  #  #    #      #   #",
        "#   #  #####  #####  #####  #####          # #  #####  # #    #####  #### "
    };
    for (int i = 0; i < 3; i++) printf("%s\n", art[i]);
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0221-ascii-art
gcc -std=c11 main.c -o hello.exe
./hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Imperative loop over a string array |
| output | `ascii-art` | Visual banner printed to the terminal |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Uses C99-style `for`-loop declaration under C11 |
| tags | `[ascii-art]` | Output is a 3-line block-letter banner |

## Reference

- ANSI FIGlet spec — common 5×3 block fonts.
