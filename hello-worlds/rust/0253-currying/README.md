---
id: 0253
language: rust
paradigm: functional
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Curried function builds greeting step by step with closures."
author: ChidcGithub
date: 2026-07-21
---

# #0253 · Rust Currying

## Description

A manually curried function built from nested closures. The outer closure `|a: String|` returns a `move` closure capturing `a`, which in turn returns another `move` closure capturing both arguments, finally producing the assembled string via `format!`. Calling `greet("Hello".into())(", World".into())("!".into())` illustrates partial application style in Rust, where each parameter is consumed one step at a time. Owned `String` arguments are used so that the nested closures can capture by `move` without lifetime-inference errors. The `era` is `contemporary` since this leans on stable closure-returning closures (`move` semantics) idiomatic in modern Rust (2021 edition).

## Source Code

`main.rs`:

```rust
fn main() {
    let greet = |a: String| move |b: String| move |c: String| format!("{}{}{}", a, b, c);
    println!("{}", greet("Hello".into())(", World".into())("!".into()));
}
```

## Run

```bash
cd hello-worlds/rust/0253-currying
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Uses currying via nested returning closures |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | Modern closure-returning-closure idiom (2021 edition) |
| tags | `[]` | No special tag |

## Reference

- [Closures — Rust Book](https://doc.rust-lang.org/book/ch13-01-closures.html)
- [format! — Rust std macro](https://doc.rust-lang.org/std/macro.format.html)
