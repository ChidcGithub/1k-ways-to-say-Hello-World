---
id: 0130
language: java
paradigm: procedural
output: stdout
platform: cli
era: modern
tags: []
notes: "Uses System.out.printf with format specifiers (modern Java 5+)."
author: ChidcGithub
date: 2026-07-20
---

# #0130 · printf Format Hello World

## Description

A Hello World that uses `System.out.printf` with a format specifier instead of the canonical `println`. The format string `"%s%n"` carries one `%s` placeholder filled positionally by the literal `"Hello, World!"` and a `%n` line separator that emits the platform-specific newline (CRLF on Windows, LF on Unix). `printf` was added to `java.io.PrintStream` in Java 5 (2004) to support C-style format strings backed by `java.util.Formatter`, so this entry belongs to the modern era — it is not the JDK 1.0 form used by entry #0128.

## Source Code

`Main.java`:

```java
public class Main { public static void main(String[] args) { System.out.printf("%s%n", "Hello, World!"); } }
```

## Run

```bash
cd hello-worlds/java/0130-printf-format
javac Main.java
java Main
```

Expected output: `Hello, World!`

> Antivirus note: the user's environment deletes generated `.exe` files and may flag `.class` files, so syntax-only verification (`javac -Xlint -d NUL Main.java`) is the supported verification path on this machine; `java Main` is intentionally not executed.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java source compiled with `javac` (JDK 25) |
| paradigm | `procedural` | A single sequential call to `System.out.printf` inside a static `main` |
| output | `stdout` | Writes via `System.out.printf`, which routes to standard output |
| platform | `cli` | Runs as a command-line JVM program |
| era | `modern` | `printf` on `PrintStream` was added in Java 5 (2004), within the 2001–2020 modern era |
| tags | `[]` | No special technique; the `printf` idiom is itself the notable feature |

## Reference

- [java.io.PrintStream.printf (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/io/PrintStream.html#printf(java.lang.String,java.lang.Object...))
- [java.util.Formatter syntax](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/util/Formatter.html#syntax)
