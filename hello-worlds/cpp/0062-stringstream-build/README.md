---
id: 0062
language: cpp
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Builds the greeting in a std::ostringstream then prints; modern stream-composition style."
author: ChidcGithub
date: 2026-07-20
---

# #0062 · Stringstream Build Hello

## Description

A modern C++ Hello World that builds the greeting in a `std::ostringstream` before printing it. The string is assembled from three separate fragments — `"Hello"`, `", "`, and `"World!"` — using the stream-insertion operator, and then the composed result is extracted with `oss.str()` and written to `std::cout`. This stream-composition idiom is the canonical way to build strings from mixed-type parts in modern C++, preferred over `sprintf` or string concatenation for type safety and extensibility.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <sstream>

int main() {
    std::ostringstream oss;
    oss << "Hello" << ", " << "World!";
    std::cout << oss.str() << std::endl;
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0062-stringstream-build
g++ -std=c++20 main.cpp -o hello.exe
./hello.exe
```

Expected output: `Hello, World!`

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | C++20, using `<sstream>` and `<iostream>` from the standard library |
| paradigm | `procedural` | A sequence of statements with no classes or higher-order functions |
| output | `stdout` | The final composed string is written to `std::cout` |
| platform | `cli` | Runs as a command-line executable |
| era | `modern` | `std::ostringstream` and `oss.str()` are the modern, type-safe string-building idiom favored in post-C++11 style |
| tags | `[]` | No special technique worth indexing beyond stream composition |

## Reference

- [C++ Reference: `std::ostringstream`](https://en.cppreference.com/w/cpp/io/basic_ostringstream)
- [C++ Reference: `std::ostringstream::str`](https://en.cppreference.com/w/cpp/io/basic_ostringstream/str)
