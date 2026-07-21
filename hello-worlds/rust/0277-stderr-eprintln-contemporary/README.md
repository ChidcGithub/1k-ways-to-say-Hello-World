---
id: 0277
language: rust
paradigm: procedural
output: stderr
platform: cli
era: contemporary
tags: []
notes: "Contemporary: uses eprintln! macro to write the greeting to stderr."
author: ChidcGithub
date: 2026-07-21
---

# #0277 · Rust stderr eprintln (contemporary)

## Description

A contemporary Rust Hello World that writes the greeting to stderr via the `eprintln!` macro. While `println!` targets stdout, `eprintln!` is the idiomatic Rust way to emit diagnostics, logs, or status messages to stderr, keeping the stdout channel clean for primary program output. The `eprintln!` macro was stabilized in Rust 1.19 (April 2017), placing it firmly in the contemporary era alongside the broader Rust 2018 edition's ergonomics improvements. This entry is the Rust counterpart to the C `0226-oneliner-stderr` and C `0183-fputc-stderr` entries, but uses Rust's modern macro-based stderr facility.

## Source Code

`main.rs`:

```rust
fn main() {
    eprintln!("Hello, World!");
}
```

## Run

```bash
cd hello-worlds/rust/0277-stderr-eprintln-contemporary
rustc main.rs -o hello && ./hello 2>&1
```

> Note: redirect `2>&1` so stderr is visible alongside stdout in the same shell.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Single macro call in `main` |
| output | `stderr` | Greeting written to stderr via `eprintln!` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | `eprintln!` stabilized in Rust 1.19 (2017) |
| tags | `[]` | No additional tags; stderr output is the distinguishing trait |

## Reference

- [eprintln! — Rust std macro](https://doc.rust-lang.org/std/macro.eprintln.html)
- [Rust 1.19 release notes — eprintln!](https://blog.rust-lang.org/2017/04/27/Rust-1.19.html)
