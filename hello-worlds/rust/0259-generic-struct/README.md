---
id: 0259
language: rust
paradigm: generic
output: stdout
platform: cli
era: modern
tags: []
notes: "Generic struct Message<T> holds greeting; printed via Display."
author: ChidcGithub
date: 2026-07-21
---

# #0259 · Rust Generic Struct

## Description

A generic Hello World built around a struct `Message<T>` that holds any `Display`-able content. The `impl<T: Display> Message<T>` block provides a `new` constructor and a `print` method that prints the stored content via `println!`. This pairs parametric generics over both struct and impl block, showcasing how Rust generalizes data containers independently of the types they hold.

## Source Code

`main.rs`:

```rust
use std::fmt::Display;
struct Message<T> { content: T }
impl<T: Display> Message<T> {
    fn new(content: T) -> Self { Message { content } }
    fn print(&self) { println!("{}", self.content); }
}
fn main() { Message::new("Hello, World!").print(); }
```

## Run

```bash
cd hello-worlds/rust/0259-generic-struct
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `generic` | Generic struct with trait-bounded impl |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust generics stable since 1.0 (2015) |
| tags | `[]` | No special tag |

## Reference

- [The Rust Programming Language — Generic Structs](https://doc.rust-lang.org/book/ch10-01-syntax.html#in-struct-definitions)
- [std::fmt::Display](https://doc.rust-lang.org/std/fmt/trait.Display.html)
