---
id: 0249
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Higher-order function: map over char array, collect, print."
author: ChidcGithub
date: 2026-07-21
---

# #0249 · Rust Higher-Order Map

## Description

A higher-order function approach to producing the greeting. The string `"Hello, World!"` is decomposed into a char iterator, passed through `map(|c| c)` as a trivial identity closure, collected into a `Vec<char>`, and finally reassembled into a `String`. This showcases Rust's iterator trait and the use of closures as arguments to higher-order functions.

## Source Code

`main.rs`:

```rust
fn main() {
    let chars: Vec<char> = "Hello, World!".chars().map(|c| c).collect();
    let s: String = chars.into_iter().collect();
    println!("{}", s);
}
```

## Run

```bash
cd hello-worlds/rust/0249-higher-order-map
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Uses higher-order `map` with a closure argument |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [Iterator::map — Rust std](https://doc.rust-lang.org/std/iter/trait.Iterator.html#method.map)
- [collect — Rust std](https://doc.rust-lang.org/std/iter/trait.Iterator.html#method.collect)
