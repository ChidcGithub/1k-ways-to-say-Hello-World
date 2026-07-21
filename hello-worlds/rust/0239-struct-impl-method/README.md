---
id: 0239
language: rust
paradigm: oop
output: stdout
platform: cli
era: modern
tags: []
notes: "Struct with impl method returning greeting string."
author: ChidcGithub
date: 2026-07-21
---

# #0239 · Struct Impl Method

## Description

A struct-based greeter with an `impl` block providing a constructor (`new`) and an instance method (`greet`). The `Greeter` struct holds the greeting message as a `String` field, and `main` builds an instance via `Greeter::new()` then calls `.greet()` on it. This showcases Rust's approach to encapsulation: data and behavior live together in a struct + impl pair, with `Self` as the return type of the constructor. Unlike entry 0238 which uses a trait, this entry keeps behavior tied directly to a single concrete type.

## Source Code

`main.rs`:

```rust
struct Greeter { msg: String }
impl Greeter {
    fn new() -> Self { Greeter { msg: String::from("Hello, World!") } }
    fn greet(&self) { println!("{}", self.msg); }
}
fn main() { Greeter::new().greet(); }
```

## Run

```bash
cd hello-worlds/rust/0239-struct-impl-method
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `oop` | Struct with impl block and instance method |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [The Rust Programming Language — Methods](https://doc.rust-lang.org/book/ch05-03-method-syntax.html)
