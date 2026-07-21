---
id: 0237
language: rust
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [quine]
notes: "A Rust quine that prints its own source, then prints 'Hello, World!' on the next line."
author: ChidcGithub
date: 2026-07-21
---

# #0237 · Quine

## Description

A Rust quine: a program whose output is its own source code, followed by a `Hello, World!` greeting on the next line. The string `s` holds a template of the program with a `%s` placeholder standing in for the string literal itself. Because Rust's `println!` macro requires the format string to be a compile-time literal (a variable cannot be used as the format string), the substitution is performed with `String::replace` rather than via the format macro's argument processing: `s.replace("%s", &format!("{:?}", s))` swaps the placeholder for the debug representation of `s`, which is exactly the original string literal — quotes and `\n`/`\"` escapes included. Printing that reconstructed text with the literal format string `"{}"` reproduces the source verbatim. A final `println!("Hello, World!");` then emits the greeting as the actual last line of output. The result is a self-reproducing program that also satisfies the Hello World contract.

## Source Code

`main.rs`:

```rust
fn main() {
    let s = "fn main() {\n    let s = %s;\n    println!(\"{}\", s.replace(\"%s\", &format!(\"{:?}\", s)));\n    println!(\"Hello, World!\");\n}";
    println!("{}", s.replace("%s", &format!("{:?}", s)));
    println!("Hello, World!");
}
```

## Run

```bash
cd hello-worlds/rust/0237-quine
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
| tags | `[quine]` | Program prints its own source plus the greeting |

## Reference

- [Rust Reference — Formatting traits and `{:?}`](https://doc.rust-lang.org/std/fmt/#formatting-traits)
- [Quine (computing) — Wikipedia](https://en.wikipedia.org/wiki/Quine_(computing))
