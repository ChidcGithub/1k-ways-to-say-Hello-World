---
id: 0263
language: rust
paradigm: meta
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Const generics: array size determined at compile time."
author: ChidcGithub
date: 2026-07-21
---

# #0263 · Rust Const Generics

## Description

A Hello World using const generics. The function `print_array<const N: usize>` is generic over the compile-time length of the input `[char; N]` array, walking each character and printing it. Const generics (stabilized in Rust 1.51, 2021) allow parametricity over values rather than just types — perfect for fixed-size arrays whose length is part of the type.

## Source Code

`main.rs`:

```rust
fn print_array<const N: usize>(arr: [char; N]) {
    for c in arr { print!("{}", c); }
    println!();
}
fn main() {
    print_array(['H','e','l','l','o',',',' ','W','o','r','l','d','!']);
}
```

## Run

```bash
cd hello-worlds/rust/0263-const-generics
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `meta` | Generic over a compile-time constant value |
| output | `stdout` | `print!`/`println!` write to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | Const generics stabilized in Rust 1.51 (2021) |
| tags | `[]` | No special tag |

## Reference

- [The Rust Programming Language — Const Generics](https://doc.rust-lang.org/reference/items/generics.html#const-generics)
- [Rust 1.51 release notes](https://blog.rust-lang.org/2021/03/25/Rust-1.51.0.html)
