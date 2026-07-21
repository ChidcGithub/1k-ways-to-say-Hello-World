---
id: 0231
language: rust
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses write! macro with io::stdout() lock for direct stdout write."
author: ChidcGithub
date: 2026-07-21
---

# #0231 · Write Stdout

## Description

A Hello World that bypasses the `println!`/`print!` macros and writes directly to the standard output handle using the `write!` macro. The program locks `std::io::stdout()` once, then formats the greeting into the locked handle and unwraps the result. This is the lower-level pattern used when output must be interleaved with other locked streams or when the overhead of repeatedly locking stdout on each macro call matters; it makes the I/O machinery that `println!` hides behind the macro visible to the reader.

## Source Code

`main.rs`:

```rust
use std::io::Write;
fn main() {
    let mut stdout = std::io::stdout().lock();
    write!(stdout, "Hello, World!\n").unwrap();
}
```

## Run

```bash
cd hello-worlds/rust/0231-write-stdout
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | A straightforward sequence of statements in `main` |
| output | `stdout` | `write!` targets the locked stdout handle |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special variant; uses lower-level I/O API |

## Reference

- [std::io::Stdout — Rust docs](https://doc.rust-lang.org/std/io/struct.Stdout.html)
- [write! — Rust std macro](https://doc.rust-lang.org/std/macro.write.html)
