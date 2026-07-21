---
id: 0228
language: rust
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "The canonical Rust Hello World using println! macro."
author: ChidcGithub
date: 2026-07-21
---

# #0228 · Classic Println

## Description

The canonical Rust Hello World using the `println!` macro. This is the form shown on the cover of *The Rust Programming Language* and the first program most Rustaceans write: a single `main` function whose body is one macro invocation that prints the greeting to standard output with a trailing newline. It is the baseline against which every other Rust entry in this collection is compared.

## Source Code

`main.rs`:

```rust
fn main() { println!("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/rust/0228-classic-println
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | A straightforward sequence of statements in `main` |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special variant; the reference form |

## Reference

- [The Rust Programming Language — Hello, World!](https://doc.rust-lang.org/book/ch01-02-hello-world.html)
- [println! — Rust std macro](https://doc.rust-lang.org/std/macro.println.html)
