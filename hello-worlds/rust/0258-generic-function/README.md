---
id: 0258
language: rust
paradigm: generic
output: stdout
platform: cli
era: modern
tags: []
notes: "Generic function greet<T: Display>() prints any Display type."
author: ChidcGithub
date: 2026-07-21
---

# #0258 · Rust Generic Function

## Description

A generic Hello World using a function `greet<T: Display>` that accepts any type implementing `Display` and prints it via `println!`. The trait bound `T: Display` lets the same function handle `&str`, `String`, numbers, or any printable type. This demonstrates Rust's parametric polymorphism with trait bounds, a core idiom for writing reusable, type-safe abstractions.

## Source Code

`main.rs`:

```rust
use std::fmt::Display;
fn greet<T: Display>(msg: T) { println!("{}", msg); }
fn main() { greet("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/rust/0258-generic-function
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `generic` | Uses a generic function with a trait bound |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust generics stable since 1.0 (2015) |
| tags | `[]` | No special tag |

## Reference

- [The Rust Programming Language — Generics](https://doc.rust-lang.org/book/ch10-01-syntax.html)
- [std::fmt::Display](https://doc.rust-lang.org/std/fmt/trait.Display.html)
