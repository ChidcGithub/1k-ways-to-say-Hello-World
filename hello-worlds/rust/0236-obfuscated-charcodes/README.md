---
id: 0236
language: rust
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [obfuscated]
notes: "Obfuscated: builds greeting from byte array converted to String."
author: ChidcGithub
date: 2026-07-21
---

# #0236 · Obfuscated Charcodes

## Description

An obfuscated Hello World where the greeting is constructed from a byte array of ASCII code points and reassembled into a `String` at runtime. The array `[72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33]` is the ASCII encoding of "Hello, World!", and `String::from_utf8` validates and converts it back to text before `println!` prints it. Unlike the Unicode-escape variant, the obfuscation here is data-driven — the literal letters never appear in the source, only their numeric codes — and it shows the round-trip between Rust's `u8`/`Vec<u8>` and UTF-8 `String` types.

## Source Code

`main.rs`:

```rust
fn main() {
    let bytes: [u8; 13] = [72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33];
    println!("{}", String::from_utf8(bytes.to_vec()).unwrap());
}
```

## Run

```bash
cd hello-worlds/rust/0236-obfuscated-charcodes
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
| tags | `[obfuscated]` | Greeting hidden behind numeric byte codes |

## Reference

- [String::from_utf8 — Rust docs](https://doc.rust-lang.org/std/string/struct.String.html#method.from_utf8)
