---
id: 0134
language: java
paradigm: procedural
output: file
platform: cli
era: classic
tags: []
notes: "Writes 'Hello, World!' to hello.txt using java.io.PrintStream wrapped around a FileOutputStream."
author: ChidcGithub
date: 2026-07-20
---

# #0134 · File PrintStream Hello World

## Description

A file-output Hello World that writes the greeting to `hello.txt` using `java.io.PrintStream` wrapped around a `java.io.FileOutputStream`. The same `PrintStream.println` API used by `System.out` (#0128) is reused here against a fresh stream pointed at a file, so the greeting arrives in `hello.txt` rather than on the terminal. After the write, the program also prints `"Written to hello.txt"` to `stdout` so a CLI run produces visible feedback — but the primary output is the file, hence `output=file`. Both `PrintStream` and `FileOutputStream` have been in the JDK since 1.0 (1996), placing this entry in the classic era.

## Source Code

`Main.java`:

```java
import java.io.*;
public class Main { public static void main(String[] args) throws Exception { PrintStream ps = new PrintStream(new FileOutputStream("hello.txt")); ps.println("Hello, World!"); ps.close(); System.out.println("Written to hello.txt"); } }
```

## Run

```bash
cd hello-worlds/java/0134-file-printstream
javac Main.java
java Main
# 'Hello, World!' now appears in hello.txt
```

Expected content of `hello.txt`: `Hello, World!`

> Antivirus note: the user's environment deletes generated `.exe` files and may flag `.class` files, so syntax-only verification (`javac -Xlint -d NUL Main.java`) is the supported verification path on this machine; `java Main` is intentionally not executed (the file write is part of runtime behavior, not compilation).

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java source compiled with `javac` (JDK 25) |
| paradigm | `procedural` | Sequential open / write / close / status-print statements inside `main` |
| output | `file` | The greeting is written to `hello.txt` via `PrintStream.println`; the `stdout` line is only status feedback |
| platform | `cli` | Runs as a command-line JVM program |
| era | `classic` | `PrintStream` and `FileOutputStream` have been in the JDK since Java 1.0 (1996) |
| tags | `[]` | No special technique; the manual open/close idiom is the notable feature |

## Reference

- [java.io.PrintStream (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/io/PrintStream.html)
- [java.io.FileOutputStream (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/io/FileOutputStream.html)
