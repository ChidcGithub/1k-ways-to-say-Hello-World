---
id: 0243
language: rust
paradigm: procedural
output: network
platform: cli
era: modern
tags: []
notes: "TCP client using std::net::TcpStream; connects to localhost:8080 and sends greeting."
author: ChidcGithub
date: 2026-07-21
---

# #0243 · Network TCP Stdout

## Description

A TCP client that attempts to send `Hello, World!` to a server at `127.0.0.1:8080` using `std::net::TcpStream` and the `Write` trait. On a successful connection it writes the greeting bytes with `write_all` and prints a confirmation. If no server is listening, the `Err` arm prints the greeting to stdout as a fallback so the program still produces visible output. The logical output is network-oriented: the greeting is dispatched over a TCP socket, with stdout serving only as a status channel or fallback. This contrasts with the stdout-only entries by demonstrating Rust's standard-library networking primitives.

## Source Code

`main.rs`:

```rust
use std::net::TcpStream;
use std::io::Write;
fn main() {
    match TcpStream::connect("127.0.0.1:8080") {
        Ok(mut stream) => { let _ = stream.write_all(b"Hello, World!\n"); println!("Sent to server"); }
        Err(_) => { println!("Server not available; greeting: Hello, World!"); }
    }
}
```

## Run

```bash
cd hello-worlds/rust/0243-network-tcp-stdout
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Step-by-step procedural flow with match |
| output | `network` | Primary output is a TCP socket write |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [std::net::TcpStream](https://doc.rust-lang.org/std/net/struct.TcpStream.html)
- [std::io::Write](https://doc.rust-lang.org/std/io/trait.Write.html)
