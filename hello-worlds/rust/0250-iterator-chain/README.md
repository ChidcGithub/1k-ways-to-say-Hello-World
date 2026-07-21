---
id: 0250
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Chains iterator adapters (split, collect) to assemble greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0250 · Rust Iterator Chain

## Description

An iterator-chain approach to assembling the greeting. Three `&str` fragments are placed in a `Vec`, then converted into an iterator and collected directly into a `String`. This demonstrates Rust's `FromIterator<&str>` implementation for `String`, where chaining adapters (here `into_iter().collect()`) yields the final output without manual concatenation.

## Source Code

`main.rs`:

```rust
fn main() {
    let parts: Vec<&str> = vec!["Hello", ", ", "World!"];
    let result: String = parts.into_iter().collect();
    println!("{}", result);
}
```

## Run

```bash
cd hello-worlds/rust/0250-iterator-chain
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Chains iterator adapters (`into_iter`, `collect`) |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [Iterator::collect — Rust std](https://doc.rust-lang.org/std/iter/trait.Iterator.html#method.collect)
- [FromIterator for String — Rust std](https://doc.rust-lang.org/std/string/struct.String.html#impl-FromIterator%3C%26'a+str%3E)
