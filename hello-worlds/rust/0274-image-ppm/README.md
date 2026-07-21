---
id: 0274
language: rust
paradigm: procedural
output: image
platform: cli
era: modern
tags: []
notes: "Generates a PPM (P6) image file with white background and black border."
author: ChidcGithub
date: 2026-07-21
---

# #0274 · Rust Image (PPM)

## Description

Writes a 100×30 pixel image to `hello.ppm` in the binary PPM (P6) format. Every pixel starts white (RGB 255,255,255); pixels on the four border edges are overwritten to black (0,0,0), producing a framed rectangle. The header is written with `write_all` and the RGB bytes are written as a three-element slice `[r, g, b]`. This mirrors the C `0222-image-ppm` entry but rewrites the nested loop in idiomatic Rust using `for` ranges and tuple destructuring. The result is viewable in any image viewer that accepts the Netpbm P6 format.

## Source Code

`main.rs`:

```rust
use std::fs::File;
use std::io::Write;

fn main() {
    let mut f = File::create("hello.ppm").expect("create failed");
    f.write_all(b"P6\n100 30\n255\n").unwrap();
    for i in 0..30 {
        for j in 0..100 {
            let (r, g, b) = if i == 0 || i == 29 || j == 0 || j == 99 {
                (0u8, 0u8, 0u8)
            } else {
                (255u8, 255u8, 255u8)
            };
            f.write_all(&[r, g, b]).unwrap();
        }
    }
}
```

## Run

```bash
cd hello-worlds/rust/0274-image-ppm
rustc main.rs -o hello && ./hello
# open hello.ppm in any image viewer
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Nested loops write pixels one by one |
| output | `image` | Output is a binary PPM image file |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No additional tags; image output is the distinguishing trait |

## Reference

- Netpbm PPM Specification — http://netpbm.sourceforge.net/doc/ppm.html
- [std::fs::File — Rust std](https://doc.rust-lang.org/std/fs/struct.File.html)
