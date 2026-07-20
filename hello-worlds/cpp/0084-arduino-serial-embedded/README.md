---
id: 0084
language: cpp
paradigm: oop
output: serial
platform: embedded
era: modern
tags: []
notes: "Arduino-style setup()/loop() mock; writes 'Hello, World!' to a simulated Serial monitor."
author: ChidcGithub
date: 2026-07-20
---

# #0084 · C++ Arduino Serial Mock

## Description

A modern C++ Hello World that mimics the structure of an Arduino sketch on an embedded target. The global `Serial` object is an instance of a mock `Serial_` class whose `println(const char*)` method, in a real Arduino environment, would push bytes over the UART to the host's Serial Monitor. Here it prints `[Serial]: Hello, World!` to `stdout` so the result is observable on a host PC. The Arduino entry points `setup()` and `loop()` are faithfully reproduced, and `main()` simply calls `setup()` then `loop()` once — standing in for the Arduino runtime that would otherwise call `loop()` repeatedly. The logical output medium is the embedded serial line.

## Source Code

`main.cpp`:

```cpp
#include <iostream>

class Serial_ {
public:
    void println(const char* s) {
        std::cout << "[Serial]: " << s << std::endl;
    }
} Serial;

void setup() {
    Serial.println("Hello, World!");
}

void loop() {}

int main() {
    setup();
    loop();
    return 0;
}
```

## Run

```bash
cd hello-worlds/cpp/0084-arduino-serial-embedded
g++ -std=c++20 main.cpp -o hello.exe
hello.exe
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `cpp` | Written in the C++ programming language |
| paradigm | `oop` | Global `Serial` object of mock `Serial_` class with `println` method |
| output | `serial` | Logical target is a UART serial monitor (mocked via stdout) |
| platform | `embedded` | Models an Arduino-class embedded microcontroller program |
| era | `modern` | Arduino (2005+) is a modern embedded platform; C++ style here is modern |
| tags | `[]` | No special technique beyond Arduino setup/loop mock |

## Reference

- [Arduino Serial documentation](https://www.arduino.cc/reference/en/language/functions/communication/serial/)
- [Arduino sketch structure — setup() and loop()](https://www.arduino.cc/reference/en/language/structure/sketch/)
