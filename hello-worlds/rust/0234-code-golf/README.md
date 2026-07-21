---
id: 0234
language: rust
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [code-golf]
notes: "Minimized Rust Hello World; shortest viable form using print!."
author: ChidcGithub
date: 2026-07-21
---

# #0234 · Code Golf

## Description

A minimized Rust Hello World in code-golf form. The body uses `print!` with no trailing newline (the shortest macro that emits to stdout) and all optional whitespace is stripped: no space after `main`, no space inside the braces, no newline before `}`. The source file is exactly **34 characters** long:

```
fn main(){print!("Hello, World!")}
```

Character breakdown: `fn main()` (9) + `{` (1) + `print!` (6) + `("Hello, World!")` (17) + `}` (1) = **34 bytes**. This is about as short as a compiling Rust Hello World can get without resorting to obfuscation tricks, since `fn main(){...}` is the mandatory entry point and `print!`/`println!` are the shortest standard output macros.

## Source Code

`main.rs`:

```rust
fn main(){print!("Hello, World!")}
```

## Run

```bash
cd hello-worlds/rust/0234-code-golf
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
| tags | `[code-golf]` | Source minimized to 34 bytes |

## Reference

- [print! — Rust std macro](https://doc.rust-lang.org/std/macro.print.html)
- [Rust code golf tips](https://github.com/artgor/rust-code-golf-tips)
