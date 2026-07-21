---
id: 0264
language: rust
paradigm: meta
output: stdout
platform: cli
era: modern
tags: []
notes: "Compile-time const evaluation; greeting assembled at compile time."
author: ChidcGithub
date: 2026-07-21
---

# #0264 · Rust Compile-Time Const

## Description

A Hello World assembled entirely at compile time. The `const fn build_greeting` is evaluated during compilation, and its result is assigned to a `const GREETING` that is baked into the final binary. `const fn` (stabilized for basic control flow in Rust 1.31, expanded substantially since) lets developers move computation from runtime to the compiler, producing zero-cost abstractions over precomputed data.

## Source Code

`main.rs`:

```rust
const fn build_greeting() -> &'static str { "Hello, World!" }
const GREETING: &str = build_greeting();
fn main() { println!("{}", GREETING); }
```

## Run

```bash
cd hello-worlds/rust/0264-compile-time-const
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `meta` | Compile-time `const fn` evaluation |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `const fn` stabilized in Rust 1.31 (2018) |
| tags | `[]` | No special tag |

## Reference

- [The Rust Reference — Const Functions](https://doc.rust-lang.org/reference/const_eval.html#const-functions)
- [Rust 1.31 release notes](https://blog.rust-lang.org/2018/12/06/Rust-1.31-and-rust-2018.html)
