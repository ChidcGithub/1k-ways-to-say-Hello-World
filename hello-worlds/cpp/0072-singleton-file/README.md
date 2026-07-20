---
id: 0072
language: cpp
paradigm: oop
output: file
platform: cli
era: classic
tags: []
notes: "Singleton pattern Greeter that writes 'Hello, World!' to a file."
author: ChidcGithub
date: 2026-07-20
---

# #0072 · Singleton File

## Description

A Singleton-pattern `Greeter` class controls instantiation so exactly one object exists. The single instance writes `Hello, World!` to `hello.txt`; `main` then reads the file back to verify the round trip. This shows how classic OOP design patterns can side-effect into a file rather than stdout.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <fstream>
#include <string>

class Greeter {
public:
    static Greeter& instance() {
        static Greeter g;
        return g;
    }

    void greet() {
        std::ofstream out("hello.txt");
        out << "Hello, World!" << std::endl;
    }

private:
    Greeter() {}
    Greeter(const Greeter&) = delete;
    Greeter& operator=(const Greeter&) = delete;
};

int main() {
    Greeter::instance().greet();

    std::ifstream in("hello.txt");
    std::string line;
    std::getline(in, line);
    std::cout << line << std::endl;

    std::remove("hello.txt");
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0072-singleton-file
g++ -std=c++20 main.cpp -o hello.exe && hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20 (g++) |
| paradigm | `oop` | Singleton class with private constructor and static instance accessor |
| output | `file` | Greeting is written to `hello.txt` (read back for verification) |
| platform | `cli` | Run from the terminal |
| era | `classic` | Singleton popularized in GoF (1994); falls within classic era |
| tags | `[]` | No special technique beyond the pattern |
