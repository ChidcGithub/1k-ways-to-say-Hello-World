---
id: 0080
language: cpp
paradigm: oop
output: file
platform: cli
era: modern
tags: []
notes: "RAII file writer class: constructor opens file, destructor closes; modern resource management."
author: ChidcGithub
date: 2026-07-20
---

# #0080 · C++ RAII File Writer

## Description

A modern C++ Hello World that showcases RAII (Resource Acquisition Is Initialization) for file I/O. The `FileWriter` class opens a `std::ofstream` in its constructor and relies on the destructor (which closes the stream automatically when the object goes out of scope) to release the resource. The greeting "Hello, World!" is written to `hello.txt` inside an inner scope; once that scope ends, the file is closed by RAII. The program then reopens the file with `std::ifstream` and echoes its contents to `stdout` to verify the round trip. This contrasts with canonical `cout` entries by making a file the primary output medium and demonstrating modern C++ resource management.

## Source Code

`main.cpp`:

```cpp
#include <fstream>
#include <string>
#include <iostream>

class FileWriter {
    std::ofstream f;
public:
    explicit FileWriter(const std::string& path) : f(path) {}
    void write(const std::string& s) { f << s; }
    ~FileWriter() {}
};

int main() {
    {
        FileWriter w("hello.txt");
        w.write("Hello, World!");
    }
    std::ifstream in("hello.txt");
    std::string line;
    if (std::getline(in, line)) {
        std::cout << line << std::endl;
    }
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0080-raii-file-modern
g++ -std=c++20 main.cpp -o hello.exe
hello.exe
# Remove the generated file after verifying
del hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in the C++ programming language |
| paradigm | `oop` | `FileWriter` class encapsulates file resource with ctor/dtor |
| output | `file` | Greeting is written to `hello.txt` on disk |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | Modern C++ RAII idiom with `std::ofstream`, `std::string` |
| tags | `[]` | No special technique beyond RAII file management |

## Reference

- [RAII — cppreference](https://en.cppreference.com/w/cpp/language/raii)
- [std::ofstream — cppreference](https://en.cppreference.com/w/cpp/io/basic_ofstream)
