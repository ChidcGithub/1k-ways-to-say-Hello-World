---
id: 0245
language: rust
paradigm: procedural
output: stdout
platform: wasm
era: contemporary
tags: []
notes: "WASM-targeted Rust; mocks wasm_bindgen extern for local compilation."
author: ChidcGithub
date: 2026-07-21
---

# #0245 · Wasm Bindgen Mock

## Description

A WebAssembly-targeted Hello World that mocks the `wasm_bindgen` FFI surface so it can compile and run on a hosted (non-WASM) toolchain. An inner `mod wasm_bindgen` provides a `console_log` stub that forwards to `println!` with a `[WASM console]` prefix. In a real WASM build this module would be replaced by `#[wasm_bindgen] extern "C" { fn console_log(s: &str); }` binding to the browser's `console.log`. This entry represents the contemporary WASM platform while remaining verifiable locally without a WASM toolchain.

## Source Code

`main.rs`:

```rust
// Mock wasm_bindgen for local compilation
mod wasm_bindgen {
    pub fn console_log(s: &str) { println!("[WASM console]: {}", s); }
}
fn main() { wasm_bindgen::console_log("Hello, World!"); }
```

## Run

```bash
cd hello-worlds/rust/0245-wasm-bindgen-mock
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Step-by-step procedural call into module |
| output | `stdout` | Mock forwards to `println!` on stdout |
| platform | `wasm` | Targets WebAssembly (mocked locally) |
| era | `contemporary` | WASM + wasm_bindgen are contemporary (post-2018) |
| tags | `[]` | No special tag |

## Reference

- [wasm-bindgen Guide](https://rustwasm.github.io/wasm-bindgen/)
- [The wasm32-unknown-unknown target](https://doc.rust-lang.org/nightly/rustc/platform-support/wasm32-unknown-unknown.html)
