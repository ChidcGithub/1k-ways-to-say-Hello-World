---
id: 0265
language: rust
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "Spawns a thread that prints the greeting; joins before exit."
author: ChidcGithub
date: 2026-07-21
---

# #0265 · Rust Thread Spawn

## Description

A concurrent Hello World that runs the greeting on a separate OS thread. `std::thread::spawn` creates the worker, and `handle.join().unwrap()` blocks the main thread until the worker has finished printing. This showcases Rust's `std::thread` API and the discipline of explicitly joining child threads — a foundation for safer concurrency built on ownership rather than shared mutable state.

## Source Code

`main.rs`:

```rust
use std::thread;
fn main() {
    let handle = thread::spawn(|| { println!("Hello, World!"); });
    handle.join().unwrap();
}
```

## Run

```bash
cd hello-worlds/rust/0265-thread-spawn
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `concurrent` | Spawns and joins an OS thread |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::thread` stable since Rust 1.0 (2015) |
| tags | `[parallel]` | Greeting produced off the main thread |

## Reference

- [The Rust Programming Language — Threads](https://doc.rust-lang.org/book/ch16-01-threads.html)
- [std::thread::spawn](https://doc.rust-lang.org/std/thread/fn.spawn.html)
