---
id: 0235
language: rust
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Obfuscated: constructs greeting from Unicode escape sequences."
author: ChidcGithub
date: 2026-07-21
---

# #0235 · Obfuscated Unicode

## Description

An obfuscated Hello World where every character of the greeting is written as a `\u{...}` Unicode escape inside the `println!` format string. The literal text "Hello, World!" never appears in the source; instead, each ASCII code point (`H` = `0x48`, `e` = `0x65`, ..., `!` = `0x21`) is spelled out as a hex escape. At compile time Rust decodes the escapes into the same string, so the runtime output is identical to the canonical entry — but the source is opaque to a casual reader and demonstrates how Rust string literals handle Unicode escapes.

## Source Code

`main.rs`:

```rust
fn main() {
    println!("\u{48}\u{65}\u{6c}\u{6c}\u{6f}\u{2c}\u{20}\u{57}\u{6f}\u{72}\u{6c}\u{64}\u{21}");
}
```

## Run

```bash
cd hello-worlds/rust/0235-obfuscated-unicode
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | A straightforward sequence of statements in `main` |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[obfuscated]` | Greeting hidden behind Unicode escape sequences |

## Reference

- [Rust Reference — String and char literals escapes](https://doc.rust-lang.org/reference/tokens.html#ascii-escapes)
