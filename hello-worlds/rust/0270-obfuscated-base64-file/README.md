---
id: 0270
language: rust
paradigm: procedural
output: file
platform: cli
era: modern
tags: [obfuscated]
notes: "Obfuscated: greeting stored as base64, decoded at runtime, written to file."
author: ChidcGithub
date: 2026-07-21
---

# #0270 · Rust Obfuscated Base64 (file)

## Description

An obfuscated Rust Hello World that hides the greeting inside a base64-encoded literal (`SGVsbG8sIFdvcmxkIQ==`) and decodes it at runtime with a hand-rolled base64 decoder. No standard library decoder is used — the bit-packing loop accumulates 6-bit indices into a sliding `val`/`bits` accumulator and emits one byte each time 8 bits are available. Padding (`=`) terminates the loop. The decoded output `Hello, World!` is written to `hello.txt` rather than printed to the terminal. The literal greeting never appears verbatim in the source, which is the hallmark of an obfuscated entry.

## Source Code

`main.rs`:

```rust
use std::fs::File;
use std::io::Write;

fn main() {
    let b64 = "SGVsbG8sIFdvcmxkIQ==";
    let mut out: Vec<u8> = Vec::new();
    let mut val: u32 = 0;
    let mut bits: u32 = 0;
    for c in b64.chars() {
        if c == '=' { break; }
        let v: u32 = if c >= 'A' && c <= 'Z' { (c as u32) - ('A' as u32) }
            else if c >= 'a' && c <= 'z' { (c as u32) - ('a' as u32) + 26 }
            else if c >= '0' && c <= '9' { (c as u32) - ('0' as u32) + 52 }
            else { 0 };
        val = (val << 6) | v;
        bits += 6;
        if bits >= 8 {
            bits -= 8;
            out.push(((val >> bits) & 0xFF) as u8);
        }
    }
    let mut f = File::create("hello.txt").expect("create failed");
    f.write_all(&out).expect("write failed");
}
```

## Run

```bash
cd hello-worlds/rust/0270-obfuscated-base64-file
rustc main.rs -o hello && ./hello
cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Single `main` with an imperative decode loop |
| output | `file` | Decoded greeting written to `hello.txt` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[obfuscated]` | Greeting hidden inside a base64 literal and decoded at runtime |

## Reference

- [RFC 4648 — The Base16, Base32, and Base64 Data Encodings](https://datatracker.ietf.org/doc/html/rfc4648)
- [std::fs::File — Rust std](https://doc.rust-lang.org/std/fs/struct.File.html)
