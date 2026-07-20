---
id: 0186
language: c
paradigm: procedural
output: file
platform: cli
era: vintage
tags: []
notes: "Uses sprintf to format, then writes to file with fputs."
author: ChidcGithub
date: 2026-07-20
---

# #0186 · C sprintf file

## Description

A C Hello World that writes the greeting to a file via a two-step process. First `sprintf` formats the string `"Hello, World!\n"` into a stack buffer `buf[64]` (here the format string has no conversion specifiers, so `sprintf` effectively copies it, demonstrating the formatting-into-buffer idiom). Then `fopen("hello.txt", "w")` opens the destination file for writing, `fputs(buf, f)` writes the buffer contents to the file, and `fclose(f)` flushes and closes it. A final `printf("Written to hello.txt\n")` on stdout confirms to the user that the file was written. The greeting itself lives in `hello.txt`, not on the terminal.

## Source Code

`main.c`:

```c
#include <stdio.h>
int main(void) {
    char buf[64];
    sprintf(buf, "Hello, World!\n");
    FILE *f = fopen("hello.txt", "w");
    fputs(buf, f);
    fclose(f);
    printf("Written to hello.txt\n");
    return 0;
}
```

## Run

```bash
cd hello-worlds/c/0186-sprintf-file
gcc main.c -o hello
./hello
cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `c` | Written in the C programming language |
| paradigm | `procedural` | Sequential calls to `sprintf`, `fopen`, `fputs`, `fclose` in `main` |
| output | `file` | Greeting written to `hello.txt` via `fputs` |
| platform | `cli` | Runs as a command-line executable |
| era | `vintage` | `sprintf` / `fopen` / `fputs` / `fclose` all date to K&R / C89 |
| tags | `[]` | Standard file-output idiom; no special technique |

## Reference

- [cppreference — sprintf](https://en.cppreference.com/w/c/io/sprintf)
- [cppreference — fopen](https://en.cppreference.com/w/c/io/fopen)
- [cppreference — fputs](https://en.cppreference.com/w/c/io/fputs)
