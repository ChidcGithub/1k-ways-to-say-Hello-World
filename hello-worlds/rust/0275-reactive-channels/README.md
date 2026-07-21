---
id: 0275
language: rust
paradigm: reactive
output: stdout
platform: cli
era: contemporary
tags: []
notes: "Reactive: producer thread sends greeting through an mpsc channel; main thread receives and prints."
author: ChidcGithub
date: 2026-07-21
---

# #0275 · Rust Reactive Channels

## Description

A reactive Rust Hello World that uses a multi-producer single-consumer (mpsc) channel to pass the greeting from a producer thread to the consumer (main) thread. A spawned thread sends `"Hello, World!"` through `tx`, the `join` call blocks until the producer finishes, and the main thread receives the message via `rx.recv()` and prints it. This models a reactive event-driven pipeline: the greeting is an event produced asynchronously and consumed reactively on the receiver side. Channels are a first-class concurrency primitive in Rust's standard library, and this entry showcases the pattern without any external framework.

## Source Code

`main.rs`:

```rust
use std::sync::mpsc;
use std::thread;

fn main() {
    let (tx, rx) = mpsc::channel();
    thread::spawn(move || {
        tx.send("Hello, World!").unwrap();
    })
    .join()
    .unwrap();
    if let Ok(msg) = rx.recv() {
        println!("{}", msg);
    }
}
```

## Run

```bash
cd hello-worlds/rust/0275-reactive-channels
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `reactive` | Event-driven via channel send/receive between threads |
| output | `stdout` | Greeting printed via `println!` after reception |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | mpsc channels refined through Rust 2018+ editions |
| tags | `[]` | No additional tags; reactive paradigm is the distinguishing trait |

## Reference

- [std::sync::mpsc — Rust std](https://doc.rust-lang.org/std/sync/mpsc/index.html)
- [std::thread — Rust std](https://doc.rust-lang.org/std/thread/index.html)
