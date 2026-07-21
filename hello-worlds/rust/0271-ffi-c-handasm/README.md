---
id: 0271
language: rust
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: [hand-assembled]
notes: "Uses FFI to call C's puts() function directly via extern C."
author: ChidcGithub
date: 2026-07-21
---

# #0271 · Rust FFI C puts (hand-assembled)

## Description

A hand-assembled flavor Rust Hello World that bypasses the Rust `println!` macro and instead calls the C standard library's `puts()` function directly through Rust's Foreign Function Interface (FFI). The `extern "C"` block declares the `puts` function with a C-compatible signature (`*const i8` pointer), and an `unsafe` block invokes it with a null-terminated byte string. This mirrors the way a hand-assembled program would set up a function pointer and jump: load a buffer pointer, call into a foreign ABI, and let the callee handle output. The source compiles cleanly with `--crate-type lib` because linking against `libc` is deferred to the final binary stage.

## Source Code

`main.rs`:

```rust
extern "C" {
    fn puts(s: *const i8);
}

fn main() {
    unsafe {
        puts(b"Hello, World!\0".as_ptr() as *const i8);
    }
}
```

## Run

```bash
cd hello-worlds/rust/0271-ffi-c-handasm
rustc main.rs -o hello && ./hello
```

> Note: links against `libc` at the final binary stage; `--crate-type lib` verification skips linking.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Single FFI call in `main`, no abstraction |
| output | `stdout` | `puts()` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust FFI stabilized in 1.0 (2015) |
| tags | `[hand-assembled]` | Direct foreign-function call, bypassing Rust stdio |

## Reference

- [Rust FFI — The Rustonomicon](https://doc.rust-lang.org/nomicon/ffi.html)
- [extern — Rust Reference](https://doc.rust-lang.org/reference/items/external-blocks.html)
