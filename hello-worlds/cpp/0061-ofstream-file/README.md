---
id: 0061
language: cpp
paradigm: procedural
output: file
platform: cli
era: classic
tags: []
notes: "Writes 'Hello, World!' to hello.txt using std::ofstream, reads back to confirm."
author: ChidcGithub
date: 2026-07-20
---

# #0061 · Ofstream File Hello

## Description

A Hello World whose primary output medium is a file. The program opens `hello.txt` with `std::ofstream`, writes the string `Hello, World!` to it, and closes the stream by ending the inner scope. It then reopens the file with `std::ifstream`, reads the contents back with `std::getline`, and prints them to `std::cout` for verification. Unlike the canonical `std::cout` entry, the durable destination of the greeting is the filesystem; the stdout print is only a confirmation that the write succeeded.

## Source Code

`main.cpp`:

```cpp
#include <fstream>
#include <iostream>
#include <string>

int main() {
    {
        std::ofstream out("hello.txt");
        out << "Hello, World!";
    }
    std::ifstream in("hello.txt");
    std::string line;
    std::getline(in, line);
    std::cout << line << std::endl;
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0061-ofstream-file
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

After running, a file `hello.txt` will appear next to `main.cpp` containing `Hello, World!`, and the same string will be printed to stdout.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using `<fstream>` and `<string>` from the standard library |
| paradigm | `procedural` | A sequence of statements with no classes or higher-order functions |
| output | `file` | The greeting is written to `hello.txt` on disk; stdout is only a verification echo |
| platform | `cli` | Runs as a command-line executable |
| era | `classic` | `std::ofstream` has been part of the standard iostreams library since the early AT&T C++ releases (1985+) |
| tags | `[]` | No special technique worth indexing — straightforward file I/O |

## Reference

- [C++ Reference: `std::ofstream`](https://en.cppreference.com/w/cpp/io/basic_ofstream)
- [C++ Reference: `std::ifstream`](https://en.cppreference.com/w/cpp/io/basic_ifstream)
