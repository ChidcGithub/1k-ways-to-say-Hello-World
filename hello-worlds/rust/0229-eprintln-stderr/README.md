---
id: 0229
language: rust
paradigm: procedural
output: stderr
platform: cli
era: modern
tags: []
notes: "Writes to stderr using eprintln! macro."
author: ChidcGithub
date: 2026-07-21
---

# #0229 · Eprintln Stderr

## Description

A Hello World routed to the standard **error** stream via the `eprintln!` macro. Functionally it mirrors the canonical `println!` version, but the greeting is written to file descriptor 2 instead of file descriptor 1. This is the idiomatic Rust way to emit diagnostics or status messages that should not pollute piped stdout, and it differs from the baseline entry by swapping the output channel while keeping the call site almost identical.

## Source Code

`main.rs`:

```rust
fn main() { eprintln!("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/rust/0229-eprintln-stderr
rustc main.rs -o hello && ./hello
# To capture stderr only:
./hello 2>&1 1>/dev/null
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | A straightforward sequence of statements in `main` |
| output | `stderr` | `eprintln!` writes to standard error |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special variant; only the output channel differs |

## Reference

- [eprintln! — Rust std macro](https://doc.rust-lang.org/std/macro.eprintln.html)
