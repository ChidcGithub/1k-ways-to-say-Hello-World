---
id: 0073
language: cpp
paradigm: oop
output: stdout
platform: cli
era: classic
tags: [one-liner]
notes: "Overloads operator<< for a Greeter object; one-liner main body."
author: ChidcGithub
date: 2026-07-20
---

# #0073 · Operator Overload One-Liner

## Description

A free-function `operator<<` overload teaches `std::ostream` how to print a `Greeter`. With that in place, the body of `main` collapses to a single statement: `std::cout << Greeter() << std::endl;`. The technique is idiomatic C++ for stream-friendly value types and keeps the call site extremely terse.

## Source Code

`main.cpp`:

```cpp
#include <iostream>

class Greeter {};

std::ostream& operator<<(std::ostream& os, const Greeter&) {
    return os << "Hello, World!";
}

int main() {
    std::cout << Greeter() << std::endl;
}
```

## Run

```bash
cd hello-worlds/cpp/0073-operator-overload-oneliner
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 (g++) |
| paradigm | `oop` | Custom class with overloaded stream operator |
| output | `stdout` | Printed via `std::cout` |
| platform | `cli` | Run from the terminal |
| era | `classic` | `operator<<` overloading predates C++98 standardization |
| tags | `[one-liner]` | Body of `main` is a single statement |
