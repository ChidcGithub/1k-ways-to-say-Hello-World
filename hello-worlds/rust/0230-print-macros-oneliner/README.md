---
id: 0230
language: rust
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [one-liner]
notes: "One-liner using print! with explicit newline."
author: ChidcGithub
date: 2026-07-21
---

# #0230 · Print Macros Oneliner

## Description

A one-liner Hello World built from the `print!` macro with an explicit `\n` newline. Unlike `println!`, `print!` does not append a trailing newline, so the greeting and line break are fused into a single format string. The entire program is compressed onto one line with no whitespace beyond what is required, illustrating that `print!` plus a manual `\n` is functionally equivalent to `println!` while giving the author explicit control over line termination.

## Source Code

`main.rs`:

```rust
fn main(){print!("Hello, World!\n");}
```

## Run

```bash
cd hello-worlds/rust/0230-print-macros-oneliner
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | A straightforward sequence of statements in `main` |
| output | `stdout` | `print!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[one-liner]` | Entire program fits on a single line |

## Reference

- [print! — Rust std macro](https://doc.rust-lang.org/std/macro.print.html)
