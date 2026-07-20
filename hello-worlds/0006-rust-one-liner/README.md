---
id: 0006
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "Body is a single statement: an immediately-invoked closure calling println!."
author: ChidcGithub
date: 2026-07-20
---

# #0006 · Rust One-Liner

## Description

A one-liner Rust Hello World using an immediately-invoked closure. The body of `main` is a single statement: an anonymous closure `|| println!("Hello, World!")` that captures nothing and is called in place with `()`. This showcases Rust's first-class closures and mirrors the "IIFE" pattern popular in JavaScript, applied to a language more often associated with explicit, statement-driven `main` functions. It differs from a canonical Rust Hello World by collapsing the body into one expression statement rather than a bare `println!`.

## Source Code

`main.rs`:

```rust
fn main() { (|| println!("Hello, World!"))(); }
```

## Run

```bash
cd hello-worlds/0006-rust-one-liner
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
| tags | `[one-liner]` | Body is a single statement |

## Reference

- [The Rust Programming Language — Closures](https://doc.rust-lang.org/book/ch13-01-closures.html)
- [println! — Rust std macro](https://doc.rust-lang.org/std/macro.println.html)
