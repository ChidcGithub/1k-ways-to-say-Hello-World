---
id: 0241
language: rust
paradigm: oop
output: stdout
platform: cli
era: modern
tags: []
notes: "Dynamic dispatch via Box<dyn Trait> trait object."
author: ChidcGithub
date: 2026-07-21
---

# #0241 · Trait Object Dynamic

## Description

A trait object demonstration using `Box<dyn Greeter>` for dynamic dispatch. The `Hello` struct implements `Greeter`, and `main` heap-allocates it through `Box::new(Hello)`, upcasting it to `Box<dyn Greeter>`. The call `g.greet()` then dispatches through a vtable at runtime. Unlike entry 0238 where the concrete type is known statically and dispatch is monomorphized, this entry trades a tiny bit of runtime cost for the ability to store heterogeneous greeters behind a single type — Rust's equivalent of a base-class pointer in classic OOP.

## Source Code

`main.rs`:

```rust
trait Greeter { fn greet(&self); }
struct Hello;
impl Greeter for Hello { fn greet(&self) { println!("Hello, World!"); } }
fn main() {
    let g: Box<dyn Greeter> = Box::new(Hello);
    g.greet();
}
```

## Run

```bash
cd hello-worlds/rust/0241-trait-object-dynamic
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `oop` | Uses trait object with dynamic dispatch |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [The Rust Programming Language — Trait Objects](https://doc.rust-lang.org/book/ch17-02-trait-objects.html)
