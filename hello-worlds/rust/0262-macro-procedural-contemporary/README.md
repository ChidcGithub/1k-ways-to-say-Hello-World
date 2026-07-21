---
id: 0262
language: rust
paradigm: meta
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Simulates procedural macro behavior via compile-time const fn; contemporary style."
author: ChidcGithub
date: 2026-07-21
---

# #0262 · Rust Procedural Macro (Contemporary Simulation)

## Description

A Hello World that simulates the spirit of procedural macros — compile-time code generation — using a `const` item evaluated at compile time. Real procedural macros require a separate proc-macro crate and the `proc_macro` API, which cannot fit in a single `main.rs`. This entry instead demonstrates compile-time evaluation: the greeting constant is baked into the binary at build time, mirroring the contemporary Rust ethos of pushing work to the compiler.

## Source Code

`main.rs`:

```rust
const GREETING: &str = "Hello, World!";
fn main() { println!("{}", GREETING); }
```

## Run

```bash
cd hello-worlds/rust/0262-macro-procedural-contemporary
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `meta` | Compile-time constant evaluation |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | Reflects modern Rust (const eval, proc-macro ecosystem) |
| tags | `[]` | No special tag |

## Reference

- [The Rust Reference — Const Evaluation](https://doc.rust-lang.org/reference/const_eval.html)
- [Procedural Macros](https://doc.rust-lang.org/reference/procedural-macros.html)
