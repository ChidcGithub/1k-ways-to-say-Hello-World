---
id: 0260
language: rust
paradigm: generic
output: stdout
platform: cli
era: modern
tags: []
notes: "Generic function with multiple trait bounds (Display + AsRef<str>)."
author: ChidcGithub
date: 2026-07-21
---

# #0260 · Rust Trait Bound Generic

## Description

A generic Hello World combining multiple trait bounds. The function `greet<T: Display + AsRef<str>>` requires its argument to be both printable and referenceable as a `str`, allowing it to print the value and its length in one call. This demonstrates Rust's `+` syntax for compound trait bounds, a key mechanism for expressing rich type contracts in generic code.

## Source Code

`main.rs`:

```rust
use std::fmt::Display;
fn greet<T: Display + AsRef<str>>(msg: T) {
    println!("{} (len: {})", msg, msg.as_ref().len());
}
fn main() { greet("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/rust/0260-trait-bound-generic
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `generic` | Generic function with multiple trait bounds |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Trait bounds stable since Rust 1.0 (2015) |
| tags | `[]` | No special tag |

## Reference

- [The Rust Programming Language — Traits as Parameters](https://doc.rust-lang.org/book/ch10-02-traits.html)
- [std::convert::AsRef](https://doc.rust-lang.org/std/convert/trait.AsRef.html)
