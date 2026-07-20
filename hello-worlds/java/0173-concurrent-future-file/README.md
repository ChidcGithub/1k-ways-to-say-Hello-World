---
id: 0173
language: java
paradigm: concurrent
output: file
platform: cli
era: modern
tags: [parallel]
notes: "CompletableFuture writes greeting to file asynchronously."
author: ChidcGithub
date: 2026-07-20
---

# #0173 · Java Concurrent Future File

## Description

A `CompletableFuture.runAsync` schedules the asynchronous write of the greeting to `hello.txt` via a `FileWriter`. The main thread blocks on `join()` to confirm completion, then prints a confirmation message — a modern async-file-write variant of the greeting.

## Source Code

`Main.java`:

```java
import java.util.concurrent.*;
import java.io.*;
public class Main {
    public static void main(String[] args) throws Exception {
        CompletableFuture<Void> cf = CompletableFuture.runAsync(() -> {
            try (FileWriter fw = new FileWriter("hello.txt")) { fw.write("Hello, World!"); }
            catch (Exception e) { throw new RuntimeException(e); }
        });
        cf.join();
        System.out.println("Written to hello.txt");
    }
}
```

## Run

```bash
cd hello-worlds/java/0173-concurrent-future-file
javac Main.java
java Main
```

## Categorization

| Dimension | Value | Reason |
|-----------|-------|--------|
| language | `java` | Java (JDK) |
| paradigm | `concurrent` | Uses `CompletableFuture.runAsync` for async I/O |
| output | `file` | Greeting is written to `hello.txt` |
| platform | `cli` | Run from the terminal via `java` |
| era | `modern` | `CompletableFuture` since Java 8 (2014) |
| tags | `[parallel]` | File write happens off the main thread |

## Reference

- `java.util.concurrent.CompletableFuture.runAsync`.
- `java.io.FileWriter` for character file output.
