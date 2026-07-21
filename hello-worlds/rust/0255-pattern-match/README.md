---
id: 0255
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Pattern matching with match on Option to produce greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0255 · Rust Pattern Match

## Description

A `match` expression over `Option<&str>`. The greeting is wrapped in `Some(...)`, and the two arms (`Some(msg)` and `None`) destructure the value to either print the message or fall back to a placeholder. This demonstrates Rust's algebraic-data-type-style pattern matching, the idiomatic way to handle `Option`.

## Source Code

`main.rs`:

```rust
fn main() {
    let greeting: Option<&str> = Some("Hello, World!");
    match greeting {
        Some(msg) => println!("{}", msg),
        None => println!("No greeting"),
    }
}
```

## Run

```bash
cd hello-worlds/rust/0255-pattern-match
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Uses pattern matching on `Option` |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [Patterns — Rust Book](https://doc.rust-lang.org/book/ch06-02-match.html)
- [Option — Rust std](https://doc.rust-lang.org/std/option/enum.Option.html)
