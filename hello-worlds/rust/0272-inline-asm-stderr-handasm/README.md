---
id: 0272
language: rust
paradigm: procedural
output: stderr
platform: cli
era: modern
tags: [hand-assembled]
notes: "Hand-assembled: invokes the raw POSIX write() syscall wrapper to write to stderr (fd 2)."
author: ChidcGithub
date: 2026-07-21
---

# #0272 · Rust write syscall stderr (hand-assembled)

## Description

A hand-assembled flavor Rust Hello World that targets fd 2 (stderr) via the raw POSIX `write()` syscall wrapper. The `extern "C"` block declares `write` with its classic signature `write(fd, buf, count)`, and an `unsafe` block invokes it with `fd=2` (stderr), a pointer to the greeting, and the exact byte count. This mirrors the C `0184-write-syscall-handasm` entry: skip the formatting layer, load a buffer pointer and a length, and trap into the kernel via the libc wrapper. The source compiles cleanly with `--crate-type lib` because linking against `libc` is deferred to the final binary stage.

## Source Code

`main.rs`:

```rust
extern "C" {
    fn write(fd: i32, buf: *const u8, count: usize) -> isize;
}

fn main() {
    let msg = b"Hello, World!\n";
    unsafe {
        write(2, msg.as_ptr(), msg.len());
    }
}
```

## Run

```bash
cd hello-worlds/rust/0272-inline-asm-stderr-handasm
rustc main.rs -o hello && ./hello 2>&1
```

> Note: redirect `2>&1` so stderr is visible alongside stdout in the same shell.
> Note: links against `libc` at the final binary stage; `--crate-type lib` verification skips linking.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Single syscall wrapper call in `main` |
| output | `stderr` | Written to file descriptor 2 (stderr) via `write` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust FFI stabilized in 1.0 (2015) |
| tags | `[hand-assembled]` | Direct syscall wrapper, no formatting layer |

## Reference

- [POSIX.1-2008 — write](https://pubs.opengroup.org/onlinepubs/9699919799/functions/write.html)
- [Rust FFI — The Rustonomicon](https://doc.rust-lang.org/nomicon/ffi.html)
