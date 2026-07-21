---
id: 0247
language: rust
paradigm: procedural
output: stdout
platform: cloud
era: contemporary
tags: []
notes: "Simulates an AWS Lambda handler in Rust; main verifies locally."
author: ChidcGithub
date: 2026-07-21
---

# #0247 · Cloud Lambda Mock

## Description

A simulated AWS Lambda handler in Rust. The `handler` function takes an event string (ignored here) and returns the greeting `Hello, World!` as a `String` — mirroring the signature of a real Lambda function invoked through the `lambda_runtime` crate. `main` calls the handler with a test event and prints the response so the logic can be verified locally without deploying to the cloud. This entry represents the contemporary serverless/cloud platform: in production, the Lambda runtime would invoke `handler` directly and return its output to the caller.

## Source Code

`main.rs`:

```rust
fn handler(_event: &str) -> String { String::from("Hello, World!") }
fn main() { println!("{}", handler("test")); }
```

## Run

```bash
cd hello-worlds/rust/0247-cloud-lambda-mock
rustc main.rs -o hello && ./hello
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `rust` | Written in the Rust programming language |
| paradigm | `procedural` | Procedural handler function |
| output | `stdout` | `println!` writes handler result to stdout |
| platform | `cloud` | Targets serverless cloud (AWS Lambda) |
| era | `contemporary` | Serverless Rust is contemporary (post-2018) |
| tags | `[]` | No special tag |

## Reference

- [AWS Lambda Runtime for Rust](https://github.com/awslabs/aws-lambda-rust-runtime)
- [AWS Lambda — Rust functions](https://docs.aws.amazon.com/lambda/latest/dg/lambda-rust.html)
