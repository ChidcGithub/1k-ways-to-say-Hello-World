---
id: 0232
language: rust
paradigm: procedural
output: file
platform: cli
era: modern
tags: []
notes: "Writes greeting to hello.txt using std::fs::write."
author: ChidcGithub
date: 2026-07-21
---

# #0232 · File Write

## Description

A Hello World whose greeting is written to a file rather than the terminal. The program calls `std::fs::write` to atomically create or overwrite `hello.txt` with the string `Hello, World!`, then prints a short confirmation to stdout. This differs from the baseline by targeting the filesystem as the output medium and demonstrates the simplest one-shot file API Rust offers, with no need to explicitly open, write, or close handles.

## Source Code

`main.rs`:

```rust
fn main() {
    std::fs::write("hello.txt", "Hello, World!").unwrap();
    println!("Written to hello.txt");
}
```

## Run

```bash
cd hello-worlds/rust/0232-file-write
rustc main.rs -o hello && ./hello
cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | A straightforward sequence of statements in `main` |
| output | `file` | Greeting is written to `hello.txt` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special variant; only the output target differs |

## Reference

- [std::fs::write — Rust docs](https://doc.rust-lang.org/std/fs/fn.write.html)
