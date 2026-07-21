---
id: 0269
language: rust
paradigm: procedural
output: stderr
platform: cli
era: modern
tags: [obfuscated]
notes: "Obfuscated: greeting stored reversed, un-reversed at runtime, printed to stderr."
author: ChidcGithub
date: 2026-07-21
---

# #0269 · Rust Obfuscated Reversed (stderr)

## Description

An obfuscated Rust Hello World that hides the greeting by storing it reversed (`!dlroW ,olleH`) and reconstructing the original at runtime. The `chars().rev().collect()` pipeline walks the byte string backwards and reassembles `Hello, World!` into a fresh `String`, which is then emitted on stderr via `eprintln!`. The greeting never appears verbatim in the source, which is the hallmark of an obfuscated entry. Writing to stderr rather than stdout also differentiates it from a canonical `println!` Hello World.

## Source Code

`main.rs`:

```rust
fn main() {
    let reversed = "!dlroW ,olleH";
    let original: String = reversed.chars().rev().collect();
    eprintln!("{}", original);
}
```

## Run

```bash
cd hello-worlds/rust/0269-obfuscated-reversed-stderr
rustc main.rs -o hello && ./hello 2>&1
```

> Note: redirect `2>&1` so stderr is visible alongside stdout in the same shell.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Sequential reverse-collect pipeline in `main` |
| output | `stderr` | Greeting written to stderr via `eprintln!` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[obfuscated]` | Greeting hidden by reversal, reconstructed at runtime |

## Reference

- [std::iter::Rev — Rust std](https://doc.rust-lang.org/std/iter/struct.Rev.html)
- [eprintln! — Rust std macro](https://doc.rust-lang.org/std/macro.eprintln.html)
