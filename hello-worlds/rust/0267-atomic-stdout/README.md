---
id: 0267
language: rust
paradigm: concurrent
output: stdout
platform: cli
era: modern
tags: [parallel]
notes: "Uses AtomicBool to coordinate greeting from multiple threads."
author: ChidcGithub
date: 2026-07-21
---

# #0267 · Rust Atomic Stdout

## Description

A concurrent Hello World coordinating between threads with an `AtomicBool` shared through `Arc`. A worker thread prints the greeting and then sets a flag with `SeqCst` ordering; the main thread joins the worker and asserts the flag is set. This demonstrates lock-free synchronization primitives — `Arc<AtomicBool>` is the Rust idiom for sharing small mutable state across threads without a `Mutex`.

## Source Code

`main.rs`:

```rust
use std::sync::atomic::{AtomicBool, Ordering};
use std::sync::Arc;
use std::thread;
fn main() {
    let done = Arc::new(AtomicBool::new(false));
    let done2 = Arc::clone(&done);
    let handle = thread::spawn(move || {
        println!("Hello, World!");
        done2.store(true, Ordering::SeqCst);
    });
    handle.join().unwrap();
    assert!(done.load(Ordering::SeqCst));
}
```

## Run

```bash
cd hello-worlds/rust/0267-atomic-stdout
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `concurrent` | Coordinates threads via atomic operations |
| output | `stdout` | `println!` writes to standard output |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::sync::atomic` stable since Rust 1.0 (2015) |
| tags | `[parallel]` | Greeting produced off the main thread |

## Reference

- [The Rust Programming Language — Shared-State Concurrency](https://doc.rust-lang.org/book/ch16-03-shared-state.html)
- [std::sync::atomic](https://doc.rust-lang.org/std/sync/atomic/index.html)
