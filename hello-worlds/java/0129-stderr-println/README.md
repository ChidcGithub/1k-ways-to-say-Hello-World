---
id: 0129
language: java
paradigm: procedural
output: stderr
platform: cli
era: classic
tags: []
notes: "Writes to stderr using System.err.println."
author: ChidcGithub
date: 2026-07-20
---

# #0129 · stderr println Hello World

## Description

A Hello World that writes the greeting to the standard error stream using `System.err.println`. Structurally it is the mirror image of the canonical `System.out.println` entry (#0128): same `public class Main`, same single-statement `main`, same literal `"Hello, World!"` — only the destination stream differs. On most terminals the line still appears on the screen, but redirected separately from `stdout`, which is the defining characteristic of an `output=stderr` entry.

## Source Code

`Main.java`:

```java
public class Main { public static void main(String[] args) { System.err.println("Hello, World!"); } }
```

## Run

```bash
cd hello-worlds/java/0129-stderr-println
javac Main.java
java Main

# To confirm stderr routing:
java Main 2>stderr.txt 1>/dev/null
```

Expected output (on stderr): `Hello, World!`

> Antivirus note: the user's environment deletes generated `.exe` files and may flag `.class` files, so syntax-only verification (`javac -Xlint -d NUL Main.java`) is the supported verification path on this machine; `java Main` is intentionally not executed.

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java source compiled with `javac` (JDK 25) |
| paradigm | `procedural` | A single sequential call to `System.err.println` inside a static `main` |
| output | `stderr` | Writes via `System.err.println`, which routes to file descriptor 2 |
| platform | `cli` | Runs as a command-line JVM program |
| era | `classic` | `System.err` has been part of `java.lang.System` since Java 1.0 (1996) |
| tags | `[]` | No special technique; the stderr mirror of the canonical form |

## Reference

- [java.lang.System.err (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/lang/System.html#err)
- [java.io.PrintStream.println (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/io/PrintStream.html#println(java.lang.String))
