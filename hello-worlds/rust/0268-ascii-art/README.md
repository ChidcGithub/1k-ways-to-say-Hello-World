---
id: 0268
language: rust
paradigm: procedural
output: ascii-art
platform: cli
era: modern
tags: [ascii-art]
notes: "Prints 'HELLO WORLD' as a 3-line ASCII art banner using # characters."
author: ChidcGithub
date: 2026-07-21
---

# #0268 · Rust ASCII Art

## Description

Renders the text `HELLO WORLD` as a three-line banner built from `#` characters. Each letter occupies a 5×3 cell and the cells are separated by two spaces; the inter-word gap is widened by four spaces so `HELLO` and `WORLD` read distinctly. The three lines are stored in a `&[&str; 3]` array and emitted with a `for` loop over a reference. This mirrors the C `0221-ascii-art` entry but rewrites the storage and iteration in idiomatic Rust using `&art` and `println!`.

## Source Code

`main.rs`:

```rust
fn main() {
    let art = [
        "#   #  #####  #      #      #####    #   #  #####  ####    #      #### ",
        "#   #  #      #      #      #   #    #   #  #   #  #  #    #      #  # ",
        "#####  #####  #####  #####  #####    # # #  #####  #  ##  #####  #### ",
    ];
    for line in &art { println!("{}", line); }
}
```

## Run

```bash
cd hello-worlds/rust/0268-ascii-art
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Imperative loop over a string array |
| output | `ascii-art` | Visual banner printed to the terminal |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[ascii-art]` | Output is a 3-line block-letter banner |

## Reference

- ANSI FIGlet spec — common 5×3 block fonts.
