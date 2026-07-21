---
id: 0242
language: rust
paradigm: oop
output: stderr
platform: cli
era: modern
tags: []
notes: "Builder pattern constructs greeting; outputs to stderr."
author: ChidcGithub
date: 2026-07-21
---

# #0242 · Builder Pattern Stderr

## Description

A builder-pattern greeter that assembles a greeting from parts and writes it to stderr. `GreeterBuilder` owns a `Vec<String>` of fragments; `add` takes `mut self` and returns `Self` to enable chaining, and `build` joins the parts and emits them via `eprintln!`. This demonstrates Rust's consuming-builder idiom (each `add` consumes and returns `self`) and contrasts with entry 0239 by both using a different structural pattern and routing output to stderr rather than stdout.

## Source Code

`main.rs`:

```rust
struct GreeterBuilder { parts: Vec<String> }
impl GreeterBuilder {
    fn new() -> Self { GreeterBuilder { parts: Vec::new() } }
    fn add(mut self, s: &str) -> Self { self.parts.push(s.to_string()); self }
    fn build(&self) { eprintln!("{}", self.parts.join("")); }
}
fn main() { GreeterBuilder::new().add("Hello").add(", ").add("World!").build(); }
```

## Run

```bash
cd hello-worlds/rust/0242-builder-pattern-stderr
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `oop` | Consuming builder pattern with struct + impl |
| output | `stderr` | `eprintln!` writes to standard error |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [The Rust Programming Language — Builder Pattern](https://doc.rust-lang.org/book/ch05-01-defining-structs.html)
- [eprintln! — Rust std macro](https://doc.rust-lang.org/std/macro.eprintln.html)
