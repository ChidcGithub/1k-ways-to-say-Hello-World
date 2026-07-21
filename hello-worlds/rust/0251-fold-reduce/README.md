---
id: 0251
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses fold() to reduce greeting parts into single string."
author: ChidcGithub
date: 2026-07-21
---

# #0251 · Rust Fold / Reduce

## Description

A `fold`-based reduction over a `Vec` of string fragments. Starting from an empty `String`, the accumulator is concatenated with each fragment via the closure `|acc, &s| acc + s`. This is the canonical Rust equivalent of `reduce`, demonstrating how a sequence can be collapsed into a single value through a binary operation.

## Source Code

`main.rs`:

```rust
fn main() {
    let parts = vec!["Hello", ", ", "World!"];
    let result = parts.iter().fold(String::new(), |acc, &s| acc + s);
    println!("{}", result);
}
```

## Run

```bash
cd hello-worlds/rust/0251-fold-reduce
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Uses `fold` (reduce) with a closure accumulator |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [Iterator::fold — Rust std](https://doc.rust-lang.org/std/iter/trait.Iterator.html#method.fold)
- [String — Rust std](https://doc.rust-lang.org/std/string/struct.String.html)
