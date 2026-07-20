---
id: 0121
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: contemporary
tags: [obfuscated]
notes: "Decodes a base64-encoded string at runtime; output the greeting."
author: ChidcGithub
date: 2026-07-20
---

# #0121 · Obfuscated Base64 Hello World

## Description

An obfuscated Hello World that hides the greeting inside a base64-encoded literal (`SGVsbG8sIFdvcmxkIQ==`) and decodes it at runtime with a hand-rolled base64 decoder. No standard library decoder is used — the bit-packing loop accumulates 6-bit indices into a sliding `val`/`bits` accumulator and emits one byte each time 8 bits are available. Padding (`=`) terminates the loop. The decoded output `Hello, World!` is printed to `stdout`. The literal greeting never appears verbatim in the source, which is the hallmark of an obfuscated entry.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <string>
int main(){ std::string b64="SGVsbG8sIFdvcmxkIQ=="; std::string out; int val=0,bits=0; for(char c:b64){ if(c=='=') break; int v=(c>='A'&&c<='Z')?c-'A':(c>='a'&&c<='z')?c-'a'+26:(c>='0'&&c<='9')?c-'0'+52:0; val=(val<<6)|v; bits+=6; if(bits>=8){ bits-=8; out+=(char)((val>>bits)&0xFF);} } std::cout<<out<<std::endl; }
```

## Run

```bash
cd hello-worlds/cpp/0121-obfuscated-base64
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

> Antivirus note: the user's environment deletes generated `.exe` files, so syntax-only verification (`g++ -std=c++20 -fsyntax-only main.cpp`) is the supported verification path on this machine.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++ source compiled with `g++ -std=c++20` |
| paradigm | `procedural` | Single `main` with an imperative decode loop |
| output | `stdout` | Writes via `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `contemporary` | Range-for and `auto`-style idioms in modern C++ |
| tags | `[obfuscated]` | Greeting hidden inside a base64 literal and decoded at runtime |

## Reference

- [RFC 4648 — The Base16, Base32, and Base64 Data Encodings](https://datatracker.ietf.org/doc/html/rfc4648)
- [cppreference — std::string](https://en.cppreference.com/w/cpp/string/basic_string)
