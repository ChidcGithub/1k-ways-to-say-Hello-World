---
id: 0135
language: java
paradigm: procedural
output: file
platform: cli
era: modern
tags: []
notes: "Uses try-with-resources (Java 7+) with FileWriter to write greeting to file."
author: ChidcGithub
date: 2026-07-20
---

# #0135 · FileWriter Modern Hello World

## Description

A file-output Hello World that uses Java 7's try-with-resources statement to write `"Hello, World!"` to `hello.txt` via `java.io.FileWriter`. Compared to the classic `PrintStream` entry (#0134), this version is structurally cleaner: the `FileWriter` is declared in the `try` header, guaranteeing automatic `close()` (and therefore flushing) even if `write` throws. The greeting goes to the file as the primary output; `"Written to hello.txt"` is printed to `stdout` afterwards as status feedback only. Try-with-resources was added in Java 7 (2011), placing this entry in the modern era.

## Source Code

`Main.java`:

```java
import java.io.*;
public class Main { public static void main(String[] args) throws Exception { try (FileWriter fw = new FileWriter("hello.txt")) { fw.write("Hello, World!"); } System.out.println("Written to hello.txt"); } }
```

## Run

```bash
cd hello-worlds/java/0135-file-writer-modern
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
| paradigm | `procedural` | Sequential try-with-resources block followed by a status-print statement |
| output | `file` | The greeting is written to `hello.txt` via `FileWriter.write`; the `stdout` line is only status feedback |
| platform | `cli` | Runs as a command-line JVM program |
| era | `modern` | Try-with-resources was added in Java 7 (2011), within the 2001–2020 modern era |
| tags | `[]` | No special technique; the try-with-resources idiom is itself the notable feature |

## Reference

- [The try-with-resources statement (Java Language Specification)](https://docs.oracle.com/javase/specs/jls/se25/html/jls-14.html#jls-14.20.3)
- [java.io.FileWriter (Java SE API)](https://docs.oracle.com/en/java/javase/25/docs/api/java.base/java/io/FileWriter.html)
