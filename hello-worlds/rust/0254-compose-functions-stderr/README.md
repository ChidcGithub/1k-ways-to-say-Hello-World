---
id: 0254
language: rust
paradigm: functional
output: stderr
platform: cli
era: modern
tags: []
notes: "Function composition with closures; outputs to stderr."
author: ChidcGithub
date: 2026-07-21
---

# #0254 · Rust Compose Functions (stderr)

## Description

A function-composition style using closures. `add_world` appends `, World` to its argument, `add_bang` appends `!`, and `greet` composes the two by calling `add_bang(add_world(...))`. Unlike most entries in this batch, the result is emitted via `eprintln!` to standard error rather than standard output, illustrating Rust's separate macros for the two streams.

## Source Code

`main.rs`:

```rust
fn main() {
    let add_world = |s: String| s + ", World";
    let add_bang = |s: String| s + "!";
    let greet = |s: &str| add_bang(add_world(s.to_string()));
    eprintln!("{}", greet("Hello"));
}
```

## Run

```bash
cd hello-worlds/rust/0254-compose-functions-stderr
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Composes two closures into a single pipeline |
| output | `stderr` | Uses `eprintln!` to write to standard error |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [eprintln! — Rust std macro](https://doc.rust-lang.org/std/macro.eprintln.html)
- [Closures — Rust Book](https://doc.rust-lang.org/book/ch13-01-closures.html)
