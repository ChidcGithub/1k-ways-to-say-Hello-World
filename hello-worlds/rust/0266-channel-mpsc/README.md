---
id: 0266
language: rust
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "MPSC channel: spawned thread sends greeting, main thread receives and prints."
author: ChidcGithub
date: 2026-07-21
---

# #0266 · Rust MPSC Channel

## Description

A concurrent Hello World that hands the greeting between threads via an MPSC (multi-producer, single-consumer) channel. A worker thread sends `"Hello, World!"` through `tx`, and the main thread blocks on `rx.recv()` to receive and print it. This is the canonical Rust pattern for thread-to-thread message passing, preferred over shared state for its ownership discipline and deadlock avoidance.

## Source Code

`main.rs`:

```rust
use std::sync::mpsc;
use std::thread;
fn main() {
    let (tx, rx) = mpsc::channel();
    thread::spawn(move || { tx.send("Hello, World!").unwrap(); });
    println!("{}", rx.recv().unwrap());
}
```

## Run

```bash
cd hello-worlds/rust/0266-channel-mpsc
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `concurrent` | Uses an MPSC channel for thread communication |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::sync::mpsc` stable since Rust 1.0 (2015) |
| tags | `[parallel]` | Greeting produced off the main thread |

## Reference

- [The Rust Programming Language — Message Passing](https://doc.rust-lang.org/book/ch16-02-message-passing.html)
- [std::sync::mpsc](https://doc.rust-lang.org/std/sync/mpsc/index.html)
