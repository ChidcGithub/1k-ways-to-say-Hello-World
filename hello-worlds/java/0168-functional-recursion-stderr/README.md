---
id: 0168
language: java
paradigm: functional
output: stderr
platform: cli
era: classic
tags: []
notes: "Recursive method prints greeting char by char to stderr."
author: ChidcGithub
date: 2026-07-20
---

# #0168 · Java Functional Recursion Stderr

## Description

A recursive helper method walks the greeting string one character at a time, emitting each to `System.err`. The base case prints a newline and returns, so the greeting is built up on stderr without any loop construct — a functional, recursion-driven take on output.

## Source Code

`Main.java`:

```java
public class Main {
    static void printChars(String s, int i) {
        if (i >= s.length()) { System.err.println(); return; }
        System.err.print(s.charAt(i));
        printChars(s, i + 1);
    }
    public static void main(String[] args) { printChars("Hello, World!", 0); }
}
```

## Run

```bash
cd hello-worlds/java/0168-functional-recursion-stderr
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `functional` | Recursion replaces iteration; each step is a pure call |
| output | `stderr` | Written via `System.err` |
| platform | `cli` | Run from the terminal via `java` |
| era | `classic` | Recursive methods available since Java 1.0 (1996) |
| tags | `[]` | No special technique beyond the recursion itself |

## Reference

- `java.lang.System.err` standard error stream.
- Java 1.0 language specification (1996).
