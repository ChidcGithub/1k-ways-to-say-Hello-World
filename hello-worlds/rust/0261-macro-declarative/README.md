---
id: 0261
language: rust
paradigm: meta
output: stdout
platform: cli
era: modern
tags: []
notes: "Declarative macro_rules! that expands to println! greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0261 · Rust Declarative Macro

## Description

A Hello World defined by a declarative macro. The `macro_rules! greet` rule expands `greet!()` into a `println!("Hello, World!")` call at compile time, demonstrating Rust's hygienic macro-by-example system. Unlike functions, macros operate on syntax tokens before type checking, making them a powerful tool for code generation that cannot be expressed with ordinary generics.

## Source Code

`main.rs`:

```rust
macro_rules! greet { () => { println!("Hello, World!"); }; }
fn main() { greet!(); }
```

## Run

```bash
cd hello-worlds/rust/0261-macro-declarative
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `meta` | Compile-time macro expansion |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `macro_rules!` stable since Rust 1.0 (2015) |
| tags | `[]` | No special tag |

## Reference

- [The Rust Reference — Macros By Example](https://doc.rust-lang.org/reference/macros-by-example.html)
- [The Little Book of Rust Macros](https://veykril.github.io/tlborm/)
