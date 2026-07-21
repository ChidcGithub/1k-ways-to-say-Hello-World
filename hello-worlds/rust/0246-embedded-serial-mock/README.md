---
id: 0246
language: rust
paradigm: procedural
output: serial
platform: embedded
era: modern
tags: []
notes: "Embedded Rust (no_std) style; mocks UART serial output for hosted compilation."
author: ChidcGithub
date: 2026-07-21
---

# #0246 · Embedded Serial Mock

## Description

An embedded-style Hello World that writes the greeting over a UART serial port, mocked for hosted compilation. A unit struct `Uart` exposes a `write_str` method; on real embedded hardware this would be backed by a microcontroller's UART peripheral through a HAL crate and the program would be built with `#![no_std]` and `#![no_main]`. Here the mock forwards to `println!` with a `[UART]` prefix so the logic is verifiable on a standard Rust toolchain. The logical output target is a serial bus, not stdout.

## Source Code

`main.rs`:

```rust
// Mock for hosted compilation - real embedded would use no_std + HAL crate
struct Uart;
impl Uart {
    fn write_str(&self, s: &str) { println!("[UART]: {}", s); }
}
fn main() {
    let uart = Uart;
    uart.write_str("Hello, World!");
}
```

## Run

```bash
cd hello-worlds/rust/0246-embedded-serial-mock
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Step-by-step procedural call on a peripheral |
| output | `serial` | Logical output is a UART serial bus |
| platform | `embedded` | Targets embedded microcontrollers |
| era | `modern` | Embedded Rust ecosystem is modern era |
| tags | `[]` | No special tag |

## Reference

- [The Embedded Rust Book](https://docs.rust-embedded.org/book/)
- [embedded-hal crate](https://docs.rs/embedded-hal)
