---
id: 0244
language: rust
paradigm: procedural
output: network
platform: cli
era: modern
tags: []
notes: "UDP socket sends greeting datagram to localhost:8080."
author: ChidcGithub
date: 2026-07-21
---

# #0244 · Network UDP

## Description

A UDP client that sends `Hello, World!` as a datagram to `127.0.0.1:8080`. The program binds an ephemeral local socket with `UdpSocket::bind("127.0.0.1:0")` and fires off the greeting bytes via `send_to`. Unlike entry 0243 which uses connection-oriented TCP, UDP is fire-and-forget: no handshake, no error if no server is listening. A `println!` confirms dispatch on stdout, but the actual greeting payload travels over the network socket.

## Source Code

`main.rs`:

```rust
use std::net::UdpSocket;
fn main() {
    let socket = UdpSocket::bind("127.0.0.1:0").unwrap();
    let _ = socket.send_to(b"Hello, World!\n", "127.0.0.1:8080");
    println!("Sent via UDP");
}
```

## Run

```bash
cd hello-worlds/rust/0244-network-udp
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Step-by-step procedural flow |
| output | `network` | Greeting sent as a UDP datagram |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Rust 1.0 (2015), modern era |
| tags | `[]` | No special tag |

## Reference

- [std::net::UdpSocket](https://doc.rust-lang.org/std/net/struct.UdpSocket.html)
