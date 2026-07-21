---
id: 0276
language: rust
paradigm: functional
output: file
platform: cli
era: contemporary
tags: []
notes: "Async/future: a hand-rolled executor polls a Future that writes the greeting to a file."
author: ChidcGithub
date: 2026-07-21
---

# #0276 · Rust Async Future (file)

## Description

A contemporary Rust Hello World that uses `async`/`Future` semantics to write the greeting to a file. A custom `FileWrite` future implements the `Future` trait, and a minimal hand-rolled executor (a `noop_raw_waker` plus a single `poll` call) drives it to completion. This demonstrates Rust's zero-cost async model without depending on an external runtime like `tokio` or `async-std`, keeping the entry std-only for verification. The future returns `Poll::Ready(())` on the first poll, writing `Hello, World!` to `hello.txt` via `File::create` and `write_all`. Futures are first-class values composed functionally, hence the functional paradigm tag.

## Source Code

`main.rs`:

```rust
use std::future::Future;
use std::io::Write;
use std::fs;
use std::pin::Pin;
use std::task::{Context, Poll, RawWaker, RawWakerVTable, Waker};

struct FileWrite;
impl Future for FileWrite {
    type Output = ();
    fn poll(self: Pin<&mut Self>, _cx: &mut Context<'_>) -> Poll<Self::Output> {
        let mut f = fs::File::create("hello.txt").expect("create failed");
        f.write_all(b"Hello, World!\n").expect("write failed");
        Poll::Ready(())
    }
}

fn noop_raw_waker() -> RawWaker {
    fn noop_clone(_: *const ()) -> RawWaker { noop_raw_waker() }
    fn noop(_: *const ()) {}
    static VTABLE: RawWakerVTable = RawWakerVTable::new(noop_clone, noop, noop, noop);
    RawWaker::new(std::ptr::null(), &VTABLE)
}

fn main() {
    let mut fut = Box::pin(FileWrite);
    let raw_waker = noop_raw_waker();
    let waker = unsafe { Waker::from_raw(raw_waker) };
    let mut cx = Context::from_waker(&waker);
    let _ = fut.as_mut().poll(&mut cx);
}
```

## Run

```bash
cd hello-worlds/rust/0276-async-file
rustc main.rs -o hello && ./hello
cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `functional` | Uses first-class `Future` values driven by an executor |
| output | `file` | Greeting written to `hello.txt` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | `Future`/`Pin`/`RawWaker` stabilized in Rust 1.36+ |
| tags | `[]` | No additional tags; async-future output is the distinguishing trait |

## Reference

- [std::future::Future — Rust std](https://doc.rust-lang.org/std/future/trait.Future.html)
- [std::task::RawWakerVTable — Rust std](https://doc.rust-lang.org/std/task/struct.RawWakerVTable.html)
