---
id: 0081
language: cpp
paradigm: oop
output: network
platform: cli
era: classic
tags: []
notes: "friend operator<< sends the greeting to a mock network socket (simulated via a NetworkStream class writing to a buffer, printed at end)."
author: ChidcGithub
date: 2026-07-20
---

# #0081 · C++ Friend operator<< to Mock Network

## Description

A classic-era C++ OOP Hello World that simulates sending the greeting over a network socket. The `NetworkStream` class encapsulates a private buffer that represents a mock network socket; a `friend` `operator<<` is overloaded to stream `const char*` data into that buffer just like `std::ostream`. After the greeting is inserted, `send()` flushes the buffer to `stdout` to make the result observable. The logical output medium is a network socket (modelled by the buffer), and the use of `friend` to grant an external operator access to private state is a hallmark of classic C++ OOP design from the 1990s.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <string>

class NetworkStream {
    std::string buf;
public:
    void send() { std::cout << buf; }
    friend NetworkStream& operator<<(NetworkStream& n, const char* s) {
        n.buf += s;
        return n;
    }
};

int main() {
    NetworkStream ns;
    ns << "Hello, World!";
    ns.send();
    std::cout << std::endl;
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0081-friend-operator-network
g++ -std=c++20 main.cpp -o hello.exe
hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in the C++ programming language |
| paradigm | `oop` | `NetworkStream` class with `friend` operator overload |
| output | `network` | Logical target is a mock network socket (buffer flushed at end) |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | Uses `friend` operator overloading, a classic C++ OOP idiom |
| tags | `[]` | No special technique beyond friend-operator OOP design |

## Reference

- [friend — cppreference](https://en.cppreference.com/w/cpp/language/friend)
- [operator overloading — cppreference](https://en.cppreference.com/w/cpp/language/operators)
