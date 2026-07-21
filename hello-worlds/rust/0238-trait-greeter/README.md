---
id: 0238
language: rust
paradigm: oop
output: stdout
platform: cli
era: modern
tags: []
notes: "Trait-based greeter with impl block; Rust's OOP pattern."
author: ChidcGithub
date: 2026-07-21
---

# #0238 · Trait Greeter

## Description

A trait-based greeter using Rust's trait system. The `Greeter` trait declares a `greet` method, and the unit struct `English` implements it by printing `Hello, World!`. This is Rust's idiomatic answer to OOP-style polymorphism: rather than inheritance, behavior is shared through trait implementations. Unlike entry 0006 which uses a closure, this entry demonstrates how Rust encodes the classic object-oriented "interface + implementation" relationship using `trait` and `impl ... for ...`.

## Source Code

`main.rs`:

```rust
trait Greeter { fn greet(&self); }
struct English;
impl Greeter for English { fn greet(&self) { println!("Hello, World!"); } }
fn main() { English.greet(); }
```

## Run

```bash
cd hello-worlds/rust/0238-trait-greeter
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `oop` | Uses trait + impl block, Rust's OOP pattern |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [The Rust Programming Language — Traits](https://doc.rust-lang.org/book/ch10-02-traits.html)
