---
id: 0233
language: rust
paradigm: procedural
output: file
platform: cli
era: modern
tags: []
notes: "Uses OpenOptions to append greeting to file; also prints to stderr."
author: ChidcGithub
date: 2026-07-21
---

# #0233 · File Append Stderr

## Description

A Hello World that appends the greeting to `hello.txt` using `OpenOptions` and also reports status on stderr. Unlike the one-shot `std::fs::write` variant, this entry opens the file in append mode with `create(true)` so repeated runs accumulate greetings rather than overwriting. After writing the greeting with `writeln!`, it emits a short confirmation to stderr via `eprintln!`, keeping stdout clean while the file is the real output channel. This shows the more granular file-handle API Rust exposes for non-trivial I/O patterns.

## Source Code

`main.rs`:

```rust
use std::fs::OpenOptions;
use std::io::Write;
fn main() {
    let mut f = OpenOptions::new().append(true).create(true).open("hello.txt").unwrap();
    writeln!(f, "Hello, World!").unwrap();
    eprintln!("Written to hello.txt");
}
```

## Run

```bash
cd hello-worlds/rust/0233-file-append-stderr
rustc main.rs -o hello && ./hello
cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | A straightforward sequence of statements in `main` |
| output | `file` | Greeting is appended to `hello.txt` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special variant; combines append-mode file I/O with stderr status |

## Reference

- [std::fs::OpenOptions — Rust docs](https://doc.rust-lang.org/std/fs/struct.OpenOptions.html)
- [writeln! — Rust std macro](https://doc.rust-lang.org/std/macro.writeln.html)
