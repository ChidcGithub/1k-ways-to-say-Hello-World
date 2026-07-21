---
id: 0240
language: rust
paradigm: oop
output: stdout
platform: cli
era: modern
tags: []
notes: "Enum with match-based dispatch for greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0240 · Enum Greeter

## Description

An enum-based greeter that uses `match` for dispatch. The `Language` enum has a single variant `English`, and an `impl` block gives it a `greet` method that pattern-matches on `self` to select the appropriate greeting. This demonstrates Rust's algebraic data type approach to OOP: rather than subclassing, variants of an enum encode different cases and `match` provides safe, exhaustive dispatch. Unlike entry 0238 (trait) or 0239 (struct), this entry models a closed set of languages as enum variants.

## Source Code

`main.rs`:

```rust
enum Language { English }
impl Language {
    fn greet(&self) { match self { Language::English => println!("Hello, World!"), } }
}
fn main() { Language::English.greet(); }
```

## Run

```bash
cd hello-worlds/rust/0240-enum-greeter
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `oop` | Enum with impl block and match-based dispatch |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [The Rust Programming Language — Enums](https://doc.rust-lang.org/book/ch06-00-enums.html)
- [The Rust Programming Language — match](https://doc.rust-lang.org/book/ch06-02-match.html)
