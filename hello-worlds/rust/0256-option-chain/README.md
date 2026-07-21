---
id: 0256
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Monadic Option chaining with map/unwrap_or to build greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0256 · Rust Option Chain

## Description

A monadic `Option` pipeline built by chaining `map` calls. Starting from `Some("Hello")`, the first `map` extends the string to `Hello, World`, the second appends `!`, and `unwrap_or_default()` extracts the inner value (or yields an empty `String` if the chain had produced `None`). This mirrors the monadic bind style familiar from Haskell / Scala `Option`/`Maybe`.

## Source Code

`main.rs`:

```rust
fn main() {
    let result = Some("Hello")
        .map(|s| format!("{}, World", s))
        .map(|s| format!("{}!", s))
        .unwrap_or_default();
    println!("{}", result);
}
```

## Run

```bash
cd hello-worlds/rust/0256-option-chain
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Uses monadic `Option::map` chaining |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [Option::map — Rust std](https://doc.rust-lang.org/std/option/enum.Option.html#method.map)
- [Option::unwrap_or_default — Rust std](https://doc.rust-lang.org/std/option/enum.Option.html#method.unwrap_or_default)
