---
id: 0083
language: cpp
paradigm: oop
output: gui
platform: desktop-gui
era: contemporary
tags: []
notes: "Mock gtkmm-style Gtk::Window with a label; contemporary C++ style with smart pointers, no real gtkmm dep."
author: ChidcGithub
date: 2026-07-20
---

# #0083 · C++ Mock gtkmm Window

## Description

A contemporary C++ Hello World that imitates the structure of a gtkmm (GTK-- C++ binding) program without depending on the actual gtkmm library. A mock `Gtk::Window` class lives inside a `Gtk` namespace and provides an `add()` method that, in real gtkmm, would attach a child widget such as a label to the window. The program uses `std::make_unique<Gtk::Window>()` to heap-allocate the window via a smart pointer, reflecting contemporary C++ (C++14+) ownership style. The mock prints `[Gtk::Window shows]: Hello, World!` to `stdout` for verification; the logical output medium is a GUI window.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <memory>
#include <string>

namespace Gtk {
    class Window {
    public:
        void add(const std::string& w) {
            std::cout << "[Gtk::Window shows]: " << w << std::endl;
        }
    };
}

int main() {
    auto win = std::make_unique<Gtk::Window>();
    win->add("Hello, World!");
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0083-gtkmm-mock-gui
g++ -std=c++20 main.cpp -o hello.exe
hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in the C++ programming language |
| paradigm | `oop` | `Gtk::Window` class inside `Gtk` namespace mirrors gtkmm OOP |
| output | `gui` | Logical target is a GUI window widget (mocked via stdout) |
| platform | `desktop-gui` | Models a desktop GUI application framework |
| era | `contemporary` | Uses `std::make_unique` smart-pointer style (C++14+ contemporary) |
| tags | `[]` | No special technique beyond mock OOP with smart pointers |

## Reference

- [gtkmm documentation](https://gtkmm.org/en/documentation.html)
- [std::unique_ptr / std::make_unique — cppreference](https://en.cppreference.com/w/cpp/memory/unique_ptr)
