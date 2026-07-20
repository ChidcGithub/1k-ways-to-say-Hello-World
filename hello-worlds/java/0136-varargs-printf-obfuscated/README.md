---
id: 0136
language: java
paradigm: procedural
output: stdout
platform: cli
era: classic
tags: [obfuscated]
notes: "Uses varargs with a custom method that obscures the greeting behind character codes."
author: ChidcGithub
date: 2026-07-20
---

# #0136 · Varargs Char Codes Obfuscated Hello World

## Description

An obfuscated Hello World that hides the greeting behind integer character codes. A custom `print(char... chars)` helper accepts a varargs list of `char` values (Java 5+), and `main` calls it with thirteen `(char)NN` casts — `72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33` — which decode to the ASCII bytes of `Hello, World!`. The helper iterates the array with an enhanced-for loop and emits each character to `System.out.print`, then a trailing `System.out.println()` supplies the newline. The reader scanning the source sees only a list of numbers; the greeting only materializes at runtime. This is the Java counterpart of the C++ ASCII-codes obfuscation entry (#0119), with the Java-specific twist of using varargs + `char...` rather than an `int[]`.

## Source Code

`Main.java`:

```java
public class Main {
    static void print(char... chars) { for (char c : chars) System.out.print(c); System.out.println(); }
    public static void main(String[] args) {
        print((char)72,(char)101,(char)108,(char)108,(char)111,(char)44,(char)32,(char)87,(char)111,(char)114,(char)108,(char)100,(char)33);
    }
}
```

## Run

```bash
cd hello-worlds/java/0136-varargs-printf-obfuscated
javac Main.java
java Main
```

Expected output: `Hello, World!`

> Antivirus note: the user's environment deletes generated `.exe` files and may flag `.class` files, so syntax-only verification (`javac -Xlint -d NUL Main.java`) is the supported verification path on this machine; `java Main` is intentionally not executed.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java source compiled with `javac` (JDK 25) |
| paradigm | `procedural` | A static helper plus a single sequential call in `main`; no classes/objects beyond the wrapper |
| output | `stdout` | Each character is written via `System.out.print`, with a trailing `System.out.println()` for the newline |
| platform | `cli` | Runs as a command-line JVM program |
| era | `classic` | The enhanced-for loop and `char...` varargs used here both date to Java 5 (2004); the obfuscation style itself descends from the classic ASCII-table tradition |
| tags | `[obfuscated]` | The greeting is hidden as `(char)NN` integer literals; no readable string literal in source |

## Reference

- [Arbitrary Number of Arguments (Oracle Java Tutorials)](https://docs.oracle.com/javase/tutorial/java/javaOO/arguments.html#varargs)
- [ASCII table](https://en.wikipedia.org/wiki/ASCII)
