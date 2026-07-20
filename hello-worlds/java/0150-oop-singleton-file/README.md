---
id: 0150
language: java
paradigm: oop
output: file
platform: cli
era: classic
tags: []
notes: "Singleton Greeter writes greeting to file."
author: ChidcGithub
date: 2026-07-20
---

# #0150 · Java OOP Singleton File

## Description

A lazily-initialized Singleton `Greeter` writes the canonical greeting to `hello.txt` via `PrintWriter`/`FileWriter`. The singleton pattern is textbook OOP design; the file output demonstrates classic Java I/O using the `java.io` package.

## Source Code

`Main.java`:

```java
import java.io.*;
public class Main {
    static class Greeter {
        private static Greeter instance;
        private Greeter() {}
        public static Greeter getInstance() { if (instance == null) instance = new Greeter(); return instance; }
        public void greet() throws Exception { PrintWriter pw = new PrintWriter(new FileWriter("hello.txt")); pw.println("Hello, World!"); pw.close(); System.out.println("Written to hello.txt"); }
    }
    public static void main(String[] args) throws Exception { Greeter.getInstance().greet(); }
}
```

## Run

```bash
cd hello-worlds/java/0150-oop-singleton-file
javac Main.java
java Main
cat hello.txt
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `oop` | Singleton pattern; private constructor + static accessor |
| output | `file` | Writes `hello.txt`; stdout only confirms |
| platform | `cli` | Run from the terminal via `java` |
| era | `classic` | Singleton + `java.io` is Java 1.1-era design (1997) |
| tags | `[]` | Standard pattern; no special technique beyond the singleton |

## Reference

- Gamma, Helm, Johnson, Vlissides: *Design Patterns* (Singleton).
- `java.io.PrintWriter` / `FileWriter` (Java SE).
