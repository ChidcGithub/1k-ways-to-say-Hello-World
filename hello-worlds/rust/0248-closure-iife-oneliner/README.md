---
id: 0248
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Immediately-invoked closure expression; one-liner."
author: ChidcGithub
date: 2026-07-21
---

# #0248 · Rust Closure IIFE One-Liner

## Description

An immediately-invoked closure expression collapsed into a single line. The body of `main` is a single expression statement: an anonymous closure `||println!("Hello, World!")` that captures nothing and is invoked in place with `()`. Compared to entry `#0006`, this variant strips all internal whitespace to emphasize the one-liner form.

## Source Code

`main.rs`:

```rust
fn main(){(||println!("Hello, World!"))();}
```

## Run

```bash
cd hello-worlds/rust/0248-closure-iife-oneliner
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Uses a first-class closure invoked in place |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[one-liner]` | Core logic is a single line |

## Reference

- [The Rust Programming Language — Closures](https://doc.rust-lang.org/book/ch13-01-closures.html)
- [println! — Rust std macro](https://doc.rust-lang.org/std/macro.println.html)
