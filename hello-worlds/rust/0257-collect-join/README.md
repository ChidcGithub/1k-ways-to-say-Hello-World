---
id: 0257
language: rust
paradigm: functional
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses iterator collect into String via join on Vec."
author: ChidcGithub
date: 2026-07-21
---

# #0257 · Rust Collect / Join

## Description

A `join`-based assembly of the greeting. Three `&str` fragments are placed in a `Vec<&str>` and joined with an empty separator via `parts.join("")`, producing the final `String`. Compared to `#0250` (which collects the iterator into a `String`) and `#0251` (which uses `fold`), this entry relies on the slice helper `[T]::join`, the most direct expression of "concatenate these strings with this delimiter".

## Source Code

`main.rs`:

```rust
fn main() {
    let parts = vec!["Hello", ", ", "World!"];
    let joined = parts.join("");
    println!("{}", joined);
}
```

## Run

```bash
cd hello-worlds/rust/0257-collect-join
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Uses slice `join` to collect fragments |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [slice::join — Rust std](https://doc.rust-lang.org/std/primitive.slice.html#method.join)
- [Vec — Rust std](https://doc.rust-lang.org/std/vec/struct.Vec.html)
