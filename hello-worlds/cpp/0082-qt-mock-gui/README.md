---
id: 0082
language: cpp
paradigm: oop
output: gui
platform: desktop-gui
era: modern
tags: []
notes: "Mock Qt-style widget: simulates a QLabel showing 'Hello, World!' without real Qt dependency."
author: ChidcGithub
date: 2026-07-20
---

# #0082 · C++ Mock Qt QLabel

## Description

A modern C++ Hello World that mimics the structure of a Qt GUI application without requiring the actual Qt toolkit. The mock `QLabel` class holds a text string and exposes a `show()` method that, in a real Qt program, would render the text on screen; here it prints `[GUI QLabel]: Hello, World!` to `stdout` so the result is observable. A mock `QApplication` provides the conventional `(int, char**)` constructor and an `exec()` method standing in for Qt's event loop. The logical output is a GUI label rendered in a desktop window; the stdout print is purely a verification artifact.

## Source Code

`main.cpp`:

```cpp
#include <iostream>
#include <string>

class QLabel {
    std::string text;
public:
    explicit QLabel(const std::string& t) : text(t) {}
    void show() { std::cout << "[GUI QLabel]: " << text << std::endl; }
};

class QApplication {
public:
    QApplication(int, char**) {}
    void exec() { /* mock event loop */ }
};

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    QLabel label("Hello, World!");
    label.show();
    app.exec();
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0082-qt-mock-gui
g++ -std=c++20 main.cpp -o hello.exe
hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in the C++ programming language |
| paradigm | `oop` | Mock `QLabel` and `QApplication` classes mirror Qt's OOP design |
| output | `gui` | Logical target is a GUI label widget (mocked via stdout) |
| platform | `desktop-gui` | Models a desktop GUI application framework |
| era | `modern` | Modern C++ style; Qt itself is a modern (1995+) toolkit |
| tags | `[]` | No special technique beyond mock OOP scaffolding |

## Reference

- [Qt QLabel documentation](https://doc.qt.io/qt-6/qlabel.html)
- [QApplication documentation](https://doc.qt.io/qt-6/qapplication.html)
