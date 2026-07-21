---
id: 0252
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Recursive function prints greeting char by char."
author: ChidcGithub
date: 2026-07-21
---

# #0252 · Rust Recursion

## Description

A recursive function that emits the greeting one character at a time. `print_rec` indexes into a byte slice `b"Hello, World!"` and prints the byte at position `i` cast to `char`; the recursion terminates when `i` reaches the slice length, ending with a newline. This demonstrates a recursive (rather than iterator- or loop-driven) traversal of a byte buffer.

## Source Code

`main.rs`:

```rust
fn print_rec(s: &[u8], i: usize) {
    if i >= s.len() { println!(); return; }
    print!("{}", s[i] as char);
    print_rec(s, i + 1);
}
fn main() { print_rec(b"Hello, World!", 0); }
```

## Run

```bash
cd hello-worlds/rust/0252-recursion
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Uses a recursive self-calling function |
| output | `stdout` | `print!`/`println!` write to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [Functions — Rust Book](https://doc.rust-lang.org/book/ch03-03-how-functions-work.html)
- [Primitive type u8 — Rust std](https://doc.rust-lang.org/std/primitive.u8.html)
